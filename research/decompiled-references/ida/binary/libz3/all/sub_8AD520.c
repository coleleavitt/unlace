__int64 __fastcall sub_8AD520(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( !(_DWORD)v2 )
      goto LABEL_6;
    v3 = 32 * v2;
    v4 = 0;
    do
    {
      v5 = a1[1];
      v6 = v4 + v1;
      v4 += 32;
      sub_182EF00(v5, v6);
      result = sub_182EF00(v5, v6 + 16);
      v1 = *a1;
    }
    while ( v3 != v4 );
    if ( v1 )
    {
LABEL_6:
      *(_DWORD *)(v1 - 4) = 0;
      return sub_186B220((void *)(v1 - 8));
    }
  }
  return result;
}

