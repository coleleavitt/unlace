void __fastcall sub_1680510(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 *v8; // r15
  __m128i si128; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rsi
  __m128i v14; // xmm2
  __int64 v15; // rax
  __m128i v16; // xmm3
  char v17; // al
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64); // rax
  __m128 i; // [rsp+0h] [rbp-198h] BYREF
  __int64 v21; // [rsp+10h] [rbp-188h]
  __int64 v22; // [rsp+18h] [rbp-180h]
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-178h] BYREF
  int v24; // [rsp+28h] [rbp-170h]
  __m128i v25; // [rsp+30h] [rbp-168h]
  void *v26; // [rsp+40h] [rbp-158h]
  int v27; // [rsp+48h] [rbp-150h]
  int v28; // [rsp+4Ch] [rbp-14Ch]
  _OWORD v29[8]; // [rsp+50h] [rbp-148h] BYREF
  void *ptr; // [rsp+D0h] [rbp-C8h]
  __int64 v31; // [rsp+D8h] [rbp-C0h]
  _QWORD v32[23]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = sub_B8BF30((__int64)a2);
  if ( !v2 )
  {
    v17 = *((_BYTE *)a2 + 28) & 0x7F;
    if ( v17 == 18 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 64LL))(a2);
      i.m128_u64[0] = (unsigned __int64)a2;
      v22 = v18;
      i = _mm_loadh_ps((const double *)i.m128_u64);
      goto LABEL_13;
    }
    if ( v17 == 8 )
    {
      v19 = *(__int64 (__fastcall **)(__int64))(*a2 + 64LL);
      if ( v19 == sub_6EE8D0 )
        v22 = a2[11];
      else
        v22 = v19((__int64)a2);
    }
    else
    {
      v22 = 0;
    }
    goto LABEL_12;
  }
  v6 = v2;
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL);
  if ( v7 == sub_6EF210 )
    v22 = sub_B7F750((_QWORD *)v6, &v23, (__int64)sub_6EF210, v3, v4, v5);
  else
    v22 = v7(v6);
  if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0x26 )
  {
LABEL_12:
    i.m128_u64[0] = (unsigned __int64)a2;
    i = _mm_loadh_ps((const double *)i.m128_u64);
    goto LABEL_13;
  }
  v21 = sub_B98F20(v6) + 8LL * (unsigned __int16)(*(_DWORD *)(v6 + 84) >> 13);
  i.m128_u64[0] = (unsigned __int64)a2;
  v8 = (__int64 *)sub_B98F20(v6);
  for ( i = _mm_loadh_ps((const double *)i.m128_u64); (__int64 *)v21 != v8; ++v8 )
  {
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&i);
      v10 = *(_QWORD *)(a1 + 248);
      v11 = *v8;
      v23 = off_2C4D038;
      v25 = si128;
      v24 = 16777472;
      v26 = v29;
      v28 = 8;
      ptr = v32;
      v31 = 0x1000000000LL;
      v12 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v10 + 17448) + 376LL));
      v27 = 1;
      v29[0] = v12;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        v32[0] = *(_QWORD *)(v11 + 8);
        LODWORD(v31) = 1;
        sub_BC97E0((__int64 *)&v23, v13);
        v23 = off_2C4D038;
        LODWORD(v31) = v31 - 1;
        if ( ptr != v32 )
          free(ptr);
      }
      if ( v26 == v29 )
        break;
      free(v26);
      if ( (__int64 *)v21 == ++v8 )
        goto LABEL_13;
    }
  }
LABEL_13:
  v14 = _mm_load_si128((const __m128i *)&i);
  v23 = off_2C4D038;
  v26 = v29;
  v31 = 0x1000000000LL;
  v15 = *(_QWORD *)(a1 + 248);
  v25 = v14;
  v24 = 16777472;
  v28 = 8;
  ptr = v32;
  v16 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v15 + 17448) + 376LL));
  v27 = 1;
  v29[0] = v16;
  if ( v22 )
  {
    v32[0] = v22;
    LODWORD(v31) = 1;
    sub_BC97E0((__int64 *)&v23, v22);
    v23 = off_2C4D038;
    LODWORD(v31) = v31 - 1;
    if ( ptr != v32 )
      free(ptr);
  }
  if ( v26 != v29 )
    free(v26);
}
