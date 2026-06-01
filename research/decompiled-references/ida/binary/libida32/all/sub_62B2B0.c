__int64 __fastcall sub_62B2B0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char *v5; // r15
  char *v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  size_t v10; // r12
  char *v11; // rax
  unsigned __int64 v12; // rbx
  const char *v13; // r14
  __int64 v14; // r13
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // r12
  char *v18; // rax
  __int64 v19; // rbx
  char v21; // cl
  void *dest; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  dest = nullptr;
  v5 = *(char **)a4;
  v6 = *(char **)a4;
  do
  {
    if ( (unsigned __int64)v6 >= *(_QWORD *)(a4 + 8) )
      goto LABEL_4;
    ++v6;
  }
  while ( *(v6 - 1) );
  *(_QWORD *)a4 = v6;
  if ( !v5 )
  {
LABEL_4:
    if ( !under_debugger )
      interr(1737);
    goto LABEL_31;
  }
  v8 = v6 - v5;
  v7 = v8 == 0;
  v9 = v8;
  v10 = v8 - 1;
  v11 = nullptr;
  if ( !v7 )
  {
    v11 = (char *)qvector_reserve(&dest, 0, v9, 1);
    dest = v11;
  }
  *(_QWORD *)&v24 = v9;
  v11[v9 - 1] = 0;
  memmove(dest, v5, v10);
  if ( (unsigned __int64)v24 <= 1 )
  {
    v17 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = (const char *)dest;
    if ( v12 <= 1 )
      goto LABEL_29;
    v14 = *(_QWORD *)(a2 + 8);
    v15 = 1;
    v16 = 1;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v14 + 8 * v16);
      if ( !strcmp(*(const char **)v17, v13) )
        break;
      v16 = ++v15;
      if ( v15 >= v12 )
        goto LABEL_29;
    }
  }
  if ( !v17 )
  {
LABEL_29:
    if ( !under_debugger )
      interr(1738);
LABEL_31:
    BUG();
  }
  v18 = *(char **)a4;
  if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 8) )
  {
    if ( a3 )
      *a3 = 0;
    goto LABEL_18;
  }
  v21 = *v18;
  *(_QWORD *)a4 = v18 + 1;
  if ( a3 )
    *a3 = v21;
  if ( (v21 & 1) != 0 )
  {
    v19 = *(_QWORD *)(v17 + 56);
  }
  else
  {
    if ( (v21 & 2) == 0 )
    {
LABEL_18:
      v19 = *(_QWORD *)(v17 + 64);
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(v17 + 72);
  }
LABEL_19:
  if ( dest )
  {
    *(_QWORD *)&v24 = 0;
    qfree(dest);
  }
  return v19;
}

