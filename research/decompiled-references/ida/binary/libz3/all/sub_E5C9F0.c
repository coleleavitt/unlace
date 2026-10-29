__int64 __fastcall sub_E5C9F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax

  v2 = sub_186B270(0x38u);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
         *(_QWORD *)(a1 + 24),
         a2,
         a1 + 32);
  *(_DWORD *)(v2 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v2 = &off_1C5CF18;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
  ++*(_DWORD *)(v4 + 48);
  *(_QWORD *)(v2 + 16) = v5;
  *(_QWORD *)(v2 + 24) = v4;
  *(_QWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  return v2;
}

