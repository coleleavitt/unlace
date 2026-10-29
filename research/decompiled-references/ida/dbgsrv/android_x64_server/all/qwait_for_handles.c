/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_for_handles
// Address: 0x00000000000CC720

//----- (00000000000CC720) ----------------------------------------------------
__int64 __fastcall qwait_for_handles(_DWORD *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // rdi
  fd_set *p_writefds; // rsi
  int v13; // r12d
  unsigned int v14; // ebp
  struct timeval *v15; // r15
  int v16; // eax
  unsigned int *v17; // rax
  int v18; // ebx
  __int64 v19; // rbp
  fd_set *p_readfds; // rsi
  _DWORD *v22; // [rsp+8h] [rbp-160h]
  int v24; // [rsp+14h] [rbp-154h]
  _QWORD v26[2]; // [rsp+20h] [rbp-148h] BYREF
  fd_set writefds; // [rsp+30h] [rbp-138h] BYREF
  fd_set readfds; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v29; // [rsp+130h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  result = 22;
  if ( a3 <= 1024 )
  {
    v6 = a1;
    memset(&readfds, 0, sizeof(readfds));
    memset(&writefds, 0, sizeof(writefds));
    if ( a3 <= 0 )
    {
      v13 = a4;
      v14 = 1;
    }
    else
    {
      v24 = a5;
      v7 = (unsigned int)a3;
      v8 = 0;
      v9 = 1;
      v10 = 0;
      do
      {
        v11 = *(unsigned int *)(a2 + 4 * v8);
        if ( (int)v11 >= v10 )
          v10 = *(_DWORD *)(a2 + 4 * v8);
        p_writefds = &writefds;
        if ( (a4 & v9) == 0 )
          p_writefds = &readfds;
        v13 = a4;
        __FD_SET_chk(v11, p_writefds, 128);
        a4 = v13;
        ++v8;
        v9 *= 2;
      }
      while ( v7 != v8 );
      v14 = v10 + 1;
      v6 = a1;
      a5 = v24;
    }
    v26[0] = a5 / 1000;
    v26[1] = 1000 * (a5 % 1000);
    v15 = (struct timeval *)v26;
    if ( a5 < 0 )
      v15 = nullptr;
    while ( 1 )
    {
      v16 = select(v14, &readfds, &writefds, nullptr, v15);
      if ( v16 != -1 )
        break;
      v17 = (unsigned int *)__errno(v14);
      if ( *v17 != 4 )
        return *v17;
    }
    if ( v16 )
    {
      if ( v16 <= 0 )
      {
        v17 = (unsigned int *)__errno(v14);
        return *v17;
      }
      v22 = v6;
      if ( a3 <= 0 )
      {
LABEL_25:
        if ( !(_BYTE)under_debugger )
          interr(475);
        BUG();
      }
      v18 = 1;
      v19 = 0;
      while ( 1 )
      {
        p_readfds = &writefds;
        if ( (v13 & v18) == 0 )
          p_readfds = &readfds;
        if ( (unsigned int)__FD_ISSET_chk(*(unsigned int *)(a2 + 4 * v19), p_readfds, 128) )
          break;
        ++v19;
        v18 *= 2;
        if ( v19 >= a3 )
          goto LABEL_25;
      }
      *v22 = v19;
    }
    else
    {
      *v6 = -1;
    }
    return 0;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 34530: using guessed type __int64 __fastcall __FD_SET_chk(_QWORD, _QWORD, _QWORD);
// 34550: using guessed type __int64 __fastcall __FD_ISSET_chk(_QWORD, _QWORD, _QWORD);
// 158B40: using guessed type __int64 under_debugger;
