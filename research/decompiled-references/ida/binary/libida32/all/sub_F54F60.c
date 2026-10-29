void __fastcall sub_F54F60(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int8 v9; // al
  char v10; // r13
  __int64 v11; // rdx
  int v12; // eax
  char *v13; // rax
  size_t v14; // rdx
  _BYTE *v15; // rax
  __int64 (*v16)(); // rcx
  unsigned __int64 v17; // rcx
  const __m128i *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  const __m128i **v21; // rdx
  __int8 v22; // dl
  bool v23; // r13
  unsigned int *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // eax
  char *v36; // rax
  size_t v37; // rdx
  __int64 v38; // rax
  char *v39; // r13
  size_t v40; // rax
  size_t v41; // r15
  size_t v42; // rax
  _QWORD *(__fastcall ***v43)(void **, __int64, unsigned __int8 *, signed __int64); // rsi
  _QWORD *(__fastcall *v44)(void **, __int64, unsigned __int8 *, signed __int64); // rax
  void *v45; // r15
  size_t v46; // r13
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  _BYTE *v50; // rdx
  __int64 v51; // rax
  _BYTE *v52; // rdx
  int v53; // eax
  _BYTE *v54; // rdx
  int v55; // ecx
  unsigned __int64 v56; // rdx
  _BYTE *v57; // rdi
  char *s; // [rsp+10h] [rbp-4A8h] BYREF
  unsigned int v59; // [rsp+1Ch] [rbp-49Ch]
  unsigned int v60; // [rsp+20h] [rbp-498h]
  void *src; // [rsp+30h] [rbp-488h] BYREF
  size_t n; // [rsp+38h] [rbp-480h]
  _BYTE v63[16]; // [rsp+40h] [rbp-478h] BYREF
  __int16 v64; // [rsp+50h] [rbp-468h]
  _BYTE ptr[24]; // [rsp+60h] [rbp-458h] BYREF
  _BYTE v66[1088]; // [rsp+78h] [rbp-440h] BYREF

  v9 = a1->m128i_i8[1];
  if ( (v9 & 4) == 0 )
  {
    v10 = 0;
    if ( (v9 & 2) == 0 )
    {
      v11 = *(_QWORD *)(a2 + 120);
      if ( (v11 & 4) != 0 || (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v12 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
        v13 = sub_F34900(v12);
        sub_9717A0(a3, v13, v14);
        v15 = *(_BYTE **)(a3 + 32);
        v10 = 1;
        if ( *(_QWORD *)(a3 + 24) <= (unsigned __int64)v15 )
        {
          sub_2257CD0(a3, 32);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v15 + 1;
          *v15 = 32;
        }
        v9 = a1->m128i_i8[1];
      }
    }
    v16 = *(__int64 (**)())(a2 + 40);
    if ( (v9 & 8) != 0 )
    {
      if ( ((unsigned __int8)v16 & 7) != 0 )
        goto LABEL_29;
    }
    else
    {
      v26 = (unsigned __int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        sub_F4CAA0(a1, *v26, a3, v16, a5, a6);
      else
        sub_F4CAA0(a1, (unsigned __int64)v26, a3, v16, a5, a6);
      v16 = *(__int64 (**)())(a2 + 40);
      if ( ((unsigned __int8)v16 & 7) != 0 )
        goto LABEL_29;
    }
    v17 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 )
    {
      sub_9717A0(a3, (const void *)(*(_QWORD *)(v17 + 16) + 16LL), **(unsigned int **)(v17 + 16));
      goto LABEL_12;
    }
LABEL_29:
    v27 = *(_QWORD *)(a2 + 120);
    if ( (v27 & 4) == 0 )
    {
      v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 40);
        if ( (v29 & 7) != 0 )
          BUG();
        sub_9717A0(
          a3,
          (const void *)(*(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL),
          **(unsigned int **)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 16));
LABEL_12:
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 <= 1 )
        {
          v18 = nullptr;
          v19 = *(_QWORD *)(sub_B9B550(a2) + 56);
          v20 = *(_QWORD *)(a2 + 160);
          if ( v20 )
          {
            v21 = (const __m128i **)(v20 & 0xFFFFFFFFFFFFFFF8LL);
            v18 = (const __m128i *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v20 & 4) != 0 )
            {
              v18 = nullptr;
              if ( v21 )
                v18 = *v21;
            }
          }
          v22 = a1->m128i_i8[2];
          v23 = (v22 & 8) != 0;
          if ( (v22 & 0x10) == 0 )
            a1->m128i_i8[2] = v22 & 0xF7;
          if ( v18 && (a1->m128i_i8[5] & 1) == 0 )
          {
            v56 = v18->m128i_u32[2];
            *(__m128i *)ptr = _mm_load_si128(a1);
            ptr[1] &= ~8u;
            sub_F548D0(a3, v18 + 1, v56, (const __m128i *)ptr, v19);
          }
          else
          {
            v24 = *(unsigned int **)(a2 + 168);
            v25 = *v24;
            *(__m128i *)ptr = _mm_load_si128(a1);
            ptr[1] &= ~8u;
            sub_F4B8B0(a3, (const __m128i *)(v24 + 2), v25, (const __m128i *)ptr, v19, 0, 0);
          }
          a1->m128i_i8[2] = (8 * v23) | a1->m128i_i8[2] & 0xF7;
        }
        if ( !a1[1].m128i_i8[4] )
          goto LABEL_24;
        return;
      }
    }
    v30 = (a1->m128i_i8[4] & 0x10) == 0 ? 40 : 96;
    v31 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v31 >= *(_QWORD *)(a3 + 24) )
    {
      sub_2257CD0(a3, (a1->m128i_i8[4] & 0x10) == 0 ? 40 : 96);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v31 + 1;
      *v31 = v30;
    }
    v32 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v32 - 59) > 2 )
    {
      if ( (unsigned int)(v32 - 58) > 3 )
        goto LABEL_39;
    }
    else
    {
      v33 = *(_QWORD *)(a2 + 128);
      if ( v33 && (*(_BYTE *)(v33 + 10) & 0x20) != 0 )
      {
        sub_971800(a3, "lambda");
        if ( (a1->m128i_i8[2] & 4) == 0 )
          goto LABEL_63;
        goto LABEL_43;
      }
    }
    if ( (*(_BYTE *)(a2 + 75) & 1) != 0 )
    {
      sub_971800(a3, "anonymous");
      goto LABEL_40;
    }
