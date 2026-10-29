void __fastcall sub_A73260(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rax

  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*v4 + 32LL) + 8LL * a2)) + 24);
  if ( v5 && *v5 == 5 && v5[1] == 1
    || (v6 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*v4 + 32LL) + 8LL * a2)) + 24)) != nullptr
    && *v6 == 5
    && !v6[1] )
  {
    sub_8E1D30(
      (__int64)(v4 + 4),
      *(_QWORD **)(*(_QWORD *)(v4[5] + 32LL) + 8LL * a2),
      *(_QWORD **)(*(_QWORD *)(v4[5] + 32LL) + 8LL * a3));
  }
}

