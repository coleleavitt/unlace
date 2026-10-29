void __fastcall sub_D8A680(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  switch ( a2 )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 10LL:
      sub_E21760(a1, 8);
      sub_E21790(a1, 8);
      break;
    case 8LL:
    case 9LL:
    case 12LL:
      sub_E21760(a1, 16);
      sub_E21790(a1, 16);
      break;
    case 11LL:
      v4 = sub_E21760(a1, 24);
      if ( *(_DWORD *)(v4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)v4 )
          operator delete[](*(void **)v4);
      }
      sub_E21790(a1, 24);
      break;
    case 13LL:
      v3 = sub_E21760(a1, 48);
      sub_E232A0(v3);
      sub_E21790(a1, 48);
      break;
    case 14LL:
      v2 = sub_E21760(a1, 64);
      sub_E232A0(v2);
      sub_E21790(a1, 64);
      break;
    default:
      return;
  }
}
