/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D210
// Address: 0x000000000009D210

//----- (000000000009D210) ----------------------------------------------------
unsigned __int64 __fastcall sub_9D210(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x21
  unsigned int v4; // w19
  unsigned __int64 v6; // x25
  unsigned __int64 v7; // x26
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  _BYTE v11[4]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-58h]

  v3 = a3;
  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a2;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _BYTE *, __int64))(*(_QWORD *)a1 + 384LL))(
         a1,
         a2,
         a3 - 1,
         v11,
         1) == 1 )
  {
    v6 = v3;
    v7 = v3;
    do
    {
      v3 = v6 + v7;
      v6 <<= v6 < 0x7FFFFFFFFFFFFFFFLL;
      v8 = v7;
      v7 = v3;
    }
    while ( (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _BYTE *, __int64))(*(_QWORD *)a1 + 384LL))(
              a1,
              v4,
              v3 - 1,
              v11,
              1) == 1 );
  }
  else
  {
    v8 = 0;
  }
  while ( v8 + 1 < v3 )
  {
    v9 = v3 + v8;
    if ( (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, __int64))(*(_QWORD *)a1 + 384LL))(
           a1,
           v4,
           (__int64)(((v3 + v8) >> 1 << 32) - 0x100000000LL) >> 32,
           v11,
           1) == 1 )
      v8 = (int)(v9 >> 1);
    else
      v3 = (int)(v9 >> 1);
  }
  return v8;
}
