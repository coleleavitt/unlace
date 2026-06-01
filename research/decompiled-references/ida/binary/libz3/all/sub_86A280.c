__int64 __fastcall sub_86A280(__int64 a1, __int64 a2, double a3)
{
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  return sub_7E6250((_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 72), a2, 0, 0, a3);
}

