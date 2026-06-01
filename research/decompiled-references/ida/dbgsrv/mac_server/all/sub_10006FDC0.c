/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006FDC0
// Address: 0x000000010006FDC0

//----- (000000010006FDC0) ----------------------------------------------------
__int64 __fastcall sub_10006FDC0(__int64 a1, int a2)
{
  __darwin_time_t v3; // r15
  __int64 result; // rax
  int v5; // eax
  __darwin_time_t v6; // rcx
  unsigned int v7; // eax
  const char *v8; // rcx
  int v9; // ecx
  char v10; // [rsp+Fh] [rbp-31h] BYREF

  v3 = qtime64();
  if ( (*(int (__fastcall **)(_QWORD))(xmmword_1000AE410 + 272))(*(_QWORD *)(a1 + 88)) > 0 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 76) = -1;
    return 1;
  }
  for ( result = sub_10006AAB0(*(_QWORD *)(a1 + 32)); (int)result > 0; result = sub_10006AAB0(*(_QWORD *)(a1 + 32)) )
  {
    *(_DWORD *)(a1 + 76) = a2;
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(xmmword_1000AE410 + 264))(*(_QWORD *)(a1 + 88), &v10, 1);
    if ( v5 >= 0 )
      goto LABEL_2;
    if ( v5 == -1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(xmmword_1000AE410 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
      v8 = "irs";
      if ( v7 != 5 )
        v8 = "openssl";
      *(_QWORD *)(a1 + 64) = v8;
      if ( v7 <= 6 )
      {
        v9 = 98;
        if ( _bittest(&v9, v7) )
          return 0xFFFFFFFFLL;
      }
      *(_QWORD *)(a1 + 64) = &_s;
      *(_DWORD *)(a1 + 72) = 0;
      if ( a2 != -1 )
      {
LABEL_10:
        v6 = qtime64();
        a2 -= (v6 - v3) / 0x3E8uLL;
        if ( a2 <= 0 )
          a2 = 0;
        v3 = v6;
        continue;
      }
    }
    else if ( a2 != -1 )
    {
      goto LABEL_10;
    }
    a2 = -1;
  }
  *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
