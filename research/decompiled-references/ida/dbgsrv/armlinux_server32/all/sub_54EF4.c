/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54EF4
// Address: 0x00054EF4

//----- (00054EF4) --------------------------------------------------------
unsigned __int64 __fastcall sub_54EF4(int a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // r4
  unsigned __int64 i; // r10
  int (*v7)(); // r7
  int (*v8)(); // r7
  unsigned __int64 v9; // r2
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // kr00_8
  bool v12; // cf
  char v15; // [sp+2Bh] [bp-9h] BYREF

  v3 = a3;
  v5 = 0;
  for ( i = a3; ; i = v11 )
  {
    v7 = *(int (**)())(*(_DWORD *)a1 + 192);
    if ( v7 == sub_1508C
      || ((int (__fastcall *)(int, int, _DWORD, _DWORD, char *, int))v7)(a1, a2, i - 1, (i - 1) >> 32, &v15, 1) != 1 )
    {
      break;
    }
    v11 = v3 + i;
    v12 = HIDWORD(v3) <= 0x7FFFFFFF;
    if ( HIDWORD(v3) == 0x7FFFFFFF )
      v12 = (_DWORD)v3 != -1;
    if ( v12 )
      v3 *= 2LL;
    v5 = i;
  }
  while ( v5 + 1 < i )
  {
    v8 = *(int (**)())(*(_DWORD *)a1 + 192);
    v9 = (v5 + i) >> 1;
    v10 = (int)v9;
    if ( v8 == sub_1508C
      || ((int (__fastcall *)(int, int, _DWORD, int, char *, int, _DWORD, _DWORD, _DWORD, _DWORD))v8)(
           a1,
           a2,
           v9 - 1,
           ((int)v9 - 1) >> 31,
           &v15,
           1,
           v5 + 1,
           (v5 + 1) >> 32,
           v5 + i,
           (v5 + i) >> 32) != 1 )
    {
      i = v10;
    }
    else
    {
      v5 = v10;
    }
  }
  return v5;
}
