__int64 __fastcall sub_222BB30(__int64 *a1, char *a2, size_t a3)
{
  int v3; // ebx
  __int64 v4; // r14
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  int i; // r9d
  __int64 v11; // rbx
  char *v12; // r8
  size_t v13; // r10
  int v14; // eax
  bool v15; // al
  void *v16; // rbp
  __int64 result; // rax
  int j; // r12d
  char *v19; // rdi
  size_t v20; // rdx
  unsigned int v21; // ebp
  bool v22; // al
  void *v23; // rbx
  bool v24; // al
  unsigned int v25; // ebp
  bool v26; // al
  int v27; // eax
  int v28; // eax
  char *v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-70h]
  size_t v32; // [rsp+10h] [rbp-68h]
  int v33; // [rsp+18h] [rbp-60h]
  int v34; // [rsp+18h] [rbp-60h]
  int v35; // [rsp+1Ch] [rbp-5Ch]
  void *v36; // [rsp+20h] [rbp-58h] BYREF
  void *s2; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]

  v3 = *((_DWORD *)a1 + 4);
  v4 = *a1;
  if ( !v3 )
    return 0;
  sub_E59960((void ***)&v36, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v7 = sub_2248890(a2, a3);
  v8 = v3 - 1;
  v9 = (v3 - 1) & v7;
  if ( a3 )
  {
    for ( i = 1; ; ++i )
    {
      v11 = v4 + ((unsigned __int64)v9 << 6);
      v12 = *(char **)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v12 == (char *)-1LL )
      {
        v15 = a2 + 1 == nullptr;
      }
      else if ( v12 == (char *)-2LL )
      {
        v15 = a2 + 2 == nullptr;
      }
      else
      {
        if ( v13 != a3 )
          goto LABEL_38;
        v35 = i;
        v32 = *(_QWORD *)(v11 + 16);
        v33 = v8;
        v29 = *(char **)(v11 + 8);
        v14 = memcmp(a2, v29, a3);
        v12 = v29;
        v8 = v33;
        v13 = v32;
        i = v35;
        v15 = v14 == 0;
      }
      if ( v15 )
        goto LABEL_9;
LABEL_38:
      if ( s2 == (void *)-1LL )
      {
        v26 = v12 + 1 == nullptr;
      }
      else if ( s2 == (void *)-2LL )
      {
        v26 = v12 + 2 == nullptr;
      }
      else
      {
        if ( v38 != v13 )
          goto LABEL_41;
        v34 = i;
        v30 = v8;
        if ( !v13 )
          goto LABEL_27;
        v27 = memcmp(v12, s2, v13);
        v8 = v30;
        i = v34;
        v26 = v27 == 0;
      }
      if ( v26 )
        goto LABEL_27;
LABEL_41:
      v25 = i + v9;
      v9 = v8 & v25;
    }
  }
  for ( j = 1; ; ++j )
  {
    v11 = v4 + ((unsigned __int64)v9 << 6);
    v19 = *(char **)(v11 + 8);
    v20 = *(_QWORD *)(v11 + 16);
    if ( v19 == (char *)-1LL )
    {
      v24 = a2 + 1 == nullptr;
      goto LABEL_33;
    }
    if ( v19 == (char *)-2LL )
      break;
    if ( !v20 )
      goto LABEL_9;
LABEL_21:
    if ( s2 == (void *)-1LL )
    {
      v22 = v19 + 1 == nullptr;
    }
    else if ( s2 == (void *)-2LL )
    {
      v22 = v19 + 2 == nullptr;
    }
    else
    {
      if ( v20 != v38 )
        goto LABEL_24;
      v31 = v8;
      if ( !v20 )
      {
LABEL_27:
        v23 = v36;
        if ( v36 )
        {
          if ( *(void **)v36 == (char *)v36 + 16 )
          {
            operator delete(v36, 0x20u);
          }
          else
          {
            operator delete(*(void **)v36);
            operator delete(v23, 0x20u);
          }
        }
        return 0;
      }
      v28 = memcmp(v19, s2, v20);
      v8 = v31;
      v22 = v28 == 0;
    }
    if ( v22 )
      goto LABEL_27;
LABEL_24:
    v21 = j + v9;
    v9 = v8 & v21;
  }
  v24 = a2 + 2 == nullptr;
LABEL_33:
  if ( !v24 )
    goto LABEL_21;
LABEL_9:
  v16 = v36;
  if ( v36 )
  {
    if ( *(void **)v36 != (char *)v36 + 16 )
      operator delete(*(void **)v36);
    operator delete(v16, 0x20u);
  }
  if ( v11 != *a1 + ((unsigned __int64)*((unsigned int *)a1 + 4) << 6) )
  {
    result = v11 + 24;
    if ( v11 == -24 )
      return result;
    if ( *(_WORD *)(v11 + 24) == 8 )
      return v11 + 32;
  }
  return 0;
}
