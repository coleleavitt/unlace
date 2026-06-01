__int64 __fastcall sub_CE4810(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = a1 + 384;
  *(_QWORD *)(v3 + 856) = *a2;
  return sub_CD3C80(v3);
}

