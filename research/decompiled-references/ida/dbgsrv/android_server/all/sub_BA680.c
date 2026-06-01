/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA680
// Address: 0x00000000000BA680

//----- (00000000000BA680) ----------------------------------------------------
size_t __fastcall sub_BA680(_QWORD *a1, unsigned __int64 a2, void *dest, size_t a4)
{
  __int64 v6; // x8
  __int64 v10; // x24
  __int64 v11; // x23
  __int64 v12; // x0
  size_t v13; // x2

  if ( (a2 & 0x8000000000000000LL) != 0 || a1[1] <= a2 )
  {
    set_qerrno(3u);
    if ( a1[1] == a2 )
      return 0;
    else
      return -1;
  }
  v6 = a1[4];
  if ( v6 != -1 )
  {
    if ( a1[5] < v6 )
    {
      set_qerrno(4u);
      return -1;
    }
    v10 = a1[3];
    v11 = v6 + a2;
    if ( v10 )
    {
      if ( *(int *)v10 >= 2 )
      {
        *(_QWORD *)(v10 + 24) = v11;
        goto LABEL_16;
      }
      if ( !(unsigned int)qfseek(*(FILE **)(v10 + 8), v11, 0) )
      {
        if ( qftell(*(FILE **)(v10 + 8)) != v11 )
          return -1;
        goto LABEL_16;
      }
    }
    if ( v11 != -1 )
      return -1;
  }
LABEL_16:
  v12 = a1[3];
  if ( a1[1] - a2 >= a4 )
    v13 = a4;
  else
    v13 = a1[1] - a2;
  if ( !v12 )
    return -1;
  if ( *(int *)v12 < 2 )
    return qfread(*(FILE **)(v12 + 8), dest, v13);
  else
    return sub_B9818((pthread_mutex_t *)v12, dest, v13);
}
