__int64 __fastcall sub_15AFB40(int *a1, __int64 a2, int a3, char **a4)
{
  __int64 v4; // r15
  int v5; // eax
  __int64 result; // rax
  char *v7; // rax

  if ( !a1[5] )
    a1[5] = a3;
  v5 = *a1;
  a1[6] = a3;
  a1[1] = a2;
  if ( ((unsigned int)a2 & v5) != 0 )
  {
    switch ( (int)a2 )
    {
      case 0:
      case 3:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
        v7 = "abstract";
        break;
      case 1:
        v7 = "override";
        break;
      case 2:
        v7 = "final";
        break;
      case 4:
        v7 = (char *)"sealed";
        break;
      case 8:
        v7 = "__final";
        break;
    }
    *a4 = v7;
    return 1;
  }
  else
  {
    *a1 = a2 | v5;
    switch ( a2 )
    {
      case 1LL:
        a1[2] = a3;
        result = 0;
        break;
      case 2LL:
      case 4LL:
      case 8LL:
        a1[3] = a3;
        result = 0;
        break;
      case 16LL:
        a1[4] = a3;
        result = 0;
        break;
      default:
        ++*(_DWORD *)(v4 + 8);
        BUG();
    }
  }
  return result;
}
