__int64 __fastcall sub_223D80(_DWORD *a1, int a2)
{
  _OWORD *v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a2 / 8 > 0 )
  {
    v2 = a1;
    v3 = (unsigned int)(a2 / 8 - 1);
    do
    {
      *v2 = 0;
      v2 += 2;
      *(v2 - 1) = 0;
    }
    while ( &a1[8 * v3 + 8] != (_DWORD *)v2 );
    a1 += 8 * (int)v3 + 8;
  }
  result = (unsigned int)(a2 >> 31) >> 29;
  switch ( a2 % 8 )
  {
    case 1:
      goto LABEL_12;
    case 2:
      goto LABEL_11;
    case 3:
      goto LABEL_10;
    case 4:
      goto LABEL_9;
    case 5:
      goto LABEL_8;
    case 6:
      goto LABEL_7;
    case 7:
      a1[6] = 0;
LABEL_7:
      a1[5] = 0;
LABEL_8:
      a1[4] = 0;
LABEL_9:
      a1[3] = 0;
LABEL_10:
      a1[2] = 0;
LABEL_11:
      a1[1] = 0;
LABEL_12:
      *a1 = 0;
      break;
    default:
      return result;
  }
  return result;
}

