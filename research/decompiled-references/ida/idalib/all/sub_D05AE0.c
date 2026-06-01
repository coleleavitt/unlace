__int64 __fastcall sub_D05AE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v4 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
    *(_QWORD *)v4 = 0;
    *(_OWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 24) = 2;
    *(_QWORD *)(v4 + 32) = a2;
  }
  return 1;
}
