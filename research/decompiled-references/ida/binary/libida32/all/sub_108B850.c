__int64 __fastcall sub_108B850(__int64 a1, int a2)
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
        v3 = (char **)&off_2B35E40;
        return *((unsigned int *)v3 + 5);
      case 2:
        v4 = (char **)&off_2B35E40;
        goto LABEL_39;
      case 3:
        v5 = (char **)&off_2B35E40;
        break;
      case 4:
        v6 = (char **)&off_2B35E40;
        goto LABEL_43;
      case 5:
        v3 = &off_2B35EA0;
        return *((unsigned int *)v3 + 5);
      case 6:
        v4 = &off_2B35EA0;
        goto LABEL_39;
      case 7:
        v5 = &off_2B35EA0;
        break;
      case 8:
        v6 = &off_2B35EA0;
        goto LABEL_43;
      case 9:
        v3 = (char **)&off_2B35F00;
        return *((unsigned int *)v3 + 5);
      case 10:
        v4 = (char **)&off_2B35F00;
        goto LABEL_39;
      case 11:
        v5 = (char **)&off_2B35F00;
        break;
      case 12:
        v6 = (char **)&off_2B35F00;
        goto LABEL_43;
      case 13:
        v3 = &off_2B35F60;
        return *((unsigned int *)v3 + 5);
      case 14:
        v4 = &off_2B35F60;
        goto LABEL_39;
      case 15:
        v5 = &off_2B35F60;
        break;
      case 16:
        v6 = &off_2B35F60;
        goto LABEL_43;
      case 17:
        v3 = &off_2B35FC0;
        return *((unsigned int *)v3 + 5);
      case 18:
        v4 = &off_2B35FC0;
        goto LABEL_39;
      case 19:
        v5 = &off_2B35FC0;
        break;
      case 20:
        v6 = &off_2B35FC0;
        goto LABEL_43;
      case 21:
        v3 = &off_2B36020;
        return *((unsigned int *)v3 + 5);
      case 22:
        v4 = &off_2B36020;
        goto LABEL_39;
      case 23:
        v5 = &off_2B36020;
        break;
      case 24:
        v6 = &off_2B36020;
        goto LABEL_43;
      case 25:
        v3 = &off_2B36080;
        return *((unsigned int *)v3 + 5);
      case 26:
        v4 = &off_2B36080;
        goto LABEL_39;
      case 27:
        v5 = &off_2B36080;
        break;
      case 28:
        v6 = &off_2B36080;
LABEL_43:
        v3 = v6 + 9;
        return *((unsigned int *)v3 + 5);
      default:
        v3 = &off_2B360E0;
        if ( a2 == 29 )
          return *((unsigned int *)v3 + 5);
        v4 = &off_2B360E0;
        if ( a2 != 30 )
        {
          v5 = &off_2B360E0;
          if ( a2 != 31 )
          {
            v6 = &off_2B360E0;
            if ( a2 != 32 )
            {
              v3 = &off_2B36140;
              if ( a2 != 33 )
                v3 = &off_2B36158;
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