LABEL_39:
    sub_971800(a3, "unnamed");
LABEL_40:
    if ( (a1->m128i_i8[2] & 4) == 0 )
      goto LABEL_63;
    if ( !v10 )
    {
      v34 = sub_971800(a3, " ");
      v35 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
      v36 = sub_F34900(v35);
      sub_9717A0(v34, v36, v37);
    }
LABEL_43:
    v38 = sub_B685F0(a2);
    sub_FFEBC0(&s, *(_QWORD *)(v38 + 2312), *(unsigned int *)(a2 + 24), 1);
    v39 = s;
    if ( s )
    {
      sub_971800(a3, " at ");
      v40 = j__strlen(v39);
      v41 = v40;
      *(_QWORD *)ptr = v66;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_2384CF0);
      if ( v40 > 0x400 )
      {
        sub_22130D0(ptr, v66, v40, 1);
        v57 = (_BYTE *)(*(_QWORD *)&ptr[8] + *(_QWORD *)ptr);
      }
      else
      {
        v42 = 0;
        if ( !v41 )
        {
LABEL_46:
          v43 = (_QWORD *(__fastcall ***)(void **, __int64, unsigned __int8 *, signed __int64))a1->m128i_i64[1];
          *(_QWORD *)&ptr[8] = v42;
          if ( v43 )
          {
            v44 = **v43;
            if ( (char *)v44 == (char *)sub_F4AFC0 )
            {
              src = v63;
              sub_F4AD80(&src, v39, (__int64)&v39[v41]);
            }
            else
            {
              v44(&src, (__int64)v43, (unsigned __int8 *)v39, v41);
            }
            v45 = src;
            v46 = n;
            v47 = 0;
            *(_QWORD *)&ptr[8] = 0;
            if ( n > *(_QWORD *)&ptr[16] )
            {
              sub_22130D0(ptr, v66, n, 1);
              v47 = *(_QWORD *)&ptr[8];
            }
            if ( v46 )
            {
              memcpy((void *)(*(_QWORD *)ptr + v47), v45, v46);
              v47 = *(_QWORD *)&ptr[8];
            }
            v42 = v46 + v47;
            *(_QWORD *)&ptr[8] = v42;
            if ( src != v63 )
            {
              operator delete(src);
              v42 = *(_QWORD *)&ptr[8];
            }
          }
          v64 = 261;
          src = *(void **)ptr;
          n = v42;
          v48 = 0;
          if ( !(unsigned __int8)sub_22672E0(&src, 0) )
            v48 = (a1->m128i_i8[4] & 0x10) == 0 ? 1 : 3;
          sub_226B210(ptr, v48);
          v49 = sub_22581D0(a3, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
          v50 = *(_BYTE **)(v49 + 32);
          if ( (unsigned __int64)v50 >= *(_QWORD *)(v49 + 24) )
          {
            v49 = sub_2257CD0(v49, 58);
          }
          else
          {
            *(_QWORD *)(v49 + 32) = v50 + 1;
            *v50 = 58;
          }
          v51 = sub_2257BD0(v49, v59);
          v52 = *(_BYTE **)(v51 + 32);
          if ( (unsigned __int64)v52 >= *(_QWORD *)(v51 + 24) )
          {
            v51 = sub_2257CD0(v51, 58);
          }
          else
          {
            *(_QWORD *)(v51 + 32) = v52 + 1;
            *v52 = 58;
          }
          sub_2257BD0(v51, v60);
          if ( *(_BYTE **)ptr != v66 )
            free(*(void **)ptr);
          goto LABEL_63;
        }
        v57 = v66;
      }
      memcpy(v57, v39, v41);
      v42 = v41 + *(_QWORD *)&ptr[8];
      goto LABEL_46;
    }
LABEL_63:
    v53 = (a1->m128i_i8[4] & 0x10) == 0 ? 41 : 39;
    v54 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v54 >= *(_QWORD *)(a3 + 24) )
    {
      sub_2257CD0(a3, (a1->m128i_i8[4] & 0x10) == 0 ? 41 : 39);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v54 + 1;
      *v54 = v53;
    }
    goto LABEL_12;
  }
  v55 = a1[1].m128i_i32[0];
  *(__m128i *)ptr = _mm_load_si128(a1);
  ptr[1] &= ~4u;
  sub_B93BC0(a2, a3, (const __m128i *)ptr, v55, 0);
  if ( !a1[1].m128i_i8[4] )
LABEL_24:
    sub_F4ACE0(a3);
}

