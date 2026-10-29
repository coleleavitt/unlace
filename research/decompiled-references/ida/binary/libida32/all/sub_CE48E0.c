__int64 __fastcall sub_CE48E0(__int64 a1, int a2, _QWORD *a3)
{
  switch ( a2 )
  {
    case 0:
    case 1:
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      *(_QWORD *)(a1 + 1240) = *a3;
      *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = 0;
      return 1;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = 0;
      }
      return 1;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = 0;
      }
      return 1;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = 0;
      }
      return 1;
  }
}

