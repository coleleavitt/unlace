/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D770
// Address: 0x0001D770

//----- (0001D770) --------------------------------------------------------
unsigned int __cdecl sub_1D770(int a1)
{
  _DWORD *v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // edx
  int v7; // [esp+8h] [ebp-34h] BYREF
  int v8; // [esp+10h] [ebp-2Ch]
  _DWORD v9[9]; // [esp+18h] [ebp-24h] BYREF

  v9[4] = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1 + 464);
  if ( v1 )
  {
    v2 = sub_19A30(v1, v9);
    switch ( v2 )
    {
      case 0:
        v3 = sub_19CA0(v9[1], &v7);
        switch ( v3 )
        {
          case 0:
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
            goto LABEL_8;
          default:
            qsnprintf(dword_13BCE0, 64, "tdb error %d", v3);
LABEL_8:
            sub_1C900();
            break;
        }
        if ( v9[0] == 1 )
        {
          sub_1DBC0(a1, v8, 2);
        }
        else
        {
          if ( v9[0] )
            goto LABEL_5;
          v5 = *(_DWORD *)(a1 + 572);
          if ( !v5 )
            goto LABEL_24;
          v6 = a1 + 572;
          do
          {
            if ( *(_DWORD *)(v5 + 16) >= v8 )
              v6 = v5;
            v5 = *(_DWORD *)(v5 + 4 * (*(_DWORD *)(v5 + 16) < v8));
          }
          while ( v5 );
          if ( v6 == a1 + 572 || v8 < *(_DWORD *)(v6 + 16) )
          {
LABEL_24:
            if ( sub_1DB00() )
              sub_1DE40(a1, v8, -1);
          }
        }
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
        goto LABEL_5;
      case 10:
        return __readgsdword(0x14u);
      default:
        qsnprintf(dword_13BCE0, 64, "tdb error %d", v2);
LABEL_5:
        sub_1C900();
        break;
    }
  }
  return __readgsdword(0x14u);
}
// 13BCE0: using guessed type int dword_13BCE0[10];
