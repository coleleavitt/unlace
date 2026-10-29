__int64 __fastcall sub_20E03E0(__int64 a1, unsigned __int8 a2)
{
  size_t v2; // rax
  char *v3; // rbp
  size_t v4; // r14
  size_t v5; // r12
  size_t v6; // r14
  __int64 v7; // rbp
  char *v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  size_t v12; // rax
  char *v13; // r14
  char *v14; // r12
  size_t v15; // r15
  char *v16; // r12
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdx

  v2 = j__strlen("_Z");
  v3 = *(char **)a1;
  v4 = v2;
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( sub_20D1BF0(v5, *(const void **)a1, v2, "_Z") || (v4 = j__strlen("__Z"), sub_20D1BF0(v5, v3, v4, "__Z")) )
  {
    *(_QWORD *)a1 = &v3[v4];
    v7 = sub_20DF440((char **)a1, a2);
    if ( v7 )
    {
      v9 = *(char **)a1;
      v10 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)a1 == v10 )
        return v7;
      if ( *v9 == 46 )
      {
        v17 = sub_20CF970(a1 + 816, 40);
        *(_WORD *)(v17 + 8) = 16385;
        v18 = *(_BYTE *)(v17 + 10);
        *(_QWORD *)(v17 + 16) = v7;
        v7 = v17;
        *(_QWORD *)(v17 + 24) = v10 - (_QWORD)v9;
        *(_QWORD *)(v17 + 32) = v9;
        *(_BYTE *)(v17 + 10) = v18 & 0xF0 | 5;
        *(_QWORD *)v17 = off_2BE66C0;
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        return v7;
      }
    }
    return 0;
  }
  v6 = j__strlen("___Z");
  if ( !sub_20D1BF0(v5, v3, v6, "___Z") )
  {
    v6 = j__strlen("____Z");
    if ( !sub_20D1BF0(v5, v3, v6, "____Z") )
    {
      v7 = sub_20D8F30(a1);
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
        return v7;
      return 0;
    }
  }
  *(_QWORD *)a1 = &v3[v6];
  v11 = sub_20DF440((char **)a1, a2);
  if ( !v11 )
    return 0;
  v7 = 0;
  v12 = j__strlen("_block_invoke");
  v13 = *(char **)(a1 + 8);
  v14 = *(char **)a1;
  v15 = v12;
  if ( !sub_20D1BF0((size_t)&v13[-*(_QWORD *)a1], *(const void **)a1, v12, "_block_invoke") )
    return v7;
  v16 = &v14[v15];
  *(_QWORD *)a1 = v16;
  if ( v13 == v16 || *v16 != 95 )
  {
    sub_20CEB80((char **)a1, 0);
  }
  else
  {
    *(_QWORD *)a1 = v16 + 1;
    if ( !sub_20CEB80((char **)a1, 0) )
      return v7;
  }
  v19 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v19 )
  {
    if ( **(_BYTE **)a1 != 46 )
      return 0;
    *(_QWORD *)a1 = v19;
  }
  return sub_20D17D0(a1 + 816, "invocation function for block in ", v11);
}
