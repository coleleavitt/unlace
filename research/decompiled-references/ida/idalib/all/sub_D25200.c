__int64 __fastcall sub_D25200(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  void *v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D22760(*(_QWORD *)(a1 + 560));
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D22E60(*(_QWORD *)(a1 + 560));
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D23370(*(_QWORD *)(a1 + 560));
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D23A90(*(_QWORD *)(a1 + 560));
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D23BA0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D242B0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D243C0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D24B00(*(_QWORD *)(a1 + 560));
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D25090(*(_QWORD *)(a1 + 560));
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D251C0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D08FE0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v7, v5);
        if ( v8 > 0x40 )
        {
          if ( v7 )
            operator delete[](v7);
        }
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D08C00(*(_QWORD *)(a1 + 560));
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D09010((__int64)&v7, v6);
        sub_E232A0(&v7);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0A640((__int64)&v7, v4);
        sub_E232A0(&v7);
      }
      break;
  }
  return 1;
}
