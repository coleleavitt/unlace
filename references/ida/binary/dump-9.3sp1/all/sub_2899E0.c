__int64 __fastcall sub_2899E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // r12d
  __int64 *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

  result = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)(v5 - 17) <= 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 6LL) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_383060(50619);
      BUG();
    }
    v6 = *(__int64 **)(v4 + 32);
    v7 = *(_QWORD **)(v4 + 24);
    sub_254DA0(v4);
    sub_255050(a2);
    *(_DWORD *)(a2 + 8) = 73;
    v10 = j__qalloc_or_throw(80, a2, v8, v9);
    *(_QWORD *)v10 = -1;
    *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v10 + 24) = 0;
    *(_OWORD *)(v10 + 64) = 0;
    *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(a2 + 24) = v10;
    *(_QWORD *)(v10 + 64) = sub_241330(80, a2, v11, v12);
    v15 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v6, v13, v14);
    *((_DWORD *)v15 + 2) = 72;
    v15[3] = (__int64)v6;
    if ( v5 == 17 )
      v7 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v7, v16, v17, v18);
    sub_255850(*(__int64 **)(a2 + 24), (__int64)v7);
    return 1;
  }
  return result;
}
