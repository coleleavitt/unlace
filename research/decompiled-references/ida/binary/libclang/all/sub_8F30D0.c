__int64 __fastcall sub_8F30D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a4;
    v5 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
    *(_QWORD *)v5 = a2;
    *(_QWORD *)(v5 + 8) = 0;
    *(_BYTE *)(v5 + 16) = 0;
  }
  return 1;
}

