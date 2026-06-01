__int64 __fastcall sub_1EDC230(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 *v7; // rbp
  unsigned __int64 *v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 *v11; // rbp
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  char v32; // r9
  int v33; // r8d
  unsigned int v34; // eax
  int v35; // eax
  __m128i si128; // xmm0
  __int32 v37; // edx
  __int64 v38; // r14
  __int32 v39; // esi
  __int32 v40; // r9d
  char *v41; // rax
  char *v42; // rdi
  __int32 v43; // ecx
  __int32 v44; // eax
  __int32 v45; // edx
  __int64 v46; // rbp
  __int64 v47; // r12
  _QWORD *v48; // rax
  __int64 v50; // r8
  void *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // rax
  size_t v57; // r9
  __int64 v58; // rcx
  __m128i v59; // xmm1
  _QWORD *v60; // rbp
  __int64 *v61; // r15
  unsigned int v62; // eax
  size_t nb; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+10h] [rbp-78h]
  char *v68; // [rsp+18h] [rbp-70h]
  __int64 v69; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v71; // [rsp+38h] [rbp-50h]
  __int64 v72; // [rsp+48h] [rbp-40h]

  *(_QWORD *)(a1 + 128) = a2;
  sub_15F1150(a2, a1 + 24);
  v7 = *(unsigned __int64 **)(a1 + 13320);
  v8 = &v7[*(unsigned int *)(a1 + 13328)];
  while ( v8 != v7 )
  {
    v9 = *v7++;
    v10 = sub_1EDB980((_QWORD *)a1, v9, v3, v4, v5, v6);
    sub_1ED86D0(a1, (char *)v10, *(_QWORD *)(v10 + 40));
  }
  *(_DWORD *)(a1 + 13328) = 0;
  if ( *(_DWORD *)(a1 + 8152) )
  {
    v30 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(v30 + 232);
    v31 = **(_QWORD **)(a1 + 8144);
    v33 = (*(_WORD *)(v4 + 206) >> 7) & 3;
    if ( v33 == 3 )
      v33 = 2;
    v32 = *(_BYTE *)(v4 + 46);
    v34 = v33
        | (((v32 & 8) != 0) << 14)
        | (((v32 & 4) != 0) << 13)
        | (((v32 & 2) != 0) << 12)
        | (8 * *(unsigned __int8 *)(v4 + 45)) & 0x400
        | (((*(_BYTE *)(v4 + 45) & 0x40) != 0) << 9)
        | (4 * ((unsigned int)*(char *)(v4 + 106) >> 31))
        | ((v32 & 1) << 11)
        | (((*(_BYTE *)(v4 + 207) >> 1) & 3) << 6);
    v6 = v33 & 3;
    v5 = v34 | 0x38;
    if ( (_DWORD)v6 == 1 && (v34 & 4) != 0 )
    {
      v62 = v34 | 0x138;
      v6 = (unsigned __int8)v5 >> 6;
      if ( (_DWORD)v6 == 2 )
        v5 = v62;
    }
    v35 = v5 | ((*(_BYTE *)(v4 + 202) & 7) << 22);
    v3 = v35 ^ (unsigned int)HIDWORD(**(_QWORD **)(a1 + 8144));
    *(_DWORD *)(v30 + 224) = v3 & v31 ^ v35;
  }
  v11 = *(unsigned __int64 **)(a1 + 9096);
  v12 = &v11[*(unsigned int *)(a1 + 9104)];
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      v18 = sub_1EDB980((_QWORD *)a1, *v11, v3, v4, v5, v6);
      v20 = *(_QWORD *)(a1 + 128);
      v21 = v18;
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 <= 5 )
        break;
      v26 = *(_QWORD **)(v18 + 96);
      if ( !v26 )
        goto LABEL_23;
      v27 = *v26 & 0xFFFFFFFFFFFFFFF0LL;
      v17 = *(_QWORD *)v27;
      if ( *(_BYTE *)(*(_QWORD *)v27 + 16LL) != 26 )
        goto LABEL_21;
LABEL_9:
      sub_A5DD60(&ptr, v17);
LABEL_10:
      ++v11;
      sub_19EC290(v20, v21, (unsigned __int8 **)&ptr);
      if ( v12 == v11 )
        goto LABEL_31;
    }
    v19 = *(_QWORD *)(v18 + 112);
    v22 = *(_QWORD *)(v19 + 104);
    v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v22 & 1) == 0 )
    {
      v13 = v22 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v22 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v14 = v22 & 2;
        v15 = v13;
        if ( !(_DWORD)v14 )
          goto LABEL_8;
        v28 = v19 & 0xFFFFFFFFFFFFFFFBLL;
        n = *(_QWORD *)(v13 + 18360);
        if ( n )
        {
          v66 = v19;
          v29 = sub_1EC2080((__int64 *)(v13 + 2352), 24, 3u);
          v19 = v66;
          *(_DWORD *)(v29 + 8) = 0;
          *(_QWORD *)v29 = n;
          *(_QWORD *)(v29 + 16) = v66;
          v28 = v29 | 4;
        }
        v23 = v28 & 0xFFFFFFFFFFFFFFFELL;
        v22 = v23 | 1;
        *(_QWORD *)(v19 + 104) = v23 | 1;
      }
    }
    v14 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v14;
    if ( v23 )
    {
      if ( (v23 & 4) != 0 )
      {
        v15 = 0;
        if ( v14 )
        {
          v24 = *(_QWORD *)v14;
          v25 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
          if ( *(_DWORD *)(v14 + 8) != v25 )
          {
            *(_DWORD *)(v14 + 8) = v25;
            nb = v14;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v19);
            v14 = nb;
          }
          v15 = *(_QWORD *)(v14 + 16);
        }
      }
    }
