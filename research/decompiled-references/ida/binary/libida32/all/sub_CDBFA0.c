__int64 __fastcall sub_CDBFA0(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 856) = *a4;
  return sub_DF9820(v5, *(_QWORD *)(v5 + 848), a2, a3);
}

