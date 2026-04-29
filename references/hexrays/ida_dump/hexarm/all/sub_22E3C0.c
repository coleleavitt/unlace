__int64 __fastcall sub_22E3C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rbp
  _QWORD *v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // rax
  const char *v12; // r12
  __int64 v13; // r15
  const char *v14; // r14
  char *v15; // rax
  _QWORD *v16; // rdx
  char *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  char *v24; // rbx
  unsigned __int64 v25; // rbx
  size_t v26; // r14
  __int64 v27; // r12
  size_t v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  const char *v31; // rcx
  unsigned int v32; // ebx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  _BYTE *v37; // rsi
  size_t v38; // r15
  size_t v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r14
  _BYTE *v42; // rsi
  void *v43; // rax
  const void *v44; // rsi
  _DWORD *v45; // [rsp+0h] [rbp-98h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v48; // [rsp+28h] [rbp-70h]
  const char *v49; // [rsp+40h] [rbp-58h] BYREF
  __int128 v50; // [rsp+48h] [rbp-50h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v51 = __readfsqword(0x28u);
  v48 = 0;
  src = nullptr;
  v45 = *(_DWORD **)(v2 + 1504);
  if ( !v3 )
  {
    v4 = *(_QWORD **)(a1 + 112);
    if ( v4 != *(_QWORD **)(a1 + 120) )
      goto LABEL_3;
LABEL_81:
    if ( (unsigned __int64)v48 <= 1 )
      return 0;
    goto LABEL_31;
  }
  v43 = (void *)qalloc_or_throw(v3);
  v44 = *(const void **)a2;
  *((_QWORD *)&v48 + 1) = v3;
  src = v43;
  memcpy(v43, v44, v3);
  *(_QWORD *)&v48 = v3;
  v4 = *(_QWORD **)(a1 + 112);
  if ( v4 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_3:
      v5 = *((_DWORD *)v4 + 20);
      if ( (v5 & 2) != 0 && (v5 & 0x1018) == 0 )
        goto LABEL_22;
      v6 = *((int *)v4 + 19);
      v7 = 1;
      v8 = v4[7];
      v9 = *(_QWORD *)(a1 + 176);
      if ( (int)v6 > 0 )
        v7 = *((int *)v4 + 19);
      if ( v8 + v7 - 1 < v9 )
        goto LABEL_22;
      v10 = *(_DWORD *)(a1 + 196);
      v11 = 1;
      if ( v10 > 0 )
        v11 = *(int *)(a1 + 196);
      if ( v9 + v11 - 1 < v8 )
        goto LABEL_22;
      if ( (v5 & 0x1018) == 0 )
        break;
      if ( v9 != v8 || v10 != (_DWORD)v6 )
        goto LABEL_14;
      if ( (_DWORD)v6 != -1 )
        goto LABEL_59;
LABEL_22:
      if ( (*v4 & 2) != 0 )
      {
LABEL_25:
        if ( *(_QWORD **)(a1 + 120) == v4 )
          goto LABEL_26;
      }
      else
      {
        v16 = (_QWORD *)v4[2];
        if ( (*(_BYTE *)v16 & 2) == 0 )
        {
          do
          {
            v4 = v16;
            v16 = (_QWORD *)v16[1];
          }
          while ( (*(_BYTE *)v16 & 2) == 0 );
          goto LABEL_25;
        }
        v34 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v35 = *v34;
        if ( (*v34 & 2) == 0 )
        {
          while ( (_QWORD *)v34[2] == v4 )
          {
            v4 = v34;
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) != 0 )
            {
              v4 = (_QWORD *)v36;
              if ( *(_QWORD *)(a1 + 120) != v36 )
                goto LABEL_3;
              goto LABEL_26;
            }
            v34 = (_QWORD *)v36;
          }
        }
        v4 = v34;
        if ( *(_QWORD **)(a1 + 120) == v34 )
        {
LABEL_26:
          v3 = v48;
          goto LABEL_27;
        }
      }
    }
    if ( (_DWORD)v6 != -1 )
LABEL_59:
      v8 += v6;
    if ( v10 != -1 )
      v9 += v10;
    if ( (__int64)v9 >= (__int64)v8 )
      goto LABEL_22;
