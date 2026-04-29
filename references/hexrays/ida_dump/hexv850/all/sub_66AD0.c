__int64 __fastcall sub_66AD0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( **(_DWORD **)(a1 + 56) != 55 )
  {
    if ( !under_debugger )
      sub_37CFE0(52693);
    BUG();
  }
  result = 0;
  if ( *(_DWORD *)(a1 + 76) == 2 )
  {
    sub_1D0380(a1, 0);
    v3 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v3 + 32) == 7 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v5 = *(unsigned int *)(v3 + 40);
      if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
        sub_609E0(a1, 0, v4, v2);
      v6 = *(_DWORD *)(a1 + 72);
      v7 = *(_QWORD **)(*(_QWORD *)(v4 + 528) + 8 * v5);
      v8 = v7[44];
      v9 = v7[43];
      if ( v7[45] < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve(v7 + 43, v9, v8 + 1, 4);
        v7[43] = v10;
        v9 = v10;
        v8 = v7[44];
      }
      *(_DWORD *)(v9 + 4 * v8) = v6;
      ++v7[44];
    }
    return 1;
  }
  return result;
}
