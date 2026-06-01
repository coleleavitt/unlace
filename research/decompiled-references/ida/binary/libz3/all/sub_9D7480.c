__int64 __fastcall sub_9D7480(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r15
  void *v14; // rbx
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rdx

  v3 = *(_QWORD *)(a1 + 632) + 24LL * a2;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    v5 = v4 + 40LL * *(unsigned int *)(v4 - 4);
    if ( v4 != v5 )
    {
      v6 = *(_QWORD *)v3;
      do
      {
        v7 = *(unsigned int *)(v6 + 32);
        if ( (_DWORD)v7 != -1 )
        {
          v8 = *(_QWORD *)(a1 + 648) + 16 * v7;
          v9 = *(unsigned int *)(v6 + 36);
          v10 = (_DWORD *)(*(_QWORD *)v8 + 8 * v9);
          v11 = *(_DWORD *)(v8 + 12);
          *v10 = -1;
          v10[1] = v11;
          --*(_DWORD *)(v8 + 8);
          *(_DWORD *)(v8 + 12) = v9;
        }
        v6 += 40;
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(v3 + 12) = -1;
    v12 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v4 + 40 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4);
        v15 = v4 + 16;
        v4 += 40;
        sub_182CBA0(v14, v15);
      }
      while ( v4 != v13 );
      v4 = *(_QWORD *)v3;
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  result = *(_QWORD *)(a1 + 640);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 12) = -1;
  if ( !result || (v17 = *(unsigned int *)(result - 4), (_DWORD)v17 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 640));
    result = *(_QWORD *)(a1 + 640);
    v17 = *(unsigned int *)(result - 4);
  }
  *(_DWORD *)(result + 4 * v17) = a2;
  ++*(_DWORD *)(result - 4);
  return result;
}

