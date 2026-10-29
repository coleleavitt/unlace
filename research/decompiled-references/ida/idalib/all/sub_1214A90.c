void __fastcall sub_1214A90(__int64 *a1, __int64 a2, __int64 a3, __m128i *a4)
{
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbp
  char v14; // al
  __int64 v15; // r10
  char v16; // al
  size_t v17; // rcx
  size_t v18; // r8
  size_t v19; // rdx
  int v20; // eax
  __m128i *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r12
  _DWORD *v24; // r13
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r15
  _BYTE *v29; // rdi
  const void *v30; // rsi
  __int64 v31; // rdx
  const void *v32; // rsi
  _BYTE *v33; // rdi
  __int64 v34; // rdx
  const void *v35; // rsi
  _BYTE *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rbx
  _DWORD *v39; // rbp
  __int64 v40; // r12
  size_t v41; // rdx
  size_t v42; // rdx
  size_t v43; // rdx
  size_t v44; // rcx
  size_t v45; // r8
  size_t v46; // rdx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // [rsp+0h] [rbp-148h]
  __int64 v51; // [rsp+0h] [rbp-148h]
  __int64 v52; // [rsp+18h] [rbp-130h]
  size_t v53; // [rsp+18h] [rbp-130h]
  __int64 v54; // [rsp+20h] [rbp-128h]
  size_t v55; // [rsp+20h] [rbp-128h]
  size_t v57; // [rsp+30h] [rbp-118h]
  __int64 v58; // [rsp+38h] [rbp-110h]
  size_t v61; // [rsp+50h] [rbp-F8h]
  __int64 v62; // [rsp+58h] [rbp-F0h]
  __m128i v63[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v64; // [rsp+80h] [rbp-C8h]
  int v65; // [rsp+84h] [rbp-C4h]
  int v66; // [rsp+88h] [rbp-C0h]
  const void *v67; // [rsp+D0h] [rbp-78h]
  size_t v68; // [rsp+D8h] [rbp-70h]
  void *s2; // [rsp+F0h] [rbp-58h] BYREF
  size_t v70; // [rsp+F8h] [rbp-50h]
  _OWORD v71[4]; // [rsp+100h] [rbp-48h] BYREF

  v58 = (a3 - 1) / 2;
  if ( a2 < v58 )
  {
    v4 = a2;
    while ( 1 )
    {
      v8 = 2 * (v4 + 1);
      v52 = v4;
      v9 = v8 - 1;
      v10 = *a1;
      v11 = 176 * (v8 - 1);
      v54 = 352 * (v4 + 1);
      v12 = *a1 + -176 - v54;
      v50 = v11;
      v13 = *a1 + -176 - v11;
      v14 = sub_1213FB0(
              v12,
              *(_DWORD *)(v13 + 32),
              *(_DWORD *)(v13 + 36),
              *(_DWORD *)(v13 + 40),
              *(const void **)(v13 + 112),
              *(_QWORD *)(v13 + 120));
      v15 = v52;
      if ( !v14 )
      {
        v16 = sub_1213FB0(
                v10 + -176 - v11,
                *(_DWORD *)(v12 + 32),
                *(_DWORD *)(v12 + 36),
                *(_DWORD *)(v12 + 40),
                *(const void **)(v12 + 112),
                *(_QWORD *)(v12 + 120));
        v15 = v52;
        if ( v16 )
          goto LABEL_13;
        v17 = *(_QWORD *)(v12 + 152);
        v18 = *(_QWORD *)(v13 + 152);
        v19 = v18;
        if ( v17 <= v18 )
          v19 = *(_QWORD *)(v12 + 152);
        if ( v19 )
        {
          v62 = v52;
          v61 = *(_QWORD *)(v13 + 152);
          v53 = *(_QWORD *)(v12 + 152);
          v20 = memcmp(*(const void **)(v12 + 144), *(const void **)(v13 + 144), v19);
          v17 = v53;
          v18 = v61;
          v15 = v62;
          if ( v20 )
            goto LABEL_10;
        }
        v49 = v17 - v18;
        if ( v49 > 0x7FFFFFFF )
        {
LABEL_13:
          v9 = v8;
          v50 = v54;
        }
        else if ( v49 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v20 = v49;
LABEL_10:
          if ( v20 >= 0 )
          {
            v11 = v54;
            v9 = v8;
          }
          v50 = v11;
        }
      }
      v5 = -v50;
      v6 = v10 - v50;
      v7 = v10 - 176 * v15;
      sub_A0AAD0(v7 - 176, (_QWORD *)(v6 - 176));
      *(_DWORD *)(v7 - 144) = *(_DWORD *)(v6 - 144);
      *(_DWORD *)(v7 - 140) = *(_DWORD *)(v6 - 140);
      *(_DWORD *)(v7 - 136) = *(_DWORD *)(v6 - 136);
      sub_A0AAD0(v7 - 176 + 48, (_QWORD *)(v6 - 176 + 48));
      sub_A0AAD0(v7 - 176 + 80, (_QWORD *)(v6 - 176 + 80));
      sub_A0AAD0(v7 - 176 + 112, (_QWORD *)(v6 - 176 + 112));
      sub_A0AAD0(v7 - 176 + 144, (_QWORD *)(v6 - 176 + 144));
      v4 = v9;
      if ( v9 >= v58 )
        goto LABEL_15;
    }
  }
  v9 = a2;
  v5 = -176 * a2;
LABEL_15:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v9 )
  {
    v9 = 2 * v9 + 1;
    v40 = *a1 - 176 * v9 - 176;
    v39 = (_DWORD *)(*a1 + v5 - 176);
    v5 = -176 * v9;
    sub_1214A30(v39, v40);
    sub_A0AAD0((__int64)(v39 + 36), (_QWORD *)(v40 + 144));
  }
  sub_1214140(v63, a4);
  v21 = (__m128i *)a4[9].m128i_i64[0];
  s2 = v71;
  if ( v21 == &a4[10] )
  {
    v71[0] = _mm_loadu_si128(a4 + 10);
  }
  else
  {
    s2 = v21;
    *(_QWORD *)&v71[0] = a4[10].m128i_i64[0];
  }
  a4[9].m128i_i64[0] = (__int64)a4[10].m128i_i64;
  v22 = a4[9].m128i_i64[1];
  a4[10].m128i_i8[0] = 0;
  a4[9].m128i_i64[1] = 0;
  v23 = *a1;
  v70 = v22;
  v24 = (_DWORD *)(v23 + v5 - 176);
  v25 = (v9 - 1) / 2;
  v51 = (__int64)(v24 + 36);
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v38 = v23 + -176 - 176 * v25;
      if ( (unsigned __int8)sub_1213FB0(v38, v64, v65, v66, v67, v68) )
        goto LABEL_20;
      if ( (unsigned __int8)sub_1213FB0(
                              (__int64)v63,
                              *(_DWORD *)(v38 + 32),
                              *(_DWORD *)(v38 + 36),
                              *(_DWORD *)(v38 + 40),
                              *(const void **)(v38 + 112),
                              *(_QWORD *)(v38 + 120)) )
        break;
      v44 = *(_QWORD *)(v38 + 152);
      v45 = v70;
      v46 = v70;
      if ( v44 <= v70 )
        v46 = *(_QWORD *)(v38 + 152);
      if ( !v46
        || (v57 = v70,
            v55 = *(_QWORD *)(v38 + 152),
            v47 = memcmp(*(const void **)(v38 + 144), s2, v46),
            v44 = v55,
            v45 = v57,
            !v47) )
      {
        v48 = v44 - v45;
        if ( v48 > 0x7FFFFFFF )
          break;
        if ( v48 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_20;
        v47 = v48;
      }
      if ( v47 >= 0 )
        break;
LABEL_20:
      v26 = v23 - 176 * v25;
      v27 = v26 - 176;
      v28 = v23 - 176 * v9;
      sub_A0AAD0((__int64)v24, (_QWORD *)(v26 - 176));
      v29 = *(_BYTE **)(v28 - 128);
      *(_DWORD *)(v28 - 144) = *(_DWORD *)(v26 - 144);
      *(_DWORD *)(v28 - 140) = *(_DWORD *)(v26 - 140);
      *(_DWORD *)(v28 - 136) = *(_DWORD *)(v26 - 136);
      v30 = *(const void **)(v26 - 128);
      if ( v30 == (const void *)(v26 - 112) )
      {
        v43 = *(_QWORD *)(v26 - 120);
        if ( v43 )
        {
          if ( v43 == 1 )
            *v29 = *(_BYTE *)(v26 - 112);
          else
            memcpy(v29, v30, v43);
          v43 = *(_QWORD *)(v26 - 120);
          v29 = *(_BYTE **)(v28 - 128);
        }
        *(_QWORD *)(v28 - 120) = v43;
        v29[v43] = 0;
        v29 = *(_BYTE **)(v26 - 128);
      }
      else
      {
        if ( v29 == (_BYTE *)(v28 - 112) )
        {
          *(_QWORD *)(v28 - 128) = v30;
          *(_QWORD *)(v28 - 120) = *(_QWORD *)(v26 - 120);
          *(_QWORD *)(v28 - 112) = *(_QWORD *)(v26 - 112);
        }
        else
        {
          *(_QWORD *)(v28 - 128) = v30;
          v31 = *(_QWORD *)(v28 - 112);
          *(_QWORD *)(v28 - 120) = *(_QWORD *)(v26 - 120);
          *(_QWORD *)(v28 - 112) = *(_QWORD *)(v26 - 112);
          if ( v29 )
          {
            *(_QWORD *)(v26 - 128) = v29;
            *(_QWORD *)(v26 - 112) = v31;
            goto LABEL_24;
          }
        }
        *(_QWORD *)(v26 - 128) = v26 - 112;
        v29 = (_BYTE *)(v26 - 112);
      }
LABEL_24:
      *(_QWORD *)(v26 - 120) = 0;
      *v29 = 0;
      v32 = *(const void **)(v26 - 96);
      v33 = *(_BYTE **)(v28 - 96);
      if ( v32 == (const void *)(v26 - 80) )
      {
        v42 = *(_QWORD *)(v26 - 88);
        if ( v42 )
        {
          if ( v42 == 1 )
            *v33 = *(_BYTE *)(v26 - 80);
          else
            memcpy(v33, v32, v42);
          v42 = *(_QWORD *)(v26 - 88);
          v33 = *(_BYTE **)(v28 - 96);
        }
        *(_QWORD *)(v28 - 88) = v42;
        v33[v42] = 0;
        v33 = *(_BYTE **)(v26 - 96);
      }
      else
      {
        if ( v33 == (_BYTE *)(v28 - 80) )
        {
          *(_QWORD *)(v28 - 96) = v32;
          *(_QWORD *)(v28 - 88) = *(_QWORD *)(v26 - 88);
          *(_QWORD *)(v28 - 80) = *(_QWORD *)(v26 - 80);
        }
        else
        {
          *(_QWORD *)(v28 - 96) = v32;
          v34 = *(_QWORD *)(v28 - 80);
          *(_QWORD *)(v28 - 88) = *(_QWORD *)(v26 - 88);
          *(_QWORD *)(v28 - 80) = *(_QWORD *)(v26 - 80);
          if ( v33 )
          {
            *(_QWORD *)(v26 - 96) = v33;
            *(_QWORD *)(v26 - 80) = v34;
            goto LABEL_28;
          }
        }
        *(_QWORD *)(v26 - 96) = v26 - 80;
        v33 = (_BYTE *)(v26 - 80);
      }
LABEL_28:
      *(_QWORD *)(v26 - 88) = 0;
      *v33 = 0;
      v35 = *(const void **)(v26 - 64);
      v36 = *(_BYTE **)(v28 - 64);
      if ( v35 == (const void *)(v26 - 48) )
      {
        v41 = *(_QWORD *)(v26 - 56);
        if ( v41 )
        {
          if ( v41 == 1 )
            *v36 = *(_BYTE *)(v26 - 48);
          else
            memcpy(v36, v35, v41);
          v41 = *(_QWORD *)(v26 - 56);
          v36 = *(_BYTE **)(v28 - 64);
        }
        *(_QWORD *)(v28 - 56) = v41;
        v36[v41] = 0;
        v36 = *(_BYTE **)(v26 - 64);
      }
      else
      {
        if ( v36 == (_BYTE *)(v28 - 48) )
        {
          *(_QWORD *)(v28 - 64) = v35;
          *(_QWORD *)(v28 - 56) = *(_QWORD *)(v26 - 56);
          *(_QWORD *)(v28 - 48) = *(_QWORD *)(v26 - 48);
        }
        else
        {
          *(_QWORD *)(v28 - 64) = v35;
          v37 = *(_QWORD *)(v28 - 48);
          *(_QWORD *)(v28 - 56) = *(_QWORD *)(v26 - 56);
          *(_QWORD *)(v28 - 48) = *(_QWORD *)(v26 - 48);
          if ( v36 )
          {
            *(_QWORD *)(v26 - 64) = v36;
            *(_QWORD *)(v26 - 48) = v37;
            goto LABEL_32;
          }
        }
        *(_QWORD *)(v26 - 64) = v26 - 48;
        v36 = (_BYTE *)(v26 - 48);
      }
LABEL_32:
      *(_QWORD *)(v26 - 56) = 0;
      v9 = v25;
      *v36 = 0;
      sub_A0AAD0(v51, (_QWORD *)(v27 + 144));
      v51 = v27 + 144;
      v24 = (_DWORD *)(v26 - 176);
      if ( a2 >= v25 )
        break;
      v25 = (v25 - 1) / 2;
    }
  }
  sub_1214A30(v24, (__int64)v63);
  sub_A0AAD0(v51, &s2);
  if ( s2 != v71 )
    operator delete(s2);
  sub_1213F50((__int64)v63);
}
