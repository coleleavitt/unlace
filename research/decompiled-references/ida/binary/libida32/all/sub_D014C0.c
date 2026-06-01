__int64 __fastcall sub_D014C0(__int64 a1, int a2, _QWORD *a3)
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
        sub_CFEA20(*(_QWORD *)(a1 + 560));
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CFF120(*(_QWORD *)(a1 + 560));
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CFF630(*(_QWORD *)(a1 + 560));
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CFFD50(*(_QWORD *)(a1 + 560));
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CFFE60(*(_QWORD *)(a1 + 560));
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D00570(*(_QWORD *)(a1 + 560));
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D00680(*(_QWORD *)(a1 + 560));
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D00DC0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D01350(*(_QWORD *)(a1 + 560));
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D01480(*(_QWORD *)(a1 + 560));
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CE52A0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CE7240((__int64)&v7, v5);
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
        sub_CE4EC0(*(_QWORD *)(a1 + 560));
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CE52D0((__int64)&v7, v6);
        sub_DFF560(&v7);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CE6900((__int64)&v7, v4);
        sub_DFF560(&v7);
      }
      break;
  }
  return 1;
}

