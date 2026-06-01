__int64 __fastcall sub_14C1670(const __m128i *a1, __m128i a2, __m128 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int16 v5; // r14
  char v6; // al
  __int64 i; // r12
  __int64 *v8; // rdi
  unsigned __int32 v9; // ebp
  __int64 v10; // rbx
  __int8 v12; // al
  int v13; // eax
  int v14; // ecx
  __int32 v15; // r14d
  char v16; // dl
  size_t v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  size_t v20; // rax
  __int64 v21; // r13
  size_t v22; // rax
  __int64 v23; // r14
  __int64 v24; // r12
  size_t v25; // rax
  char v26; // dl
  __int64 v27; // r13
  __int64 v28; // r12
  size_t v29; // rax
  __int64 v30; // r13
  char v31; // dl
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rbx
  unsigned int v37; // r12d
  unsigned int v38; // eax
  size_t v39; // rax
  __int64 v40; // r13
  char v41; // dl
  const char *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r14
  size_t v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // eax
  unsigned __int64 v48; // rdi
  char *v49; // rdx
  char v50; // al
  __int64 v51; // rax
  __int64 *m128i_i64; // rsi
  __int64 *v53; // rdi
  void *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  void *v57; // r9
  __int16 v58; // ax
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128 *v63; // rcx
  __m128i *v64; // rax
  __int8 v65; // al
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rdx
  __int64 *v71; // rdi
  bool v72; // zf
  __int64 *v73; // rdi
  __int64 v74; // rbx
  unsigned int v75; // eax
  __int64 v76; // rbx
  unsigned int v77; // eax
  __int64 v78; // [rsp+8h] [rbp-170h]
  int v79; // [rsp+14h] [rbp-164h]
  int s1; // [rsp+18h] [rbp-160h]
  const char *s1a; // [rsp+18h] [rbp-160h]
  __int16 v82; // [rsp+20h] [rbp-158h]
  _BYTE *v83; // [rsp+20h] [rbp-158h]
  char *v84; // [rsp+28h] [rbp-150h]
  __int16 v85; // [rsp+3Eh] [rbp-13Ah] BYREF
  __m128i *v86; // [rsp+40h] [rbp-138h] BYREF
  __int8 v87; // [rsp+48h] [rbp-130h]
  const __m128i *v88; // [rsp+50h] [rbp-128h]
  int v89; // [rsp+58h] [rbp-120h]
  __int16 v90; // [rsp+5Ch] [rbp-11Ch]
  __int64 (__fastcall *v91)(__int64); // [rsp+60h] [rbp-118h]
  __int64 v92; // [rsp+68h] [rbp-110h]
  __int64 v93; // [rsp+70h] [rbp-108h]
  __m128i v94; // [rsp+80h] [rbp-F8h] BYREF
  const __m128i *v95; // [rsp+90h] [rbp-E8h]
  int v96; // [rsp+98h] [rbp-E0h]
  __int16 v97; // [rsp+9Ch] [rbp-DCh]
  __int64 (__fastcall *v98)(__int64); // [rsp+A0h] [rbp-D8h]
  __int64 v99; // [rsp+A8h] [rbp-D0h]
  __int64 v100; // [rsp+B0h] [rbp-C8h]
  void *ptr; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-A0h]
  _BYTE v103[152]; // [rsp+E0h] [rbp-98h] BYREF

  v4 = a1[2].m128i_u16[0];
  v5 = v4;
  v6 = sub_141A630(v4);
  if ( (_WORD)v4 == 1 || v6 )
    goto LABEL_19;
  for ( i = a1[1].m128i_i64[1]; ; i = 0 )
  {
    v8 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v8, a1[1].m128i_i32);
    v9 = a1[2].m128i_u32[2];
    if ( a1[2].m128i_i16[0] != 22 )
    {
      v10 = 1;
      sub_1564840(&ptr, a1, &a1[1], 15);
      sub_AE9DF0((unsigned __int8 **)&ptr, i, 5u);
      sub_AE9DF0((unsigned __int8 **)&ptr, 22, 4u);
      sub_AEA040((__int64)&ptr);
      return v10;
    }
    v12 = a1[122].m128i_i8[0];
    v88 = a1;
    a1[122].m128i_i8[0] = 1;
    v90 = 63;
    v87 = v12;
    v86 = (__m128i *)&a1[122];
    v89 = 1507350;
    v91 = sub_146A990;
    v92 = 0;
    v93 = 0;
    sub_149FA40((__int64)&v86);
    if ( v5 > 0xC6u )
      break;
    if ( v5 >= 0xC0u )
    {
      if ( a1[2].m128i_i16[0] == 23 )
      {
        v36 = a1[6].m128i_i64[0];
        v37 = dword_2617A20[(unsigned __int16)(v5 - 192)];
        v38 = sub_146A990((__int64)a1);
        v34 = sub_18C92B0(v36, v37, v9, v38);
        goto LABEL_37;
      }
      goto LABEL_47;
    }
    if ( v5 == 190 )
    {
      v19 = sub_14BDAD0((__int64)a1, 0, a2);
      if ( v19 != 1 )
      {
        v20 = j__strlen(&byte_22F0C30);
        if ( !(unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v20) )
        {
          v21 = sub_14BDAD0((__int64)a1, 0, a2);
          if ( v21 != 1 )
          {
            v22 = j__strlen(&byte_22F0C30);
            if ( !(unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v22) )
            {
              v23 = sub_14BDAD0((__int64)a1, 0, a2);
              if ( v23 != 1 )
              {
                if ( a1[2].m128i_i16[0] != 23 )
                {
                  v10 = 1;
                  sub_1564840(&ptr, a1, &a1[1], 14);
                  sub_AE9DF0((unsigned __int8 **)&ptr, 23, 4u);
                  sub_AEA040((__int64)&ptr);
                  goto LABEL_41;
                }
                v76 = a1[6].m128i_i64[0];
                v77 = sub_146A990((__int64)a1);
                v34 = sub_1915C80(
                        v76,
                        v9,
                        v19 & 0xFFFFFFFFFFFFFFFELL,
                        v21 & 0xFFFFFFFFFFFFFFFELL,
                        v23 & 0xFFFFFFFFFFFFFFFELL,
                        v77);
                goto LABEL_37;
              }
            }
          }
        }
      }
      goto LABEL_40;
    }
    if ( v5 == 191 )
    {
      v13 = a1[1].m128i_i32[0];
      v14 = 1;
      v79 = v13;
      if ( v13 < 0 )
      {
        v42 = sub_13DC5B0(
                v13,
                *(__int64 **)(a1->m128i_i64[1] + 88),
                *(_QWORD *)(a1->m128i_i64[1] + 56),
                a2,
                *(double *)a3.m128_u64);
        v44 = v43;
        s1a = v42;
        v45 = j__strlen("offsetof");
        v14 = 1;
        if ( v45 == v44 )
        {
          v14 = 2;
          if ( v45 )
            v14 = (memcmp(s1a, "offsetof", v45) == 0) + 1;
        }
      }
      v15 = a1[127].m128i_i32[0];
      a1[127].m128i_i32[0] = v14;
      s1 = sub_1496480((__int64)a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
      if ( v16 )
      {
        v10 = 1;
        LOWORD(ptr) = 23;
        sub_15680D0(a1, &ptr, 1, 1);
        a1[127].m128i_i32[0] = v15;
        goto LABEL_41;
      }
      a1[127].m128i_i32[0] = v15;
      v17 = j__strlen(&byte_22F0C30);
      if ( !(unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v17) )
      {
        if ( a1[2].m128i_i16[0] == 5 )
        {
          v94.m128i_i64[0] = 0;
          ptr = v103;
          v102 = 0x400000000LL;
          v94.m128i_i8[8] = 0;
          v95 = nullptr;
          sub_14B7B90((__int64)&ptr, &v94);
          v48 = a1[2].m128i_u16[0];
          v82 = a1[2].m128i_i16[0];
          v49 = (char *)ptr + 24 * (unsigned int)v102 - 24;
          v49[8] = 0;
          v84 = v49;
          v50 = sub_141A630(v48);
          if ( v82 == 1 || v50 )
            v51 = 0;
          else
            v51 = a1[1].m128i_i64[1];
          *((_QWORD *)v84 + 2) = v51;
          m128i_i64 = a1[1].m128i_i64;
          v53 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v53, a1[1].m128i_i32);
          v55 = a1[2].m128i_u32[2];
          v56 = 3LL * (unsigned int)v102;
          *((_DWORD *)ptr + 6 * (unsigned int)v102 - 5) = v55;
          v57 = ptr;
          *((_DWORD *)ptr + 6 * (unsigned int)v102 - 6) = v55;
          while ( 1 )
          {
            v58 = a1[2].m128i_i16[0];
            if ( v58 != 26 )
              break;
LABEL_69:
            v94.m128i_i64[0] = 0;
            v94.m128i_i8[8] = 0;
            v95 = nullptr;
            sub_14B7B90((__int64)&ptr, &v94);
            *((char *)ptr + 24 * (unsigned int)v102 - 16) = 0;
            v71 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v71, a1[1].m128i_i32);
            v72 = a1[2].m128i_i16[0] == 5;
            *((_DWORD *)ptr + 6 * (unsigned int)v102 - 6) = a1[2].m128i_i32[2];
            if ( !v72 )
            {
              sub_1564840(&v94, a1, &a1[1], 14);
              sub_AE9DF0((unsigned __int8 **)&v94, 5, 4u);
              v10 = 1;
              sub_AEA040((__int64)&v94);
              v94.m128i_i16[0] = 23;
              sub_15680D0(a1, &v94, 1, 1);
LABEL_73:
              if ( ptr != v103 )
                free(ptr);
              goto LABEL_41;
            }
            *((_QWORD *)ptr + 3 * (unsigned int)v102 - 1) = a1[1].m128i_i64[1];
            v73 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v73, a1[1].m128i_i32);
            v55 = a1[2].m128i_u32[2];
            m128i_i64 = (__int64 *)ptr;
            *((_DWORD *)ptr + 6 * (unsigned int)v102 - 5) = v55;
          }
          while ( v58 == 20 )
          {
            v59 = a1->m128i_i64[1];
            v60 = *(_QWORD *)(v59 + 2944);
            if ( v60 >= *(unsigned int *)(v59 + 2912) )
              v61 = sub_14180A0(v59, 1u);
            else
              v61 = *(_QWORD *)(v59 + 2904) + 24 * v60;
            if ( *(_WORD *)(v61 + 16) == 20 && (unsigned __int8)sub_147CB40((__int64)a1) )
            {
              v10 = 1;
              goto LABEL_73;
            }
            v94.m128i_i64[0] = 0;
            v94.m128i_i8[8] = 0;
            v95 = nullptr;
            v62 = (unsigned int)v102 + 1LL;
            v63 = (__m128 *)((char *)ptr + 24 * (unsigned int)v102);
            v64 = &v94;
            if ( v62 > HIDWORD(v102) )
            {
              v83 = ptr;
              if ( ptr > &v94 || v63 <= (__m128 *)&v94 )
              {
                sub_2237220(&ptr, v103, v62, 24);
                v63 = (__m128 *)((char *)ptr + 24 * (unsigned int)v102);
                v64 = &v94;
              }
              else
              {
                sub_2237220(&ptr, v103, v62, 24);
                v64 = (__m128i *)((char *)ptr + (char *)&v94 - v83);
                v63 = (__m128 *)((char *)ptr + 24 * (unsigned int)v102);
              }
            }
            a2 = _mm_loadu_si128(v64);
            *v63 = (__m128)a2;
            v63[1].m128_u64[0] = v64[1].m128i_u64[0];
            LODWORD(v102) = v102 + 1;
            *((char *)ptr + 24 * (unsigned int)v102 - 16) = 1;
            v65 = a1[122].m128i_i8[0];
            a1[122].m128i_i8[0] = 1;
            v94.m128i_i8[8] = v65;
            v94.m128i_i64[0] = (__int64)a1[122].m128i_i64;
            v95 = a1;
            v96 = 1376276;
            v97 = 63;
            v98 = sub_14789E0;
            v99 = 0;
            v100 = 0;
            sub_149FA40((__int64)&v94);
            m128i_i64 = nullptr;
            *((_DWORD *)ptr + 6 * (unsigned int)v102 - 6) = v100;
            v66 = sub_14BFC10(a1, 0, a2);
            if ( v66 == 1 )
            {
              v85 = 23;
              v10 = 1;
              sub_15680D0(a1, &v85, 1, 1);
              *(_BYTE *)v94.m128i_i64[0] = v94.m128i_i8[8];
              goto LABEL_73;
            }
            v70 = (char *)ptr + 24 * (unsigned int)v102;
            *((_QWORD *)v70 - 1) = v66 & 0xFFFFFFFFFFFFFFFELL;
            sub_14808E0((__int64)&v94, nullptr, (__int64)v70, v67, v68, v69);
            v54 = ptr;
            *((_DWORD *)ptr + 6 * (unsigned int)v102 - 5) = HIDWORD(v100);
            v55 = v94.m128i_u8[8];
            *(_BYTE *)v94.m128i_i64[0] = v94.m128i_i8[8];
            v58 = a1[2].m128i_i16[0];
            if ( v58 == 26 )
              goto LABEL_69;
          }
          if ( v58 == 23 )
          {
            sub_14808E0((__int64)&v86, m128i_i64, v55, v56, (__int64)v54, (__int64)v57);
            v34 = sub_1917340(
                    a1[6].m128i_i64[0],
                    *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                    v9,
                    v79,
                    s1,
                    HIDWORD(v93),
                    (__int64)ptr,
                    (unsigned int)v102);
          }
          else
          {
            sub_14808E0((__int64)&v86, m128i_i64, v55, v56, (__int64)v54, (__int64)v57);
            v34 = 1;
          }
          if ( ptr != v103 )
          {
            v78 = v34;
            free(ptr);
            v34 = v78;
          }
          goto LABEL_37;
        }
        sub_1564840(&ptr, a1, &a1[1], 14);
        v18 = 5;
        goto LABEL_48;
      }
