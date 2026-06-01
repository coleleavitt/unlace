/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_for_handles
// Address: 0x000847C0

//----- (000847C0) --------------------------------------------------------
int __fastcall qwait_for_handles(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  int v6; // r4
  int v7; // r6
  int v8; // r4
  int v9; // r0
  int v10; // r2
  int *v11; // r3
  fd_set *p_readfds; // r6
  int v13; // r5
  struct timeval *timeout; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  fd_set *p_writefds; // r3
  int v22; // [sp+8h] [bp-12Ch]
  struct timeval v25; // [sp+28h] [bp-10Ch] BYREF
  fd_set writefds; // [sp+30h] [bp-104h] BYREF
  fd_set readfds; // [sp+B0h] [bp-84h] BYREF

  v6 = 22;
  if ( a3 <= 1024 )
  {
    memset(&readfds, 0, sizeof(readfds));
    memset(&writefds, 0, sizeof(writefds));
    v7 = 1;
    v22 = a3;
    if ( a3 >= 1 )
    {
      v8 = 0;
      v9 = 1;
      v10 = a3;
      v11 = a2;
      do
      {
        p_readfds = &readfds;
        if ( (v9 & a4) != 0 )
          p_readfds = &writefds;
        v13 = *v11;
        *(__fd_mask *)((char *)p_readfds->__fds_bits + (((unsigned int)*v11 >> 3) & 0x1FFFFFFC)) |= 1 << (*v11 & 0x1F);
        if ( v13 <= v8 )
          v13 = v8;
        --v10;
        v9 *= 2;
        v8 = v13;
        ++v11;
      }
      while ( v10 );
      v7 = v13 + 1;
    }
    v25.tv_sec = a5 / 1000;
    v25.tv_usec = 1000 * (a5 % 1000);
    timeout = &v25;
    if ( a5 < 0 )
      timeout = nullptr;
    while ( 1 )
    {
      v6 = 0;
      v15 = select(v7, &readfds, &writefds, nullptr, timeout);
      if ( v15 != -1 )
        break;
      v16 = _errno(-1);
      if ( *(_DWORD *)v16 != 4 )
        return *(_DWORD *)v16;
    }
    if ( v15 )
    {
      if ( v15 <= 0 )
      {
        v16 = _errno(v15);
        return *(_DWORD *)v16;
      }
      if ( v22 < 1 )
      {
LABEL_24:
        if ( !under_debugger )
          interr(475);
        __debugbreak();
      }
      v17 = 1;
      v18 = 0;
      while ( 1 )
      {
        p_writefds = &readfds;
        if ( (v17 & a4) != 0 )
          p_writefds = &writefds;
        if ( ((1 << (*(_BYTE *)a2 & 0x1F))
            & *(__fd_mask *)((_BYTE *)p_writefds->__fds_bits + (((unsigned int)*a2 >> 3) & 0x1FFFFFFC))) != 0 )
          break;
        ++a2;
        v17 *= 2;
        if ( ++v18 >= v22 )
          goto LABEL_24;
      }
      *a1 = v18;
      return 0;
    }
    else
    {
      *a1 = -1;
    }
  }
  return v6;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
