_DWORD *__fastcall sub_5AD170(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  _DWORD *v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r10
  int v6; // r14d
  __int64 v7; // rax
  _DWORD *v8; // rbp
  unsigned int v9; // edx
  _DWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  _DWORD *v13; // rbx
  int v14; // eax
  unsigned int *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  unsigned int *v18; // rdi
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  void *s2[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *a2 == 0;
  s2[1] = nullptr;
  if ( v2 || (s2[0] = nullptr, sub_52CD90(s2, a2), (v3 = s2[0]) == nullptr) )
  {
    v3 = nullptr;
    v22 = 0;
    v6 = sub_59FE30((__int64)&v22, 0);
  }
  else
  {
    v4 = *((_DWORD *)s2[0] - 1);
    v22 = 0;
    sub_52CD90(&v22, s2);
    v6 = sub_59FE30((__int64)&v22, v4);
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
  }
  v7 = *(unsigned int *)(a1 + 8);
  v8 = *(_DWORD **)a1;
  v9 = v7 - 1;
  v7 *= 24;
  v10 = (_DWORD *)(*(_QWORD *)a1 + v7);
  v11 = 24LL * (v6 & v9);
  v12 = *(_QWORD *)a1 + v11;
  if ( v11 != v7 )
  {
    v13 = (_DWORD *)(*(_QWORD *)a1 + v11);
    while ( 1 )
    {
      v14 = v13[1];
      if ( v14 != 2 )
      {
        if ( !v14 )
          goto LABEL_27;
        goto LABEL_8;
      }
      if ( *v13 != v6 )
        goto LABEL_8;
      v15 = *((unsigned int **)v13 + 1);
      if ( v15 )
      {
        v16 = *(v15 - 1);
        if ( v3 )
          goto LABEL_13;
        if ( !(_DWORD)v16 )
          goto LABEL_28;
LABEL_8:
        v13 += 6;
        if ( v10 == v13 )
          break;
      }
      else
      {
        if ( !v3 )
          return v13;
        v16 = 0;
LABEL_13:
        if ( (_DWORD)v16 != *(v3 - 1) )
          goto LABEL_8;
        if ( !memcmp(v15, v3, 8 * v16) )
          goto LABEL_28;
        v13 += 6;
        if ( v10 == v13 )
          break;
      }
    }
  }
  while ( (_DWORD *)v12 != v8 )
  {
    v17 = v8[1];
    if ( v17 != 2 )
    {
      if ( !v17 )
        break;
      goto LABEL_19;
    }
    if ( *v8 == v6 )
    {
      v18 = *((unsigned int **)v8 + 1);
      if ( v18 )
      {
        v19 = *(v18 - 1);
        if ( !v3 )
        {
          if ( !(_DWORD)v19 )
            goto LABEL_26;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v3 )
          return v8;
        v19 = 0;
      }
      if ( (_DWORD)v19 == *(v3 - 1) && !memcmp(v18, v3, 8 * v19) )
      {
LABEL_26:
        v13 = v8;
        goto LABEL_28;
      }
    }
LABEL_19:
    v8 += 6;
  }
LABEL_27:
  v13 = nullptr;
  if ( v3 )
  {
LABEL_28:
    v20 = (char *)(v3 - 2);
    v3 = v13;
    sub_186B220(v20);
  }
  return v3;
}

