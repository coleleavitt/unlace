__int64 __fastcall sub_CE35D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a4;
    v5 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 24) = 1;
    *(_QWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 56) = 0;
  }
  return 1;
}

