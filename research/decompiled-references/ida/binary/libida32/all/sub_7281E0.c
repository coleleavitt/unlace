__int64 sub_7281E0(
        void **a1,
        __int64 a2,
        __int64 **a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        ...)
{
  __int64 v11; // rcx
  unsigned int v12; // r13d
  __int64 v14; // rbp
  char *v15; // rbx
  int v16; // eax
  char *v17; // r14
  __int16 v18; // ax
  __int64 *v19; // r14
  __int64 v20; // rdi
  const char *v21; // rax
  unsigned __int64 v23; // r15
  size_t v24; // r9
  __int64 v25; // r8
  size_t v26; // r10
  __int64 v27; // rsi
  unsigned int token; // eax
  __int16 v29; // ax
  __int16 v30; // ax
  __int64 **overflow_arg_area; // rdx
  __int64 *v32; // rbx
  unsigned __int64 v33; // r15
  size_t v34; // r8
  _DWORD **v35; // rdx
  _DWORD *v36; // rbx
  __int64 v37; // rax
  const void *v38; // r9
  void *v39; // rdi
  __int64 v40; // rax
  size_t v41; // [rsp+8h] [rbp-B0h]
  __int64 v42; // [rsp+10h] [rbp-A8h]
  const void *v43; // [rsp+10h] [rbp-A8h]
  size_t v44; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+28h] [rbp-90h] BYREF
  gcc_va_list va; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+68h] [rbp-50h]

  va_start(va, a11);
  v48 = va_arg(va, _QWORD);
  v11 = v48;
  va_end(va);
  va_start(va, a11);
  v12 = 0;
  v14 = a2;
  v15 = (char *)a3;
  v47 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( !*v15 )
        return v12;
      if ( (_BYTE)v16 != 37 )
        goto LABEL_33;
      v16 = v15[1];
      v17 = v15 + 1;
      if ( v15[1] != 37 )
        break;
      ++v15;
LABEL_33:
      a3 = (__int64 **)*(unsigned __int16 *)(v14 + 24);
      if ( (_DWORD)a3 != v16 )
        goto LABEL_31;
LABEL_34:
      a2 = v14;
      token = lex_get_token((int)a1);
      if ( token )
      {
LABEL_36:
        v20 = token;
        goto LABEL_14;
      }
      ++v15;
    }
    ++v12;
    if ( (_BYTE)v16 == 110 )
      break;
    if ( (char)v16 > 110 )
    {
      if ( (_BYTE)v16 != 115 )
      {
LABEL_31:
        v20 = 1362;
        goto LABEL_14;
      }
      v30 = *(_WORD *)(v14 + 24);
      if ( v30 != 4 && (v30 != 2 || *(_QWORD *)(sub_780220(a1) + 8) <= 1u && *(_WORD *)(v14 + 24) != 2) )
        goto LABEL_13;
      goto LABEL_42;
    }
    if ( (_BYTE)v16 == 73 )
    {
      if ( *(_WORD *)(v14 + 24) != 2 )
      {
        v20 = 1666;
        goto LABEL_14;
      }
LABEL_42:
      if ( va[0].gp_offset > 0x2F )
      {
        overflow_arg_area = (__int64 **)va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        overflow_arg_area = (__int64 **)((char *)va[0].reg_save_area + va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      v32 = *overflow_arg_area;
      if ( (__int64 *)v14 != *overflow_arg_area )
      {
        v33 = *(_QWORD *)(v14 + 8);
        if ( v33 && (v34 = v33 - 1, v33 != 1) )
        {
          v38 = *(const void **)v14;
          v39 = (void *)*v32;
          if ( v32[2] < v33 )
          {
            v43 = *(const void **)v14;
            v40 = qvector_reserve(*overflow_arg_area, *v32, *(_QWORD *)(v14 + 8), 1);
            *v32 = v40;
            v39 = (void *)v40;
            v38 = v43;
            v34 = v33 - 1;
          }
          v32[1] = v33;
          memmove(v39, v38, v34);
          *(_BYTE *)(*v32 + v33 - 1) = 0;
        }
        else
        {
          v32[1] = 0;
        }
      }
LABEL_48:
      v15 = v17;
      goto LABEL_34;
    }
    if ( (_BYTE)v16 != 83 )
      goto LABEL_31;
    if ( va[0].gp_offset > 0x2F )
    {
      a3 = (__int64 **)va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
    }
    else
    {
      a3 = (__int64 **)((char *)va[0].reg_save_area + va[0].gp_offset);
      va[0].gp_offset += 8;
    }
    v18 = *(_WORD *)(v14 + 24);
    v19 = *a3;
    if ( v18 != 4 && (v18 != 2 || *(_QWORD *)(sub_780220(a1) + 8) <= 1u) )
    {
LABEL_13:
      v20 = 1348;
      goto LABEL_14;
    }
    do
    {
      v23 = *(_QWORD *)(v14 + 8);
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v23 != 1 )
        {
          v25 = v19[1];
          v26 = v23 - 1;
          if ( v25 )
          {
            --v25;
            v26 = v24 + v25;
            v23 += v25;
          }
          v27 = *v19;
          if ( v19[2] < v23 )
          {
            v44 = v26;
            v42 = v25;
            v41 = v24;
            v37 = qvector_reserve(v19, v27, v23, 1);
            v26 = v44;
            v25 = v42;
            *v19 = v37;
            v24 = v41;
            v27 = v37;
          }
          v19[1] = v23;
          *(_BYTE *)(v27 + v26) = 0;
          memcpy((void *)(v25 + *v19), *(const void **)v14, v24);
        }
      }
      a2 = v14;
      token = lex_get_token((int)a1);
      if ( token )
        goto LABEL_36;
      v29 = *(_WORD *)(v14 + 24);
    }
    while ( v29 == 4 || v29 == 2 && *(_QWORD *)(sub_780220(a1) + 8) > 1u );
    if ( !v15[2] )
      return v12;
    a3 = (__int64 **)*(unsigned __int16 *)(v14 + 24);
    if ( (_DWORD)a3 != v15[2] )
      goto LABEL_31;
    v15 += 2;
  }
  if ( *(_WORD *)(v14 + 24) != 2 )
  {
    v20 = 1352;
LABEL_14:
    v21 = (const char *)qstrerror(v20, a2, a3, v11);
    sub_727620((__int64)a1, (__int64)"%s", v21);
  }
  if ( va[0].gp_offset > 0x2F )
  {
    v35 = (_DWORD **)va[0].overflow_arg_area;
    va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
  }
  else
  {
    v35 = (_DWORD **)((char *)va[0].reg_save_area + va[0].gp_offset);
    va[0].gp_offset += 8;
  }
  v36 = *v35;
  if ( (unsigned __int8)sub_727DF0(&v45, a1, v14, 0xFFFFFFFF80000000LL, 0x7FFFFFFF, 0) )
  {
    *v36 = v45;
    goto LABEL_48;
  }
  return 0;
}

