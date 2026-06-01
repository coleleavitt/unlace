/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_for_handles
// Address: 0x00000000000C6F80

//----- (00000000000C6F80) ----------------------------------------------------
__int64 __fastcall qwait_for_handles(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  __int64 result; // x0
  _DWORD *v10; // x27
  int v11; // w24
  __int64 v12; // x26
  int v13; // w27
  int *v14; // x21
  int v15; // w0
  int v16; // t1
  int v17; // w24
  __int64 v18; // x11
  __int64 v19; // x8
  __int64 v20; // x23
  unsigned int *v21; // x0
  int v22; // w24
  fd_set *v23; // x1
  _QWORD v25[2]; // [xsp+18h] [xbp-178h] BYREF
  fd_set writefds; // [xsp+28h] [xbp-168h] BYREF
  fd_set readfds; // [xsp+A8h] [xbp-E8h] BYREF
  __int64 v28; // [xsp+128h] [xbp-68h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 > 1024 )
    return 22;
  v10 = a1;
  memset(&writefds, 0, sizeof(writefds));
  memset(&readfds, 0, sizeof(readfds));
  if ( a3 < 1 )
  {
    v17 = 1;
  }
  else
  {
    v11 = 0;
    v12 = (unsigned int)a3;
    v13 = 1;
    v14 = a2;
    do
    {
      v16 = *v14++;
      v15 = v16;
      if ( v16 > v11 )
        v11 = v15;
      __FD_SET_chk();
      --v12;
      v13 *= 2;
    }
    while ( v12 );
    v10 = a1;
    v17 = v11 + 1;
  }
  v18 = a5 / 1000;
  v19 = 1000 * (a5 % 1000);
  if ( a5 < 0 )
    v20 = 0;
  else
    v20 = (__int64)v25;
  v25[0] = v18;
  v25[1] = v19;
  while ( 1 )
  {
    result = select(v17, &readfds, &writefds, nullptr, (struct timeval *)v20);
    if ( (_DWORD)result != -1 )
      break;
    v21 = (unsigned int *)__errno(result);
    if ( *v21 != 4 )
      return *v21;
  }
  if ( (_DWORD)result )
  {
    if ( (int)result <= 0 )
    {
      v21 = (unsigned int *)__errno(result);
      return *v21;
    }
    if ( a3 < 1 )
    {
LABEL_27:
      if ( under_debugger )
        __break(1u);
      interr(475);
    }
    else
    {
      v20 = 0;
      v22 = 1;
      while ( 1 )
      {
        v23 = (v22 & a4) != 0 ? &writefds : &readfds;
        if ( (unsigned int)__FD_ISSET_chk((unsigned int)a2[v20], v23, 128) )
          break;
        ++v20;
        v22 *= 2;
        if ( v20 >= a3 )
          goto LABEL_27;
      }
    }
    *v10 = v20;
    return 0;
  }
  else
  {
    *v10 = -1;
  }
  return result;
}
// 36970: using guessed type __int64 __fastcall __FD_ISSET_chk(_QWORD, _QWORD, _QWORD);
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37370: using guessed type __int64 __FD_SET_chk(void);
// 168DF0: using guessed type char under_debugger;
