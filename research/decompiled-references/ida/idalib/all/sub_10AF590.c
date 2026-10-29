__int64 __fastcall sub_10AF590(__int64 a1, int a2)
{
  __int64 result; // rax
  char **v3; // rax
  char **v4; // rax
  char **v5; // rax
  char **v6; // rax

  result = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = (char **)&off_2B5FDE0;
        return *((unsigned int *)v3 + 5);
      case 2:
        v4 = (char **)&off_2B5FDE0;
        goto LABEL_39;
      case 3:
        v5 = (char **)&off_2B5FDE0;
        break;
      case 4:
        v6 = (char **)&off_2B5FDE0;
        goto LABEL_43;
      case 5:
        v3 = &off_2B5FE40;
        return *((unsigned int *)v3 + 5);
      case 6:
        v4 = &off_2B5FE40;
        goto LABEL_39;
      case 7:
        v5 = &off_2B5FE40;
        break;
      case 8:
        v6 = &off_2B5FE40;
        goto LABEL_43;
      case 9:
        v3 = (char **)&off_2B5FEA0;
        return *((unsigned int *)v3 + 5);
      case 10:
        v4 = (char **)&off_2B5FEA0;
        goto LABEL_39;
      case 11:
        v5 = (char **)&off_2B5FEA0;
        break;
      case 12:
        v6 = (char **)&off_2B5FEA0;
        goto LABEL_43;
      case 13:
        v3 = &off_2B5FF00;
        return *((unsigned int *)v3 + 5);
      case 14:
        v4 = &off_2B5FF00;
        goto LABEL_39;
      case 15:
        v5 = &off_2B5FF00;
        break;
      case 16:
        v6 = &off_2B5FF00;
        goto LABEL_43;
      case 17:
        v3 = &off_2B5FF60;
        return *((unsigned int *)v3 + 5);
      case 18:
        v4 = &off_2B5FF60;
        goto LABEL_39;
      case 19:
        v5 = &off_2B5FF60;
        break;
      case 20:
        v6 = &off_2B5FF60;
        goto LABEL_43;
      case 21:
        v3 = &off_2B5FFC0;
        return *((unsigned int *)v3 + 5);
      case 22:
        v4 = &off_2B5FFC0;
        goto LABEL_39;
      case 23:
        v5 = &off_2B5FFC0;
        break;
      case 24:
        v6 = &off_2B5FFC0;
        goto LABEL_43;
      case 25:
        v3 = &off_2B60020;
        return *((unsigned int *)v3 + 5);
      case 26:
        v4 = &off_2B60020;
        goto LABEL_39;
      case 27:
        v5 = &off_2B60020;
        break;
      case 28:
        v6 = &off_2B60020;
LABEL_43:
        v3 = v6 + 9;
        return *((unsigned int *)v3 + 5);
      default:
        v3 = &off_2B60080;
        if ( a2 == 29 )
          return *((unsigned int *)v3 + 5);
        v4 = &off_2B60080;
        if ( a2 != 30 )
        {
          v5 = &off_2B60080;
          if ( a2 != 31 )
          {
            v6 = &off_2B60080;
            if ( a2 != 32 )
            {
              v3 = &off_2B600E0;
              if ( a2 != 33 )
                v3 = &off_2B600F8;
              return *((unsigned int *)v3 + 5);
            }
            goto LABEL_43;
          }
          break;
        }
LABEL_39:
        v3 = v4 + 3;
        return *((unsigned int *)v3 + 5);
    }
    v3 = v5 + 6;
    return *((unsigned int *)v3 + 5);
  }
  return result;
}
