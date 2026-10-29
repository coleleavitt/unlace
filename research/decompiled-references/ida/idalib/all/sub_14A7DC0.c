__int64 __fastcall sub_14A7DC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  char *v9; // rax
  __int64 v10; // rbp
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rax
  size_t v14; // rax
  __int64 v15; // rbp
  size_t v16; // rax

  v2 = a1[1];
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 56) + 1LL) & 8) == 0 || *(_WORD *)(a2 + 16) != 5 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( a1[229] )
  {
    v4 = a1[231];
  }
  else
  {
    v6 = j__strlen("final");
    v7 = sub_6F3470(v2 + 552, "final", v6);
    v8 = a1[1];
    a1[229] = v7;
    v9 = *(char **)(v8 + 56);
    if ( (v9[4] & 8) != 0 )
    {
      v12 = j__strlen("__final");
      v13 = sub_6F3470(v8 + 552, "__final", v12);
      v8 = a1[1];
      a1[230] = v13;
      v9 = *(char **)(v8 + 56);
    }
    v10 = v8 + 552;
    if ( *v9 < 0 )
    {
      v14 = j__strlen("sealed");
      a1[227] = sub_6F3470(v10, "sealed", v14);
      v15 = a1[1] + 552LL;
      v16 = j__strlen("abstract");
      a1[228] = sub_6F3470(v15, "abstract", v16);
      v10 = a1[1] + 552LL;
    }
    v11 = j__strlen("override");
    v4 = sub_6F3470(v10, "override", v11);
    a1[231] = v4;
  }
  if ( v3 == v4 )
    return 1;
  if ( a1[227] == v3 )
    return 4;
  if ( a1[228] == v3 )
    return 16;
  if ( a1[229] == v3 )
    return 2;
  if ( a1[230] != v3 )
    return 0;
  return 8;
}
