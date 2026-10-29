_BOOL8 __fastcall sub_59C0E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 24 * a3, v4 = 24 * a3 + *(_QWORD *)(a1 + 40), !*(_QWORD *)v4)
    || (v5 = *(_QWORD *)(a2 + 40) + v3, !*(_QWORD *)v5) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  v6 = 1;
  if ( *(_DWORD *)(v4 + 12) == *(_DWORD *)(v5 + 12) )
    return *(_BYTE *)(v4 + 16) != *(_BYTE *)(v5 + 16);
  return v6;
}

