__int64 __fastcall sub_57C490(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  char **exception; // r12
  char *v8; // r14
  unsigned int v9; // r15d
  int v10; // eax
  __int64 v11; // r10
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // eax
  unsigned int *v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  _QWORD *v24; // r14
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned int v28; // edx
  _QWORD *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r10
  _QWORD *v32; // r15
  int v33; // eax
  _DWORD *v34; // rdi
  int v35; // edx
  __int64 v36; // rax
  int v37; // eax
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  char *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rdi
  char *v44; // rcx
  char *v45; // rsi
  char *v46; // r14
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  _DWORD *v52; // rsi
  _QWORD *v53; // rax
  size_t v54; // rdx
  _DWORD *v55; // r14
  _DWORD *v56; // r15
  __int64 *v57; // rbx
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  __int64 v61; // r13
  unsigned int v62; // eax
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // r13
  int v68; // eax
  _DWORD *v69; // rdi
  int v70; // edx
  __int64 v71; // rax
  int v72; // eax
  int v73; // edx
  int v74; // eax
  _DWORD *v75; // rdi
  int v76; // edx
  __int64 v77; // rax
  int v78; // eax
  _QWORD *v79; // rax
  int v81; // [rsp+8h] [rbp-90h]
  __int64 v82; // [rsp+8h] [rbp-90h]
  int v83; // [rsp+8h] [rbp-90h]
  unsigned int v84; // [rsp+8h] [rbp-90h]
  unsigned int v85; // [rsp+8h] [rbp-90h]
  __int64 v86; // [rsp+8h] [rbp-90h]
  int v87; // [rsp+8h] [rbp-90h]
  __int64 v88; // [rsp+10h] [rbp-88h]
  __int64 v89; // [rsp+10h] [rbp-88h]
  int v90; // [rsp+10h] [rbp-88h]
  __int64 v91; // [rsp+10h] [rbp-88h]
  int v92; // [rsp+18h] [rbp-80h]
  _QWORD *v93; // [rsp+20h] [rbp-78h]
  _DWORD *v94; // [rsp+20h] [rbp-78h]
  __int64 v95; // [rsp+38h] [rbp-60h] BYREF
  void *s2; // [rsp+40h] [rbp-58h] BYREF
  __int64 v97; // [rsp+48h] [rbp-50h]

  if ( a4 == -1 )
  {
LABEL_56:
    v66 = sub_186B270(0x30u);
    sub_57BB50(v66, a1, a3);
    *(_BYTE *)(v66 + 28) = 0;
    return v66;
  }
  v97 = 0;
  if ( *a3 && (s2 = nullptr, sub_52CD90(&s2, a3), (v8 = (char *)s2) != nullptr) )
  {
    v9 = *((_DWORD *)s2 - 1);
    v95 = 0;
    sub_52CD90(&v95, &s2);
    v10 = sub_5783B0((__int64)&v95, v9);
    v12 = v10;
    if ( v11 )
    {
      v81 = v10;
      sub_186B220((void *)(v11 - 8));
      v12 = v81;
    }
  }
  else
  {
    v8 = nullptr;
    v95 = 0;
    v12 = sub_5783B0((__int64)&v95, 0);
  }
  v13 = *(unsigned int *)(a1 + 64);
  v14 = *(_QWORD *)(a1 + 56);
  v15 = v13 - 1;
  v13 *= 24;
  v16 = v14 + v13;
  v17 = 24LL * (v12 & v15);
  v18 = v14 + v17;
  if ( v17 == v13 )
  {
LABEL_58:
    if ( v14 == v18 )
    {
LABEL_54:
      if ( v8 )
        sub_186B220(v8 - 8);
      goto LABEL_56;
    }
    while ( 1 )
    {
      v68 = *(_DWORD *)(v14 + 4);
      if ( v68 != 2 )
      {
        if ( !v68 )
          goto LABEL_54;
        goto LABEL_61;
      }
      if ( *(_DWORD *)v14 == v12 )
        break;
LABEL_61:
      v14 += 24;
      if ( v18 == v14 )
        goto LABEL_54;
    }
    v69 = *(_DWORD **)(v14 + 8);
    if ( v69 )
    {
      v70 = *(v69 - 1);
      if ( !v8 )
      {
        v71 = 0;
        goto LABEL_67;
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_17;
      v70 = 0;
    }
    v71 = *((unsigned int *)v8 - 1);
LABEL_67:
    if ( (_DWORD)v71 == v70 )
    {
      v90 = v12;
      v86 = v14;
      v72 = memcmp(v69, v8, 8 * v71);
      v14 = v86;
      v12 = v90;
      if ( !v72 )
        goto LABEL_16;
    }
    goto LABEL_61;
  }
  v19 = v14 + v17;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v19 + 4);
    if ( v20 != 2 )
    {
      if ( !v20 )
        goto LABEL_54;
      goto LABEL_9;
    }
    if ( *(_DWORD *)v19 != v12 )
      goto LABEL_9;
    v21 = *(unsigned int **)(v19 + 8);
    if ( !v21 )
      break;
    v22 = *(v21 - 1);
    if ( v8 )
      goto LABEL_14;
    if ( !(_DWORD)v22 )
      goto LABEL_16;
LABEL_9:
    v19 += 24;
    if ( v16 == v19 )
      goto LABEL_58;
  }
  if ( !v8 )
    goto LABEL_17;
  v22 = 0;
