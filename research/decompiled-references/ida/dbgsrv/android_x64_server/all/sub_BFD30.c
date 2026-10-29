/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFD30
// Address: 0x00000000000BFD30

//----- (00000000000BFD30) ----------------------------------------------------
__int64 __fastcall sub_BFD30(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  FILE *v7; // rax
  FILE *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rax
  size_t v14; // rbx
  __int64 v15; // rbp
  char *v16; // rdi
  const char *v17; // rax
  const char *v18; // rbx
  size_t v19; // rax
  size_t v20; // r12
  size_t v21; // rbp
  void *v22; // rdi
  const char *v24; // rax
  char v25; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v7 = sub_BFA30(a2, "rbe", 8);
  if ( !v7 )
  {
    set_qerrno(1u);
    v24 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("Can't open for read file '%s': %s", a2, v24);
  }
  v8 = v7;
  v9 = qfsize(v7);
  if ( v9 <= 0 || (v10 = v9, v9 > a3) )
  {
    if ( a4 )
    {
      v13 = __strlen_chk("wrong file size", 16);
      if ( v13 )
      {
        v14 = v13;
        v15 = v13 + 1;
        if ( *(_QWORD *)(a4 + 16) >= (unsigned __int64)(v13 + 1) )
        {
          v16 = *(char **)a4;
        }
        else
        {
          v16 = (char *)qvector_reserve(a4, *(char **)a4, v13 + 1, 1u);
          *(_QWORD *)a4 = v16;
        }
        *(_QWORD *)(a4 + 8) = v15;
        memmove(v16, "wrong file size", v14);
        *(_BYTE *)(*(_QWORD *)a4 + v14) = 0;
        goto LABEL_26;
      }
LABEL_21:
      *(_QWORD *)(a4 + 8) = 0;
    }
LABEL_26:
    LODWORD(a3) = 0;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 >= v10 )
  {
    if ( v11 != v10 )
    {
      v25 = 0;
      sub_5E330(a1, v10, &v25);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) >= v10 )
    {
      v12 = *(char **)a1;
    }
    else
    {
      v12 = (char *)qvector_reserve(a1, *(char **)a1, v10, 1u);
      *(_QWORD *)a1 = v12;
      v11 = *(_QWORD *)(a1 + 8);
    }
    memset(&v12[v11], 0, v10 - v11);
    *(_QWORD *)(a1 + 8) = v10;
  }
  LOBYTE(a3) = 1;
  if ( qfread(v8, *(void **)a1, v10) != v10 )
  {
    if ( a4 )
    {
      v17 = qstrerror(0xFFFFFFFF);
      if ( v17 )
      {
        v18 = v17;
        v19 = strlen(v17);
        if ( v19 )
        {
          v20 = v19;
          v21 = v19 + 1;
          if ( *(_QWORD *)(a4 + 16) >= v19 + 1 )
          {
            v22 = *(void **)a4;
          }
          else
          {
            v22 = qvector_reserve(a4, *(char **)a4, v19 + 1, 1u);
            *(_QWORD *)a4 = v22;
          }
          *(_QWORD *)(a4 + 8) = v21;
          memmove(v22, v18, v20);
          *(_BYTE *)(*(_QWORD *)a4 + v20) = 0;
          goto LABEL_26;
        }
      }
      goto LABEL_21;
    }
    goto LABEL_26;
  }
LABEL_27:
  qfclose(v8);
  return (unsigned int)a3;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
