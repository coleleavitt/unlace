_QWORD *__fastcall sub_21D8A50(__int64 a1)
{
  size_t v1; // rax
  char *v2; // rbp
  size_t v3; // r13
  size_t v4; // r12
  size_t v5; // r13
  size_t v6; // r13
  void *v7; // r15
  char *v9; // rbp
  char *v10; // r13
  size_t v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  void *v15; // rax
  char *v16; // rbp
  char *v17; // rbp
  unsigned __int64 v18; // rax
  char v19; // dl
  char v20; // [rsp+7h] [rbp-E1h]
  __int64 v21; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v23[184]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = j__strlen("Ts");
  v2 = *(char **)a1;
  v3 = v1;
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( sub_20D1BF0(v4, *(const void **)a1, v1, "Ts") )
  {
    v16 = &v2[v3];
    v10 = "struct";
    *(_QWORD *)a1 = v16;
    v11 = j__strlen("struct");
  }
  else
  {
    v5 = j__strlen("Tu");
    if ( sub_20D1BF0(v4, v2, v5, "Tu") )
    {
      v9 = &v2[v5];
      v10 = (char *)"union";
      *(_QWORD *)a1 = v9;
      v11 = j__strlen("union");
    }
    else
    {
      v6 = j__strlen("Te");
      if ( !sub_20D1BF0(v4, v2, v6, "Te") )
        return sub_21D8010(a1, 0);
      v17 = &v2[v6];
      v10 = "enum";
      *(_QWORD *)a1 = v17;
      v11 = j__strlen("enum");
    }
  }
  v12 = sub_21D8010(a1, 0);
  v7 = v12;
  if ( v12 && v11 )
  {
    v20 = *(_BYTE *)(a1 + 937);
    ptr[1] = (void *)0x2000000000LL;
    ptr[0] = v23;
    sub_21D04A0((__int64)ptr, 6u, v11, (__int64)v10, (unsigned __int64)v12);
    v13 = sub_2223360(a1 + 904, ptr, &v21, off_2BE9FD0);
    if ( v13 )
    {
      v7 = (void *)(v13 + 8);
      if ( ptr[0] != v23 )
        free(ptr[0]);
      if ( v7 )
      {
        ptr[0] = v7;
        v14 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
        if ( v14 )
        {
          v15 = (void *)v14[1];
          if ( v15 )
            v7 = v15;
        }
        if ( *(void **)(a1 + 928) == v7 )
          *(_BYTE *)(a1 + 936) = 1;
      }
    }
    else
    {
      if ( v20 )
      {
        v18 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
        *(_WORD *)(v18 + 16) = 16390;
        v19 = *(_BYTE *)(v18 + 18);
        *(_QWORD *)v18 = 0;
        *(_QWORD *)(v18 + 40) = v7;
        v7 = (void *)(v18 + 8);
        *(_QWORD *)(v18 + 24) = v11;
        *(_BYTE *)(v18 + 18) = v19 & 0xF0 | 5;
        *(_QWORD *)(v18 + 32) = v10;
        *(_QWORD *)(v18 + 8) = off_2BE6960;
        sub_2223210(a1 + 904, v18, v21, off_2BE9FD0);
      }
      else
      {
        v7 = nullptr;
      }
      if ( ptr[0] != v23 )
        free(ptr[0]);
      *(_QWORD *)(a1 + 920) = v7;
    }
  }
  return v7;
}
