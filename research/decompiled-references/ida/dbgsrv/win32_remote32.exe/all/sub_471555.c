/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471555
// Address: 0x00471555

//----- (00471555) --------------------------------------------------------
char __thiscall sub_471555(_DWORD *this)
{
  _BYTE *v2; // esi
  int v3; // eax
  char v4; // cl

  v2 = (_BYTE *)*(this + 2);
  LOBYTE(v3) = *v2;
  if ( *v2 > 0x6Au )
  {
    switch ( (_BYTE)v3 )
    {
      case 'l':
        v3 = (int)(v2 + 1);
        if ( v2[1] == 108 )
        {
          v3 = (int)(v2 + 2);
          *(this + 8) = 4;
        }
        else
        {
          *(this + 8) = 3;
        }
        break;
      case 't':
        v3 = (int)(v2 + 1);
        *(this + 8) = 7;
        break;
      case 'z':
        v3 = (int)(v2 + 1);
        *(this + 8) = 6;
        break;
      default:
        return v3;
    }
    goto LABEL_32;
  }
  if ( *v2 == 106 )
  {
    v3 = (int)(v2 + 1);
    *(this + 8) = 5;
    goto LABEL_32;
  }
  if ( (_BYTE)v3 != 73 )
  {
    if ( (_BYTE)v3 == 76 )
    {
      v3 = (int)(v2 + 1);
      *(this + 8) = 8;
    }
    else
    {
      if ( (_BYTE)v3 != 84 )
      {
        if ( (_BYTE)v3 == 104 )
        {
          v4 = v2[1];
          *(this + 2) = &v2[(v4 == 104) + 1];
          v3 = (v4 != 104) + 1;
          *(this + 8) = v3;
        }
        return v3;
      }
      v3 = (int)(v2 + 1);
      *(this + 8) = 11;
    }
LABEL_32:
    *(this + 2) = v3;
    return v3;
  }
  LOBYTE(v3) = v2[1];
  if ( (_BYTE)v3 == 51 )
  {
    if ( v2[2] == 50 )
    {
      v3 = (int)(v2 + 3);
      *(this + 8) = 9;
      goto LABEL_32;
    }
  }
  else if ( (_BYTE)v3 == 54 && v2[2] == 52 )
  {
    v3 = (int)(v2 + 3);
    *(this + 8) = 10;
    goto LABEL_32;
  }
  if ( (_BYTE)v3 == 100
    || (_BYTE)v3 == 105
    || (_BYTE)v3 == 111
    || (_BYTE)v3 == 117
    || (_BYTE)v3 == 120
    || (_BYTE)v3 == 88 )
  {
    *(this + 2) = v2 + 1;
    *(this + 8) = 9;
  }
  return v3;
}
