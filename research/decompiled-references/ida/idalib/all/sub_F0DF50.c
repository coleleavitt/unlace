void __fastcall sub_F0DF50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r13d
  int i; // r15d
  __int64 v5; // rbp
  size_t v6; // rax
  __int64 v7; // rbx
  const void *v8; // rax
  size_t v9; // rdx
  unsigned int v10; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a1 + 72);
  v10 = 52;
  if ( v2 )
    v10 = *(_DWORD *)(*(_QWORD *)(v2 + 2320) + 64LL);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *(_QWORD *)a1;
      v6 = j__strlen("  ");
      sub_9954E0(v5, "  ", v6);
    }
  }
  v7 = sub_995540(*(_QWORD *)a1, "#pragma omp cancel ");
  v8 = (const void *)sub_20EAB70(*(unsigned int *)(a2 + 32), v10);
  sub_9954E0(v7, v8, v9);
  sub_F0DC70(a1, a2);
}
