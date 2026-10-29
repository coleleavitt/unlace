__int64 __fastcall sub_F49DC0(__int64 *a1, __int64 *a2, double a3)
{
  __m128i si128; // xmm0
  __m128i v5; // rax
  _BYTE *v6; // r13
  unsigned __int64 v7; // rsi
  __m128i v8; // xmm2
  void *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm3
  __m128i *v12; // rdx
  __m128i v13; // xmm4
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rax
  __m128i *v20; // rdx
  __m128i v21; // xmm6
  __m128i *v22; // rsi
  void (__fastcall *v23)(__m128i *, __m128i *, __int64); // rax
  __int64 v24; // rsi
  unsigned __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  void (__fastcall *v31)(__int64, __int64, __int64); // rax
  _BYTE *v32; // rax
  __int64 v33; // rdi
  _BYTE *v34; // rax
  __int64 v36; // [rsp+0h] [rbp-1B8h]
  __m128 v37; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i *v38; // [rsp+20h] [rbp-198h]
  __int64 v39; // [rsp+28h] [rbp-190h]
  __m128i v40; // [rsp+30h] [rbp-188h]
  __int64 v41; // [rsp+40h] [rbp-178h]
  __m128i v42; // [rsp+50h] [rbp-168h]
  __int64 v43; // [rsp+60h] [rbp-158h]
  __m128i v44; // [rsp+70h] [rbp-148h]
  __int64 v45; // [rsp+80h] [rbp-138h]
  __m128i v46; // [rsp+90h] [rbp-128h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-118h]
  __m128i v48; // [rsp+B0h] [rbp-108h] BYREF
  __m128i v49; // [rsp+C0h] [rbp-F8h]
  __m128i v50; // [rsp+D0h] [rbp-E8h]
  __int64 v51; // [rsp+E0h] [rbp-D8h]
  __m128i v52; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+110h] [rbp-A8h]
  void *v54; // [rsp+118h] [rbp-A0h] BYREF
  void *v55; // [rsp+120h] [rbp-98h]
  __m128i v56; // [rsp+128h] [rbp-90h] BYREF
  __int64 v57; // [rsp+140h] [rbp-78h] BYREF
  __m128i v58; // [rsp+148h] [rbp-70h] BYREF
  void *v59[2]; // [rsp+158h] [rbp-60h] BYREF
  __m128i v60[5]; // [rsp+168h] [rbp-50h] BYREF

  sub_F46670(*a2, *a1, a3);
  sub_EADB70(&v57, *a1);
  si128 = _mm_load_si128((const __m128i *)&v57);
  v40 = _mm_loadu_si128((const __m128i *)v59);
  v49.m128i_i64[0] = v60[0].m128i_i64[0];
  v5 = si128;
  v53 = v60[0].m128i_i64[0];
  v41 = v60[0].m128i_i64[0];
  v48 = v40;
  v52 = v40;
  v39 = v40.m128i_i64[1];
  v36 = v40.m128i_i64[0];
  v45 = v58.m128i_i64[1];
  v46 = si128;
  v47 = v58.m128i_i64[1];
  v43 = v58.m128i_i64[1];
  v51 = v58.m128i_i64[1];
  v44 = si128;
  v42 = si128;
  v50 = si128;
  v37 = _mm_loadh_ps((const double *)off_2B4C2F8);
