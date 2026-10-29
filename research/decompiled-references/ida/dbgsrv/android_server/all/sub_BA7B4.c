/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA7B4
// Address: 0x00000000000BA7B4

//----- (00000000000BA7B4) ----------------------------------------------------
__int64 __fastcall sub_BA7B4(_QWORD *a1, __int64 a2, char *dest, size_t n)
{
  unsigned __int64 v4; // x8
  char *v7; // x22
  __int64 v8; // x1
  __int64 v10; // x23
  size_t v11; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x9

  if ( a1[7] != a2 )
  {
    set_qerrno(3u);
    return -1;
  }
  v4 = a1[6];
  v7 = dest;
  if ( v4 >= a1[4] )
    goto LABEL_23;
  v8 = a1[8];
  v7 = dest;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1[3] + 8 * v4);
    if ( !v10 )
      goto LABEL_8;
    if ( *(int *)v10 >= 2 )
    {
      *(_QWORD *)(v10 + 24) = v8;
      goto LABEL_9;
    }
    if ( !(unsigned int)qfseek(*(FILE **)(v10 + 8), v8, 0) )
      v8 = qftell(*(FILE **)(v10 + 8));
    else
LABEL_8:
      v8 = -1;
LABEL_9:
    if ( v8 != a1[8] )
      return -1;
    if ( v10 )
    {
      if ( *(int *)v10 < 2 )
      {
        v11 = qfread(*(FILE **)(v10 + 8), v7, n);
        if ( v11 != -1 )
          goto LABEL_16;
      }
      else
      {
        v11 = sub_B9818((pthread_mutex_t *)v10, v7, n);
        if ( v11 != -1 )
          goto LABEL_16;
      }
    }
    v11 = 0;
LABEL_16:
    n -= v11;
    v7 += v11;
    if ( !n )
      break;
    v12 = a1[6];
    v13 = a1[4];
    v8 = 0;
    a1[8] = 0;
    v4 = v12 + 1;
    a1[6] = v4;
    if ( v4 >= v13 )
      goto LABEL_23;
  }
  a1[8] += v11;
LABEL_23:
  a1[7] += v7 - dest;
  return v7 - dest;
}
