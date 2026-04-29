char __fastcall sub_3964B0(__int64 a1, unsigned __int64 a2, int a3, int a4, int a5, unsigned int a6)
{
  __int64 v10; // r9
  char result; // al
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // r9
  char v15; // [rsp+7h] [rbp-A1h]
  unsigned __int64 v16; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD v17[4]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __m128i v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  unsigned __int64 v25; // [rsp+78h] [rbp-30h]

  v16 = a2;
  v25 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3802D0((__int64 *)&v16, 1) )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
             115,
             v16,
             0xFFFFFFFFLL,
             5,
             &callui,
             v10);
  v12 = *(_QWORD *)(a1 + 8) == 0;
  v17[2] = a5;
  v17[0] = a3;
  v17[1] = a4;
  v19 = -1;
  v18 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v12 || (a6 & 8) != 0 )
    return sub_390760((__int64)v17, a6, a1, 0) != 0;
  v13 = *(_QWORD *)(a1 + 128);
  v21 = 0;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  v20 = 0;
  if ( (unsigned int)sub_38F640(&v20, v13, a1, (__int64)v17, 0, 1) != 1 )
  {
    if ( v24 )
      qfree(v24);
    return sub_390760((__int64)v17, a6, a1, 0) != 0;
  }
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
             149,
             *(_QWORD *)(a1 + 8),
             &v20,
             7,
             &callui,
             v14);
  if ( v24 )
  {
    v15 = result;
    qfree(v24);
    return v15;
  }
  return result;
}
