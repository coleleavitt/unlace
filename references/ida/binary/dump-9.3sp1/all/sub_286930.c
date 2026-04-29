__int64 __fastcall sub_286930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp

  *(_DWORD *)(a1 + 8) = 73;
  v5 = j__qalloc_or_throw(80, a2, a3, a4);
  *(_QWORD *)v5 = -1;
  *(_QWORD *)(v5 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  *(_QWORD *)(a1 + 24) = v5;
  sub_255850((__int64 *)v5, a2);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = sub_2418B0(v6);
  if ( v7 != -1 )
    *(_QWORD *)a1 = v7;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v10 + 64) = sub_241330(v6, a2, v8, v9);
  return *(_QWORD *)(a1 + 24);
}
