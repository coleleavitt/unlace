__int64 __fastcall sub_377260(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  bool v3; // zf
  char *v5; // rbp
  unsigned __int64 v6; // r12
  size_t v7; // r15
  __int64 v8; // r14
  size_t v9; // r8
  size_t v10; // rax
  size_t v11; // r12
  size_t v12; // r13
  void *v13; // rax
  size_t v14; // [rsp+0h] [rbp-80h]
  void *src; // [rsp+8h] [rbp-78h] BYREF
  __int128 v16; // [rsp+10h] [rbp-70h]
  char *s; // [rsp+28h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h]
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v19 = __readfsqword(0x28u);
  v16 = 0;
  src = nullptr;
  if ( !v3 )
    v2 = *(const char **)(a1 + 8);
  if ( !(unsigned __int8)eval_expr(a2, -1, v2, &src) )
  {
    v18 = 0;
    s = nullptr;
    s = (char *)qvector_reserve(&s, 0, 14, 1);
    *(_QWORD *)&v18 = 14;
    strcpy(s, "IDC_FAILURE: ");
    v5 = s;
    v6 = v16;
    if ( (_QWORD)v16 )
    {
      v7 = v16 - 1;
      if ( (_QWORD)v16 != 1 )
      {
        v8 = v18;
        v9 = v16 - 1;
        if ( (_QWORD)v18 )
        {
          v8 = v18 - 1;
          v9 = v7 + v18 - 1;
          v6 = v16 + v18 - 1;
        }
        if ( *((_QWORD *)&v18 + 1) < v6 )
        {
          v14 = v9;
          s = (char *)qvector_reserve(&s, s, v6, 1);
          v9 = v14;
          v5 = s;
        }
        *(_QWORD *)&v18 = v6;
        v5[v9] = 0;
        memcpy(&s[v8], src, v7);
        v5 = s;
      }
    }
    if ( (_QWORD)v18 )
    {
      if ( !v5 )
      {
        *(_BYTE *)a2 = 7;
        *(_QWORD *)(a2 + 8) = 0;
        *(_OWORD *)(a2 + 16) = 0;
        goto LABEL_4;
      }
      v10 = strlen(v5);
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      v11 = v10;
      *(_OWORD *)(a2 + 16) = 0;
      if ( !v10 )
      {
LABEL_19:
        *(_QWORD *)&v18 = 0;
        qfree(v5);
        goto LABEL_4;
      }
      v12 = v10 + 1;
      v13 = (void *)qvector_reserve(a2 + 8, 0, v10 + 1, 1);
      *(_QWORD *)(a2 + 8) = v13;
      *(_QWORD *)(a2 + 16) = v12;
      memmove(v13, v5, v11);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v11) = 0;
      v5 = s;
    }
    else
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
    }
    if ( !v5 )
      goto LABEL_4;
    goto LABEL_19;
  }
LABEL_4:
  if ( src )
  {
    *(_QWORD *)&v16 = 0;
    qfree(src);
  }
  return 0;
}
