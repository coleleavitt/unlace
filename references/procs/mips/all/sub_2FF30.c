__int64 __fastcall sub_2FF30(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rbx
  const char *v6; // r13
  unsigned int v7; // r14d
  char v9; // [rsp+Fh] [rbp-39h]

  if ( a2 && (v9 = *a2) != 0 && (v2 = *(_QWORD *)(a1 + 16), v3 = *(int *)(v2 + 64), (int)v3 > 0) )
  {
    v4 = *(_QWORD *)(v2 + 56);
    v5 = 0;
    while ( 1 )
    {
      v6 = *(const char **)(v4 + 8 * v5);
      v7 = v5;
      if ( !strcasecmp(v6, a2) || v9 != 36 && *v6 == 36 && !strcasecmp(v6 + 1, a2) )
        break;
      if ( ++v5 == v3 )
        return (unsigned int)-1;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}
