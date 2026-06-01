__int64 __fastcall sub_7BAD20(__int64 a1, const char *a2, __int64 a3)
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
  char *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  size_t v18; // r10
  __int64 v19; // rax
  int v20; // eax
  size_t v21; // r9
  __int64 v22; // rdx
  char *v23; // rax
  unsigned int v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+10h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-78h]
  size_t nb; // [rsp+10h] [rbp-78h]
  char *v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = &byte_22F0C30;
  v35 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = a2;
    v4 = strlen(a2);
  }
  v6 = *(_QWORD *)a1;
  *(_WORD *)(a1 + 1091) = 1;
  v7 = sub_7443D0(v6, (unsigned __int16 *)(a1 + 1091));
  if ( !v7 || (v8 = v7 - 1, v7 == 1) )
  {
    sub_741460(*(_QWORD *)a1);
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
      s1 = nullptr;
      v34 = v10;
      v11 = *(unsigned __int16 *)(v8 + 1);
      if ( !*(_WORD *)(v8 + 1) || *(_BYTE *)(v8 + 3) != 78 )
        return 0;
      if ( v11 == 10 && !*(_BYTE *)(v8 + 4) )
        break;
      if ( !v4 || !v9 )
      {
        nb = v11 - 1;
        v27 = *(unsigned __int16 *)(v8 + 1);
        s1 = (char *)qvector_reserve(&s1, 0, v11, 1);
        *(_QWORD *)&v34 = v27;
        s1[v27 - 1] = 0;
        memmove(s1, (const void *)(v8 + 4), nb);
        v18 = nb;
        v17 = v8 + 4;
        goto LABEL_31;
      }
      *(_WORD *)(a1 + 1091) = v4 + 1;
      memcpy((void *)(a1 + 1094), v5, (int)v4);
      v12 = sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1091));
      v10 = 0;
      if ( !v12 || (v8 = v12 - 1, v12 == 1) )
      {
        sub_741460(*(_QWORD *)a1);
        v10 = 0;
        if ( v16 )
        {
          v8 = v16 - 1;
          if ( s1 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(s1);
            v10 = 0;
          }
          v9 = 0;
          goto LABEL_27;
        }
        v13 = s1;
        if ( s1 )
        {
LABEL_17:
          *(_QWORD *)&v34 = 0;
          qfree(v13);
        }
        return 0;
      }
      if ( s1 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(s1);
        v10 = 0;
      }
      v9 = 0;
    }
    na = v11 - 1;
    sub_7B01D0(*(_QWORD *)a1, (__int64 *)&s1, v8 + 4);
    v17 = v8 + 4;
    v18 = na;
LABEL_31:
    if ( !v4 )
      break;
    n = v18;
    v26 = v17;
    if ( (_QWORD)v34 )
    {
      if ( (__int64)v34 - 1 >= v4 )
      {
        v20 = strncmp(s1, v5, v4);
        v17 = v26;
        v18 = n;
        if ( !v20 )
          break;
      }
    }
    if ( !v9 )
    {
      v13 = s1;
      if ( !s1 )
        return 0;
      goto LABEL_17;
    }
LABEL_34:
    sub_741460(*(_QWORD *)a1);
    v13 = s1;
    v10 = 0;
    if ( !v19 )
    {
      if ( s1 )
        goto LABEL_17;
      return 0;
    }
    v8 = v19 - 1;
    if ( s1 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(s1);
      v10 = 0;
    }
LABEL_27:
    if ( !v8 )
      return 0;
  }
  v21 = v18 + v17;
  if ( *(_WORD *)v21 != 8 )
    goto LABEL_34;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 6016LL) & 2) != 0 )
    v22 = *(unsigned int *)(v21 + 2);
  else
    v22 = *(_QWORD *)(v21 + 2);
  v23 = (char *)haystack;
  if ( (_QWORD)v34 )
    v23 = s1;
  v31 = v23;
  v32 = v22;
  if ( !*(_QWORD *)(a3 + 16) )
    std::__throw_bad_function_call();
  result = (*(__int64 (__fastcall **)(__int64, char **, __int64 *))(a3 + 24))(a3, &v31, &v32);
  if ( !(_DWORD)result )
    goto LABEL_34;
  if ( s1 )
  {
    v25 = result;
    *(_QWORD *)&v34 = 0;
    qfree(s1);
    return v25;
  }
  return result;
}
