/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023400
// Address: 0x0000000100023400

//----- (0000000100023400) ----------------------------------------------------
__int64 __fastcall sub_100023400(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 i; // rbx

  v4 = -1;
  if ( a4 )
  {
    v6 = *(_QWORD *)(a1 + 536);
    *(_DWORD *)(v6 + 84) = a2;
    *(_DWORD *)(v6 + 80) = a3;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536)) )
    {
      v7 = *(_QWORD *)(a1 + 536);
      v8 = *(_QWORD *)(v7 + 24);
      v4 = 1;
      if ( v8 )
      {
        v9 = 0;
        v10 = 0;
        for ( i = 0; i < v8; ++i )
        {
          if ( (*(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + v9 + 12) & *(_DWORD *)(v7 + 80)) != 0 )
          {
            sub_100023E00((int *)(v10 + *(_QWORD *)(v7 + 16)), a4 + v9, v7);
            v8 = *(_QWORD *)(v7 + 24);
          }
          v10 += 40;
          v9 += 32;
        }
        return 1;
      }
    }
  }
  return v4;
}
