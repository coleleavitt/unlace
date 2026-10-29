/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92E50
// Address: 0x0000000000092E50

//----- (0000000000092E50) ----------------------------------------------------
__int64 __fastcall sub_92E50(__int64 a1, __int64 *a2, char **a3, int a4)
{
  int v4; // w19
  __int64 v7; // x22
  int v8; // w25
  char *v9; // x26
  __int64 v10; // x22
  __int64 v11; // x8
  pthread_mutex_t *v12; // x0
  pthread_mutex_t *v13; // x0
  char *v14; // x28
  int v15; // w9
  unsigned __int64 v16; // x2
  __int64 v17; // x8
  int v18; // w9
  bool v19; // zf
  char *v20; // x26
  pthread_mutex_t *v21; // x0
  size_t v22; // x0
  pthread_mutex_t *v23; // x0
  int v24; // w26
  __int64 v26; // [xsp+8h] [xbp-A8h]
  pthread_mutex_t v27; // [xsp+10h] [xbp-A0h] BYREF
  _QWORD v28[3]; // [xsp+38h] [xbp-78h] BYREF

  v4 = a4;
  v28[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a4 )
  {
    memset(&v27, 0, 24);
    v26 = a1 + 192;
    while ( v4 >= 1 )
    {
      v7 = 0;
      v8 = 0;
      v9 = "";
      *(&v27.__align + 1) = 0;
      do
      {
        if ( v8 >= v4 )
          break;
        v10 = *a2 - v7;
        if ( v10 >= 0 )
          v11 = v10;
        else
          v11 = -v10;
        v12 = pack_dq((pthread_mutex_t *)(&v27.__align + 4), (unsigned __int64)v28 + 2, v11 + 1);
        sub_545E8(&v27, &v27.__align + 4, (char *)v12 - (char *)(&v27.__align + 4));
        v13 = pack_dd(
                (pthread_mutex_t *)(&v27.__align + 3),
                (unsigned __int64)&v27.__align + 29,
                (unsigned __int64)v10 >> 63);
        sub_545E8(&v27, &v27.__align + 3, (char *)v13 - (char *)(&v27.__align + 3));
        v14 = *a3;
        v7 = *a2;
        if ( **a3 && **a3 == *v9 )
        {
          v15 = 1;
          do
          {
            v16 = (unsigned int)v15;
            v17 = v15;
            v18 = (unsigned __int8)v14[v15];
            if ( !v18 )
              break;
            v19 = v18 == (unsigned __int8)v9[v17];
            v15 = v16 + 1;
          }
          while ( v19 );
          v20 = &v14[v17];
        }
        else
        {
          v16 = 0;
          v20 = *a3;
        }
        v21 = pack_dd((pthread_mutex_t *)(&v27.__align + 3), (unsigned __int64)&v27.__align + 29, v16);
        sub_545E8(&v27, &v27.__align + 3, (char *)v21 - (char *)(&v27.__align + 3));
        if ( !v20 )
          v20 = "";
        v22 = strlen(v20);
        sub_545E8(&v27, v20, v22 + 1);
        ++a2;
        ++a3;
        ++v8;
        v9 = v14;
      }
      while ( *(&v27.__align + 1) <= 0x100000uLL );
      sub_A640C(50, (pthread_mutex_t *)(&v27.__align + 4));
      v23 = pack_dd((pthread_mutex_t *)(&v27.__align + 3), (unsigned __int64)&v27.__align + 29, (unsigned int)v8);
      sub_545E8((pthread_mutex_t *)(&v27.__align + 4), &v27.__align + 3, (char *)v23 - (char *)(&v27.__align + 3));
      sub_545E8((pthread_mutex_t *)(&v27.__align + 4), (void *)v27.__align, *((size_t *)&v27.__align + 1));
      v24 = sub_9EAB8(v26, (__int64)&v27.__list.__next, 0xFFFFFFFF, 0);
      if ( v27.__list.__next )
      {
        v28[0] = 0;
        qfree(v27.__list.__next);
        v27.__list.__next = nullptr;
        v28[1] = 0;
      }
      v4 -= v8;
      if ( v8 != v24 )
      {
        v4 = 1;
        goto LABEL_24;
      }
    }
    v4 = 0;
LABEL_24:
    if ( v27.__align )
    {
      *(&v27.__align + 1) = 0;
      qfree((void *)v27.__align);
      v27.__align = 0;
      *(&v27.__align + 2) = 0;
    }
  }
  return (unsigned int)v4;
}
