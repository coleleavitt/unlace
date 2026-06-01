__int64 __fastcall sub_8F0910(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a3;
    v4 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
    *(_QWORD *)v4 = 0;
    *(_DWORD *)(v4 + 48) = 1;
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 56) = a2;
    *(_DWORD *)(v4 + 64) = 0;
    *(_OWORD *)(v4 + 8) = 0;
  }
  return 1;
}

