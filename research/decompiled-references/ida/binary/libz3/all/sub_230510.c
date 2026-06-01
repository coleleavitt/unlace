__int64 __fastcall sub_230510(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 32);
  v4 = v1 + 40;
  v5 = 0x7FFFFFFF8LL;
  if ( v3 )
    v5 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  sub_15D0A90(v4, *(_QWORD *)(v3 + v5), 0);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 32);
  result = (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
  v9 = *(_QWORD *)(v7 + 8 * result);
  *(_DWORD *)(v7 - 4) = result;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v6 + 24);
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      return sub_15D7BC0(v10, v9);
  }
  return result;
}

