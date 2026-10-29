__int64 __fastcall sub_8F3060(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a4;
    v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    *(_QWORD *)v6 = 0;
    *(_DWORD *)(v6 + 48) = 1;
    *(_QWORD *)(v6 + 32) = a2;
    *(_QWORD *)(v6 + 24) = a3;
    *(_OWORD *)(v6 + 8) = 0;
  }
  return 1;
}

