/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C1A0
// Address: 0x000000000049C1A0

//----- (000000000049C1A0) ----------------------------------------------------
__int64 __fastcall sub_49C1A0(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  __int64 v6; // x1
  __int64 i; // x0
  __int64 j; // x0
  int *v9; // x22
  int v10; // w23
  int v11; // w26
  int v12; // w24
  int v13; // t1
  fd_set *v14; // x25
  __int64 v15; // x0
  int v16; // w1
  int k; // w27
  struct timeval *v18; // x28
  __int64 result; // x0
  __int64 v20; // x1
  __int64 v21; // x28
  int v22; // w26
  fd_set *v23; // x23
  int v24; // w27
  __int64 v25; // x0
  bool v26; // nf
  int v27; // w1
  char v28; // w27
  int v29; // w1
  __fd_mask v30; // x0
  int v31; // w1
  _QWORD v36[2]; // [xsp+88h] [xbp-118h] BYREF
  fd_set v37; // [xsp+98h] [xbp-108h] BYREF
  fd_set v38; // [xsp+118h] [xbp-88h] BYREF

  v6 = 0;
  for ( i = 0; i != 16; ++i )
    v37.fds_bits[i] = 0;
  for ( j = 0; j != 16; ++j )
    v38.fds_bits[j] = 0;
  if ( a3 <= 0 )
    goto LABEL_38;
  v9 = a2;
  v10 = 1;
  v11 = 0;
  do
  {
    v13 = *v9++;
    v12 = v13;
    if ( v11 < v13 )
      v11 = v12;
    if ( (v10 & a4) != 0 )
      v14 = &v38;
    else
      v14 = &v37;
    v10 *= 2;
    v15 = __fdelt_chk(v12, v6);
    LOBYTE(v16) = v12 & 0x3F;
    if ( v12 <= 0 )
      v16 = -(-v12 & 0x3F);
    v6 = v14->fds_bits[v15] | (1LL << v16);
    v14->fds_bits[v15] = v6;
  }
  while ( &a2[a3 - 1 + 1] != v9 );
  for ( k = v11 + 1; ; k = 1 )
  {
    v18 = (struct timeval *)v36;
    if ( a5 < 0 )
      v18 = nullptr;
    v36[0] = a5 / 1000;
    v36[1] = 1000 * (a5 % 1000);
    while ( 1 )
    {
      result = select(k, &v37, &v38, nullptr, v18);
      if ( (_DWORD)result != -1 )
        break;
      result = (unsigned int)*__errno_location();
      if ( (_DWORD)result != 4 )
        return result;
    }
    if ( !(_DWORD)result )
    {
      *a1 = -1;
      return result;
    }
    if ( (int)result <= 0 )
      return (unsigned int)*__errno_location();
    if ( a3 > 0 )
      break;
LABEL_36:
    if ( !under_debugger )
      sub_492270(475);
    __break(0x3E8u);
LABEL_38:
    ;
  }
  v21 = 0;
  v22 = 1;
  while ( 1 )
  {
    v23 = (v22 & a4) != 0 ? &v38 : &v37;
    v24 = a2[v21];
    v25 = __fdelt_chk(v24, v20);
    v27 = -v24;
    v26 = -v24 < 0;
    v28 = v24 & 0x3F;
    v29 = v27 & 0x3F;
    v30 = v23->fds_bits[v25];
    if ( v26 )
      LOBYTE(v31) = v28;
    else
      v31 = -v29;
    v20 = 1LL << v31;
    if ( (v20 & v30) != 0 )
      break;
    ++v21;
    v22 *= 2;
    if ( (unsigned int)(a3 - 1) + 1LL == v21 )
      goto LABEL_36;
  }
  *a1 = v21;
  return 0;
}
// 49C1A0: could not find valid save-restore pair for x25
// 49C3A4: variable 'v20' is possibly undefined
// 405F80: using guessed type __int64 __fastcall __fdelt_chk(_QWORD, _QWORD);
// 52451C: using guessed type char under_debugger;
