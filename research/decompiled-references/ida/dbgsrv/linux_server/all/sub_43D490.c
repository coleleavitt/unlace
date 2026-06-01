/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D490
// Address: 0x000000000043D490

//----- (000000000043D490) ----------------------------------------------------
__int64 __fastcall sub_43D490(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rbp
  const char *v6; // rsi
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi

  while ( 2 )
  {
    v3 = *(_QWORD **)(a1 + 16);
    v4 = (_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_13;
    v5 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v11 = v3[5];
      if ( !v5 )
        break;
      v6 = *(const char **)a2;
      v7 = v3;
      v8 = s1;
      if ( v11 )
        goto LABEL_4;
LABEL_5:
      v9 = strcmp(v8, v6);
      v10 = (_QWORD *)v3[2];
      v3 = (_QWORD *)v3[3];
      if ( v9 >= 0 )
      {
        v4 = v7;
        v3 = v10;
      }
      if ( !v3 )
        goto LABEL_16;
    }
    if ( v11 )
    {
LABEL_12:
      v6 = s1;
LABEL_4:
      v8 = (const char *)v3[4];
      v7 = v3;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v12 = v3[2];
      if ( !v12 )
        break;
      v4 = v3;
      v3 = (_QWORD *)v3[2];
      if ( *(_QWORD *)(v12 + 40) )
        goto LABEL_12;
    }
    v4 = v3;
LABEL_16:
    if ( (_QWORD *)(a1 + 8) != v4 )
    {
      if ( v4[5] )
      {
        v13 = (const char *)v4[4];
        v14 = s1;
        if ( v5 )
          goto LABEL_19;
        goto LABEL_20;
      }
      if ( !v5 )
        return *((unsigned int *)v4 + 14);
      v13 = s1;
LABEL_19:
      v14 = *(const char **)a2;
LABEL_20:
      if ( strcmp(v14, v13) >= 0 )
        return *((unsigned int *)v4 + 14);
    }
LABEL_13:
    if ( *(_QWORD *)(a1 + 48) )
    {
      a1 = sub_439CD0(*(int *)(a1 + 48));
      continue;
    }
    return 0xFFFFFFFFLL;
  }
}
