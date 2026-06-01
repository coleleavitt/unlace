unsigned __int64 __fastcall desktop_chooser_t__::vfunc_6(__int64 a1, void ***a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  size_t v8; // r14
  void **v9; // rbx
  char *v10; // r14
  _QWORD *v11; // rsi
  void **v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  const char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rbx
  const char *v19; // r15
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  void *v23; // r15
  void **v24; // rbx
  void *v25; // rdi
  size_t v26; // r8
  bool v27; // zf
  char v28; // al
  __int64 v29; // rdx
  const char *v30; // r15
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdi
  char *v33; // rax
  const char *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  char v37; // al
  void *v38; // rax
  __int64 v39; // rax
  void *v40; // rdi
  const void *v41; // rbp
  void *v42; // rax
  unsigned __int64 v43; // rcx
  char *v44; // rax
  const char *v45; // r15
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  size_t v50; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 184) + 56 * a5;
  if ( *(_QWORD *)(v7 + 8) )
  {
    v16 = *(const char **)v7;
    if ( !strcmp(*(const char **)v7, "Default") )
    {
      v27 = *(_BYTE *)(a1 + 208) == 2;
      v28 = *(_BYTE *)(v7 + 24);
      src = nullptr;
      v52 = 0;
      if ( v27 )
      {
        if ( v28 )
        {
          v29 = 20;
          v18 = 19;
          v30 = "<Database debugger>";
        }
        else
        {
          v29 = 19;
          v18 = 18;
          v30 = "<Default debugger>";
        }
      }
      else if ( v28 )
      {
        v29 = 11;
        v18 = 10;
        v30 = "<Database>";
      }
      else
      {
        v29 = 10;
        v18 = 9;
        v30 = "<Default>";
      }
      v20 = 0;
      v49 = v29;
      v31 = (_QWORD *)qvector_reserve(&src, 0, v29, 1);
      src = v31;
      v32 = (unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)&v52 = v49;
      *v31 = *(_QWORD *)v30;
      v22 = *(_QWORD *)&v30[v18 - 8];
      *(_QWORD *)((char *)v31 + v18 - 8) = v22;
      v33 = (char *)v31 - v32;
      v34 = (const char *)(v30 - v33);
      v35 = (v18 + (_DWORD)v33) & 0xFFFFFFF8;
      if ( v35 >= 8 )
      {
        v36 = v35 & 0xFFFFFFF8;
        LODWORD(v22) = 0;
        do
        {
          v20 = (unsigned int)v22;
          v22 = (unsigned int)(v22 + 8);
          *(_QWORD *)(v32 + v20) = *(_QWORD *)&v34[v20];
        }
        while ( (unsigned int)v22 < v36 );
      }
LABEL_20:
      *((_BYTE *)src + v18) = 0;
      v23 = src;
      v24 = *a2;
      v25 = src;
      if ( *a2 == &src )
        goto LABEL_24;
      v8 = v52;
      if ( !(_QWORD)v52 )
      {
LABEL_23:
        v24[1] = nullptr;
        goto LABEL_24;
      }
LABEL_22:
      v25 = v23;
      v26 = v8 - 1;
      if ( v8 != 1 )
      {
        v40 = *v24;
        if ( (unsigned __int64)v24[2] < v8 )
        {
          v47 = qvector_reserve(v24, *v24, v8, 1);
          *v24 = (void *)v47;
          v26 = v8 - 1;
          v40 = (void *)v47;
        }
        v24[1] = (void *)v8;
        v20 = (unsigned __int64)v23;
        v50 = v26;
        memmove(v40, v23, v26);
        *((_BYTE *)*v24 + v50) = 0;
        v25 = src;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    if ( strcmp(v16, "Live") )
      goto LABEL_2;
    if ( !*(_BYTE *)(v7 + 24) )
    {
      src = nullptr;
      v52 = 0;
LABEL_17:
      v17 = 5;
      v18 = 4;
      v19 = "Live";
      goto LABEL_18;
    }
    v37 = *(_BYTE *)(a1 + 208);
    src = nullptr;
    v52 = 0;
    if ( v37 == 1 )
    {
      v17 = 19;
      v18 = 18;
      v19 = "<Current Database>";
    }
    else
    {
      v17 = 28;
      v18 = 27;
      v19 = "<Current Database debugger>";
      if ( v37 != 2 )
        goto LABEL_17;
    }
LABEL_18:
    v20 = 0;
    v48 = v17;
    v21 = (_QWORD *)qvector_reserve(&src, 0, v17, 1);
    src = v21;
    *(_QWORD *)&v52 = v48;
    v22 = (unsigned int)v18;
    if ( (unsigned int)v18 >= 8 )
    {
      v43 = (unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v21 = *(_QWORD *)v19;
      *(_QWORD *)((char *)v21 + v18 - 8) = *(_QWORD *)&v19[v18 - 8];
      v44 = (char *)v21 - v43;
      v45 = (const char *)(v19 - v44);
      v22 = ((_DWORD)v18 + (_DWORD)v44) & 0xFFFFFFF8;
      if ( (unsigned int)v22 >= 8 )
      {
        v22 = ((_DWORD)v18 + (_DWORD)v44) & 0xFFFFFFF8;
        v46 = 0;
        do
        {
          v20 = v46;
          v46 += 8;
          *(_QWORD *)(v43 + v20) = *(_QWORD *)&v45[v20];
        }
        while ( v46 < (unsigned int)v22 );
      }
    }
    else
    {
      *(_DWORD *)v21 = *(_DWORD *)v19;
      *(_DWORD *)((char *)v21 + (unsigned int)v18 - 4) = *(_DWORD *)&v19[(unsigned int)v18 - 4];
    }
    goto LABEL_20;
  }
LABEL_2:
  src = nullptr;
  v52 = 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v9 = *a2;
    if ( *a2 != &src )
    {
      v9[1] = nullptr;
      v9 = *a2;
    }
    goto LABEL_5;
  }
  v38 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 8));
  *((_QWORD *)&v52 + 1) = v8;
  src = v38;
  v20 = *(_QWORD *)v7;
  memcpy(v38, *(const void **)v7, v8);
  v23 = src;
  v24 = *a2;
  *(_QWORD *)&v52 = v8;
  v25 = src;
  if ( v24 != &src )
    goto LABEL_22;
