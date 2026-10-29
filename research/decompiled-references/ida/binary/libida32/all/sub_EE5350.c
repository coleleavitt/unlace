void __fastcall sub_EE5350(__int64 *a1, __int64 a2, double a3)
{
  char **v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // r13
  char *v8; // r15
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rsi

  sub_971800(*a1, "(");
  v3 = (char **)(a2 + 32);
  v4 = a2 + 32 + 8LL * *(unsigned int *)(a2 + 24);
  if ( v4 != a2 + 32 )
  {
    do
    {
      v7 = *a1;
      v8 = *v3;
      v9 = j__strlen("[");
      sub_9717A0(v7, "[", v9);
      if ( v8 )
        sub_EE16F0(a1, v8, v10, v11, v12, v13, a3);
      else
        sub_971800(*a1, "<null expr>");
      v5 = *a1;
      ++v3;
      v6 = j__strlen("]");
      sub_9717A0(v5, "]", v6);
    }
    while ( (char **)v4 != v3 );
  }
  sub_971800(*a1, ")");
  v17 = *(char **)(a2 + 8LL * *(unsigned int *)(a2 + 24) + 32);
  if ( v17 )
    sub_EE16F0(a1, v17, v14, a2, v15, v16, a3);
  else
    sub_EE0C80(a1);
}

