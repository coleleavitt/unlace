__int64 __fastcall sub_2099FA0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 i; // r13
  __int64 v9; // rbp
  __int64 v10; // r15
  size_t v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rax

  v2 = sub_221A480(a2);
  sub_995540(v2, "Pass Arguments: ");
  v7 = *(_QWORD *)(a1 + 240);
  for ( i = v7 + 8LL * *(unsigned int *)(a1 + 248); i != v7; v7 += 8 )
  {
    v9 = sub_2099960(a1, *(_QWORD *)(*(_QWORD *)v7 + 16LL), v3, v4, v5, v6);
    if ( v9 )
    {
      v10 = sub_221A480(a2);
      v11 = j__strlen(" -");
      v12 = sub_9954E0(v10, " -", v11);
      sub_9954E0(v12, *(const void **)(v9 + 16), *(_QWORD *)(v9 + 24));
    }
  }
  v13 = *(__int64 **)(a1 + 32);
  v14 = &v13[*(unsigned int *)(a1 + 40)];
  while ( v14 != v13 )
  {
    v15 = *v13++;
    sub_2099F10(v15, a2);
  }
  v16 = sub_221A480(a2);
  return sub_995540(v16, "\n");
}
