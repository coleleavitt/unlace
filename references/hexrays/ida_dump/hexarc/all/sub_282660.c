__int64 __fastcall sub_282660(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // r12d
  __int64 *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  result = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)(v5 - 17) <= 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 6LL) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_37B760(50619);
      BUG();
    }
    v6 = *(__int64 **)(v4 + 32);
    v7 = *(_QWORD **)(v4 + 24);
    sub_24DA20(v4);
    sub_24DCD0(a2);
    *(_DWORD *)(a2 + 8) = 73;
    v8 = j__qalloc_or_throw(80);
    *(_QWORD *)v8 = -1;
    *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v8 + 24) = 0;
    *(_OWORD *)(v8 + 64) = 0;
    *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(a2 + 24) = v8;
    *(_QWORD *)(v8 + 64) = sub_239FB0();
    v9 = sub_23A040(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v6);
    *((_DWORD *)v9 + 2) = 72;
    v9[3] = v6;
    if ( v5 == 17 )
      v7 = sub_23D0E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v7, v10, v11, v12);
    sub_24E4D0(*(__int64 **)(a2 + 24), (__int64)v7);
    return 1;
  }
  return result;
}
