/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC270
// Address: 0x080BC270

//----- (080BC270) --------------------------------------------------------
int __cdecl sub_80BC270(_BYTE *a1, int a2, unsigned int a3, time_t a4, char a5)
{
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  unsigned int v8; // ebp
  int v10; // eax
  _BYTE *v11; // [esp+0h] [ebp-50h]
  struct tm tp; // [esp+4h] [ebp-4Ch] BYREF
  unsigned int v13; // [esp+30h] [ebp-20h]

  v13 = __readgsdword(0x14u);
  if ( (a5 & 1) != 0 )
    v5 = sub_80D04A0(&tp, a4);
  else
    v5 = sub_80D0440(&tp, a4);
  if ( (_BYTE)v5 )
  {
    v6 = sub_80D3B60(a1, a2, "%04u-%02u-%02u%s%02u:%02u:%02u", tp.tm_year + 1900);
    v7 = &a1[v6];
    v8 = a2 - v6;
    if ( (a5 & 4) != 0 )
    {
      v11 = &a1[v6];
      v10 = sub_80D3B60(v7, v8, ".%03u", a3 / 0x3E8);
      v8 -= v10;
      v7 = &v11[v10];
      if ( (~a5 & 3) != 0 )
        goto LABEL_8;
    }
    else if ( (~a5 & 3) != 0 )
    {
      goto LABEL_8;
    }
    if ( v8 > 1 )
      *(_WORD *)v7 = 90;
  }
LABEL_8:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
