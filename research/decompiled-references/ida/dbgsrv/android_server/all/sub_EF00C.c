/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF00C
// Address: 0x00000000000EF00C

//----- (00000000000EF00C) ----------------------------------------------------
__int64 __fastcall sub_EF00C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x30
  __int64 v7; // x20
  __int64 result; // x0
  __int64 v9; // [xsp+48h] [xbp+48h] BYREF
  __int64 s[200]; // [xsp+50h] [xbp+50h] BYREF
  int v11; // [xsp+690h] [xbp+690h]

  v7 = v3;
  memset(a1, 0, 0x3C0u);
  a1[99] = v7;
  a1[104] = 0x4000000000000000LL;
  if ( (unsigned int)sub_EE428(a1, (char *)s) )
    abort();
  if ( (!&pthread_create || pthread_once((pthread_once_t *)&algn_1693A1[3], (void (*)(void))sub_EDB38))
    && !byte_169340[0] )
  {
    sub_EDB38();
  }
  sub_EDC4C((__int64)a1, a2, &v9);
  s[197] = 0;
  v11 = 1;
  s[198] = 31;
  result = sub_EEE00(a1, s);
  a1[99] = a3;
  return result;
}
// EF038: variable 'v3' is possibly undefined
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1693A1: using guessed type _BYTE[7];
