__int64 __fastcall sub_2129640(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v14; // r12
  __int64 *v15; // rdx
  __int64 *v16; // rdx

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244CB0(a1, a2, a3, v4);
  v9 = v5;
  v10 = v5;
  v11 = (__int64 *)(*(_QWORD *)a1 + 8LL * v5);
  v12 = *v11;
  if ( *v11 )
  {
    if ( v12 != -8 )
      return v12 + 8;
    --*(_DWORD *)(a1 + 16);
  }
  v14 = sub_22300B0(a3 + 17, 8, v9, v6, v7, v8);
  if ( a3 )
    memcpy((void *)(v14 + 16), a2, a3);
  *(_BYTE *)(v14 + a3 + 16) = 0;
  *(_QWORD *)v14 = a3;
  *(_DWORD *)(v14 + 8) = 0;
  *v11 = v14;
  ++*(_DWORD *)(a1 + 12);
  v15 = (__int64 *)(*(_QWORD *)a1 + 8LL * (unsigned int)sub_22450D0(a1, v10));
  v12 = *v15;
  if ( *v15 == -8 || !v12 )
  {
    v16 = v15 + 1;
    do
    {
      do
        v12 = *v16++;
      while ( !v12 );
    }
    while ( v12 == -8 );
  }
  return v12 + 8;
}
