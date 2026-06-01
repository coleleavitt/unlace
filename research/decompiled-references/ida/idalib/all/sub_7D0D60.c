char __fastcall sub_7D0D60(__int64 a1, __int64 a2, const char *a3, const char *a4, __int64 a5, __int64 *a6)
{
  const char *v9; // rbx
  char result; // al
  __int64 v12; // rax
  size_t v13; // rdx
  unsigned __int64 v14; // rax
  _BYTE *v15; // rsi
  size_t v16; // rdx
  __int64 v17; // r9
  size_t v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  size_t v21; // rax
  size_t v22; // r8
  size_t v23; // r9
  _BYTE *v24; // rsi
  size_t v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // r8
  _BYTE *v29; // rsi
  __int64 v30; // rbx
  size_t v31; // rax
  size_t v32; // r13
  size_t v33; // r8
  _BYTE *v34; // rsi
  size_t v35; // rdx
  const char *v36; // rcx
  int v37; // ebx
  const void *v38; // r12
  size_t v39; // rax
  size_t v40; // r15
  void *v41; // rax
  const void *v42; // rsi
  void *v43; // rdi
  size_t v44; // r13
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-A8h]
  size_t v47; // [rsp+8h] [rbp-A8h]
  size_t n; // [rsp+10h] [rbp-A0h]
  size_t nc; // [rsp+10h] [rbp-A0h]
  size_t na; // [rsp+10h] [rbp-A0h]
  size_t nb; // [rsp+10h] [rbp-A0h]
  size_t v52; // [rsp+18h] [rbp-98h]
  size_t v53; // [rsp+18h] [rbp-98h]
  size_t v54; // [rsp+18h] [rbp-98h]
  size_t v55; // [rsp+18h] [rbp-98h]
  size_t v56; // [rsp+18h] [rbp-98h]
  __int64 v57; // [rsp+20h] [rbp-90h]
  char v58; // [rsp+28h] [rbp-88h]
  __int64 v59; // [rsp+38h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-70h] BYREF
  __int128 v61; // [rsp+48h] [rbp-68h]
  void *dest; // [rsp+60h] [rbp-50h] BYREF
  __int128 v63; // [rsp+68h] [rbp-48h]
  unsigned __int64 v64; // [rsp+78h] [rbp-38h]

  v9 = (const char *)a2;
  v64 = __readfsqword(0x28u);
  result = sub_7D0870(a1, a6);
  if ( !result )
    return result;
  v12 = sub_7D0910(a1, a2, (__int64)a3, (__int64)a4);
  v13 = *(_QWORD *)(a5 + 8);
  ptr = nullptr;
  v57 = v12;
  v61 = 0;
  if ( !v13 )
  {
    LOBYTE(dest) = 0;
    v14 = 1;
    v15 = nullptr;
LABEL_5:
    ptr = (void *)qvector_reserve(&ptr, v15, v14, 1);
    v16 = v61;
    v15 = ptr;
    goto LABEL_6;
  }
  v56 = v13;
  v41 = (void *)qalloc_or_throw(v13);
  v42 = *(const void **)a5;
  ptr = v41;
  *((_QWORD *)&v61 + 1) = v56;
  memcpy(v41, v42, v56);
  v16 = v56;
  v15 = ptr;
  LOBYTE(dest) = 0;
  *(_QWORD *)&v61 = v56;
  v14 = v56 + 1;
  if ( &dest < ptr || &dest >= (void **)((char *)ptr + *((_QWORD *)&v61 + 1)) )
  {
    if ( *((_QWORD *)&v61 + 1) < v14 )
      goto LABEL_5;
  }
  else if ( *((_QWORD *)&v61 + 1) < v14 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v56 + 1, 1);
    v16 = v61;
    v15 = ptr;
  }
