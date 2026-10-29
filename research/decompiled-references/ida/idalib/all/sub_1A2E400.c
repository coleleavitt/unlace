unsigned __int64 __fastcall sub_1A2E400(__int64 a1, __int64 a2, unsigned int a3, char a4, __m128 a5, __m128 a6)
{
  unsigned __int64 result; // rax
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // [rsp+18h] [rbp-2040h]
  __int64 v17; // [rsp+18h] [rbp-2040h]
  unsigned __int64 v18; // [rsp+18h] [rbp-2040h]
  unsigned __int64 v19; // [rsp+28h] [rbp-2030h] BYREF
  __m128i v20; // [rsp+30h] [rbp-2028h] BYREF
  __int64 v21; // [rsp+40h] [rbp-2018h] BYREF
  __int64 v22; // [rsp+48h] [rbp-2010h]
  __int64 v23; // [rsp+50h] [rbp-2008h] BYREF
  int v24; // [rsp+58h] [rbp-2000h]
  unsigned __int64 v25; // [rsp+60h] [rbp-1FF8h]
  unsigned int v26; // [rsp+68h] [rbp-1FF0h]
  __int128 v27; // [rsp+70h] [rbp-1FE8h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-1FD8h]
  __int128 v29; // [rsp+90h] [rbp-1FC8h]

  if ( (*(_BYTE *)(a2 + 24) & 3) == 3 )
    return 0;
  if ( (unsigned __int8)sub_15EEA20(a2) )
    return sub_B73640(*(_QWORD *)a2);
  v10 = a3;
  if ( a3 )
  {
    if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
      goto LABEL_6;
LABEL_15:
    v14 = sub_19A27D0(a1);
    result = (unsigned __int64)sub_19B4F00(a1, v10, v14, a3 != 0);
    if ( (*(_BYTE *)(a2 + 24) & 3) == 0 )
      result = sub_19249E0(a1, v10, 5u, result, 0, v15, a5, a6);
    v12 = 0;
    if ( !a4 )
      goto LABEL_11;
    return result;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    goto LABEL_15;
LABEL_6:
  v11 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  v16 = *(_QWORD *)a2;
  LODWORD(v22) = v10;
  v21 = v11;
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 7) != 0 )
    v12 = 0;
  sub_B85890(&v23, v11);
  a5 = 0;
  v27 = 0;
  *(_OWORD *)ptr = 0;
  v29 = 0;
  result = sub_190AE60(a1, (__int64 *)&v27, (__int64)&v21, v16, 0, 0, (__m128i)0LL, a6, 0);
  if ( HIDWORD(ptr[1]) )
  {
    v18 = result;
    free(ptr[0]);
    result = v18;
  }
  if ( !a4 )
  {
LABEL_11:
    if ( result != 1 )
    {
      v25 = v12;
      v19 = result & 0xFFFFFFFFFFFFFFFELL;
      v13 = *(_QWORD *)(a2 + 16);
      v26 = v10;
      v23 = v13;
      v20.m128i_i16[0] = 0;
      v20.m128i_i32[1] = v10;
      v20.m128i_i32[2] = v10;
      v20.m128i_i32[3] = v10;
      LODWORD(v21) = 16;
      v22 = 0;
      v24 = 0;
      sub_1A19220((__int64)&v27, a1, (__int64)&v21, &v20, (__int64)&v19, 1, a5, a6, 0, 1u);
      v17 = sub_1A1D600((unsigned int)&v27, a1, (unsigned int)&v21, (unsigned int)&v20, (unsigned int)&v19, 1, 0);
      sub_1A0BB10((__int64)&v27);
      return v17;
    }
  }
  return result;
}
