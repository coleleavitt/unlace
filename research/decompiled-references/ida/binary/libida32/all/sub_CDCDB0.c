__int64 __fastcall sub_CDCDB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = sub_DFDA20(v3, 48);
    v5 = sub_DFD980(v3, 48);
    sub_DFF4A0(v5, v4);
  }
  return 1;
}

