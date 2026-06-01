void __fastcall sub_1B49050(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // r15d
  __m128i si128; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  char v50; // [rsp+17h] [rbp-101h] BYREF
  __int64 v51; // [rsp+18h] [rbp-100h] BYREF
  __m128i v52; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v53; // [rsp+30h] [rbp-E8h]
  int v54; // [rsp+40h] [rbp-D8h]
  char v55; // [rsp+44h] [rbp-D4h]
  void *ptr[2]; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v57; // [rsp+60h] [rbp-B8h] BYREF
  int v58; // [rsp+70h] [rbp-A8h]
  char v59; // [rsp+74h] [rbp-A4h]

  v5 = *(_QWORD *)(a2 + 24);
  v6 = sub_BFD550(*(_QWORD *)(a2 + 16));
  v7 = *(_WORD *)v6;
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 49 > 2 )
  {
    if ( (v7 & 0x1FF) == 0x62 )
      return;
  }
  else if ( (v7 & 0x1FF) == 0x62 )
  {
    sub_1AFBE90((__int64)&v52, *(_QWORD *)a1, v5);
    if ( !v53.m128i_i64[0] )
    {
      v51 = v5;
      sub_1B47550((__m128i *)ptr, a1 + 1624, &v51);
      if ( v57.m128i_i8[0] )
      {
        if ( !sub_FFE8A0(*(_DWORD *)(a1 + 16))
          || (unsigned int)sub_1AFA3A0(*(_QWORD *)a1, v5)
          || (unsigned __int8)sub_1AEA760(
                                *(_QWORD *)a1,
                                v5,
                                1,
                                (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE87F0,
                                (__int64)ptr) )
        {
          v22 = *(_QWORD *)a1;
          v23 = *(_DWORD *)(a2 + 40);
          sub_1AF1680(
            (__int64)ptr,
            *(_QWORD *)a1,
            v5,
            (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))sub_1AE93F0,
            (__int64)&v50,
            1,
            (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))sub_1AE9C40,
            (__int64)&v51);
          si128 = _mm_load_si128((const __m128i *)ptr);
          v25 = _mm_load_si128(&v57);
          v26 = *(unsigned int *)(a1 + 16);
          v54 = v58;
          v52 = si128;
          v53 = v25;
          v55 = v59;
          if ( (unsigned __int8)sub_FFEF70(v26, v22, v27, v28) && v52.m128i_i32[1] == 85 )
          {
            v49 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(a1 + 20) = 1;
            sub_168B9F0((__int64)ptr, (__int64 *)(v49 + 8), v23, 0x11ECu, 0);
            sub_15F7200(ptr);
            sub_1B20830(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, v5, (unsigned int *)&v52, 0);
          }
          else
          {
            v29 = *(_QWORD *)a1;
            sub_1AF1930((__int64)ptr, *(_QWORD *)a1, v5, 0);
            v30 = _mm_load_si128((const __m128i *)ptr);
            v31 = _mm_load_si128(&v57);
            v32 = *(unsigned int *)(a1 + 16);
            v54 = v58;
            v52 = v30;
            v53 = v31;
            v55 = v59;
            if ( (unsigned __int8)sub_FFEF70(v32, v29, v33, v34)
              && v52.m128i_i32[1] != 94
              && !(unsigned int)sub_1AFA3A0(*(_QWORD *)a1, v5)
              && v52.m128i_i32[1] != 106 )
            {
              ptr[0] = (void *)a2;
              sub_1B02CD0(a1 + 72, (__int64 *)ptr, v35, v36, v37, v38);
            }
          }
        }
        else if ( (*(_BYTE *)(v5 + 68) & 1) == 0 )
        {
          v39 = *(_QWORD *)a1;
          ptr[0] = *(void **)(v6 + 8);
          v40 = sub_1AE5FF0(v39);
          if ( !sub_1AFEF20(v40 + 1136, ptr) )
          {
            v41 = sub_1AE60B0(*(_QWORD *)a1);
            v44 = sub_1AF0190(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL), v5, v42, v43);
            v47 = (unsigned int)(v41 - 4);
            if ( (unsigned int)v47 > 8 )
              v48 = 6;
            else
              v48 = dword_265E740[v47];
            ptr[0] = (void *)a2;
            sub_1B02CD0(a1 + 240LL * v44 + 40LL * (unsigned int)v48 + 112, (__int64 *)ptr, v48, 240LL * v44, v45, v46);
          }
        }
      }
    }
    return;
  }
  if ( !sub_FFE8A0(*(_DWORD *)(a1 + 16)) )
  {
    if ( !*(_BYTE *)(a1 + 21) )
      sub_1B48300(a1, *(_QWORD *)(a2 + 16), v8, v9, v10, v11);
    return;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(unsigned int *)(a1 + 16);
  ptr[0] = &v57;
  ptr[1] = (void *)0x800000000LL;
  if ( !sub_1B30C60(v12, a2, (__int64)ptr, 55, v13, 1, a3) )
  {
    v21 = ptr[0];
    if ( ptr[0] == &v57 )
      return;
LABEL_13:
    free(v21);
    return;
  }
  v14 = *((_QWORD *)ptr[0] + 2 * LODWORD(ptr[1]) - 1);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  v16 = *(_QWORD *)a1;
  v52.m128i_i64[0] = (__int64)ptr;
  if ( !(unsigned __int8)sub_1AEA760(
                           v16,
                           v15,
                           1,
                           (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE8B40,
                           (__int64)&v52) )
    sub_1B48300(a1, *(_QWORD *)(a2 + 16), v17, v18, v19, v20);
  v21 = ptr[0];
  if ( ptr[0] != &v57 )
    goto LABEL_13;
}
