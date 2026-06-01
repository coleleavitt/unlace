__int64 __fastcall sub_8F680(_BYTE *a1, int a2)
{
  unsigned int v2; // ecx
  _BYTE *v3; // rdx
  unsigned int v4; // eax
  _QWORD *v5; // rax
  __int64 result; // rax

  v2 = a2 / 8;
  if ( a2 / 8 > 0 )
  {
    if ( v2 == 1 )
    {
      v5 = a1;
    }
    else
    {
      v3 = a1;
      v4 = 0;
      do
      {
        ++v4;
        v3 += 16;
        *((_OWORD *)v3 - 1) = 0;
      }
      while ( v4 < v2 >> 1 );
      v5 = &a1[8 * (v2 & 0xFFFFFFFE)];
      if ( v2 == (v2 & 0xFFFFFFFE) )
        goto LABEL_7;
    }
    *v5 = 0;
LABEL_7:
    a1 += 8 * (int)(v2 - 1) + 8;
  }
  result = (unsigned int)(a2 >> 31) >> 29;
  switch ( a2 % 8 )
  {
    case 1:
      goto LABEL_15;
    case 2:
      goto LABEL_14;
    case 3:
      goto LABEL_13;
    case 4:
      goto LABEL_12;
    case 5:
      goto LABEL_11;
    case 6:
      goto LABEL_10;
    case 7:
      a1[6] = 0;
LABEL_10:
      a1[5] = 0;
LABEL_11:
      a1[4] = 0;
LABEL_12:
      a1[3] = 0;
LABEL_13:
      a1[2] = 0;
LABEL_14:
      a1[1] = 0;
LABEL_15:
      *a1 = 0;
      break;
    default:
      return result;
  }
  return result;
}

