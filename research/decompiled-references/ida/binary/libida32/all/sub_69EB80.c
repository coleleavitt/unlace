unsigned __int64 __fastcall sub_69EB80(__int64 *a1, __int64 a2, __int64 *a3, const char *a4)
{
  __int64 *v5; // r12
  __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  size_t v13; // r14
  __int64 v14; // r14
  const char *v15; // r10
  size_t v16; // rax
  _BYTE *v17; // rsi
  const char *v18; // r10
  size_t v19; // r11
  size_t v20; // r9
  void *v21; // rdx
  unsigned int v22; // ecx
  const char *v23; // rdx
  const char *v24; // rsi
  char *v25; // rdi
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 *v28; // r8
  const char *v29; // r9
  unsigned int v30; // ebx
  __int64 *v31; // rcx
  __int64 v32; // r12
  size_t v33; // r14
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // ecx
  size_t v37; // rax
  size_t v38; // r12
  size_t v39; // rax
  void *v40; // rdi
  size_t v41; // r13
  __int64 v42; // rax
  const char *srca; // [rsp+0h] [rbp-88h]
  __int64 *src; // [rsp+0h] [rbp-88h]
  const char *srcb; // [rsp+0h] [rbp-88h]
  void *srcc; // [rsp+0h] [rbp-88h]
  __int64 *v47; // [rsp+8h] [rbp-80h]
  const char *v48; // [rsp+10h] [rbp-78h]
  size_t v49; // [rsp+10h] [rbp-78h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  const char *v51; // [rsp+20h] [rbp-68h]
  size_t v52; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-50h]
  unsigned __int64 v55; // [rsp+48h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( a2 != a1[1] )
    return v55 - __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 32) & 0x10) == 0 )
    return v55 - __readfsqword(0x28u);
  v5 = a1;
  if ( !(unsigned __int8)netnode_inited(a1, a2) || (*((_BYTE *)a3 + 28) & 0x2F) != 0xD )
    return v55 - __readfsqword(0x28u);
  v8 = a3[4];
  v9 = a3[1];
  v10 = 32 * a3[5];
  v11 = v8 + v10;
  if ( v9 )
  {
    v50 = v9 - 1;
    if ( v8 == v11 )
    {
      v36 = *((_DWORD *)a3 + 6);
      v27 = (const char *)*a3;
      goto LABEL_36;
    }
  }
  else
  {
    v50 = 0;
    if ( !v10 )
    {
      v36 = *((_DWORD *)a3 + 6);
      v27 = haystack;
      goto LABEL_36;
    }
  }
  v12 = a3[4];
  while ( 2 )
  {
    while ( 1 )
    {
      v22 = *(_DWORD *)(v12 + 24);
      if ( v22 != -1 )
        break;
LABEL_22:
      v12 += 32;
      if ( v11 == v12 )
        goto LABEL_34;
    }
    if ( !v9 )
    {
LABEL_9:
      ptr = nullptr;
      v54 = 0;
      if ( a4 )
      {
        v13 = strlen(a4);
        ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
        *(_QWORD *)&v54 = v13 + 1;
        memmove(ptr, a4, v13);
        *((_BYTE *)ptr + v13) = 0;
        v14 = v54;
        v15 = (const char *)(*(_QWORD *)v12 + v50);
        if ( !v15 )
        {
          v22 = *(_DWORD *)(v12 + 24);
LABEL_15:
          v23 = haystack;
          if ( v14 )
            v23 = (const char *)ptr;
          goto LABEL_17;
        }
        srca = (const char *)(*(_QWORD *)v12 + v50);
        v16 = strlen(v15);
        v17 = ptr;
        v18 = srca;
        v19 = v16;
        if ( v14 )
        {
          --v14;
          v20 = v16 + v14;
        }
        else
        {
          v20 = v16;
        }
        v21 = (void *)(v20 + 1);
        if ( *((_QWORD *)&v54 + 1) >= v20 + 1 )
        {
LABEL_14:
          *(_QWORD *)&v54 = v21;
          v17[v20] = 0;
          memmove((char *)ptr + v14, v18, v19);
          v22 = *(_DWORD *)(v12 + 24);
          v14 = v54;
          goto LABEL_15;
        }
      }
      else
      {
        v23 = haystack;
        if ( !(*(_QWORD *)v12 + v50) )
        {
LABEL_17:
          v24 = haystack;
          if ( *(_QWORD *)(v12 + 8) )
            v24 = *(const char **)v12;
          sub_69E970(v5, v24, v23, v22);
          v25 = *(char **)v12;
          v26 = *(_QWORD *)(v12 + 16);
          *(_QWORD *)v12 = ptr;
          *(_OWORD *)(v12 + 8) = v54;
          ptr = v25;
          *((_QWORD *)&v54 + 1) = v26;
          if ( v25 )
          {
            *(_QWORD *)&v54 = 0;
            qfree(v25);
          }
          v9 = a3[1];
          goto LABEL_22;
        }
        srcb = (const char *)(*(_QWORD *)v12 + v50);
        v14 = 0;
        v39 = strlen(srcb);
        v18 = srcb;
        v17 = nullptr;
        v20 = v39;
        v21 = (void *)(v39 + 1);
        v19 = v39;
      }
      v52 = v19;
      v51 = v18;
      v49 = v20;
      srcc = v21;
      ptr = (void *)qvector_reserve(&ptr, v17, v21, 1);
      v19 = v52;
      v17 = ptr;
      v18 = v51;
      v20 = v49;
      v21 = srcc;
      goto LABEL_14;
    }
    v27 = (const char *)*a3;
    v28 = a3;
    v29 = a4;
    v30 = *(_DWORD *)(v12 + 24);
    v31 = v5;
    v32 = v9;
    v33 = v9 - 1;
    do
    {
      if ( !v33 || !v27 )
      {
LABEL_42:
        v5 = v31;
        a4 = v29;
        v22 = v30;
        a3 = v28;
        goto LABEL_9;
      }
      v34 = *(_QWORD *)(v12 + 8);
      if ( !v34 )
        break;
      if ( v34 - 1 < v33 )
      {
        v12 += 32;
        if ( v12 == v11 )
        {
          v5 = v31;
          a3 = v28;
          v36 = *((_DWORD *)v28 + 6);
          a4 = v29;
          goto LABEL_36;
        }
      }
      else
      {
        v48 = v29;
        v47 = v28;
        src = v31;
        v35 = strncmp(*(const char **)v12, v27, v33);
        v31 = src;
        v28 = v47;
        v29 = v48;
        if ( !v35 )
          goto LABEL_42;
        v12 += 32;
        if ( v11 == v12 )
        {
          v9 = v32;
          a3 = v47;
          v5 = src;
          a4 = v48;
          goto LABEL_34;
        }
      }
      v30 = *(_DWORD *)(v12 + 24);
    }
    while ( v30 != -1 );
    v12 += 32;
    v9 = v32;
    a3 = v28;
    v5 = v31;
    a4 = v29;
    if ( v11 != v12 )
      continue;
    break;
  }
LABEL_34:
  v36 = *((_DWORD *)a3 + 6);
  v27 = haystack;
  if ( v9 )
    v27 = (const char *)*a3;
LABEL_36:
  sub_69E970(v5, v27, a4, v36);
  if ( a4 && (v37 = strlen(a4), (v38 = v37) != 0) )
  {
    v40 = (void *)*a3;
    v41 = v37 + 1;
    if ( a3[2] < v37 + 1 )
    {
      v42 = qvector_reserve(a3, *a3, v37 + 1, 1);
      *a3 = v42;
      v40 = (void *)v42;
    }
    a3[1] = v41;
    memmove(v40, a4, v38);
    *(_BYTE *)(*a3 + v38) = 0;
  }
  else
  {
    a3[1] = 0;
  }
  return v55 - __readfsqword(0x28u);
}

