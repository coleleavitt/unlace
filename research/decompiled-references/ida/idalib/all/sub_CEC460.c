__int64 __fastcall sub_CEC460(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r14
  void (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rbx
  __int64 i; // r13
  __int64 v14; // rax
  unsigned int v15; // ecx

  result = *(_QWORD *)(a3 + 32);
  v5 = *(_QWORD *)(result + 8);
  v6 = v5 + 32LL * *(unsigned int *)(result + 16);
  if ( v5 != v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_DWORD *)(v5 + 8);
      v5 += 32;
      sub_CEC3A0(a1, a2, (__int64 *)(v7 + 32), v8);
    }
    while ( v5 != v6 );
    result = *(_QWORD *)(a3 + 32);
  }
  v9 = *(_QWORD *)(result + 280);
  v10 = v9 + 24LL * *(unsigned int *)(result + 288);
  if ( v9 != v10 )
  {
    do
    {
      v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 16) + 72LL);
      if ( v11 )
        v11(a1, a2 + *(unsigned int *)(v9 + 8));
      v9 += 24;
    }
    while ( v9 != v10 );
    result = *(_QWORD *)(a3 + 32);
  }
  v12 = *(_QWORD *)(result + 488);
  for ( i = v12 + 32LL * *(unsigned int *)(result + 496); v12 != i; result = sub_CEC3A0(
                                                                               a1,
                                                                               a2,
                                                                               (__int64 *)(v14 + 32),
                                                                               v15) )
  {
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_DWORD *)(v12 + 8);
    v12 += 32;
  }
  return result;
}
