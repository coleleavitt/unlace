/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4793F1
// Address: 0x004793F1

//----- (004793F1) --------------------------------------------------------
DWORD sub_4793F1()
{
  int i; // edi
  DWORD result; // eax
  char *v2; // esi
  HANDLE StdHandle; // eax
  HANDLE v4; // ebx

  for ( i = 0; i != 3; ++i )
  {
    result = i & 0x3F;
    v2 = (char *)*(&dword_4B7B38 + (i >> 6)) + 56 * result;
    if ( *((_DWORD *)v2 + 6) == -1 || *((_DWORD *)v2 + 6) == -2 )
    {
      v2[40] = -127;
      if ( i )
      {
        if ( i == 1 )
          StdHandle = GetStdHandle(0xFFFFFFF5);
        else
          StdHandle = GetStdHandle(0xFFFFFFF4);
      }
      else
      {
        StdHandle = GetStdHandle(0xFFFFFFF6);
      }
      v4 = StdHandle;
      if ( StdHandle == (HANDLE)-1 || !StdHandle )
        result = 0;
      else
        result = GetFileType(StdHandle);
      if ( result )
      {
        result = (unsigned __int8)result;
        *((_DWORD *)v2 + 6) = v4;
        if ( (unsigned __int8)result == 2 )
        {
          v2[40] |= 0x40u;
        }
        else if ( (unsigned __int8)result == 3 )
        {
          v2[40] |= 8u;
        }
      }
      else
      {
        v2[40] |= 0x40u;
        *((_DWORD *)v2 + 6) = -2;
        result = (DWORD)lpMem;
        if ( lpMem )
        {
          result = *((_DWORD *)lpMem + i);
          *(_DWORD *)(result + 16) = -2;
        }
      }
    }
    else
    {
      v2[40] |= 0x80u;
    }
  }
  return result;
}
