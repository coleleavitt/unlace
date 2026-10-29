/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E740
// Address: 0x000000000045E740

//----- (000000000045E740) ----------------------------------------------------
unsigned __int64 __fastcall sub_45E740(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x20
  unsigned __int64 v4; // x19
  unsigned __int64 v7; // x21
  __int64 (*v8)(); // x5
  unsigned __int64 i; // x26
  unsigned __int64 v10; // x2
  __int64 (*v11)(); // x5
  unsigned __int64 v12; // x22
  unsigned __int64 v14; // x0
  char v15; // [xsp+67h] [xbp-9h] BYREF

  v3 = a3;
  v4 = a3;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(__int64 (**)())(*(_QWORD *)a1 + 384LL);
    if ( v8 == sub_407158
      || ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, char *, __int64))v8)(a1, a2, v4 - 1, &v15, 1) != 1 )
    {
      break;
    }
    v14 = v3 + v4;
    v7 = v4;
    if ( v3 <= 0x7FFFFFFFFFFFFFFELL )
      v3 *= 2LL;
    v4 = v14;
  }
  for ( i = v7 + 1; i < v4; i = v12 + 1 )
  {
    while ( 1 )
    {
      v10 = (v7 + v4) >> 1;
      v11 = *(__int64 (**)())(*(_QWORD *)a1 + 384LL);
      v12 = (int)v10;
      if ( v11 != sub_407158
        && ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, __int64))v11)(a1, a2, (int)v10 - 1, &v15, 1) == 1 )
      {
        break;
      }
      v4 = v12;
      if ( i >= v12 )
        return v7;
    }
    v7 = v12;
  }
  return v7;
}
