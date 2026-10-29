__int64 __fastcall sub_826790(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  char *v6; // rdi
  __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rdx

  *(_QWORD *)a1 = &off_1C550C0;
  v2 = *(__int64 **)(a1 + 160);
  v3 = &v2[*(unsigned int *)(a1 + 168)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~2u;
    }
    while ( v4 != v3 );
  }
  *(_DWORD *)(a1 + 168) = 0;
  if ( v2 != (__int64 *)(a1 + 176) && v2 )
    sub_186B220(v2);
  v6 = *(char **)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  v8 = &v6[8 * result];
  if ( v6 != v8 )
  {
    result = *(_QWORD *)(a1 + 16);
    do
    {
      v9 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v9 + 6) &= ~1u;
    }
    while ( v8 != (char *)result );
  }
  *(_DWORD *)(a1 + 24) = 0;
  if ( v6 )
  {
    if ( v6 != (char *)(a1 + 32) )
      return sub_186B220(v6);
  }
  return result;
}

