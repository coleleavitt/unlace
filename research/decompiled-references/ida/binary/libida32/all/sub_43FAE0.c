__int64 __fastcall sub_43FAE0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edx
  unsigned int v10; // esi
  __int16 v12; // ax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v4 = *(_QWORD *)a1 + 24 * v3;
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree(v5);
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
  v6 = *(unsigned int *)(a1 + 76);
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 44) = -1;
  if ( !(_DWORD)v6 )
    v6 = dword_2C57A94;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 24)
                                                                                              + 88LL))(
         *(_QWORD *)(a1 + 24),
         a1,
         a1 + 72,
         a1 + 40,
         a1 + 44,
         *(_QWORD *)(a1 + 32),
         v6);
  if ( (int)v6 < v7 )
  {
    if ( !under_debugger )
      interr(96);
    BUG();
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(v8 + 8);
  if ( v9 == -2 )
  {
    *(_DWORD *)(v8 + 8) = *(__int16 *)(a1 + 72);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_DWORD *)(v8 + 8);
  }
  v10 = 0;
  if ( v7 <= v9 )
  {
    v12 = v7 - 1;
    *(_DWORD *)(v8 + 8) = v12;
    v8 = *(_QWORD *)(a1 + 24);
    v10 = v9 - v12;
    v9 = *(_DWORD *)(v8 + 8);
  }
  if ( v9 < 0 )
    *(_DWORD *)(v8 + 8) = 0;
  return v10;
}