LABEL_2:
  if ( v5.m128i_i64[0] == v36 )
    goto LABEL_18;
  do
  {
    do
    {
      if ( (v5.m128i_i8[8] & 3) != 0 )
      {
        v25 = (unsigned __int64 *)sub_EF2B30((__int64)&v46);
        v6 = (_BYTE *)*a2;
        v7 = *v25;
        if ( !*(_BYTE *)(*a2 + 1056) )
        {
LABEL_5:
          v52.m128i_i64[1] = v7;
          v52.m128i_i64[0] = (__int64)v6;
          v53 = (__int64)v6;
          v54 = &v56;
          sub_F24710(&v54, &byte_22F0C30, (__int64)&byte_22F0C30);
          if ( v6[1057] )
          {
            v8 = _mm_loadu_si128((const __m128i *)&v52.m128i_u64[1]);
            v57 = v52.m128i_i64[0];
            v59[0] = v60;
            v58 = v8;
            if ( v54 == &v56 )
            {
              v60[0] = _mm_loadu_si128(&v56);
            }
            else
            {
              v59[0] = v54;
              v60[0].m128i_i64[0] = v56.m128i_i64[0];
            }
            v9 = v55;
            v55 = nullptr;
            v56.m128i_i8[0] = 0;
            v59[1] = v9;
            v54 = &v56;
            v49.m128i_i64[0] = 0;
            v10 = operator new(0x38u);
            v11 = _mm_loadu_si128(&v58);
            *(_QWORD *)v10 = v57;
            *(_QWORD *)(v10 + 24) = v10 + 40;
            v12 = (__m128i *)v59[0];
            *(__m128i *)(v10 + 8) = v11;
            if ( v12 == v60 )
            {
              *(__m128i *)(v10 + 40) = _mm_loadu_si128(v60);
            }
            else
            {
              *(_QWORD *)(v10 + 24) = v12;
              *(_QWORD *)(v10 + 40) = v60[0].m128i_i64[0];
            }
            v13 = _mm_load_si128((const __m128i *)&v37);
            v48.m128i_i64[0] = v10;
            *(void **)(v10 + 32) = v59[1];
            v59[0] = v60;
            v59[1] = nullptr;
            v60[0].m128i_i8[0] = 0;
            v49 = v13;
            sub_ACD330((__int64)(v6 + 16), &v48);
            if ( v49.m128i_i64[0] )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v49.m128i_i64[0])(&v48, &v48, 3);
          }
          else
          {
            v14 = *((unsigned int *)v6 + 6);
            v15 = *((_QWORD *)v6 + 2);
            v48.m128i_i8[0] = 0;
            v16 = v15 + 32 * v14 - 32;
            if ( !*(_QWORD *)(v16 + 16) )
              goto LABEL_45;
            (*(void (__fastcall **)(__int64, __m128i *))(v16 + 24))(v16, &v48);
            v17 = *((_QWORD *)v6 + 2) + 32LL * *((unsigned int *)v6 + 6) - 32;
            v58 = _mm_loadu_si128((const __m128i *)&v52.m128i_u64[1]);
            v57 = v52.m128i_i64[0];
            v59[0] = v60;
            if ( v54 == &v56 )
            {
              v60[0] = _mm_loadu_si128(&v56);
            }
            else
            {
              v59[0] = v54;
              v60[0].m128i_i64[0] = v56.m128i_i64[0];
            }
            v18 = v55;
            v38 = (__m128i *)v17;
            v55 = nullptr;
            v59[1] = v18;
            v54 = &v56;
            v56.m128i_i8[0] = 0;
            v49.m128i_i64[0] = 0;
            v19 = operator new(0x38u);
            v20 = v38;
            v21 = _mm_loadu_si128(&v58);
            *(_QWORD *)v19 = v57;
            *(_QWORD *)(v19 + 24) = v19 + 40;
            v22 = (__m128i *)v59[0];
            *(__m128i *)(v19 + 8) = v21;
            if ( v22 == v60 )
            {
              *(__m128i *)(v19 + 40) = _mm_loadu_si128(v60);
            }
            else
            {
              *(_QWORD *)(v19 + 24) = v22;
              *(_QWORD *)(v19 + 40) = v60[0].m128i_i64[0];
            }
            v48.m128i_i64[0] = v19;
            v60[0].m128i_i8[0] = 0;
            si128 = _mm_load_si128(&v48);
            *(void **)(v19 + 32) = v59[1];
            v59[0] = v60;
            v59[1] = nullptr;
            v48 = _mm_loadu_si128(v20);
            v23 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v20[1].m128i_i64[0];
            v24 = v20[1].m128i_i64[1];
            *v20 = si128;
            v49.m128i_i64[0] = (__int64)v23;
            v20[1].m128i_i64[0] = (__int64)sub_F24C00;
            v49.m128i_i64[1] = v24;
            v20[1].m128i_i64[1] = (__int64)sub_F440C0;
            if ( v23 )
              v23(&v48, &v48, 3);
          }
          if ( v59[0] != v60 )
            operator delete(v59[0]);
          v6[1057] = 0;
          if ( v54 != &v56 )
            operator delete(v54);
          goto LABEL_16;
        }
      }
      else
      {
        v6 = (_BYTE *)*a2;
        v7 = *(_QWORD *)v5.m128i_i64[0];
        if ( !*(_BYTE *)(*a2 + 1056) )
          goto LABEL_5;
      }
      v6[1056] = 0;
      sub_F439B0((__int64)v6, v7, *(double *)si128.m128i_i64);
LABEL_32:
      v26 = *((unsigned int *)v6 + 6);
      if ( (_DWORD)v26 )
      {
        while ( 1 )
        {
          v27 = *((_QWORD *)v6 + 2);
          LOBYTE(v57) = 1;
          v28 = v27 + 32 * v26 - 32;
          if ( !*(_QWORD *)(v28 + 16) )
            break;
          (*(void (__fastcall **)(__int64, __int64 *))(v28 + 24))(v28, &v57);
          v29 = (unsigned int)(*((_DWORD *)v6 + 6) - 1);
          *((_DWORD *)v6 + 6) = v29;
          v30 = *((_QWORD *)v6 + 2) + 32 * v29;
          v31 = *(void (__fastcall **)(__int64, __int64, __int64))(v30 + 16);
          if ( !v31 )
            goto LABEL_32;
          v31(v30, v30, 3);
          v26 = *((unsigned int *)v6 + 6);
          if ( !(_DWORD)v26 )
            goto LABEL_36;
        }
LABEL_45:
        std::__throw_bad_function_call();
      }
LABEL_36:
      v32 = *((_BYTE **)v6 + 133);
      *((_QWORD *)v6 + 134) = 0;
      *v32 = 0;
      v33 = *(_QWORD *)v6;
      v34 = *(_BYTE **)(*(_QWORD *)v6 + 32LL);
      if ( *(_BYTE **)(*(_QWORD *)v6 + 24LL) == v34 )
      {
        sub_227BF10(v33, "\n", 1);
      }
      else
      {
        *v34 = 10;
        ++*(_QWORD *)(v33 + 32);
      }
      v6[1056] = 1;
LABEL_16:
      v5.m128i_i64[1] = v46.m128i_i64[1];
      if ( (v46.m128i_i8[8] & 3) != 0 )
      {
        if ( (v46.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v46);
        else
          sub_EF2750((unsigned __int64 *)&v46, 1);
        v5 = v46;
        goto LABEL_2;
      }
      v5.m128i_i64[0] = v46.m128i_i64[0] + 8;
      v46.m128i_i64[0] = v5.m128i_i64[0];
    }
    while ( v5.m128i_i64[0] != v36 );
LABEL_18:
    ;
  }
  while ( v5.m128i_i64[1] != v39 );
  return v5.m128i_i64[0];
}
