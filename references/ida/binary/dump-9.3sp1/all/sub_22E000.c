__int64 __fastcall sub_22E000(__int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  size_t v5; // rbp
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rax
  const char *v14; // r12
  __int64 v15; // r15
  const char *v16; // r14
  char *v17; // rax
  _QWORD *v18; // rdx
  char *v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbx
  unsigned __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rsi
  char *v26; // rbx
  unsigned __int64 v27; // rbx
  size_t v28; // r14
  __int64 v29; // r12
  size_t v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  const char *v33; // rcx
  unsigned int v34; // ebx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  _BYTE *v39; // rsi
  size_t v40; // r15
  size_t v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r14
  _BYTE *v44; // rsi
  void *v45; // rax
  const void *v46; // rsi
  _DWORD *v47; // [rsp+0h] [rbp-98h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v50; // [rsp+28h] [rbp-70h]
  const char *v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = (size_t)a2[1];
  v53 = __readfsqword(0x28u);
  v50 = 0;
  src = nullptr;
  v47 = *(_DWORD **)(v4 + 1504);
  if ( !v5 )
  {
    v6 = *(_QWORD **)(a1 + 112);
    if ( v6 != *(_QWORD **)(a1 + 120) )
      goto LABEL_3;
LABEL_81:
    if ( (unsigned __int64)v50 <= 1 )
      return 0;
    goto LABEL_31;
  }
  v45 = (void *)qalloc_or_throw(v5, (__int64)a2, a3, a4);
  v46 = *a2;
  *((_QWORD *)&v50 + 1) = v5;
  src = v45;
  memcpy(v45, v46, v5);
  *(_QWORD *)&v50 = v5;
  v6 = *(_QWORD **)(a1 + 112);
  if ( v6 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_3:
      v7 = *((_DWORD *)v6 + 20);
      if ( (v7 & 2) != 0 && (v7 & 0x1018) == 0 )
        goto LABEL_22;
      v8 = *((int *)v6 + 19);
      v9 = 1;
      v10 = v6[7];
      v11 = *(_QWORD *)(a1 + 176);
      if ( (int)v8 > 0 )
        v9 = *((int *)v6 + 19);
      if ( v10 + v9 - 1 < v11 )
        goto LABEL_22;
      v12 = *(_DWORD *)(a1 + 196);
      v13 = 1;
      if ( v12 > 0 )
        v13 = *(int *)(a1 + 196);
      if ( v11 + v13 - 1 < v10 )
        goto LABEL_22;
      if ( (v7 & 0x1018) == 0 )
        break;
      if ( v11 != v10 || v12 != (_DWORD)v8 )
        goto LABEL_14;
      if ( (_DWORD)v8 != -1 )
        goto LABEL_59;
LABEL_22:
      if ( (*v6 & 2) != 0 )
      {
LABEL_25:
        if ( *(_QWORD **)(a1 + 120) == v6 )
          goto LABEL_26;
      }
      else
      {
        v18 = (_QWORD *)v6[2];
        if ( (*(_BYTE *)v18 & 2) == 0 )
        {
          do
          {
            v6 = v18;
            v18 = (_QWORD *)v18[1];
          }
          while ( (*(_BYTE *)v18 & 2) == 0 );
          goto LABEL_25;
        }
        v36 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v37 = *v36;
        if ( (*v36 & 2) == 0 )
        {
          while ( (_QWORD *)v36[2] == v6 )
          {
            v6 = v36;
            v38 = v37 & 0xFFFFFFFFFFFFFFFCLL;
            v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v37 & 2) != 0 )
            {
              v6 = (_QWORD *)v38;
              if ( *(_QWORD *)(a1 + 120) != v38 )
                goto LABEL_3;
              goto LABEL_26;
            }
            v36 = (_QWORD *)v38;
          }
        }
        v6 = v36;
        if ( *(_QWORD **)(a1 + 120) == v36 )
        {
LABEL_26:
          v5 = v50;
          goto LABEL_27;
        }
      }
    }
    if ( (_DWORD)v8 != -1 )
LABEL_59:
      v10 += v8;
    if ( v12 != -1 )
      v11 += v12;
    if ( (__int64)v11 >= (__int64)v10 )
      goto LABEL_22;