LABEL_14:
    v49 = nullptr;
    v50 = 0;
    sub_22E080((__int64)(v4 + 3), v45, (__int64 *)&v49);
    v12 = s1;
    if ( (_QWORD)v50 )
      v12 = v49;
    v13 = v48;
    v14 = s1;
    v46 = 0;
    if ( (_QWORD)v48 )
    {
      v14 = (const char *)src;
      v46 = v48 - 1;
    }
    v15 = strstr(v14, v12);
    if ( v15 && v15 - v14 != -1 )
    {
LABEL_20:
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      goto LABEL_22;
    }
    if ( v12 )
    {
      v37 = src;
      v38 = strlen(v12);
      v39 = v38 + v46;
      v40 = v38 + v46 + 1;
      if ( *((_QWORD *)&v48 + 1) < v40 )
      {
        src = (void *)qvector_reserve(&src, v37, v40, 1);
        v39 = v38 + v46;
        v37 = src;
        v40 = v38 + v46 + 1;
      }
      *(_QWORD *)&v48 = v40;
      v37[v39] = 0;
      memmove((char *)src + v46, v12, v38);
      v13 = v48;
    }
    v41 = 2;
    if ( v13 )
    {
      v41 = v13 + 1;
      v42 = src;
      --v13;
      if ( *((_QWORD *)&v48 + 1) >= v41 )
        goto LABEL_70;
    }
    else
    {
      v42 = src;
      if ( *((_QWORD *)&v48 + 1) >= 2u )
      {
LABEL_70:
        *(_QWORD *)&v48 = v41;
        v42[v13] = 44;
        *((_BYTE *)src + v13 + 1) = 0;
        goto LABEL_20;
      }
    }
    src = (void *)qvector_reserve(&src, v42, v41, 1);
    v42 = src;
    goto LABEL_70;
  }
LABEL_27:
  v17 = (char *)src;
  if ( (__int64)(v3 - 1) <= 1 )
  {
    if ( src )
    {
      *(_QWORD *)&v48 = 0;
      qfree(src);
      src = nullptr;
      *((_QWORD *)&v48 + 1) = 0;
    }
    goto LABEL_81;
  }
  if ( *((_QWORD *)&v48 + 1) < v3 - 1 )
  {
    src = (void *)qvector_reserve(&src, src, v3 - 1, 1);
    v17 = (char *)src;
  }
  *(_QWORD *)&v48 = v3 - 1;
  v17[v3 - 2] = 0;
  if ( (unsigned __int64)v48 > 1 )
  {
LABEL_31:
    v50 = 0;
    v49 = nullptr;
    sub_22E080(a1 + 144, v45, (__int64 *)&v49);
    v20 = v50;
    if ( (_QWORD)v50 )
    {
      v22 = v50 + 4;
      v21 = v50 + 5;
      v20 = v50 - 1;
    }
    else
    {
      v21 = 6;
      v22 = 5;
    }
    v23 = (__int64)v49;
    if ( *((_QWORD *)&v50 + 1) < v21 )
    {
      v49 = (const char *)qvector_reserve(&v49, v49, v21, 1);
      v23 = (__int64)v49;
    }
    *(_QWORD *)&v50 = v21;
    *(_BYTE *)(v23 + v22) = 0;
    v24 = (char *)&v49[v20];
    *(_DWORD *)v24 = 1684955424;
    v24[4] = 32;
    v25 = v48;
    if ( (_QWORD)v48 )
    {
      v26 = v48 - 1;
      if ( (_QWORD)v48 != 1 )
      {
        v27 = v50;
        v28 = v48 - 1;
        if ( (_QWORD)v50 )
        {
          v27 = v50 - 1;
          v28 = v26 + v50 - 1;
          v25 = v48 + v50 - 1;
        }
        v29 = (__int64)v49;
        if ( *((_QWORD *)&v50 + 1) < v25 )
        {
          v49 = (const char *)qvector_reserve(&v49, v49, v25, 1);
          v29 = (__int64)v49;
        }
        *(_QWORD *)&v50 = v25;
        *(_BYTE *)(v29 + v28) = 0;
        memcpy((void *)&v49[v27], src, v26);
      }
    }
    v30 = *(_QWORD *)(a1 + 8);
    v31 = s1;
    if ( (_QWORD)v50 )
      LODWORD(v31) = (_DWORD)v49;
    sub_331510(v30, -1, 20, (_DWORD)v31, v18, v19);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    v32 = 1;
    goto LABEL_47;
  }
  v32 = 0;
LABEL_47:
  if ( src )
  {
    *(_QWORD *)&v48 = 0;
    qfree(src);
  }
  return v32;
}
