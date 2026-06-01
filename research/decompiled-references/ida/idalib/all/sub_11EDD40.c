__int64 __fastcall sub_11EDD40(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm0
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  _WORD v12[24]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+50h] [rbp-88h]
  const char *v15; // [rsp+60h] [rbp-78h] BYREF
  __int16 v16; // [rsp+80h] [rbp-58h]
  char *v17; // [rsp+90h] [rbp-48h] BYREF
  __int16 v18; // [rsp+B0h] [rbp-28h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)a1 = a1 + 24;
  *(_BYTE *)(a1 + 24) = 47;
  *(__m128i *)(a1 + 8) = si128;
  *(_QWORD *)(a1 + 8) = 1;
  if ( sub_10DCD30(a3, 0x878u) )
  {
    v6 = (_BYTE *)sub_21B7BC0(a3, 2168, &byte_22F0C30, 0);
    *(_QWORD *)(a1 + 8) = 0;
    sub_A1FE50((_QWORD *)a1, v6, &v6[v7]);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(v9 + 496);
    if ( v10 )
    {
      v11 = *(_BYTE **)(v9 + 488);
      *(_QWORD *)(a1 + 8) = 0;
      sub_A1FE50((_QWORD *)a1, v11, &v11[v10]);
    }
  }
  if ( !*(_QWORD *)(a2 + 1768) || *(_DWORD *)(a2 + 1804) != 30 )
    return a1;
  v12[16] = 257;
  v14 = 257;
  v15 = "DriverKit";
  v16 = 259;
  v18 = 259;
  v17 = "System";
  sub_228A3B0(a1, &v17, &v15, v13, v12);
  return a1;
}
