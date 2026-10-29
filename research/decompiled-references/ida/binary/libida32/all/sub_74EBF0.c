__int64 __fastcall sub_74EBF0(int a1)
{
  __int64 result; // rax
  char *v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // edx

  result = 0xFFFFFFFFLL;
  v2 = qword_2CAA5C0 + 1;
  if ( *qword_2CAA5C0 == 95 )
  {
    if ( (unsigned __int8)a1 <= 1u && qword_2CAA5C0[1] == 95 )
      v2 = qword_2CAA5C0 + 2;
    result = 0xFFFFFFFFLL;
    if ( (unsigned int)(qword_2CAA5B8 - (_DWORD)v2) > 6 )
    {
      if ( *(_DWORD *)v2 != 1112493127 || *(_DWORD *)(v2 + 3) != 1598832962 )
        return 0xFFFFFFFFLL;
      if ( (unsigned __int8)a1 > 1u || (unsigned int)(qword_2CAA5B8 - (_DWORD)v2) > 0xA )
      {
        v3 = *(_DWORD *)(v2 + 7);
        result = 0xFFFFFFFFLL;
        if ( (_BYTE)v3 == BYTE2(v3) )
        {
          if ( (_BYTE)a1 )
          {
            if ( (_BYTE)a1 != 1 )
              return (v3 >> 8) - a1;
            if ( (_BYTE)v3 == 95 )
              goto LABEL_13;
          }
          else if ( (_BYTE)v3 == 36 || (_BYTE)v3 == 46 )
          {
LABEL_13:
            v4 = v3 >> 8;
            result = 1;
            if ( (_BYTE)v4 != 68 )
            {
              LOBYTE(result) = (_BYTE)v4 != 73;
              return (unsigned int)-(int)result;
            }
          }
        }
      }
    }
  }
  return result;
}

