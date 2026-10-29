/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B580
// Address: 0x000000000003B580

//----- (000000000003B580) ----------------------------------------------------
__int64 __fastcall sub_3B580(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // w0
  __int64 v4; // x10
  __int64 v5; // x8
  __int64 v6; // x11
  __int64 v7; // x10
  pthread_mutex_t *v8; // x19
  char *v9; // x8
  char *align; // x0
  __int128 v11; // q0
  char *v12; // x8
  __int64 *v14; // x0
  __int128 v15; // [xsp+8h] [xbp-58h] BYREF
  __int64 v16; // [xsp+18h] [xbp-48h]
  __int128 v17; // [xsp+20h] [xbp-40h]
  __int64 v18; // [xsp+30h] [xbp-30h]
  __int64 v19; // [xsp+38h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = sub_37E48(a1, (__int64)&v15);
  if ( v3 )
  {
    v14 = sub_3AEA8(v3);
    sub_3B1DC("%s: %s\n", "td_thr_get_info", (const char *)v14);
  }
  if ( ((unsigned int)v15 | 2) != 3 )
  {
    v4 = *a2;
    v5 = *(_QWORD *)(*a2 + 1744LL);
    if ( !v5 )
      goto LABEL_10;
    v6 = v4 + 1744;
    v7 = v4 + 1744;
    do
    {
      if ( *(_DWORD *)(v5 + 32) >= (int)v16 )
        v7 = v5;
      v5 = *(_QWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 32) < (int)v16));
    }
    while ( v5 );
    if ( v7 == v6 || (int)v16 < *(_DWORD *)(v7 + 32) )
    {
LABEL_10:
      sub_3AF40();
      v8 = (pthread_mutex_t *)a2[1];
      v18 = v16;
      v17 = v15;
      v9 = (char *)*(&v8->__align + 1);
      if ( *(&v8->__align + 2) >= (unsigned __int64)(v9 + 1) )
      {
        align = (char *)v8->__align;
      }
      else
      {
        align = (char *)qvector_reserve(v8, (void *)v8->__align, (unsigned __int64)(v9 + 1), 0x18u);
        v9 = (char *)*(&v8->__align + 1);
        v8->__align = (__int64)align;
      }
      v11 = v17;
      v12 = &align[24 * (_QWORD)v9];
      *((_QWORD *)v12 + 2) = v18;
      *(_OWORD *)v12 = v11;
      ++*(&v8->__align + 1);
    }
  }
  return 0;
}
