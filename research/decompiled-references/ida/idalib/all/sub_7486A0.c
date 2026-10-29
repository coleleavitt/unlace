__int64 sub_7486A0(
        __int64 a1,
        __int64 a2,
        char *a3,
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
  unsigned int v11; // r13d
  int v15; // eax
  char *v16; // r14
  __int64 **v17; // rdx
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
  __int64 **v31; // rdx
  __int64 *v32; // rbx
  unsigned __int64 v33; // r15
  size_t v34; // r8
  signed __int64 **v35; // rdx
  __int64 v36; // kr00_8
  __int64 v37; // rax
  __int64 v38; // kr08_8
  __int64 v39; // kr10_8
  const void *v40; // r9
  void *v41; // rdi
  __int64 v42; // rax
  size_t v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+10h] [rbp-98h]
  const void *v45; // [rsp+10h] [rbp-98h]
  size_t v46; // [rsp+18h] [rbp-90h]
  gcc_va_list va; // [rsp+20h] [rbp-88h] BYREF

  va_start(va, a11);
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *a3;
      if ( !*a3 )
        return v11;
      if ( (_BYTE)v15 != 37 )
        goto LABEL_32;
      v15 = a3[1];
      v16 = a3 + 1;
      if ( a3[1] != 37 )
        break;
      ++a3;
LABEL_32:
      if ( *(unsigned __int16 *)(a2 + 24) != v15 )
        goto LABEL_30;
LABEL_33:
      token = lex_get_token(a1);
      if ( token )
      {
LABEL_35:
        v20 = token;
        goto LABEL_14;
      }
      ++a3;
    }
    ++v11;
    if ( (_BYTE)v15 == 110 )
      break;
    if ( (char)v15 > 110 )
    {
      if ( (_BYTE)v15 != 115 )
      {
LABEL_30:
        v20 = 1362;
        goto LABEL_14;
      }
      v30 = *(_WORD *)(a2 + 24);
      if ( v30 != 4 && (v30 != 2 || *(_QWORD *)(sub_7A0520(a1) + 8) <= 1u && *(_WORD *)(a2 + 24) != 2) )
        goto LABEL_13;
      goto LABEL_41;
    }
    if ( (_BYTE)v15 == 73 )
    {
      if ( *(_WORD *)(a2 + 24) != 2 )
      {
        v20 = 1666;
        goto LABEL_14;
      }
LABEL_41:
      if ( va[0].gp_offset > 0x2F )
      {
        v36 = va_arg(va, _QWORD);
        v31 = (__int64 **)&v36;
      }
      else
      {
        v31 = (__int64 **)((char *)va[0].reg_save_area + va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      v32 = *v31;
      if ( (__int64 *)a2 != *v31 )
      {
        v33 = *(_QWORD *)(a2 + 8);
        if ( v33 && (v34 = v33 - 1, v33 != 1) )
        {
          v40 = *(const void **)a2;
          v41 = (void *)*v32;
          if ( v32[2] < v33 )
          {
            v45 = *(const void **)a2;
            v42 = qvector_reserve(*v31, *v32, *(_QWORD *)(a2 + 8), 1);
            *v32 = v42;
            v41 = (void *)v42;
            v40 = v45;
            v34 = v33 - 1;
          }
          v32[1] = v33;
          memmove(v41, v40, v34);
          *(_BYTE *)(*v32 + v33 - 1) = 0;
        }
        else
        {
          v32[1] = 0;
        }
      }
LABEL_47:
      a3 = v16;
      goto LABEL_33;
    }
    if ( (_BYTE)v15 != 83 )
      goto LABEL_30;
    if ( va[0].gp_offset > 0x2F )
    {
      v38 = va_arg(va, _QWORD);
      v17 = (__int64 **)&v38;
    }
    else
    {
      v17 = (__int64 **)((char *)va[0].reg_save_area + va[0].gp_offset);
      va[0].gp_offset += 8;
    }
    v18 = *(_WORD *)(a2 + 24);
    v19 = *v17;
    if ( v18 != 4 && (v18 != 2 || *(_QWORD *)(sub_7A0520(a1) + 8) <= 1u) )
    {
LABEL_13:
      v20 = 1348;
      goto LABEL_14;
    }
    do
    {
      v23 = *(_QWORD *)(a2 + 8);
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
            v46 = v26;
            v44 = v25;
            v43 = v24;
            v37 = qvector_reserve(v19, v27, v23, 1);
            v26 = v46;
            v25 = v44;
            *v19 = v37;
            v24 = v43;
            v27 = v37;
          }
          v19[1] = v23;
          *(_BYTE *)(v27 + v26) = 0;
          memcpy((void *)(v25 + *v19), *(const void **)a2, v24);
        }
      }
      token = lex_get_token(a1);
      if ( token )
        goto LABEL_35;
      v29 = *(_WORD *)(a2 + 24);
    }
    while ( v29 == 4 || v29 == 2 && *(_QWORD *)(sub_7A0520(a1) + 8) > 1u );
    if ( !a3[2] )
      return v11;
    if ( *(unsigned __int16 *)(a2 + 24) != a3[2] )
      goto LABEL_30;
    a3 += 2;
  }
  if ( *(_WORD *)(a2 + 24) != 2 )
  {
    v20 = 1352;
LABEL_14:
    v21 = (const char *)qstrerror(v20);
    sub_747B60(a1, (__int64)"%s", v21);
  }
  if ( va[0].gp_offset > 0x2F )
  {
    v39 = va_arg(va, _QWORD);
    v35 = (signed __int64 **)&v39;
  }
  else
  {
    v35 = (signed __int64 **)((char *)va[0].reg_save_area + va[0].gp_offset);
    va[0].gp_offset += 8;
  }
  if ( (unsigned __int8)sub_748330(*v35, a1, a2, 0x8000000000000000LL, 0x7FFFFFFFFFFFFFFFLL, 0) )
    goto LABEL_47;
  return 0;
}
