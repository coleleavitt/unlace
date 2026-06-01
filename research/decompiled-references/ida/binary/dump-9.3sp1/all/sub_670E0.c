__int64 __fastcall sub_670E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // r14
  void *v9; // rax

  v4 = a1[98];
  if ( v4 )
    return v4;
  v4 = j__qalloc_or_throw(256, a2, a3, a4);
  *(_QWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = a1;
  *(_QWORD *)(v4 + 48) = 63;
  *(_QWORD *)v4 = off_4EC750;
  v6 = (_QWORD *)(v4 + 56);
  do
  {
    *v6 = 0;
    v6 += 4;
    *(_OWORD *)(v6 - 3) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( v6 != (_QWORD *)(v4 + 248) );
  *(_BYTE *)(v4 + 248) = 1;
  *(_BYTE *)(v4 + 32) = 1;
  a1[98] = v4;
  if ( (_QWORD *)(v4 + 8) == a1 + 51 )
    return v4;
  v7 = a1[52];
  if ( v7 > 1 )
  {
    v8 = (const void *)a1[51];
    v9 = *(void **)(v4 + 8);
    if ( *(_QWORD *)(v4 + 24) < v7 )
    {
      v9 = (void *)qvector_reserve(v4 + 8, *(_QWORD *)(v4 + 8), a1[52], 1);
      *(_QWORD *)(v4 + 8) = v9;
    }
    *(_QWORD *)(v4 + 16) = v7;
    memmove(v9, v8, v7 - 1);
    *(_BYTE *)(*(_QWORD *)(v4 + 8) + v7 - 1) = 0;
    return a1[98];
  }
  *(_QWORD *)(v4 + 16) = 0;
  return a1[98];
}
