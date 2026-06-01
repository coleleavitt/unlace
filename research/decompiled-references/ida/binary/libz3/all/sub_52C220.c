__int64 __fastcall sub_52C220(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi
  char *v7; // rdi
  char *v8; // rcx
  char *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 200);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 192);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(void **)(a1 + 168);
  if ( v6 )
    sub_186B220(v6);
  v7 = *(char **)(a1 + 24);
  v8 = &v7[8 * *(unsigned int *)(a1 + 32)];
  if ( v7 != v8 )
  {
    v9 = *(char **)(a1 + 24);
    do
    {
      v10 = *(_QWORD *)v9;
      v9 += 8;
      *(_BYTE *)(v10 + 6) &= ~1u;
    }
    while ( v9 != v8 );
  }
  result = a1 + 40;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v7 != (char *)(a1 + 40) && v7 )
    result = sub_186B220(v7);
  if ( *(_QWORD *)a1 )
    return sub_186B220(*(void **)a1);
  return result;
}