LABEL_14:
  if ( (_DWORD)v22 != *((_DWORD *)v8 - 1) )
    goto LABEL_9;
  v92 = v12;
  v88 = v14;
  v82 = v16;
  v23 = memcmp(v21, v8, 8 * v22);
  v16 = v82;
  v14 = v88;
  v12 = v92;
  if ( v23 )
    goto LABEL_9;
LABEL_16:
  sub_186B220(v8 - 8);
LABEL_17:
  v97 = 0;
  v24 = (_QWORD *)*a3;
  if ( *a3 )
  {
    s2 = nullptr;
    sub_52CD90(&s2, a3);
    v24 = s2;
  }
  s2 = v24;
  v25 = sub_57E150(&s2);
  v26 = *(unsigned int *)(a1 + 88);
  v27 = *(_QWORD *)(a1 + 80);
  v28 = v26 - 1;
  v26 *= 24;
  v29 = (_QWORD *)(v27 + v26);
  v30 = 24LL * (v25 & v28);
  v31 = v27 + v30;
  if ( v30 != v26 )
  {
    v32 = (_QWORD *)(v27 + v30);
    while ( 1 )
    {
      v33 = *((_DWORD *)v32 + 1);
      if ( v33 != 2 )
      {
        if ( !v33 )
          goto LABEL_72;
        goto LABEL_22;
      }
      if ( v25 == *(_DWORD *)v32 )
        break;
LABEL_22:
      v32 += 3;
      if ( v29 == v32 )
        goto LABEL_82;
    }
    v34 = (_DWORD *)v32[1];
    if ( v34 )
    {
      v35 = *(v34 - 1);
      if ( v24 )
        goto LABEL_27;
      v36 = 0;
    }
    else
    {
      if ( !v24 )
      {
        v24 = v32;
        goto LABEL_31;
      }
      v35 = 0;
LABEL_27:
      v36 = *((unsigned int *)v24 - 1);
    }
    if ( (_DWORD)v36 == v35 )
    {
      v93 = v29;
      v89 = v31;
      v83 = v25;
      v37 = memcmp(v34, v24, 8 * v36);
      v25 = v83;
      v31 = v89;
      v29 = v93;
      if ( !v37 )
        goto LABEL_30;
    }
    goto LABEL_22;
  }
LABEL_82:
  if ( v27 != v31 )
  {
    while ( 1 )
    {
      v74 = *(_DWORD *)(v27 + 4);
      if ( v74 != 2 )
      {
        if ( !v74 )
          goto LABEL_72;
        goto LABEL_85;
      }
      if ( v25 == *(_DWORD *)v27 )
        break;
LABEL_85:
      v27 += 24;
      if ( v31 == v27 )
        goto LABEL_72;
    }
    v75 = *(_DWORD **)(v27 + 8);
    if ( v75 )
    {
      v76 = *(v75 - 1);
      if ( !v24 )
      {
        v77 = 0;
        goto LABEL_91;
      }
    }
    else
    {
      if ( !v24 )
      {
        v24 = (_QWORD *)v27;
        goto LABEL_31;
      }
      v76 = 0;
    }
    v77 = *((unsigned int *)v24 - 1);
LABEL_91:
    if ( (_DWORD)v77 == v76 )
    {
      v91 = v31;
      v87 = v25;
      v78 = memcmp(v75, v24, 8 * v77);
      v25 = v87;
      v31 = v91;
      if ( !v78 )
      {
        v32 = (_QWORD *)v27;
        goto LABEL_30;
      }
    }
    goto LABEL_85;
  }
