__int64 __fastcall sub_7E7490(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char *v7; // rdi
  __int64 result; // rax
  char *v9; // rcx
  __int64 v10; // rdx

  v2 = *(_QWORD *)(a1 + 296);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(char **)(a1 + 152);
  v4 = &v3[8 * *(unsigned int *)(a1 + 160)];
  if ( v3 != v4 )
  {
    v5 = *(char **)(a1 + 152);
    do
    {
      v6 = *(_QWORD *)v5;
      v5 += 8;
      *(_BYTE *)(v6 + 6) &= ~1u;
    }
    while ( v4 != v5 );
  }
  *(_DWORD *)(a1 + 160) = 0;
  if ( v3 != (char *)(a1 + 168) && v3 )
    sub_186B220(v3);
  v7 = *(char **)(a1 + 8);
  result = *(unsigned int *)(a1 + 16);
  v9 = &v7[8 * result];
  if ( v7 != v9 )
  {
    result = *(_QWORD *)(a1 + 8);
    do
    {
      v10 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v10 + 6) &= ~2u;
    }
    while ( v9 != (char *)result );
  }
  *(_DWORD *)(a1 + 16) = 0;
  if ( v7 )
  {
    if ( v7 != (char *)(a1 + 24) )
      return sub_186B220(v7);
  }
  return result;
}

