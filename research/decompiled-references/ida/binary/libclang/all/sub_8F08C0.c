__int64 __fastcall sub_8F08C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a3;
    v4 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
    *(_QWORD *)v4 = a2;
    *(_QWORD *)(v4 + 8) = 0;
    *(_BYTE *)(v4 + 16) = 1;
  }
  return 1;
}

