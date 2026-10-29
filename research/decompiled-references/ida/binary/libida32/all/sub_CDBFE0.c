__int64 __fastcall sub_CDBFE0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 856) = *a4;
  return sub_DFA490(v5, *(_QWORD *)(v5 + 848), a2, a3);
}

