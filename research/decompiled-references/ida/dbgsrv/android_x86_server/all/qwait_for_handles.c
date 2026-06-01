/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_for_handles
// Address: 0x000BA310

//----- (000BA310) --------------------------------------------------------
int __cdecl qwait_for_handles(int *a1, int *a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // edi
  int v7; // eax
  int *v8; // ebx
  int v9; // edx
  bool v10; // zf
  fd_set *p_writefds; // edi
  struct timeval *v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  fd_set *p_readfds; // esi
  __fd_mask v20; // esi
  int v21; // [esp+Ch] [ebp-130h]
  int v22; // [esp+Ch] [ebp-130h]
  int v23; // [esp+14h] [ebp-128h]
  _DWORD v24[2]; // [esp+18h] [ebp-124h] BYREF
  fd_set writefds; // [esp+20h] [ebp-11Ch] BYREF
  fd_set readfds; // [esp+A0h] [ebp-9Ch] BYREF
  unsigned int v27; // [esp+128h] [ebp-14h]

  v27 = __readgsdword(0x14u);
  result = 22;
  if ( a3 <= 1024 )
  {
    v6 = a4;
    memset(&readfds, 0, sizeof(readfds));
    memset(&writefds, 0, sizeof(writefds));
    if ( a3 <= 0 )
    {
      v22 = 1;
    }
    else
    {
      v21 = 0;
      v7 = 1;
      v23 = a3;
      v8 = a2;
      do
      {
        v9 = v21;
        if ( *v8 >= v21 )
          v9 = *v8;
        v21 = v9;
        v10 = (v6 & v7) == 0;
        p_writefds = &writefds;
        if ( v10 )
          p_writefds = &readfds;
        p_writefds->__fds_bits[(unsigned int)*v8 >> 5] |= 1 << *v8;
        v6 = a4;
        v7 *= 2;
        ++v8;
        --v23;
      }
      while ( v23 );
      v22 = v9 + 1;
    }
    v24[0] = a5 / 1000;
    v24[1] = 1000 * (a5 % 1000);
    v12 = (struct timeval *)v24;
    if ( a5 < 0 )
      v12 = nullptr;
    while ( 1 )
    {
      v13 = select(v22, &readfds, &writefds, nullptr, v12);
      if ( v13 != -1 )
        break;
      v15 = __errno(v14);
      if ( *(_DWORD *)v15 != 4 )
        return *(_DWORD *)v15;
    }
    if ( v13 )
    {
      if ( v13 <= 0 )
      {
        v15 = __errno(v14);
        return *(_DWORD *)v15;
      }
      if ( a3 <= 0 )
      {
LABEL_25:
        if ( !(_BYTE)under_debugger )
          interr(475);
        BUG();
      }
      v16 = 1;
      v17 = 0;
      while ( 1 )
      {
        v18 = a2[v17];
        p_readfds = &writefds;
        if ( (v6 & v16) == 0 )
          p_readfds = &readfds;
        v20 = p_readfds->__fds_bits[v18 >> 5];
        if ( _bittest(&v20, v18) )
          break;
        ++v17;
        v16 *= 2;
        v6 = a4;
        if ( v17 >= a3 )
          goto LABEL_25;
      }
      *a1 = v17;
    }
    else
    {
      *a1 = -1;
    }
    return 0;
  }
  return result;
}
// BA494: variable 'v14' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
