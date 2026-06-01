__int64 __fastcall sub_1088CD0(int a1)
{
  char **v1; // rax
  char **v2; // rax
  char **v3; // rax
  char **v4; // rax

  switch ( a1 )
  {
    case 1:
      v1 = (char **)&off_2B35E40;
      return *((unsigned int *)v1 + 5);
    case 2:
      v2 = (char **)&off_2B35E40;
      return *((unsigned int *)v2 + 11);
    case 3:
      v3 = (char **)&off_2B35E40;
      break;
    case 4:
      v4 = (char **)&off_2B35E40;
      return *((unsigned int *)v4 + 23);
    case 5:
      v1 = &off_2B35EA0;
      return *((unsigned int *)v1 + 5);
    case 6:
      v2 = &off_2B35EA0;
      return *((unsigned int *)v2 + 11);
    case 7:
      v3 = &off_2B35EA0;
      break;
    case 8:
      v4 = &off_2B35EA0;
      return *((unsigned int *)v4 + 23);
    case 9:
      v1 = (char **)&off_2B35F00;
      return *((unsigned int *)v1 + 5);
    case 10:
      v2 = (char **)&off_2B35F00;
      return *((unsigned int *)v2 + 11);
    case 11:
      v3 = (char **)&off_2B35F00;
      break;
    case 12:
      v4 = (char **)&off_2B35F00;
      return *((unsigned int *)v4 + 23);
    case 13:
      v1 = &off_2B35F60;
      return *((unsigned int *)v1 + 5);
    case 14:
      v2 = &off_2B35F60;
      return *((unsigned int *)v2 + 11);
    case 15:
      v3 = &off_2B35F60;
      break;
    case 16:
      v4 = &off_2B35F60;
      return *((unsigned int *)v4 + 23);
    case 17:
      v1 = &off_2B35FC0;
      return *((unsigned int *)v1 + 5);
    case 18:
      v2 = &off_2B35FC0;
      return *((unsigned int *)v2 + 11);
    case 19:
      v3 = &off_2B35FC0;
      break;
    case 20:
      v4 = &off_2B35FC0;
      return *((unsigned int *)v4 + 23);
    case 21:
      v1 = &off_2B36020;
      return *((unsigned int *)v1 + 5);
    case 22:
      v2 = &off_2B36020;
      return *((unsigned int *)v2 + 11);
    case 23:
      v3 = &off_2B36020;
      break;
    case 24:
      v4 = &off_2B36020;
      return *((unsigned int *)v4 + 23);
    case 25:
      v1 = &off_2B36080;
      return *((unsigned int *)v1 + 5);
    case 26:
      v2 = &off_2B36080;
      return *((unsigned int *)v2 + 11);
    case 27:
      v3 = &off_2B36080;
      break;
    case 28:
      v4 = &off_2B36080;
      return *((unsigned int *)v4 + 23);
    default:
      v1 = &off_2B360E0;
      if ( a1 != 29 )
      {
        v2 = &off_2B360E0;
        if ( a1 != 30 )
        {
          v3 = &off_2B360E0;
          if ( a1 != 31 )
          {
            v4 = &off_2B360E0;
            if ( a1 != 32 )
            {
              v1 = &off_2B36140;
              if ( a1 != 33 )
                v1 = &off_2B36158;
              return *((unsigned int *)v1 + 5);
            }
            return *((unsigned int *)v4 + 23);
          }
          return *((unsigned int *)v3 + 17);
        }
        return *((unsigned int *)v2 + 11);
      }
      return *((unsigned int *)v1 + 5);
  }
  return *((unsigned int *)v3 + 17);
}

