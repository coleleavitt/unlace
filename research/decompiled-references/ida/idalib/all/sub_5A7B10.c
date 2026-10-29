__int64 __fastcall sub_5A7B10(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 32 * a3, v4 = v3 + *(_QWORD *)(a1 + 40), *(_QWORD *)(v4 + 8) <= 1u) && !*(_DWORD *)(v4 + 24)
    || (v5 = *(_QWORD *)(a2 + 40) + v3, *(_QWORD *)(v5 + 8) <= 1u) && !*(_DWORD *)(v5 + 24) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  return 0;
}
