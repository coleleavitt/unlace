__int64 __fastcall sub_A3530(unsigned int *a1)
{
  unsigned __int64 v1; // rax
  char v2; // dl
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v1 = *a1;
  if ( (_DWORD)v1 == 4 )
    return 1;
  if ( (_DWORD)v1 != 67 )
  {
    if ( (unsigned int)(v1 - 10) > 1 )
      goto LABEL_4;
    return 1;
  }
  if ( a1[17] == a1[9] )
    return 1;
LABEL_4:
  v2 = *((_BYTE *)a1 + 32);
  if ( v2 == 14
    || *((_BYTE *)a1 + 48) == 14
    || *((_BYTE *)a1 + 64) == 14
    || (*((_BYTE *)a1 + 5) & 8) != 0 && ((_DWORD)v1 == 43 || v2 == 9) )
  {
    return 1;
  }
  if ( (unsigned int)v1 <= 0x3D )
  {
    v3 = 0x30000000003FF38ELL;
    if ( _bittest64(&v3, v1) )
      return 1;
  }
  result = sub_120560(a1, 0);
  if ( (_BYTE)result )
  {
    result = 0;
    if ( *((_BYTE *)a1 + 64) == 8 )
    {
      v5 = *((_QWORD *)a1 + 9);
      v6 = *(unsigned int *)(v5 + 284);
      if ( (unsigned int)v6 <= 0x24 && (v5 = 0x1400000060LL, _bittest64(&v5, v6)) )
      {
        return 1;
      }
      else
      {
        LOBYTE(v5) = (_DWORD)v6 == 35;
        LOBYTE(v6) = (_DWORD)v6 == 2;
        return (unsigned int)v6 | (unsigned int)v5;
      }
    }
  }
  return result;
}
