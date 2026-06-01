__int64 __fastcall sub_797C20(__int64 a1, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  const char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  char v9; // r13
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  size_t v18; // r10
  size_t v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // rcx
  int v23; // eax
  unsigned int v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  const char *v27; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+10h] [rbp-78h]
  int v30; // [rsp+24h] [rbp-64h] BYREF
  const char *v31; // [rsp+28h] [rbp-60h] BYREF
  void *dest; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = &byte_22CD811;
  v34 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = a2;
    v4 = strlen(a2);
  }
  v6 = *(_QWORD *)a1;
  *(_WORD *)(a1 + 1083) = 1;
  v7 = sub_723E90(v6, (unsigned __int16 *)(a1 + 1083));
  if ( !v7 || (v8 = v7 - 1, v7 == 1) )
  {
    sub_720F20(*(_QWORD *)a1);
    if ( !v15 )
      return 0;
    v8 = v15 - 1;
    if ( v15 == 1 )
      return 0;
  }
  v9 = 1;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      dest = nullptr;
      v33 = v10;
      v11 = *(unsigned __int16 *)(v8 + 1);
      if ( !*(_WORD *)(v8 + 1) || *(_BYTE *)(v8 + 3) != 78 )
        return 0;
      if ( v11 == 6 && !*(_BYTE *)(v8 + 4) )
      {
        n = v11 - 1;
        sub_78F470(*(_QWORD *)a1, (__int64 *)&dest, v8 + 4);
        v17 = v8 + 4;
        v18 = n;
        goto LABEL_31;
      }
      if ( !v4 || !v9 )
        break;
      *(_WORD *)(a1 + 1083) = v4 + 1;
      memcpy((void *)(a1 + 1086), v5, (int)v4);
      v12 = sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1083));
      v10 = 0;
      if ( !v12 || (v8 = v12 - 1, v12 == 1) )
      {
        sub_720F20(*(_QWORD *)a1);
        v10 = 0;
        if ( v16 )
        {
          v8 = v16 - 1;
          if ( dest )
          {
            *(_QWORD *)&v33 = 0;
            qfree(dest);
            v10 = 0;
          }
          v9 = 0;
          goto LABEL_27;
        }
        v13 = dest;
        if ( dest )
        {
LABEL_17:
          *(_QWORD *)&v33 = 0;
          qfree(v13);
        }
        return 0;
      }
      if ( dest )
      {
        *(_QWORD *)&v33 = 0;
        qfree(dest);
        v10 = 0;
      }
      v9 = 0;
    }
    na = v11 - 1;
    v26 = *(unsigned __int16 *)(v8 + 1);
    dest = (void *)qvector_reserve(&dest, 0, v11, 1);
    *(_QWORD *)&v33 = v26;
    *((char *)dest + v26 - 1) = 0;
    memmove(dest, (const void *)(v8 + 4), na);
    v18 = na;
    v17 = v8 + 4;
LABEL_31:
    v19 = v17 + v18;
    if ( !v4 )
    {
      if ( *(_WORD *)v19 != 4 )
        goto LABEL_34;
      v21 = *(_DWORD *)(v19 + 2);
      v22 = haystack;
      if ( (_QWORD)v33 )
        v22 = (const char *)dest;
      goto LABEL_40;
    }
    if ( (_QWORD)v33 )
    {
      if ( (__int64)v33 - 1 >= v4 )
      {
        v27 = (const char *)dest;
        v23 = strncmp((const char *)dest, v5, v4);
        v22 = v27;
        if ( !v23 )
          break;
      }
    }
    if ( !v9 )
    {
      v13 = dest;
      if ( !dest )
        return 0;
      goto LABEL_17;
    }
LABEL_34:
    sub_720F20(*(_QWORD *)a1);
    v13 = dest;
    v10 = 0;
    if ( !v20 )
    {
      if ( dest )
        goto LABEL_17;
      return 0;
    }
    v8 = v20 - 1;
    if ( dest )
    {
      *(_QWORD *)&v33 = 0;
      qfree(dest);
      v10 = 0;
    }
LABEL_27:
    if ( !v8 )
      return 0;
  }
  if ( *(_WORD *)v19 != 4 )
    goto LABEL_34;
  v21 = *(_DWORD *)(v19 + 2);
LABEL_40:
  v30 = v21;
  v31 = v22;
  if ( !*(_QWORD *)(a3 + 16) )
    std::__throw_bad_function_call();
  result = (*(__int64 (__fastcall **)(__int64, const char **, int *))(a3 + 24))(a3, &v31, &v30);
  if ( !(_DWORD)result )
    goto LABEL_34;
  if ( dest )
  {
    v25 = result;
    *(_QWORD *)&v33 = 0;
    qfree(dest);
    return v25;
  }
  return result;
}