LABEL_72:
  v32 = nullptr;
  if ( !v24 )
    goto LABEL_31;
LABEL_30:
  v38 = v24 - 1;
  v24 = v32;
  sub_186B220(v38);
LABEL_31:
  v39 = v24[2];
  v40 = *(char **)v39;
  v41 = *(unsigned int *)(v39 + 8);
  v42 = v41 - 1;
  v41 *= 24;
  v43 = 3LL * (a4 & v42);
  v44 = &v40[v41];
  v43 *= 8;
  v45 = &v40[v43];
  v46 = &v40[v43];
  if ( v43 == v41 )
  {
LABEL_74:
    while ( v45 != v40 )
    {
      v73 = *((_DWORD *)v40 + 1);
      if ( v73 == 2 )
      {
        if ( a4 == *(_DWORD *)v40 && a4 == *((_DWORD *)v40 + 2) )
        {
          v46 = v40;
          goto LABEL_38;
        }
      }
      else if ( !v73 )
      {
        break;
      }
      v40 += 24;
    }
LABEL_113:
    BUG();
  }
  while ( 2 )
  {
    v47 = *((_DWORD *)v46 + 1);
    if ( v47 != 2 )
    {
      if ( !v47 )
        goto LABEL_113;
LABEL_34:
      v46 += 24;
      if ( v44 == v46 )
        goto LABEL_74;
      continue;
    }
    break;
  }
  if ( a4 != *(_DWORD *)v46 || a4 != *((_DWORD *)v46 + 2) )
    goto LABEL_34;
LABEL_38:
  v48 = *((_QWORD *)v46 + 2);
  if ( v48 )
  {
    v49 = *(unsigned int *)(v48 - 4);
    v50 = *(unsigned int *)(v48 - 8);
    v84 = v50;
    v51 = sub_186B270(4 * v50 + 8);
    v52 = *((_DWORD **)v46 + 2);
    v94 = (_DWORD *)v51;
    v53 = (_QWORD *)(v51 + 8);
    *(v53 - 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v84), _mm_cvtsi32_si128(v49)).m128i_u64[0];
    if ( v52 )
    {
      v54 = 4LL * (unsigned int)*(v52 - 1);
      if ( v54 <= 4 )
      {
        if ( v54 == 4 )
          v94[2] = *v52;
      }
      else
      {
        memmove(v53, v52, v54);
      }
    }
    if ( (_DWORD)v49 )
    {
      v55 = &v94[v49];
      v56 = v94;
      v57 = nullptr;
      while ( 1 )
      {
        v61 = sub_4C6C30(*(_QWORD *)(a1 + 24), (__int64)a3, a2, v56[2]);
        if ( !v57 )
          break;
        v62 = *((_DWORD *)v57 - 1);
        if ( v62 == *((_DWORD *)v57 - 2) )
        {
          v63 = (3 * v62 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&s2, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &s2);
            sub_233E40((__int64)&s2);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = (3 * v62 + 1) >> 1;
          v65 = (unsigned int *)sub_186B300(v57 - 1, v64);
          v57 = (__int64 *)(v65 + 2);
          ++v56;
          *v65 = v85;
          LODWORD(v65) = v65[1];
          v57[(unsigned int)v65] = v61;
          *((_DWORD *)v57 - 1) = (_DWORD)v65 + 1;
          if ( v56 == v55 )
          {
LABEL_51:
            v66 = sub_186B270(0x30u);
            sub_57BC10(v66, a1, a3, *((_DWORD *)v57 - 1), v57);
            sub_186B220(v57 - 1);
            goto LABEL_52;
          }
        }
        else
        {
          v58 = v62;
          v59 = v62 + 1;
          v60 = &v57[v58];
LABEL_45:
          ++v56;
          *v60 = v61;
          *((_DWORD *)v57 - 1) = v59;
          if ( v56 == v55 )
            goto LABEL_51;
        }
      }
      v79 = (_QWORD *)sub_186B270(0x18u);
      v57 = v79 + 1;
      *v79 = 2;
      v59 = 1;
      v60 = v57;
      goto LABEL_45;
    }
    v66 = sub_186B270(0x30u);
    sub_57BC10(v66, a1, a3, 0, nullptr);
LABEL_52:
    sub_186B220(v94);
  }
  else
  {
    v66 = sub_186B270(0x30u);
    sub_57BC10(v66, a1, a3, 0, nullptr);
  }
  return v66;
}

