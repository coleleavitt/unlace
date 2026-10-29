__int64 __fastcall sub_75E7F0(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // eax

  switch ( a2 )
  {
    case 28LL:
      if ( !(a1[1] ^ 0x69645F6172747865LL | *a1 ^ 0x5F746C7561666564LL)
        && !(*(_QWORD *)((char *)a1 + 20) ^ 0x6E6F6974616E696DLL | *(_QWORD *)((char *)a1 + 12) ^ 0x6972637369645F61LL) )
      {
        v4 = 0;
        break;
      }
      return 0;
    case 23LL:
      if ( a1[1] ^ 0x6D6972637369645FLL | *a1 ^ 0x61727478655F6F6ELL
        || *(_QWORD *)((char *)a1 + 15) != 0x6E6F6974616E696DLL )
      {
        return 0;
      }
      v4 = 1;
      break;
    case 19LL:
      if ( !(a1[1] ^ 0x74616E696D697263LL | *a1 ^ 0x7369645F65707974LL) && *(_DWORD *)((char *)a1 + 15) == 1852795252 )
      {
        v4 = 2;
        break;
      }
      return 0;
    default:
      if ( a2 != 21
        || a1[1] ^ 0x6E696D6972637369LL | *a1 ^ 0x645F6D6F74737563LL
        || *(_QWORD *)((char *)a1 + 13) != 0x6E6F6974616E696DLL )
      {
        return 0;
      }
      v4 = 3;
      break;
  }
  *a3 = v4;
  return 1;
}