LABEL_8:
    v16 = *(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *(_QWORD *)v16;
    if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) == 26 )
      goto LABEL_9;
LABEL_21:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
      || (v17 = sub_F63050(v17, v17, v14, v19)) == 0 )
    {
LABEL_23:
      ptr = nullptr;
      v71 = 0u;
      v72 = 0;
      goto LABEL_10;
    }
    goto LABEL_9;
  }
LABEL_31:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  v37 = *(_DWORD *)(a1 + 8548);
  *(_DWORD *)(a1 + 9104) = 0;
  ptr = nullptr;
  v38 = *(_QWORD *)(a1 + 128);
  v71 = si128;
  if ( v37 )
  {
    sub_2244BF0(&ptr, *(unsigned int *)(a1 + 8544));
    v51 = ptr;
    v52 = *(_QWORD *)(a1 + 8536);
    v40 = *(_DWORD *)(a1 + 8548);
    v39 = *(_DWORD *)(a1 + 8552);
    v68 = (char *)ptr;
    v37 = v71.m128i_i32[0];
    v53 = 8LL * v71.m128i_u32[0] + 8;
    *(__int64 *)((char *)v71.m128i_i64 + 4) = __PAIR64__(v39, v40);
    if ( !v71.m128i_i32[0] )
    {
      v41 = (char *)ptr;
      goto LABEL_33;
    }
    v54 = v52;
    v55 = 0;
    v67 = 8LL * (unsigned int)(v71.m128i_i32[0] - 1);
    v41 = (char *)ptr;
    while ( 1 )
    {
      v60 = *(_QWORD **)(v54 + v55);
      v61 = (__int64 *)&v41[v55];
      if ( !v60 || v60 == (_QWORD *)-8LL )
      {
        *v61 = (__int64)v60;
        v53 += 4;
        if ( v55 == v67 )
          goto LABEL_50;
      }
      else
      {
        na = *v60;
        v56 = sub_22300B0(*v60 + 33LL, 8, v54, v51, v50, *v60);
        v57 = na;
        v58 = v56;
        if ( na )
        {
          v69 = v56;
          memcpy((void *)(v56 + 32), v60 + 4, na);
          v58 = v69;
          v57 = na;
        }
        *(_BYTE *)(v58 + v57 + 32) = 0;
        v59 = _mm_loadu_si128((const __m128i *)(v60 + 1));
        *(_QWORD *)v58 = v57;
        *(__m128i *)(v58 + 8) = v59;
        *(_DWORD *)(v58 + 24) = *((_DWORD *)v60 + 6);
        *v61 = v58;
        v51 = v68;
        *(_DWORD *)&v68[v53] = *(_DWORD *)(v52 + v53);
        v41 = (char *)ptr;
        v53 += 4;
        if ( v55 == v67 )
        {
LABEL_50:
          v37 = v71.m128i_i32[0];
          v40 = v71.m128i_i32[1];
          v39 = v71.m128i_i32[2];
          goto LABEL_33;
        }
      }
      v54 = *(_QWORD *)(a1 + 8536);
      v55 += 8;
    }
  }
  v39 = 0;
  v40 = 0;
  v41 = nullptr;
LABEL_33:
  v42 = *(char **)(v38 + 200);
  v43 = *(_DWORD *)(v38 + 208);
  *(_QWORD *)(v38 + 200) = v41;
  ptr = v42;
  *(_DWORD *)(v38 + 208) = v37;
  v71.m128i_i32[0] = v43;
  v44 = *(_DWORD *)(v38 + 212);
  *(_DWORD *)(v38 + 212) = v40;
  v71.m128i_i32[1] = v44;
  v45 = *(_DWORD *)(v38 + 216);
  *(_DWORD *)(v38 + 216) = v39;
  v71.m128i_i32[2] = v45;
  if ( v44 && v43 )
  {
    v46 = 0;
    v47 = 8LL * (unsigned int)(v43 - 1) + 8;
    do
    {
      v48 = *(_QWORD **)&v42[v46];
      if ( v48 && v48 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v42[v46], *v48 + 33LL, 8);
        v42 = (char *)ptr;
      }
      v46 += 8;
    }
    while ( v46 != v47 );
  }
  free(v42);
  return sub_1ECD650(a1);
}
