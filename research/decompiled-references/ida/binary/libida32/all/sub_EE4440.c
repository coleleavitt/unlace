__int64 __fastcall sub_EE4440(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // r12
  size_t v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  char *v8; // r12
  size_t v9; // rax
  int v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+8h] [rbp-50h]
  size_t v13; // [rsp+10h] [rbp-48h]

  v2 = 0;
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 > 0 )
  {
    do
    {
      v3 = *(_QWORD *)a1;
      ++v2;
      v4 = j__strlen("  ");
      sub_9717A0(v3, "  ", v4);
    }
    while ( v11 != v2 );
  }
  sub_971800(*(_QWORD *)a1, "#pragma acc cache(");
  if ( *(_DWORD *)(a2 + 48) )
    sub_971800(*(_QWORD *)a1, "readonly: ");
  v5 = *(_QWORD *)a1;
  v13 = j__strlen(", ");
  v6 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
  v12 = v6;
  if ( a2 + 56 != v6 )
  {
    v7 = a2 + 64;
    sub_EE3F40(a1, *(char **)(a2 + 56));
    if ( v6 != a2 + 64 )
    {
      do
      {
        v7 += 8;
        sub_9717A0(v5, ", ", v13);
        v8 = *(char **)(v7 - 8);
        v9 = j__strlen("\n");
        sub_EE3EC0(v8, *(_QWORD *)a1, 0, (const __m128i *)(a1 + 24), 0, 0, "\n", v9);
      }
      while ( v12 != v7 );
    }
    v5 = *(_QWORD *)a1;
  }
  return sub_971800(v5, ")\n");
}

