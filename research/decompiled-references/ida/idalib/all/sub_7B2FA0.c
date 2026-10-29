char **__fastcall sub_7B2FA0(__int64 a1, __int64 a2, __int64 a3)
{
  char **result; // rax
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d

  result = *(char ***)(a1 + 1736);
  v4 = *result;
  if ( *result )
  {
    sub_7AF120(*result, 0, a3);
    return (char **)sub_73C2B0((__int64)v4, 0, v5, v6, v7, v8);
  }
  return result;
}
