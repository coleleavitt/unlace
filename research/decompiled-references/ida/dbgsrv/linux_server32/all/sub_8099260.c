/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099260
// Address: 0x08099260

//----- (08099260) --------------------------------------------------------
unsigned int __cdecl sub_8099260(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned int result; // eax
  _BOOL4 v6; // eax
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  __int64 v8; // [esp+8h] [ebp-18h]
  unsigned int v9; // [esp+10h] [ebp-10h]

  v9 = __readgsdword(0x14u);
  sub_8098F80(a1, a2, a3);
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 352);
    v7 = 1;
    v4 = *(_WORD *)(v3 + 12);
    v8 = 0;
    if ( v4 == 15677 )
    {
      sub_8098F80(a1, (int)&v7, 1);
      v6 = v8 == *(_QWORD *)(a2 + 4);
      goto LABEL_7;
    }
    if ( v4 != 8509 )
      break;
    sub_8098F80(a1, (int)&v7, 1);
    v6 = v8 != *(_QWORD *)(a2 + 4);
LABEL_7:
    *(_DWORD *)(a2 + 4) = v6;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
  }
  result = v9 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
