__int64 __fastcall sub_61BEB0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v8)(__int64); // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 (__fastcall *v11)(__int64, unsigned __int64, int); // rax
  const void *v12; // r14
  const char **v13; // rbp
  __int64 v14; // r13
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r8
  __int64 v18; // rsi
  size_t v19; // rdx
  const void *v20; // rsi
  unsigned __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rsi
  const char *v24; // r14
  __int64 v25; // r13
  size_t v26; // rax
  size_t v27; // r15
  size_t v28; // r8
  __int64 v29; // rsi
  size_t v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  const char *v35; // rsi
  unsigned __int64 v36; // rbp
  size_t v37; // r13
  __int64 v38; // r12
  size_t v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // [rsp+0h] [rbp-88h]
  size_t v47; // [rsp+0h] [rbp-88h]
  size_t v48; // [rsp+8h] [rbp-80h]
  size_t v49; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v51; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v53; // [rsp+38h] [rbp-50h]
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v8 == sub_3D58E0 )
    v9 = (unsigned __int64 *)(a2 + 16);
  else
    v9 = (unsigned __int64 *)v8(a2);
  if ( a3 < *v9 || a3 >= v9[1] )
    return a1;
  v11 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v11 == sub_60D370 )
  {
    if ( a3 >= *(_QWORD *)(a2 + 120) )
      return a1;
  }
  else if ( a3 != v11(a2, a3, 0) )
  {
    return a1;
  }
  v12 = *(const void **)(a2 + 104);
  v13 = (const char **)(*(_QWORD *)(a2 + 112) + (a3 << 6));
  if ( v12 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = strlen(*(const char **)(a2 + 104));
    v16 = v15;
    v17 = v15;
    if ( v14 )
    {
      --v14;
      v17 = v15 + v14;
    }
    v18 = *(_QWORD *)a1;
    v19 = v17 + 1;
    if ( *(_QWORD *)(a1 + 16) < v17 + 1 )
    {
      v48 = v17;
      v46 = v17 + 1;
      v43 = qvector_reserve(a1, v18, v19, 1);
      v17 = v48;
      v19 = v46;
      *(_QWORD *)a1 = v43;
      v18 = v43;
    }
    *(_QWORD *)(a1 + 8) = v19;
    *(_BYTE *)(v18 + v17) = 0;
    v20 = v12;
    v21 = 2;
    memmove((void *)(v14 + *(_QWORD *)a1), v20, v16);
    v22 = *(_QWORD *)(a1 + 8);
    if ( v22 )
      v21 = v22-- + 1;
    v23 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v21 )
    {
      v42 = qvector_reserve(a1, v23, v21, 1);
      *(_QWORD *)a1 = v42;
      v23 = v42;
    }
    *(_QWORD *)(a1 + 8) = v21;
    *(_BYTE *)(v23 + v22) = 46;
    *(_BYTE *)(*(_QWORD *)a1 + v22 + 1) = 0;
  }
  v24 = *v13;
  if ( *v13 )
  {
    v25 = *(_QWORD *)(a1 + 8);
    v26 = strlen(*v13);
    v27 = v26;
    v28 = v26;
    if ( v25 )
    {
      --v25;
      v28 = v26 + v25;
    }
    v29 = *(_QWORD *)a1;
    v30 = v28 + 1;
    if ( *(_QWORD *)(a1 + 16) < v28 + 1 )
    {
      v49 = v28;
      v47 = v28 + 1;
      v44 = qvector_reserve(a1, v29, v30, 1);
      v28 = v49;
      v30 = v47;
      *(_QWORD *)a1 = v44;
      v29 = v44;
    }
    *(_QWORD *)(a1 + 8) = v30;
    *(_BYTE *)(v29 + v28) = 0;
    memmove((void *)(v25 + *(_QWORD *)a1), v24, v27);
  }
  v31 = *(_QWORD *)(a1 + 8);
  if ( !v31 )
  {
    v34 = *(_QWORD *)a1;
    v33 = 3;
    v32 = 2;
    if ( *(_QWORD *)(a1 + 16) >= 3u )
      goto LABEL_26;
LABEL_40:
    v41 = qvector_reserve(a1, v34, v33, 1);
    *(_QWORD *)a1 = v41;
    v34 = v41;
    goto LABEL_26;
  }
  v32 = v31 + 1;
  v33 = v31 + 2;
  v34 = *(_QWORD *)a1;
  --v31;
  if ( *(_QWORD *)(a1 + 16) < v33 )
    goto LABEL_40;
LABEL_26:
  *(_QWORD *)(a1 + 8) = v33;
  *(_BYTE *)(v34 + v32) = 0;
  *(_WORD *)(*(_QWORD *)a1 + v31) = 8250;
  sub_61B560((__int64)&ptr, a2, (__int64)v13, 1, a5, a6);
  src = nullptr;
  v35 = haystack;
  v53 = 0;
  if ( v51 )
    v35 = (const char *)ptr;
  qstr2user(&src, v35, 0xFFFFFFFFLL);
  v36 = v53;
  if ( (_QWORD)v53 )
  {
    v37 = v53 - 1;
    if ( (_QWORD)v53 != 1 )
    {
      v38 = *(_QWORD *)(a1 + 8);
      v39 = v53 - 1;
      if ( v38 )
      {
        --v38;
        v39 = v37 + v38;
        v36 = v53 + v38;
      }
      v40 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v36 )
      {
        v45 = qvector_reserve(a1, v40, v36, 1);
        *(_QWORD *)a1 = v45;
        v40 = v45;
      }
      *(_QWORD *)(a1 + 8) = v36;
      *(_BYTE *)(v40 + v39) = 0;
      memcpy((void *)(v38 + *(_QWORD *)a1), src, v37);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v53 = 0;
    qfree(src);
  }
  if ( ptr )
  {
    v51 = 0;
    qfree(ptr);
  }
  return a1;
}

