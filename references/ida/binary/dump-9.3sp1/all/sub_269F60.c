__int64 __fastcall sub_269F60(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // [rsp-10h] [rbp-38h]
  __int64 v15; // [rsp-8h] [rbp-30h]

  v5 = a1;
  if ( a5 )
  {
    v7 = a5;
    v8 = *(_QWORD *)(a2 + 216);
    if ( a1 )
    {
      v9 = 35;
      if ( a5 < 0 )
      {
        v7 = -a5;
        v9 = 36;
      }
      v10 = sub_240F50(v8, v7, a2, a3, a4, 1u, 0);
      v12 = j__qalloc_or_throw(64, v15, v11, v14);
      *(_QWORD *)v12 = -1;
      v5 = v12;
      *(_DWORD *)(v12 + 8) = v9;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = v10;
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_2441C0(v12, *(_QWORD *)(v8 + 112), 0);
      *(_DWORD *)(v5 + 56) |= 1u;
    }
    else
    {
      return sub_240F50(v8, a5, a2, a3, a4, 1u, 0);
    }
  }
  return v5;
}
