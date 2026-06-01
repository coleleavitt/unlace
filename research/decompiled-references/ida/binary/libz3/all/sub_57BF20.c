__int64 __fastcall sub_57BF20(__int64 a1, __int64 *a2, int a3)
{
  char **exception; // r12
  bool v7; // zf
  _QWORD *v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rax
  void *v11; // rbx
  void *v12; // rcx
  size_t v13; // rdx
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rbx
  int v22; // eax
  _DWORD *v23; // rdi
  int v24; // edx
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  char *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rdi
  char *v33; // rcx
  char *v34; // rsi
  char *v35; // rbx
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int *v41; // rsi
  _QWORD *v42; // rax
  size_t v43; // rdx
  unsigned int *v44; // r15
  unsigned int *v45; // r13
  __int64 v46; // r14
  _QWORD *v47; // rax
  __int64 *v48; // rsi
  int v49; // eax
  __int64 *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // r13
  int v54; // edx
  int v55; // eax
  _DWORD *v56; // rdi
  int v57; // edx
  __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // r8d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rsi
  unsigned int v64; // [rsp+0h] [rbp-88h]
  int v65; // [rsp+0h] [rbp-88h]
  __int64 v66; // [rsp+0h] [rbp-88h]
  unsigned int v67; // [rsp+0h] [rbp-88h]
  __int64 v68; // [rsp+0h] [rbp-88h]
  unsigned int v69; // [rsp+0h] [rbp-88h]
  __int64 v70; // [rsp+8h] [rbp-80h]
  int v71; // [rsp+8h] [rbp-80h]
  int v72; // [rsp+10h] [rbp-78h]
  unsigned int *v73; // [rsp+10h] [rbp-78h]
  void *v74; // [rsp+28h] [rbp-60h] BYREF
  void *src[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *a2 == 0;
  src[1] = nullptr;
  if ( v7 || (src[0] = nullptr, sub_52CD90(src, a2), (v8 = src[0]) == nullptr) )
  {
    v8 = nullptr;
    v74 = nullptr;
    v14 = sub_5783B0((__int64)&v74, 0);
  }
  else
  {
    v9 = *((_DWORD *)src[0] - 1);
    v64 = *((_DWORD *)src[0] - 2);
    v10 = (_QWORD *)sub_186B270(8LL * v64 + 8);
    v11 = v10;
    v12 = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(v9)).m128i_u64[0];
    v13 = 8LL * *((unsigned int *)v8 - 1);
    if ( v13 <= 8 )
    {
      if ( v13 == 8 )
        v10[1] = *v8;
    }
    else
    {
      v12 = memmove(v10 + 1, v8, v13);
    }
    v74 = v12;
    v65 = sub_5783B0((__int64)&v74, v9);
    sub_186B220(v11);
    v14 = v65;
  }
  v15 = *(unsigned int *)(a1 + 88);
  v16 = *(_QWORD *)(a1 + 80);
  v17 = v15 - 1;
  v15 *= 24;
  v18 = v16 + v15;
  v19 = 24LL * (v14 & v17);
  v20 = v16 + v19;
  if ( v19 != v15 )
  {
    v21 = v16 + v19;
    while ( 1 )
    {
      v22 = *(_DWORD *)(v21 + 4);
      if ( v22 != 2 )
      {
        if ( !v22 )
          goto LABEL_37;
        goto LABEL_9;
      }
      if ( v14 == *(_DWORD *)v21 )
        break;
LABEL_9:
      v21 += 24;
      if ( v18 == v21 )
        goto LABEL_47;
    }
    v23 = *(_DWORD **)(v21 + 8);
    if ( v23 )
    {
      v24 = *(v23 - 1);
      if ( !v8 )
      {
        v25 = 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !v8 )
      {
        v8 = (_QWORD *)v21;
        goto LABEL_18;
      }
      v24 = 0;
    }
    v25 = *((unsigned int *)v8 - 1);
LABEL_15:
    if ( (_DWORD)v25 == v24 )
    {
      v72 = v14;
      v70 = v18;
      v66 = v20;
      v26 = memcmp(v23, v8, 8 * v25);
      v20 = v66;
      v18 = v70;
      v14 = v72;
      if ( !v26 )
        goto LABEL_17;
    }
    goto LABEL_9;
  }
LABEL_47:
  if ( v16 != v20 )
  {
    while ( 1 )
    {
      v55 = *(_DWORD *)(v16 + 4);
      if ( v55 != 2 )
      {
        if ( !v55 )
          goto LABEL_37;
        goto LABEL_50;
      }
      if ( v14 == *(_DWORD *)v16 )
        break;
LABEL_50:
      v16 += 24;
      if ( v20 == v16 )
        goto LABEL_37;
    }
    v56 = *(_DWORD **)(v16 + 8);
    if ( v56 )
    {
      v57 = *(v56 - 1);
      if ( !v8 )
      {
        v58 = 0;
        goto LABEL_56;
      }
    }
    else
    {
      if ( !v8 )
      {
        v8 = (_QWORD *)v16;
        goto LABEL_18;
      }
      v57 = 0;
    }
    v58 = *((unsigned int *)v8 - 1);
LABEL_56:
    if ( (_DWORD)v58 == v57 )
    {
      v71 = v14;
      v68 = v20;
      v59 = memcmp(v56, v8, 8 * v58);
      v20 = v68;
      v14 = v71;
      if ( !v59 )
      {
        v21 = v16;
        goto LABEL_17;
      }
    }
    goto LABEL_50;
  }
LABEL_37:
  v21 = 0;
  if ( !v8 )
    goto LABEL_18;
LABEL_17:
  v27 = v8 - 1;
  v8 = (_QWORD *)v21;
  sub_186B220(v27);
LABEL_18:
  v28 = v8[2];
  v29 = *(char **)v28;
  v30 = *(unsigned int *)(v28 + 8);
  v31 = v30 - 1;
  v30 *= 24;
  v32 = 3LL * (a3 & v31);
  v33 = &v29[v30];
  v32 *= 8;
  v34 = &v29[v32];
  v35 = &v29[v32];
  if ( v32 == v30 )
  {
LABEL_39:
    while ( v34 != v29 )
    {
      v54 = *((_DWORD *)v29 + 1);
      if ( v54 == 2 )
      {
        if ( a3 == *(_DWORD *)v29 && a3 == *((_DWORD *)v29 + 2) )
        {
          v35 = v29;
          goto LABEL_25;
        }
      }
      else if ( !v54 )
      {
        break;
      }
      v29 += 24;
    }
LABEL_79:
    BUG();
  }
  while ( 1 )
  {
    v36 = *((_DWORD *)v35 + 1);
    if ( v36 != 2 )
    {
      if ( !v36 )
        goto LABEL_79;
      goto LABEL_21;
    }
    if ( a3 == *(_DWORD *)v35 && a3 == *((_DWORD *)v35 + 2) )
      break;
LABEL_21:
    v35 += 24;
    if ( v33 == v35 )
      goto LABEL_39;
  }
LABEL_25:
  v37 = *((_QWORD *)v35 + 2);
  if ( v37 )
  {
    v38 = *(unsigned int *)(v37 - 4);
    v39 = *(unsigned int *)(v37 - 8);
    v67 = v39;
    v40 = sub_186B270(4 * v39 + 8);
    v41 = *((unsigned int **)v35 + 2);
    v73 = (unsigned int *)v40;
    v42 = (_QWORD *)(v40 + 8);
    *(v42 - 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(v38)).m128i_u64[0];
    if ( v41 )
    {
      v43 = 4LL * *(v41 - 1);
      if ( v43 <= 4 )
      {
        if ( v43 == 4 )
          v73[2] = *v41;
      }
      else
      {
        memmove(v42, v41, v43);
      }
    }
    if ( (_DWORD)v38 )
    {
      v44 = v73;
      v45 = &v73[v38];
      v46 = sub_4C6F80(*(_QWORD *)(a1 + 24), a2, v73[2]);
      v47 = (_QWORD *)sub_186B270(0x18u);
      v48 = v47 + 1;
      *v47 = 2;
      v49 = 1;
      v50 = v48;
      while ( 1 )
      {
        ++v44;
        *v48 = v46;
        *((_DWORD *)v50 - 1) = v49;
        if ( v45 == v44 )
          break;
        while ( 1 )
        {
          v46 = sub_4C6F80(*(_QWORD *)(a1 + 24), a2, v44[2]);
          v51 = *((_DWORD *)v50 - 1);
          if ( v51 == *((_DWORD *)v50 - 2) )
            break;
          ++v44;
          v50[v51] = v46;
          *((_DWORD *)v50 - 1) = v51 + 1;
          if ( v45 == v44 )
            goto LABEL_34;
        }
        v60 = (3 * v51 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v61 || v51 >= v60 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)src, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, src);
          sub_233E40((__int64)src);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = (3 * v51 + 1) >> 1;
        v62 = (unsigned int *)sub_186B300(v50 - 1, v61);
        v63 = v62[1];
        v50 = (__int64 *)(v62 + 2);
        *v62 = v69;
        LODWORD(v62) = v63;
        v48 = &v50[v63];
        v49 = (_DWORD)v62 + 1;
      }
LABEL_34:
      v52 = sub_186B270(0x30u);
      sub_57BC10(v52, a1, a2, *((_DWORD *)v50 - 1), v50);
      sub_186B220(v50 - 1);
    }
    else
    {
      v52 = sub_186B270(0x30u);
      sub_57BC10(v52, a1, a2, 0, nullptr);
    }
    sub_186B220(v73);
  }
  else
  {
    v52 = sub_186B270(0x30u);
    sub_57BC10(v52, a1, a2, 0, nullptr);
  }
  return v52;
}

