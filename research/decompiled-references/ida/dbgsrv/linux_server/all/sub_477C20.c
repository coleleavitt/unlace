/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477C20
// Address: 0x0000000000477C20

//----- (0000000000477C20) ----------------------------------------------------
void __fastcall __noreturn sub_477C20(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  void *v7; // rsi
  __int64 v8; // r14
  const void *v9; // r14
  const char *v10; // rdi
  __int64 v11; // r13
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r11
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  void *v20; // rsi
  char *v21; // r13
  char *v22; // rcx
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  _BYTE *v28; // rsi
  int (**v29)(const char *, ...); // rbx
  const char *v30; // r12
  char *v31; // rdi
  const char *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-78h]
  unsigned __int64 v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+8h] [rbp-70h]
  unsigned __int64 v36; // [rsp+8h] [rbp-70h]
  unsigned __int64 v37; // [rsp+8h] [rbp-70h]
  size_t v38; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v41 = 0;
  ptr = nullptr;
  v33 = v3;
  if ( !v3 )
  {
    v29 = *(int (***)(const char *, ...))(a1 + 72);
    v30 = s1;
    if ( v29 )
      goto LABEL_34;
    goto LABEL_40;
  }
  v4 = 0;
  while ( 1 )
  {
    v21 = (char *)(*(_QWORD *)a1 + 40 * v4);
    if ( !*v21 )
      break;
    v22 = "    ";
    if ( *((_DWORD *)v21 + 8) )
      v22 = " ...";
    sub_42A760(&ptr, "  -%c%s", (unsigned int)*v21, v22);
LABEL_17:
    v23 = *((_QWORD *)v21 + 1);
    if ( v23 )
    {
      v24 = "";
      if ( *((_DWORD *)v21 + 8) )
        v24 = " ...";
      sub_42A760(&ptr, "  (--%s%s)", v23, v24);
    }
    v8 = v41;
    if ( (_QWORD)v41 )
    {
      v5 = v41 + 1;
      v6 = v41;
      v7 = ptr;
      v8 = v41 - 1;
      if ( *((_QWORD *)&v41 + 1) >= (unsigned __int64)(v41 + 1) )
        goto LABEL_4;
    }
    else
    {
      v7 = ptr;
      v5 = 2;
      v6 = 1;
      if ( *((_QWORD *)&v41 + 1) >= 2u )
        goto LABEL_4;
    }
    v34 = v5;
    ptr = sub_481540((__int64)&ptr, v7, v5, 1u);
    v5 = v34;
    v7 = ptr;
LABEL_4:
    *(_QWORD *)&v41 = v5;
    *((_BYTE *)v7 + v6) = 0;
    *((_BYTE *)ptr + v8) = 32;
    v9 = *((const void **)v21 + 2);
    if ( v9 )
    {
      v10 = *((const char **)v21 + 2);
      v11 = v41;
      v12 = strlen(v10);
      v13 = v12;
      v14 = v12;
      if ( v11 )
      {
        --v11;
        v14 = v12 + v11;
      }
      v15 = ptr;
      v16 = v14 + 1;
      if ( *((_QWORD *)&v41 + 1) < v14 + 1 )
      {
        v38 = v14;
        v36 = v14 + 1;
        ptr = sub_481540((__int64)&ptr, ptr, v16, 1u);
        v14 = v38;
        v15 = ptr;
        v16 = v36;
      }
      *(_QWORD *)&v41 = v16;
      v15[v14] = 0;
      memmove((char *)ptr + v11, v9, v13);
    }
    v17 = v41;
    if ( (_QWORD)v41 )
    {
      v18 = v41 + 1;
      v19 = v41;
      v20 = ptr;
      v17 = v41 - 1;
      if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
        goto LABEL_25;
    }
    else
    {
      v20 = ptr;
      v18 = 2;
      v19 = 1;
      if ( *((_QWORD *)&v41 + 1) < 2u )
      {
LABEL_25:
        v35 = v17;
        ptr = sub_481540((__int64)&ptr, v20, v18, 1u);
        v17 = v35;
        v20 = ptr;
      }
    }
    *(_QWORD *)&v41 = v18;
    ++v4;
    *((_BYTE *)v20 + v19) = 0;
    *((_BYTE *)ptr + v17) = 10;
    if ( v33 == v4 )
    {
      v29 = *(int (***)(const char *, ...))(a1 + 72);
      if ( v29 )
      {
LABEL_32:
        v30 = s1;
        if ( (_QWORD)v41 )
          v30 = (const char *)ptr;
LABEL_34:
        v31 = (char *)s1;
        if ( *(_QWORD *)(a1 + 32) )
          v31 = *(char **)(a1 + 24);
        v32 = sub_480610(v31);
        ((void (*)(const char *, ...))v29)("Usage: %s [options]\n%s", v32, v30);
        if ( *(_QWORD *)(a1 + 56) > 1u )
          ((void (*)(const char *, ...))v29)("\n%s\n", *(const char **)(a1 + 48));
        sub_481AE0(a2);
      }
LABEL_40:
      v29 = &printf;
      goto LABEL_32;
    }
  }
  v25 = v41;
  if ( (_QWORD)v41 )
  {
    v26 = v41 + 7;
    v27 = v41 + 8;
    v28 = ptr;
    v25 = v41 - 1;
    if ( *((_QWORD *)&v41 + 1) >= (unsigned __int64)(v41 + 8) )
    {
LABEL_28:
      *(_QWORD *)&v41 = v27;
      v28[v26] = 0;
      *(_QWORD *)((char *)ptr + v25) = 0x2020202020202020LL;
      goto LABEL_17;
    }
  }
  else
  {
    v28 = ptr;
    v27 = 9;
    v26 = 8;
    if ( *((_QWORD *)&v41 + 1) >= 9u )
      goto LABEL_28;
  }
  v37 = v27;
  ptr = sub_481540((__int64)&ptr, v28, v27, 1u);
  v27 = v37;
  v28 = ptr;
  goto LABEL_28;
}
