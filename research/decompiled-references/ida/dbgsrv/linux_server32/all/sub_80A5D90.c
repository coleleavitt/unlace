/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5D90
// Address: 0x080A5D90

//----- (080A5D90) --------------------------------------------------------
int __cdecl sub_80A5D90(_DWORD *a1, __int16 a2)
{
  int v2; // edx
  unsigned int v3; // ecx
  char *v4; // eax
  unsigned int v6; // [esp+0h] [ebp-38h]
  __int16 v7; // [esp+16h] [ebp-22h] BYREF
  unsigned int v8; // [esp+18h] [ebp-20h]

  v2 = a1[17];
  v3 = a1[18];
  v8 = __readgsdword(0x14u);
  v4 = (char *)a1[16];
  v6 = v2 + 1;
  v7 = a2;
  if ( &v7 >= (__int16 *)v4 && &v7 < (__int16 *)&v4[2 * v3] )
  {
    if ( v3 >= v6 )
      goto LABEL_4;
  }
  else if ( v3 >= v6 )
  {
    goto LABEL_4;
  }
  v4 = (char *)sub_80CF920((int)(a1 + 16), v4, v6, 2u);
  v2 = a1[17];
  a1[16] = v4;
LABEL_4:
  *(_WORD *)&v4[2 * v2] = a2;
  ++a1[17];
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
