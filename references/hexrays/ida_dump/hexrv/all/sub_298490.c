__int64 __fastcall sub_298490(__int64 a1)
{
  unsigned int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax

  while ( 2 )
  {
    v2 = sub_298080((_QWORD *)(a1 + 48));
    if ( !(_BYTE)v2 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 3:
        case 4:
        case 0x13:
        case 0x14:
          if ( (unsigned __int8)sub_298490(*(_QWORD *)(a1 + 24)) )
            goto LABEL_6;
          return v2;
        case 5:
        case 0x15:
          if ( (unsigned __int8)sub_298490(*(_QWORD *)(a1 + 24)) )
            return 1;
LABEL_6:
          a1 = *(_QWORD *)(a1 + 32);
          continue;
        case 0x10:
          if ( !(unsigned __int8)sub_298490(*(_QWORD *)(a1 + 32)) )
            return v2;
          a1 = *(_QWORD *)(a1 + 40);
          continue;
        case 0x21:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 61 )
          {
            v5 = 8 * get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
            v6 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v6 + 8) != 61 )
              sub_2946B0();
            LOBYTE(v2) = v5 - 1 == sub_250E30(*(__int64 **)(v6 + 24), (_QWORD *)(v6 + 48));
          }
          return v2;
        case 0x30:
          a1 = *(_QWORD *)(a1 + 24);
          continue;
        case 0x3D:
          LOBYTE(v2) = (unsigned __int64)sub_250E30(*(__int64 **)(a1 + 24), (_QWORD *)(a1 + 48)) <= 1;
          return v2;
        case 0x41:
          v4 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32));
          if ( *v4 == 3 )
            LOBYTE(v2) = v4[2] <= 7;
          return v2;
        default:
          return v2;
      }
    }
    return 1;
  }
}
