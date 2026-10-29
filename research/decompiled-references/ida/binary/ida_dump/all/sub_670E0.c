__int64 __fastcall sub_670E0(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rbp
  const void *v5; // r14
  void *v6; // rax

  v1 = a1[98];
  if ( v1 )
    return v1;
  v1 = j__qalloc_or_throw();
  *(_QWORD *)(v1 + 8) = 0;
  *(_OWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 40) = a1;
  *(_QWORD *)(v1 + 48) = 63;
  *(_QWORD *)v1 = off_4EC750;
  v3 = (_QWORD *)(v1 + 56);
  do
  {
    *v3 = 0;
    v3 += 4;
    *(_OWORD *)(v3 - 3) = 0;
    *((_DWORD *)v3 - 2) = 0;
  }
  while ( v3 != (_QWORD *)(v1 + 248) );
  *(_BYTE *)(v1 + 248) = 1;
  *(_BYTE *)(v1 + 32) = 1;
  a1[98] = v1;
  if ( (_QWORD *)(v1 + 8) == a1 + 51 )
    return v1;
  v4 = a1[52];
  if ( v4 > 1 )
  {
    v5 = (const void *)a1[51];
    v6 = *(void **)(v1 + 8);
    if ( *(_QWORD *)(v1 + 24) < v4 )
    {
      v6 = (void *)qvector_reserve();
      *(_QWORD *)(v1 + 8) = v6;
    }
    *(_QWORD *)(v1 + 16) = v4;
    memmove(v6, v5, v4 - 1);
    *(_BYTE *)(*(_QWORD *)(v1 + 8) + v4 - 1) = 0;
    return a1[98];
  }
  *(_QWORD *)(v1 + 16) = 0;
  return a1[98];
}
