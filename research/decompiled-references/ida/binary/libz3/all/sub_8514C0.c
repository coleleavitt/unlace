void __fastcall sub_8514C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (*v4)(void); // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r13
  _BYTE v9[48]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a2 + 24) )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 440LL);
    if ( (char *)v4 == (char *)sub_79F010 )
      v5 = v3 + 1592;
    else
      v5 = v4();
    v6 = *(_DWORD *)(a1 + 120);
    if ( v6 == -1 )
    {
      v8 = *(_QWORD *)(a1 + 112);
      sub_180C5A0(v9, "specrels");
      v6 = sub_15D1320(v8 + 560, v9);
      *(_DWORD *)(a1 + 120) = v6;
    }
    v7 = *(_QWORD *)(v5 + 104);
    if ( !v7 || v6 >= *(_DWORD *)(v7 - 4) )
      BUG();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v7 + 8LL * v6) + 32LL))(
      *(_QWORD *)(v7 + 8LL * v6),
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a2 + 4)),
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a2 + 8)));
  }
}

