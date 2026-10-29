__int64 __fastcall sub_D06D40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = a1 + 384;
  *(_QWORD *)(v4 + 856) = *a3;
  return sub_DCCBD0(v4, *(_QWORD *)(v4 + 848), a2);
}
