void __fastcall sub_12EA130(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r13
  _DWORD *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r12
  bool v10; // zf
  __int64 v11; // rdi
  void (*v12)(); // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(_QWORD *)(v1 + 88);
  v3 = *(_QWORD *)(v1 + 688);
  v4 = **(_QWORD **)(a1 + 16);
  v5 = (_DWORD *)operator new(0x5B58u);
  sub_A7C9A0((__int64)v5, v4, v2, v1 + 552, v1 + 680, v3, *(_DWORD *)(v1 + 748));
  sub_A87340((__int64)v5, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 56), v6, v7, v8);
  v9 = *(_DWORD **)(a1 + 112);
  ++*v5;
  *(_QWORD *)(a1 + 112) = v5;
  if ( !v9
    || (v10 = *v9 == 1, --*v9, !v10)
    || (sub_A8A9B0((__int64)v9), operator delete(v9, 0x5B58u), (v5 = *(_DWORD **)(a1 + 112)) != nullptr) )
  {
    v11 = *(_QWORD *)(a1 + 128);
    if ( v11 )
    {
      v12 = *(void (**)())(*(_QWORD *)v11 + 16LL);
      if ( v12 != nullsub_148 )
        ((void (__fastcall *)(__int64, _DWORD *))v12)(v11, v5);
    }
  }
}
