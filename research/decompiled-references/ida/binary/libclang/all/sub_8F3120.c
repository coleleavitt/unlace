__int64 __fastcall sub_8F3120(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a4;
    v5 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
    *(_QWORD *)v5 = 0;
    *(_DWORD *)(v5 + 48) = 1;
    *(_QWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    *(_OWORD *)(v5 + 8) = 0;
  }
  return 1;
}

