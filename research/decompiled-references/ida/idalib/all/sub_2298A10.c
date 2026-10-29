unsigned int *sub_2298A10()
{
  _BYTE *v0; // rax
  unsigned __int64 v1; // rdx
  int *v2; // rbx
  const void *v4; // r12
  size_t v5; // rdx
  size_t v6; // r14
  int (**v7)[6]; // r13
  unsigned __int64 i; // rdi

  v0 = (_BYTE *)sub_229C150();
  if ( v1 <= 1 || *v0 != 118 || (unsigned __int8)(v0[1] - 56) > 1u )
    return nullptr;
  v4 = (const void *)sub_229B8F0(v0, v1);
  v6 = v5;
  if ( !v5 )
    return dword_2B584C0;
  v7 = &off_2C77140;
  for ( i = 7; ; i = *(_QWORD *)&(**v7)[8] )
  {
    if ( i >= v6 )
    {
      v2 = (int *)*v7;
      if ( !memcmp((const void *)(*(_QWORD *)&(**v7)[6] + i - v6), v4, v6) )
        break;
    }
    if ( ++v7 == (int (**)[6])algn_2C771D0 )
      return nullptr;
  }
  return (unsigned int *)v2;
}
