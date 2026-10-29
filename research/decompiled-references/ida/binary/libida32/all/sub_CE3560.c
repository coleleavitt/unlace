__int64 __fastcall sub_CE3560(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a4;
    v6 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
    *(_QWORD *)v6 = 0;
    *(_OWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 24) = 1;
    *(_QWORD *)(v6 + 40) = a2;
    *(_QWORD *)(v6 + 32) = a3;
  }
  return 1;
}

