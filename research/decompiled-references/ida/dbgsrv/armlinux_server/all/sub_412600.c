/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412600
// Address: 0x0000000000412600

//----- (0000000000412600) ----------------------------------------------------
__int64 __fastcall sub_412600(__int64 a1, unsigned int a2, __off64_t a3, void *a4, int a5, unsigned __int8 a6)
{
  __int64 v6; // x28
  char v10; // w20
  char v11; // w21
  int v12; // w26
  unsigned __int64 *v13; // x20
  int *v14; // x23
  int v15; // w28
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x0
  unsigned __int64 *v18; // x1
  int v19; // w0
  int v20; // w23
  __int64 v22; // [xsp+48h] [xbp-98h]
  int i; // [xsp+6Ch] [xbp-74h]
  int v26; // [xsp+80h] [xbp-60h]
  char v27; // [xsp+84h] [xbp-5Ch]
  char v28[64]; // [xsp+98h] [xbp-48h] BYREF

  v26 = a6;
  if ( a6 )
    sub_411A98(a1, 0, 1u);
  if ( a2 == -1 )
    a2 = *(_DWORD *)(a1 + 2044);
  v10 = 1;
  v11 = 0;
  if ( (unsigned __int64)a5 > 0x18 )
  {
    v12 = 0;
    goto LABEL_24;
  }
  v12 = 0;
  for ( i = 0; ; i = 1 )
  {
    v27 = v10 & (a5 != v12);
    if ( v27 )
      break;
LABEL_23:
    v10 = v11 ^ 1;
    if ( ((a5 > v12) & (i ^ 1)) == 0 )
    {
      if ( v12 < 0 )
        v12 = 0;
LABEL_30:
      if ( v26 )
        goto LABEL_21;
      return (unsigned int)v12;
    }
LABEL_24:
    sub_49B748(v28, 0x40u, "/proc/%d/mem", a2);
    v19 = open(v28, 0);
    v20 = v19;
    if ( v19 != -1 )
    {
      v12 = pread64(v19, a4, a5, a3);
      close(v20);
    }
  }
  if ( a5 <= 0 )
  {
    v12 = 0;
    goto LABEL_30;
  }
  v12 = 0;
  v22 = v6;
  v13 = (unsigned __int64 *)a4;
  v14 = __errno_location();
  do
  {
    while ( 1 )
    {
      v15 = a5 - v12;
      *v14 = 0;
      if ( a5 - v12 > (int)(8 - (a3 & 7)) )
        v15 = 8 - (a3 & 7);
      v16 = ptrace(PTRACE_PEEKTEXT, a2, a3 - (a3 & 7), 0);
      if ( *v14 )
      {
        v11 = v27;
        v6 = v22;
        goto LABEL_23;
      }
      if ( v15 != 8 )
        break;
      *v13 = v16;
LABEL_11:
      v12 += v15;
      v13 = (unsigned __int64 *)((char *)v13 + v15);
      a3 += v15;
      if ( a5 <= v12 )
        goto LABEL_20;
    }
    v17 = v16 >> (8 * ((unsigned __int8)a3 & 7u));
    if ( v15 <= 0 )
      goto LABEL_11;
    v18 = v13;
    do
    {
      *(_BYTE *)v18 = v17;
      v18 = (unsigned __int64 *)((char *)v18 + 1);
      v17 >>= 8;
    }
    while ( (unsigned __int64 *)((char *)v13 + (unsigned int)(v15 - 1) + 1) != v18 );
    v12 += v15;
    v13 = (unsigned __int64 *)((char *)v13 + v15);
    a3 += v15;
  }
  while ( a5 > v12 );
LABEL_20:
  if ( !v26 )
    return (unsigned int)v12;
LABEL_21:
  sub_412410(a1, 0, 1u);
  return (unsigned int)v12;
}
// 412600: could not find valid save-restore pair for x24
// 412600: could not find valid save-restore pair for x28
// 41269C: variable 'v6' is possibly undefined
