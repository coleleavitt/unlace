__int64 __fastcall sub_4C8450(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v5; // rcx
  size_t v6; // rbp
  size_t v7; // r12
  unsigned __int64 v8; // rbx
  int v9; // eax
  bool v10; // cf
  unsigned __int64 v11; // rbx
  const char *v12; // r12
  size_t v13; // rbx
  void *v14; // r12
  __int128 v15; // kr00_16
  void *v16; // rdi
  void *v17; // rdi
  const char *v18; // rsi
  int v19; // eax
  void *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = qword_2CCBE38;
  v26 = __readfsqword(0x28u);
  v7 = qword_2CCBE18;
  v8 = v5 - 1;
  if ( !v5 )
    v8 = 0;
  if ( qword_2CCBE38 )
  {
    v6 = qword_2CCBE38 - 1;
    if ( qword_2CCBE18 )
    {
      v7 = qword_2CCBE18 - 1;
      if ( v8 < v6 + qword_2CCBE18 - 1 )
        return 0;
      v18 = qword_2CCBE30;
      LOBYTE(v2) = qword_2CCBE38 == 1 || qword_2CCBE30 == nullptr;
      if ( (_BYTE)v2 )
        goto LABEL_6;
      if ( v8 < v6 )
        return v2;
    }
    else
    {
      if ( v8 < v6 )
        return 0;
      v18 = qword_2CCBE30;
      if ( !qword_2CCBE30 || qword_2CCBE38 == 1 )
      {
LABEL_9:
        if ( !a1 )
          return 1;
        v10 = v8 < v7;
        v11 = v8 - v7;
        if ( v5 )
        {
          if ( v10 )
            v11 = v5 - 1;
          v12 = *(const char **)a2;
          if ( v11 <= v6 )
            v6 = v11;
          v13 = v11 - v6;
        }
        else
        {
          if ( v10 )
            goto LABEL_17;
          v12 = haystack;
          if ( v11 <= v6 )
            v6 = v11;
          v13 = v11 - v6;
        }
        ptr = nullptr;
        v25 = 0;
        if ( v13 )
        {
          v21 = nullptr;
          if ( v13 != -1 )
          {
            ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
            v21 = ptr;
          }
          *(_QWORD *)&v25 = v13 + 1;
          memmove(v21, &v12[v6], v13);
          *((_BYTE *)ptr + v13) = 0;
          v14 = ptr;
          v15 = v25;
          goto LABEL_18;
        }
LABEL_17:
        v14 = nullptr;
        v15 = 0u;
LABEL_18:
        ptr = nullptr;
        v16 = *(void **)a1;
        v25 = 0;
        if ( v16 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v16);
          v17 = ptr;
          *(_QWORD *)a1 = v14;
          *(_OWORD *)(a1 + 8) = v15;
          if ( v17 )
          {
            *(_QWORD *)&v25 = 0;
            qfree(v17);
          }
        }
        else
        {
          *(_QWORD *)a1 = v14;
          *(_OWORD *)(a1 + 8) = v15;
        }
        return 1;
      }
    }
    v23 = v5;
    v19 = strncmp(*(const char **)a2, v18, v6);
    v5 = v23;
    if ( !v19 )
      goto LABEL_6;
    return 0;
  }
  if ( !qword_2CCBE18 )
    goto LABEL_9;
  v7 = qword_2CCBE18 - 1;
  if ( v8 < qword_2CCBE18 - 1 )
    return 0;
LABEL_6:
  LOBYTE(v2) = v7 == 0 || qword_2CCBE10 == nullptr;
  if ( (_BYTE)v2 )
    goto LABEL_9;
  if ( v8 >= v7 )
  {
    v22 = v5;
    v9 = strncmp((const char *)(*(_QWORD *)a2 + v8 - v7), qword_2CCBE10, v7);
    v5 = v22;
    if ( !v9 )
      goto LABEL_9;
  }
  return v2;
}