LABEL_6:
  v15[v16] = 0;
  v59 = 0;
  *(_QWORD *)&v61 = v61 + 1;
  dest = nullptr;
  v63 = 0;
  if ( !v9 )
  {
    v17 = 1;
    v18 = 0;
    v19 = 2;
LABEL_39:
    v46 = v17;
    nc = v18;
    v53 = v19;
    dest = (void *)qvector_reserve(&dest, v9, v19, 1);
    v17 = v46;
    v9 = (const char *)dest;
    v18 = nc;
    v19 = v53;
    goto LABEL_10;
  }
  n = strlen(v9);
  dest = (void *)qvector_reserve(&dest, 0, n + 1, 1);
  *(_QWORD *)&v63 = n + 1;
  *((_BYTE *)dest + n) = 0;
  memmove(dest, v9, n);
  v17 = v63;
  v9 = (const char *)dest;
  if ( (_QWORD)v63 )
  {
    v18 = v63 - 1;
    v19 = v63 + 1;
  }
  else
  {
    v18 = 0;
    v19 = 2;
    v17 = 1;
  }
  if ( *((_QWORD *)&v63 + 1) < v19 )
    goto LABEL_39;
LABEL_10:
  *(_QWORD *)&v63 = v19;
  v9[v17] = 0;
  *((_BYTE *)dest + v18) = 64;
  if ( a3 )
  {
    v20 = v63;
    v21 = strlen(a3);
    v22 = v21;
    v23 = v21;
    if ( v20 )
    {
      --v20;
      v23 = v21 + v20;
    }
    v24 = dest;
    v25 = v23 + 1;
    if ( *((_QWORD *)&v63 + 1) < v23 + 1 )
    {
      v47 = v21;
      na = v23;
      v54 = v23 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v25, 1);
      v22 = v47;
      v24 = dest;
      v23 = na;
      v25 = v54;
    }
    *(_QWORD *)&v63 = v25;
    v24[v23] = 0;
    memmove((char *)dest + v20, a3, v22);
  }
  v26 = v63;
  if ( !(_QWORD)v63 )
  {
    v29 = dest;
    v27 = 2;
    v28 = 1;
    if ( *((_QWORD *)&v63 + 1) >= 2u )
      goto LABEL_18;
LABEL_37:
    v52 = v28;
    dest = (void *)qvector_reserve(&dest, v29, v27, 1);
    v28 = v52;
    v29 = dest;
    goto LABEL_18;
  }
  v27 = v63 + 1;
  v28 = v63;
  v29 = dest;
  v26 = v63 - 1;
  if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
    goto LABEL_37;
LABEL_18:
  *(_QWORD *)&v63 = v27;
  v29[v28] = 0;
  *((_BYTE *)dest + v26) = 47;
  if ( a4 )
  {
    v30 = v63;
    v31 = strlen(a4);
    v32 = v31;
    v33 = v31;
    if ( v30 )
    {
      --v30;
      v33 = v31 + v30;
    }
    v34 = dest;
    v35 = v33 + 1;
    if ( *((_QWORD *)&v63 + 1) < v33 + 1 )
    {
      nb = v33;
      v55 = v33 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v35, 1);
      v33 = nb;
      v34 = dest;
      v35 = v55;
    }
    *(_QWORD *)&v63 = v35;
    v34[v33] = 0;
    memmove((char *)dest + v30, a4, v32);
  }
  v36 = haystack;
  if ( (_QWORD)v63 )
    v36 = (const char *)dest;
  v37 = (*(__int64 (__fastcall **)(char **, __int64, _QWORD, const char *, void *, _QWORD, __int64 *))(a1 + 72))(
          &off_2B3AC60,
          v57,
          0,
          v36,
          ptr,
          0,
          &v59);
  (*(void (__fastcall **)(__int64))(a1 + 152))(v57);
  if ( !v37 && a6 && v59 )
  {
    v38 = *(const void **)(v59 + 8);
    if ( v38 && (v39 = strlen(*(const char **)(v59 + 8)), (v40 = v39) != 0) )
    {
      v43 = (void *)*a6;
      v44 = v39 + 1;
      if ( a6[2] < v39 + 1 )
      {
        v45 = qvector_reserve(a6, *a6, v39 + 1, 1);
        *a6 = v45;
        v43 = (void *)v45;
      }
      a6[1] = v44;
      memmove(v43, v38, v40);
      *(_BYTE *)(*a6 + v40) = 0;
    }
    else
    {
      a6[1] = 0;
    }
  }
  result = v37 != 0;
  if ( dest )
  {
    *(_QWORD *)&v63 = 0;
    qfree(dest);
    result = v37 != 0;
  }
  if ( ptr )
  {
    v58 = result;
    *(_QWORD *)&v61 = 0;
    qfree(ptr);
    return v58;
  }
  return result;
}