LABEL_14:
    v51 = nullptr;
    v52 = 0;
    sub_22DCC0((__int64)(v6 + 3), v47, (__int64 *)&v51);
    v14 = s1;
    if ( (_QWORD)v52 )
      v14 = v51;
    v15 = v50;
    v16 = s1;
    v48 = 0;
    if ( (_QWORD)v50 )
    {
      v16 = (const char *)src;
      v48 = v50 - 1;
    }
    v17 = strstr(v16, v14);
    if ( v17 && v17 - v16 != -1 )
    {
LABEL_20:
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree((__int64)v51);
      }
      goto LABEL_22;
    }
    if ( v14 )
    {
      v39 = src;
      v40 = strlen(v14);
      v41 = v40 + v48;
      v42 = v40 + v48 + 1;
      if ( *((_QWORD *)&v50 + 1) < v42 )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)v39, v42, 1);
        v41 = v40 + v48;
        v39 = src;
        v42 = v40 + v48 + 1;
      }
      *(_QWORD *)&v50 = v42;
      v39[v41] = 0;
      memmove((char *)src + v48, v14, v40);
      v15 = v50;
    }
    v43 = 2;
    if ( v15 )
    {
      v43 = v15 + 1;
      v44 = src;
      --v15;
      if ( *((_QWORD *)&v50 + 1) >= v43 )
        goto LABEL_70;
    }
    else
    {
      v44 = src;
      if ( *((_QWORD *)&v50 + 1) >= 2u )
      {
LABEL_70:
        *(_QWORD *)&v50 = v43;
        v44[v15] = 44;
        *((_BYTE *)src + v15 + 1) = 0;
        goto LABEL_20;
      }
    }
    src = (void *)qvector_reserve((__int64)&src, (__int64)v44, v43, 1);
    v44 = src;
    goto LABEL_70;
  }
LABEL_27:
  v19 = (char *)src;
  if ( (__int64)(v5 - 1) <= 1 )
  {
    if ( src )
    {
      *(_QWORD *)&v50 = 0;
      qfree((__int64)src);
      src = nullptr;
      *((_QWORD *)&v50 + 1) = 0;
    }
    goto LABEL_81;
  }
  if ( *((_QWORD *)&v50 + 1) < v5 - 1 )
  {
    src = (void *)qvector_reserve((__int64)&src, (__int64)src, v5 - 1, 1);
    v19 = (char *)src;
  }
  *(_QWORD *)&v50 = v5 - 1;
  v19[v5 - 2] = 0;
  if ( (unsigned __int64)v50 > 1 )
  {
LABEL_31:
    v52 = 0;
    v51 = nullptr;
    sub_22DCC0(a1 + 144, v47, (__int64 *)&v51);
    v22 = v52;
    if ( (_QWORD)v52 )
    {
      v24 = v52 + 4;
      v23 = v52 + 5;
      v22 = v52 - 1;
    }
    else
    {
      v23 = 6;
      v24 = 5;
    }
    v25 = (__int64)v51;
    if ( *((_QWORD *)&v52 + 1) < v23 )
    {
      v51 = (const char *)qvector_reserve((__int64)&v51, (__int64)v51, v23, 1);
      v25 = (__int64)v51;
    }
    *(_QWORD *)&v52 = v23;
    *(_BYTE *)(v25 + v24) = 0;
    v26 = (char *)&v51[v22];
    *(_DWORD *)v26 = 1684955424;
    v26[4] = 32;
    v27 = v50;
    if ( (_QWORD)v50 )
    {
      v28 = v50 - 1;
      if ( (_QWORD)v50 != 1 )
      {
        v29 = v52;
        v30 = v50 - 1;
        if ( (_QWORD)v52 )
        {
          v29 = v52 - 1;
          v30 = v28 + v52 - 1;
          v27 = v50 + v52 - 1;
        }
        v31 = (__int64)v51;
        if ( *((_QWORD *)&v52 + 1) < v27 )
        {
          v51 = (const char *)qvector_reserve((__int64)&v51, (__int64)v51, v27, 1);
          v31 = (__int64)v51;
        }
        *(_QWORD *)&v52 = v27;
        *(_BYTE *)(v31 + v30) = 0;
        memcpy((void *)&v51[v29], src, v28);
      }
    }
    v32 = *(_QWORD *)(a1 + 8);
    v33 = s1;
    if ( (_QWORD)v52 )
      LODWORD(v33) = (_DWORD)v51;
    sub_3311F0(v32, -1, 20, (_DWORD)v33, v20, v21);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)v51);
    }
    v34 = 1;
    goto LABEL_47;
  }
  v34 = 0;
LABEL_47:
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    qfree((__int64)src);
  }
  return v34;
}
