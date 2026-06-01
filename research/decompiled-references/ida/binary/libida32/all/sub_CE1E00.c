__int64 __fastcall sub_CE1E00(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v4 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
    *(_QWORD *)v4 = 0;
    *(_OWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 24) = 1;
    *(_QWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 48) = a2;
    *(_DWORD *)(v4 + 56) = 0;
  }
  return 1;
}

