void __fastcall sub_EE9CF0(__int64 a1, __int64 a2, double a3)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rbx
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v3 = *(_DWORD *)(a1 + 8) - 1;
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *(_QWORD *)a1;
      v6 = j__strlen("  ");
      sub_9717A0(v5, "  ", v6);
    }
  }
  v7 = *(_QWORD *)a1;
  v8 = (const char *)sub_ECA030(a2);
  v9 = sub_971800(v7, v8);
  v10 = sub_971800(v9, ":");
  sub_22581D0(v10, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  sub_EE8730(a1, *(char **)(a2 + 16), 0, v11, v12, v13, a3);
}

