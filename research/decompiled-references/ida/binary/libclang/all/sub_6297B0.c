void __fastcall sub_6297B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char **v4; // r12
  size_t v5; // rbp
  const char *v6; // r12
  size_t v7; // rax
  void *v8; // rdi
  char v9; // al
  size_t v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(const char ***)(a1 + 8);
  if ( !a4 || (v9 = sub_25E53E0(a3, a4, 10, v10), v5 = v10[0], v9) )
    v5 = -1;
  v6 = *v4;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = *(void **)(a2 + 32);
    if ( v7 <= v5 )
      v5 = v7;
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 < v5 )
    {
      sub_26240F0(a2, v6, v5);
    }
    else if ( v5 )
    {
      memcpy(v8, v6, v5);
      *(_QWORD *)(a2 + 32) += v5;
    }
  }
}