LABEL_40:
      v10 = 1;
      LOWORD(ptr) = 23;
      sub_15680D0(a1, &ptr, 1, 1);
      goto LABEL_41;
    }
LABEL_19:
    ;
  }
  if ( v5 == 339 )
  {
    v35 = sub_14BDAD0((__int64)a1, 0, a2);
    if ( v35 == 1 )
      goto LABEL_40;
    v39 = j__strlen(&byte_22F0C30);
    if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v39) )
      goto LABEL_40;
    v40 = sub_1496480((__int64)a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
    if ( !v41 )
    {
      if ( a1[2].m128i_i16[0] == 23 )
      {
        v74 = a1[6].m128i_i64[0];
        v75 = sub_146A990((__int64)a1);
        v34 = sub_18D10D0(v74, v35 & 0xFFFFFFFFFFFFFFFELL, v40, v9, v75);
        goto LABEL_37;
      }
      goto LABEL_47;
    }
    goto LABEL_31;
  }
  if ( v5 == 401 )
  {
    v28 = sub_14BDAD0((__int64)a1, 0, a2);
    if ( v28 == 1 )
      goto LABEL_40;
    v29 = j__strlen(&byte_22F0C30);
    if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v29) )
      goto LABEL_40;
    v30 = sub_1496480((__int64)a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
    if ( !v31 )
    {
      if ( a1[2].m128i_i16[0] == 23 )
      {
        v32 = a1[6].m128i_i64[0];
        v33 = sub_146A990((__int64)a1);
        v34 = sub_18C2130(v32, v28 & 0xFFFFFFFFFFFFFFFELL, v30, v9, v33);
        goto LABEL_37;
      }
LABEL_47:
      sub_1564840(&ptr, a1, &a1[1], 14);
      v18 = 23;
LABEL_48:
      sub_AE9DF0((unsigned __int8 **)&ptr, v18, 4u);
      sub_AEA040((__int64)&ptr);
      LOWORD(ptr) = 23;
      sub_15680D0(a1, &ptr, 1, 1);
    }
LABEL_31:
    v10 = 1;
    goto LABEL_41;
  }
  if ( v5 != 200 )
    goto LABEL_19;
  v24 = sub_14BDAD0((__int64)a1, 0, a2);
  v25 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v25) )
  {
    LOWORD(ptr) = 23;
    sub_15680D0(a1, &ptr, 1, 1);
    sub_1496480((__int64)a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
    if ( a1[2].m128i_i16[0] == 23 )
      goto LABEL_31;
LABEL_51:
    sub_1564840(&ptr, a1, &a1[1], 14);
    sub_AE9DF0((unsigned __int8 **)&ptr, 23, 4u);
    sub_AEA040((__int64)&ptr);
    goto LABEL_31;
  }
  v27 = sub_1496480((__int64)a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
  if ( a1[2].m128i_i16[0] != 23 )
    goto LABEL_51;
  if ( v24 == 1 || v26 )
    goto LABEL_31;
  v46 = a1[6].m128i_i64[0];
  v47 = sub_146A990((__int64)a1);
  v34 = sub_191C8A0(v46, v9, v24 & 0xFFFFFFFFFFFFFFFELL, v27, v47);
LABEL_37:
  if ( v34 == 1 )
    goto LABEL_31;
  v10 = sub_14BFE70((__int64)a1, v34 & 0xFFFFFFFFFFFFFFFELL, a2);
LABEL_41:
  v86->m128i_i8[0] = v87;
  return v10;
}
