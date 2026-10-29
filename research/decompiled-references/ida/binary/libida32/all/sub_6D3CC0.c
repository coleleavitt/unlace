__int64 __fastcall sub_6D3CC0(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  char *v3; // rax
  __int64 v4; // rbp
  const char *v5; // r12
  size_t v6; // rax

  v2 = a2;
  v3 = strrchr(a2, 58);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 17504LL);
  if ( v3 )
  {
    v2 = v3 + 1;
    v5 = v3 + 1;
  }
  else
  {
    v5 = a2;
    v6 = 0;
    if ( !a2 )
      return sub_6D2E30(v4, v5, v6);
  }
  v6 = strlen(v2);
  return sub_6D2E30(v4, v5, v6);
}

