__int64 __fastcall sub_20DDFC0(__int64 a1)
{
  size_t v1; // rax
  char *v2; // rbp
  size_t v3; // r13
  size_t v4; // r12
  size_t v5; // r13
  size_t v6; // r13
  char *v8; // rbp
  char *v9; // r13
  size_t v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  char v13; // dl
  char *v14; // rbp
  char *v15; // rbp

  v1 = j__strlen("Ts");
  v2 = *(char **)a1;
  v3 = v1;
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( sub_20D1BF0(v4, *(const void **)a1, v1, "Ts") )
  {
    v14 = &v2[v3];
    v9 = "struct";
    *(_QWORD *)a1 = v14;
    v10 = j__strlen("struct");
  }
  else
  {
    v5 = j__strlen("Tu");
    if ( sub_20D1BF0(v4, v2, v5, "Tu") )
    {
      v8 = &v2[v5];
      v9 = (char *)"union";
      *(_QWORD *)a1 = v8;
      v10 = j__strlen("union");
    }
    else
    {
      v6 = j__strlen("Te");
      if ( !sub_20D1BF0(v4, v2, v6, "Te") )
        return sub_20DD4B0(a1, 0);
      v15 = &v2[v6];
      v9 = "enum";
      *(_QWORD *)a1 = v15;
      v10 = j__strlen("enum");
    }
  }
  v11 = sub_20DD4B0(a1, 0);
  if ( v11 )
  {
    if ( v10 )
    {
      v12 = sub_20CF970(a1 + 816, 40);
      *(_WORD *)(v12 + 8) = 16390;
      v13 = *(_BYTE *)(v12 + 10);
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = v9;
      *(_QWORD *)(v12 + 32) = v11;
      v11 = v12;
      *(_BYTE *)(v12 + 10) = v13 & 0xF0 | 5;
      *(_QWORD *)v12 = off_2BE6960;
    }
  }
  return v11;
}
