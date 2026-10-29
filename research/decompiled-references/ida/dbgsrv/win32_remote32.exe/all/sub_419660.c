/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419660
// Address: 0x00419660

//----- (00419660) --------------------------------------------------------
int __stdcall sub_419660(int a1, unsigned int a2, int a3)
{
  int v3; // eax
  u_int v4; // edx
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  u_int v7; // edi
  u_int v8; // esi
  __int16 v9; // bx
  u_int v10; // ecx
  u_int i; // ecx
  int v12; // ebx
  u_int j; // ecx
  const struct timeval *v14; // eax
  int result; // eax
  int v16; // edi
  _WORD *v17; // esi
  _DWORD v18[2]; // [esp+14h] [ebp-318h] BYREF
  fd_set readfds; // [esp+1Ch] [ebp-310h] BYREF
  fd_set writefds; // [esp+120h] [ebp-20Ch] BYREF
  fd_set exceptfds; // [esp+224h] [ebp-108h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  readfds.fd_count = 0;
  writefds.fd_count = 0;
  exceptfds.fd_count = 0;
  v18[0] = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v9 = *(_WORD *)(v3 + 8 * v6 + 4);
      if ( (v9 & 0x100) != 0 )
      {
        v10 = 0;
        if ( v7 )
        {
          v5 = a2;
          do
          {
            if ( readfds.fd_array[v10] == *(_DWORD *)(a1 + 8 * v18[0]) )
              break;
            ++v10;
          }
          while ( v10 < v7 );
        }
        if ( v10 == v7 && v7 < 0x40 )
        {
          readfds.fd_array[v10] = *(_DWORD *)(a1 + 8 * v18[0]);
          v7 = ++readfds.fd_count;
        }
      }
      if ( (v9 & 0x10) != 0 )
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( writefds.fd_array[i] == *(_DWORD *)(a1 + 8 * v18[0]) )
            break;
        }
        if ( i == v4 && v4 < 0x40 )
        {
          writefds.fd_array[i] = *(_DWORD *)(a1 + 8 * v18[0]);
          v4 = ++writefds.fd_count;
        }
      }
      v12 = v18[0];
      for ( j = 0; j < v8; ++j )
      {
        if ( exceptfds.fd_array[j] == *(_DWORD *)(a1 + 8 * v18[0]) )
          break;
      }
      if ( j == v8 && v8 < 0x40 )
      {
        exceptfds.fd_array[j] = *(_DWORD *)(a1 + 8 * v18[0]);
        v8 = ++exceptfds.fd_count;
      }
      v6 = v12 + 1;
      v18[0] = v6;
      if ( v6 >= v5 )
        break;
      v3 = a1;
    }
  }
  v14 = nullptr;
  if ( a3 >= 0 )
  {
    v18[0] = a3 / 0x3E8u;
    v18[1] = 1000 * (a3 % 0x3E8u);
    v14 = (const struct timeval *)v18;
  }
  result = select(0, &readfds, &writefds, &exceptfds, v14);
  if ( result != -1 )
  {
    v16 = 0;
    if ( v5 )
    {
      v17 = (_WORD *)(a1 + 6);
      do
      {
        *v17 = 0;
        if ( _WSAFDIsSet(*(_DWORD *)(v17 - 3), &readfds) )
          *v17 |= 0x100u;
        if ( _WSAFDIsSet(*(_DWORD *)(v17 - 3), &writefds) )
          *v17 |= 0x10u;
        if ( _WSAFDIsSet(*(_DWORD *)(v17 - 3), &exceptfds) )
          *v17 |= 1u;
        if ( *v17 )
          ++v16;
        v17 += 4;
        --v5;
      }
      while ( v5 );
    }
    return v16;
  }
  return result;
}
