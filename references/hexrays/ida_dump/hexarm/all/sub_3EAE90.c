__int64 __fastcall sub_3EAE90(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 392);
  if ( v3 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC946u, a2, a3);
    BUG();
  }
  return v3 - *(_DWORD *)(a1 + 24) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL);
}
