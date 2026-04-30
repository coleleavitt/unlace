__int64 __fastcall sub_48E680(void **a1, __int64 *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  char *v8; // r13
  char *v9; // rsi
  char *v10; // rax
  char *v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // rbx
  unsigned int v17; // ebx
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  s = nullptr;
  v25 = 0;
  if ( !a3 )
    return 0;
  v5 = strlen(a3);
  v6 = v5 + 1;
  v7 = v5;
  s = (char *)qvector_reserve(&s, 0, v5 + 1, 1);
  *(_QWORD *)&v25 = v6;
  memmove(s, a3, v7);
  s[v7] = 0;
  v8 = s;
  if ( !s )
    return 0;
  v9 = (_BYTE *)(&qword_28 + 7);
  v10 = strrchr(s, 47);
  v11 = v10;
  if ( !v10 )
  {
    v17 = 0;
LABEL_15:
    *(_QWORD *)&v25 = 0;
    qfree(v8, v9);
    return v17;
  }
  *v10 = 0;
  if ( a1 )
  {
    v12 = (unsigned __int64)a1[2];
    v9 = (char *)*a1;
    if ( v8 == v11 )
    {
      if ( v12 <= 1 )
      {
        v23 = qvector_reserve(a1, v9, 2, 1);
        *a1 = (void *)v23;
        v9 = (char *)v23;
      }
      a1[1] = &dword_0 + 2;
      *v9 = 47;
      *((_BYTE *)*a1 + 1) = 0;
    }
    else
    {
      a1[1] = nullptr;
      v13 = v11 - v8 + 1;
      if ( v12 < v13 )
      {
        v21 = qvector_reserve(a1, v9, v11 - v8 + 1, 1);
        *a1 = (void *)v21;
        v9 = (char *)v21;
      }
      a1[1] = (void *)v13;
      v9[v11 - v8] = 0;
      v9 = v8;
      memmove(*a1, v8, v11 - v8);
    }
  }
  if ( a2 )
  {
    v14 = v11 + 1;
    v15 = strlen(v14);
    v16 = v15;
    if ( v15 )
    {
      v19 = (void *)*a2;
      v20 = v15 + 1;
      if ( a2[2] < v15 + 1 )
      {
        v22 = qvector_reserve(a2, *a2, v15 + 1, 1);
        *a2 = v22;
        v19 = (void *)v22;
      }
      a2[1] = v20;
      v9 = (char *)v14;
      memmove(v19, v14, v16);
      *(_BYTE *)(*a2 + v16) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  v8 = s;
  v17 = 1;
  if ( s )
    goto LABEL_15;
  return v17;
}