LABEL_24:
  if ( v25 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v25, (const char *)v20, v22);
  }
  v9 = *a2;
LABEL_5:
  v10 = "Registry";
  if ( *(_BYTE *)(v7 + 24) )
    v10 = "Database";
  v11 = v9[3];
  if ( (unsigned __int64)v9[5] <= 8 )
  {
    v39 = qvector_reserve(v9 + 3, v11, 9, 1);
    v9[3] = (void *)v39;
    v11 = (_QWORD *)v39;
  }
  v9[4] = byte_9;
  *v11 = *(_QWORD *)v10;
  *((_BYTE *)v9[3] + 8) = 0;
  v12 = *a2;
  v13 = (__int64)(*a2 + 6);
  if ( v13 != v7 + 32 )
  {
    v14 = *(_QWORD *)(v7 + 40);
    if ( v14 > 1 )
    {
      v41 = *(const void **)(v7 + 32);
      v42 = v12[6];
      if ( (unsigned __int64)v12[8] < v14 )
      {
        v42 = (void *)qvector_reserve(v13, v12[6], v14, 1);
        v12[6] = v42;
      }
      v12[7] = (void *)v14;
      memmove(v42, v41, v14 - 1);
      *((char *)v12[6] + v14 - 1) = 0;
    }
    else
    {
      v12[7] = nullptr;
    }
  }
  *a3 = -1;
  return v53 - __readfsqword(0x28u);
}
