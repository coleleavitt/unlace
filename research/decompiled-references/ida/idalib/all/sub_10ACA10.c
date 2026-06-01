__int64 __fastcall sub_10ACA10(int a1)
{
  char **v1; // rax
  char **v2; // rax
  char **v3; // rax
  char **v4; // rax

  switch ( a1 )
  {
    case 1:
      v1 = (char **)&off_2B5FDE0;
      return *((unsigned int *)v1 + 5);
    case 2:
      v2 = (char **)&off_2B5FDE0;
      return *((unsigned int *)v2 + 11);
    case 3:
      v3 = (char **)&off_2B5FDE0;
      break;
    case 4:
      v4 = (char **)&off_2B5FDE0;
      return *((unsigned int *)v4 + 23);
    case 5:
      v1 = &off_2B5FE40;
      return *((unsigned int *)v1 + 5);
    case 6:
      v2 = &off_2B5FE40;
      return *((unsigned int *)v2 + 11);
    case 7:
      v3 = &off_2B5FE40;
      break;
    case 8:
      v4 = &off_2B5FE40;
      return *((unsigned int *)v4 + 23);
    case 9:
      v1 = (char **)&off_2B5FEA0;
      return *((unsigned int *)v1 + 5);
    case 10:
      v2 = (char **)&off_2B5FEA0;
      return *((unsigned int *)v2 + 11);
    case 11:
      v3 = (char **)&off_2B5FEA0;
      break;
    case 12:
      v4 = (char **)&off_2B5FEA0;
      return *((unsigned int *)v4 + 23);
    case 13:
      v1 = &off_2B5FF00;
      return *((unsigned int *)v1 + 5);
    case 14:
      v2 = &off_2B5FF00;
      return *((unsigned int *)v2 + 11);
    case 15:
      v3 = &off_2B5FF00;
      break;
    case 16:
      v4 = &off_2B5FF00;
      return *((unsigned int *)v4 + 23);
    case 17:
      v1 = &off_2B5FF60;
      return *((unsigned int *)v1 + 5);
    case 18:
      v2 = &off_2B5FF60;
      return *((unsigned int *)v2 + 11);
    case 19:
      v3 = &off_2B5FF60;
      break;
    case 20:
      v4 = &off_2B5FF60;
      return *((unsigned int *)v4 + 23);
    case 21:
      v1 = &off_2B5FFC0;
      return *((unsigned int *)v1 + 5);
    case 22:
      v2 = &off_2B5FFC0;
      return *((unsigned int *)v2 + 11);
    case 23:
      v3 = &off_2B5FFC0;
      break;
    case 24:
      v4 = &off_2B5FFC0;
      return *((unsigned int *)v4 + 23);
    case 25:
      v1 = &off_2B60020;
      return *((unsigned int *)v1 + 5);
    case 26:
      v2 = &off_2B60020;
      return *((unsigned int *)v2 + 11);
    case 27:
      v3 = &off_2B60020;
      break;
    case 28:
      v4 = &off_2B60020;
      return *((unsigned int *)v4 + 23);
    default:
      v1 = &off_2B60080;
      if ( a1 != 29 )
      {
        v2 = &off_2B60080;
        if ( a1 != 30 )
        {
          v3 = &off_2B60080;
          if ( a1 != 31 )
          {
            v4 = &off_2B60080;
            if ( a1 != 32 )
            {
              v1 = &off_2B600E0;
              if ( a1 != 33 )
                v1 = &off_2B600F8;
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
