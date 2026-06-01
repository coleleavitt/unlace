__int64 __fastcall sub_1A26040(_QWORD *a1, char a2, double a3, __m128 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i si128; // xmm0
  __int64 v12; // rsi
  __int64 *v13; // r10
  __int64 *v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rbp
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  char v20; // al
  char v21; // r13
  unsigned __int8 **v22; // rbx
  unsigned __int8 *v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // edx
  unsigned __int64 v27; // r12
  unsigned __int8 *v28; // rax
  __int64 v29; // rbp
  _WORD **v30; // r13
  _QWORD *v31; // rbx
  __m128 *v32; // r12
  _QWORD *v33; // rax
  _WORD *v34; // rsi
  char *v35; // rdx
  char v36; // al
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v40; // rdx
  unsigned __int8 *v41; // rdx
  unsigned __int8 *v42; // rdi
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbp
  unsigned __int64 *v47; // r12
  unsigned int v48; // r14d
  int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // r13
  __m128 v53; // [rsp+0h] [rbp-148h] BYREF
  _QWORD *v54; // [rsp+10h] [rbp-138h]
  __int64 v55; // [rsp+18h] [rbp-130h]
  __int64 v56; // [rsp+20h] [rbp-128h]
  __m128 *v57; // [rsp+28h] [rbp-120h]
  __int64 v58; // [rsp+30h] [rbp-118h]
  __m128i *v59; // [rsp+38h] [rbp-110h]
  __int64 v60; // [rsp+40h] [rbp-108h]
  __int64 v61; // [rsp+48h] [rbp-100h]
  unsigned __int8 **v62; // [rsp+50h] [rbp-F8h]
  char v63; // [rsp+5Ch] [rbp-ECh]
  char v64; // [rsp+6Fh] [rbp-D9h] BYREF
  __m128 v65; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+80h] [rbp-C8h]
  _OWORD v67[4]; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v68; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-68h]

  v4 = a1;
  v5 = *a1;
  v63 = a2;
  v53.m128_u64[0] = (unsigned __int64)&v64;
  v53 = _mm_loadh_ps((const double *)v53.m128_u64);
  sub_1BD2860(v5, 0);
  v7 = v4[7];
  v8 = _mm_loadu_si128((const __m128i *)(v4 + 1));
  v64 = 0;
  v9 = _mm_loadu_si128((const __m128i *)(v4 + 3));
  v10 = _mm_loadu_si128((const __m128i *)(v4 + 5));
  si128 = _mm_load_si128((const __m128i *)&v53);
  v67[0] = v8;
  v12 = v4[2];
  v67[1] = v9;
  v67[2] = v10;
  v67[3] = si128;
  v13 = *(__int64 **)(v7 + 8);
  v14 = &v13[*(unsigned int *)(v7 + 16)];
  if ( v13 != v14 )
  {
    v54 = v4;
    v15 = v13;
    v59 = &v68;
    v57 = &v65;
    while ( 1 )
    {
      v16 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
      v17 = *(_BYTE *)(v16 + 28) & 0x7F;
      if ( (unsigned int)v17 - 53 <= 1 || ((v17 + 52) & 0x7Fu) <= 1 )
        v16 = sub_B72ED0(*v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(char *)(v16 + 28) < 0 )
        goto LABEL_28;
      v18 = *(_BYTE *)(v16 + 28) & 0x7F;
      if ( v18 != 71 )
        break;
      v19 = *(_QWORD *)(v16 + 48);
      if ( v19 )
      {
        v20 = *(_BYTE *)(v19 + 28);
        v53.m128_u64[0] = v16;
        v16 = v19;
        v18 = v20 & 0x7F;
LABEL_10:
        if ( v18 != 39 )
          goto LABEL_28;
        if ( (*(_BYTE *)(v16 + 29) & 2) == 0 )
          v64 = 1;
        v21 = v63;
        v22 = (unsigned __int8 **)v54[6];
        v55 = *v15;
        if ( !**v22
          && ((unsigned int)sub_B770E0(v16, v12) > 1
           || !(unsigned int)sub_B76070(v16, v12, v40, v6) && !sub_B748A0(v16, v12, v19, v6)) )
        {
          goto LABEL_28;
        }
        if ( !v21 || (v12 = v16, sub_1844E80((__int64)v22[1], v16, v19, v6)) )
        {
          if ( (*(_BYTE *)(v16 + 85) & 3) == 2 )
            goto LABEL_28;
          v23 = v22[3];
          v24 = (__int64)v22[2];
          v25 = *((_QWORD *)v23 + 1);
          if ( v53.m128_u64[0] )
          {
            v26 = *(_DWORD *)(v24 + 2988);
            v58 = (unsigned int)v25;
            if ( 8 * (int)v25 > 4864 - v26 )
            {
              v50 = 8 * v58;
              v51 = *(_QWORD *)(v24 + 2872);
              *(_QWORD *)(v24 + 2952) += 8 * v58;
              v52 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( *(_QWORD *)(v24 + 2880) >= v50 + v52 && v51 )
              {
                *(_QWORD *)(v24 + 2872) = v50 + v52;
                v27 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v56 = v27;
              }
              else
              {
                v56 = sub_986170(v24 + 2872, v50, v50, 3, v25, v24);
                v27 = v56;
              }
            }
            else
            {
              *(_DWORD *)(v24 + 2988) = v26 + 8 * v25;
              v56 = v24 + v26 + 2992;
              v27 = v56;
            }
            v28 = v22[3];
            v29 = *(_QWORD *)v28 + 8LL * *((_QWORD *)v28 + 1);
            v30 = *(_WORD ***)v28;
            if ( *(_QWORD *)v28 != v29 )
            {
              v62 = v22;
              v31 = (_QWORD *)v27;
              v32 = (__m128 *)v59;
              do
              {
                while ( 1 )
                {
                  v34 = *v30;
                  if ( (**v30 & 0x1FF) == 0x44 )
                    break;
                  ++v30;
                  *v31++ = v34;
                  if ( (_WORD **)v29 == v30 )
                    goto LABEL_26;
                }
                sub_EE9E50(v32, (__int64)v34);
                a4 = (__m128)_mm_load_si128(&v68);
                v66 = v69;
                v65 = a4;
                if ( (a4.m128_i8[8] & 3) != 0 )
                  v33 = (_QWORD *)sub_EF2B30((__int64)v57);
                else
                  v33 = (_QWORD *)v65.m128_u64[0];
                ++v30;
                *v31++ = *v33;
              }
              while ( (_WORD **)v29 != v30 );
LABEL_26:
              v22 = v62;
            }
            v12 = v53.m128_u64[0];
            sub_1BF2330((unsigned int)v22[1], v53.m128_i32[0], v55, 0, v56, v58, (__int64)v22[2], 0, 0, **v22, 0, 0, 0);
            goto LABEL_28;
          }
          v41 = *v22;
          v42 = v22[1];
          v12 = v16;
          ++v15;
          v60 = 0;
          v43 = *(_QWORD *)v23;
          v61 = 0;
          sub_1BF10B0((_DWORD)v42, v16, v55, v43, v25, v24, 0, 0, *v41, 0, 0, 0, 0, 0, 0, 0);
          if ( v14 == v15 )
          {
LABEL_29:
            v4 = v54;
            v12 = v54[2];
            if ( *(char *)(*(_QWORD *)(v12 + 232) + 1LL) < 0 && !v64 )
              goto LABEL_46;
            goto LABEL_30;
          }
        }
        else if ( v14 == ++v15 )
        {
          goto LABEL_29;
        }
      }
      else
      {
LABEL_28:
        if ( v14 == ++v15 )
          goto LABEL_29;
      }
    }
    v19 = (unsigned int)v18 - 34;
    if ( (unsigned int)v19 > 5 )
      goto LABEL_28;
    v53.m128_u64[0] = 0;
    goto LABEL_10;
  }
  if ( *(char *)(*(_QWORD *)(v12 + 232) + 1LL) < 0 )
  {
LABEL_46:
    v44 = *(_QWORD *)v4[8];
    if ( v44 && (unsigned int)((__int64)(*(_QWORD *)(v44 + 24) - *(_QWORD *)(v44 + 16)) >> 3) )
    {
      sub_1A25B70((__int64)v67, v44, *(double *)si128.m128i_i64, a4);
      v12 = v4[2];
    }
    else
    {
      v45 = v4[9];
      v46 = *(_QWORD *)(v45 + 8);
      if ( v46 )
      {
        v47 = *(unsigned __int64 **)v45;
        v53.m128_u64[0] = v12;
        v48 = sub_EEC140(v47[v46 - 1]);
        v49 = sub_EEB7E0(*v47, v12, *(double *)si128.m128i_i64);
        sub_C0B340((__int64)&v68, *(_QWORD **)(v53.m128_u64[0] + 248), v49, (__int64)v47, v46, v48);
        sub_1A25B70((__int64)v67, (unsigned __int64)&v68, *(double *)si128.m128i_i64, a4);
        v12 = v4[2];
      }
    }
  }
LABEL_30:
  v35 = (char *)v4[10];
  v36 = *v35;
  if ( !*v35 )
    v36 = v64;
  v37 = *v4;
  v38 = v4[12];
  *v35 = v36;
  return sub_1BF27B0(v37, v12, *(unsigned int *)(v4[11] + 4LL), v38);
}
