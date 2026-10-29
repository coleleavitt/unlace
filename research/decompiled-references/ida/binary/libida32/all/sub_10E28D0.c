void __fastcall sub_10E28D0(
        _BYTE *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  const char **v9; // r13
  const char **v10; // rbp
  __int64 v11; // rax
  const char *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r12
  char *v15; // rax
  size_t v16; // rdx
  size_t v17; // r14
  _BYTE *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi

  if ( !a1[512] )
    return;
  v9 = *((const char ***)a1 + 26);
  v10 = *((const char ***)a1 + 25);
  if ( v10 == v9 )
  {
LABEL_10:
    v19 = sub_22598C0(a1, a2);
    v24 = *(_QWORD *)(v19 + 16);
    if ( *(_QWORD *)(v19 + 32) == v24 )
      return;
LABEL_11:
    sub_2257CB0(v19, v24, v20, v21, v22, v23, a7, a8, a9);
    return;
  }
  do
  {
    while ( 1 )
    {
      v11 = sub_22598C0(a1, a2);
      v12 = *v10;
      a2 = nullptr;
      v13 = v11;
      v14 = v11;
      if ( *v10 )
        a2 = (char *)strlen(*v10);
      v15 = (char *)sub_2266D20(v12, a2, 0);
      a1 = *(_BYTE **)(v13 + 32);
      v17 = v16;
      v18 = *(_BYTE **)(v13 + 24);
      if ( v17 > v18 - a1 )
      {
        a2 = v15;
        v14 = sub_22581D0(v13, v15, v17);
        v18 = *(_BYTE **)(v14 + 24);
        a1 = *(_BYTE **)(v14 + 32);
      }
      else if ( v17 )
      {
        a2 = v15;
        memcpy(a1, v15, v17);
        v18 = *(_BYTE **)(v13 + 24);
        a1 = (_BYTE *)(v17 + *(_QWORD *)(v13 + 32));
        *(_QWORD *)(v13 + 32) = a1;
      }
      if ( a1 != v18 )
        break;
      a2 = "\n";
      a1 = (_BYTE *)v14;
      v10 += 5;
      sub_22581D0(v14, "\n", 1);
      if ( v9 == v10 )
        goto LABEL_10;
    }
    v10 += 5;
    *a1 = 10;
    ++*(_QWORD *)(v14 + 32);
  }
  while ( v9 != v10 );
  v19 = sub_22598C0(a1, a2);
  v24 = *(_QWORD *)(v19 + 16);
  if ( *(_QWORD *)(v19 + 32) != v24 )
    goto LABEL_11;
}

