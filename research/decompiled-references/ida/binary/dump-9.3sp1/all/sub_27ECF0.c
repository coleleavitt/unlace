__int64 __fastcall sub_27ECF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // r12d

  if ( *(_DWORD *)(a2 + 8) != 81 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( **(_DWORD **)(a2 + 24) != *(_DWORD *)(v4 + 12) )
    return 0;
  if ( *(_DWORD *)(v4 + 8) == 80 )
  {
    v8 = *(_QWORD *)a2;
    v9 = *(_DWORD *)(a2 + 12);
    sub_25AA70(a2, v4);
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 12) = v9;
  }
  else
  {
    sub_255050(a2);
    *(_DWORD *)(a2 + 8) = 80;
    v7 = j__qalloc_or_throw(64, v4, v5, v6);
    *(_QWORD *)(v7 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v7 = -1;
    *(_QWORD *)(v7 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_QWORD *)(a2 + 24) = v7;
  }
  ++*(_DWORD *)(a1 + 72);
  return 0;
}
