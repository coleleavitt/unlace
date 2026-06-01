__int64 __fastcall sub_CE3080(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  char v5; // bl

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = a1 + 384;
    v4 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)(v3 + 856) = *a2;
    v5 = sub_DFDF30(v3);
    *(_BYTE *)sub_DFD980(v4, 8) = v5;
  }
  return 1;
}

