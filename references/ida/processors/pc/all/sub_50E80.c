__int64 __fastcall sub_50E80(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int dword; // r12d
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v8; // rdx

  dword = get_dword();
  v5 = get_dword();
  if ( v5 == 0x7FFFFFFF && dword == 0x80000000 && a3 && (unsigned __int8)a1 <= 4u && (v8 = 21, _bittest64(&v8, a1)) )
  {
    *a3 = 2;
  }
  else
  {
    switch ( (char)a1 )
    {
      case 0:
        dword = (char)dword;
        v5 = (char)v5;
        goto LABEL_5;
      case 1:
        dword = (unsigned __int8)dword;
        v5 = (unsigned __int8)v5;
        if ( (unsigned __int8)v5 < (unsigned int)(unsigned __int8)dword )
          return 0;
        goto LABEL_6;
      case 2:
        dword = (__int16)dword;
        v5 = (__int16)v5;
        goto LABEL_5;
      case 3:
        dword = (unsigned __int16)dword;
        v5 = (unsigned __int16)v5;
        goto LABEL_11;
      case 4:
LABEL_5:
        v6 = 0;
        if ( (int)v5 >= (int)dword )
          goto LABEL_6;
        return v6;
      case 5:
LABEL_11:
        if ( v5 < dword )
          return 0;
LABEL_6:
        if ( a3 )
          *a3 = v5 + 1 - dword;
        break;
      default:
        return 0;
    }
  }
  return 1;
}
