__int64 __fastcall sub_D03470(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  char *v4; // rdi
  char *v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = *(_QWORD *)(a1 + 296);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 288);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(char **)(a1 + 144);
  v5 = &v4[8 * *(unsigned int *)(a1 + 152)];
  if ( v4 != v5 )
  {
    v6 = *(char **)(a1 + 144);
    do
    {
      v7 = *(_QWORD *)v6;
      v6 += 8;
      *(_BYTE *)(v7 + 6) &= ~2u;
    }
    while ( v6 != v5 );
  }
  *(_DWORD *)(a1 + 152) = 0;
  if ( v4 != (char *)(a1 + 160) && v4 )
    sub_186B220(v4);
  v8 = *(void **)a1;
  result = *(unsigned int *)(a1 + 8);
  v10 = *(_QWORD *)a1 + 8 * result;
  if ( *(_QWORD *)a1 != v10 )
  {
    result = *(_QWORD *)a1;
    do
    {
      v11 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v11 + 6) &= ~1u;
    }
    while ( v10 != result );
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( v8 )
  {
    if ( v8 != (void *)(a1 + 16) )
      return sub_186B220(v8);
  }
  return result;
}

