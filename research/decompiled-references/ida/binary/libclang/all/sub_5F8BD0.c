__int64 __fastcall sub_5F8BD0(__int64 a1)
{
  _QWORD *v1; // r12
  const char *v2; // rbp
  _DWORD *v3; // rbx
  __int64 v4; // r14
  size_t v5; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(const char **)(a1 + 16);
  v3 = *(_DWORD **)a1;
  if ( (*(_BYTE *)(*v1 + 4LL) & 1) != 0 && !getenv("LIBCLANG_BGPRIO_DISABLE") )
    sub_2648970(1);
  v4 = v1[1];
  v5 = 0;
  if ( v2 )
    v5 = strlen(v2);
  result = (unsigned __int8)sub_FF1DF0(v4, v2, v5);
  *v3 = (unsigned __int8)result;
  return result;
}

