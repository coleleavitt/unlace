/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F1A4
// Address: 0x0007F1A4

//----- (0007F1A4) --------------------------------------------------------
int __fastcall sub_7F1A4(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  fd_set *p_tv_usec; // r2
  fd_set *v7; // r3
  int v8; // r1
  int v9; // r9
  int v10; // r10
  int *v11; // r11
  int v12; // r4
  int v13; // t1
  int v14; // r0
  fd_set *v15; // r5
  int v16; // r0
  bool v17; // nf
  int v18; // r5
  struct timeval *timeout; // r4
  int result; // r0
  int v21; // r1
  int v22; // r10
  int v23; // r9
  int *v24; // r5
  int v25; // r4
  int v26; // t1
  fd_set *v27; // r11
  int v28; // r0
  int v29; // r3
  struct timeval v33; // [sp+24h] [bp-110h] BYREF
  fd_set v34; // [sp+2Ch] [bp-108h] BYREF
  fd_set v35; // [sp+ACh] [bp-88h] BYREF

  p_tv_usec = (fd_set *)&v33.tv_usec;
  v7 = (fd_set *)&v34.__fds_bits[31];
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( &v34.__fds_bits[31] != (__fd_mask *)p_tv_usec );
  v8 = (int)&v35.__fds_bits[31];
  do
  {
    v7->__fds_bits[1] = 0;
    v7 = (fd_set *)((char *)v7 + 4);
  }
  while ( v7 != (fd_set *)&v35.__fds_bits[31] );
  if ( a3 <= 0 )
  {
    v18 = 1;
  }
  else
  {
    v9 = 1;
    v10 = 0;
    v11 = a2;
    do
    {
      v13 = *v11++;
      v12 = v13;
      v14 = v13;
      if ( v10 < v13 )
        v10 = v12;
      if ( (v9 & a4) != 0 )
        v15 = &v35;
      else
        v15 = &v34;
      v16 = _fdelt_chk(v14, v8);
      v17 = -v12 < 0;
      v8 = -v12 & 0x1F;
      LOBYTE(v12) = v12 & 0x1F;
      if ( !v17 )
        v12 = -v8;
      v9 *= 2;
      v15->__fds_bits[v16] |= 1 << v12;
    }
    while ( &a2[a3] != v11 );
    v18 = v10 + 1;
  }
  if ( a5 >= 0 )
    timeout = &v33;
  else
    timeout = nullptr;
  v33.tv_sec = a5 / 1000;
  v33.tv_usec = 1000 * (a5 % 1000);
  while ( 1 )
  {
    result = select(v18, &v34, &v35, nullptr, timeout);
    if ( result != -1 )
      break;
    result = *_errno_location();
    if ( result != 4 )
      return result;
  }
  if ( result )
  {
    if ( result <= 0 )
    {
      return *_errno_location();
    }
    else
    {
      if ( a3 <= 0 )
      {
LABEL_36:
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(475);
      }
      v22 = 1;
      v23 = 0;
      v24 = a2 - 1;
      while ( 1 )
      {
        v26 = v24[1];
        ++v24;
        v25 = v26;
        if ( (v22 & a4) != 0 )
          v27 = &v35;
        else
          v27 = &v34;
        v28 = _fdelt_chk(v25, v21);
        v17 = -v25 < 0;
        v29 = -v25 & 0x1F;
        LOBYTE(v25) = v25 & 0x1F;
        if ( !v17 )
          v25 = -v29;
        if ( ((1 << v25) & v27->__fds_bits[v28]) != 0 )
          break;
        ++v23;
        v22 *= 2;
        if ( a3 == v23 )
          goto LABEL_36;
      }
      *a1 = v23;
      return 0;
    }
  }
  else
  {
    *a1 = -1;
  }
  return result;
}
// 7F2E4: variable 'v21' is possibly undefined
// 14910: using guessed type int __fastcall _fdelt_chk(_DWORD, _DWORD);
// D6C20: using guessed type char under_debugger;
