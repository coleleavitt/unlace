/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004BA64
// Address: 0x000000010004BA64

//----- (000000010004BA64) ----------------------------------------------------
__int64 __fastcall sub_10004BA64(__int64 a1, _QWORD **a2, unsigned __int64 *a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x25
  unsigned __int64 v9; // x1
  char *v10; // x8
  char *v11; // x24
  unsigned __int64 v12; // x25
  _DWORD *v13; // x26
  __int64 v14; // x27
  char *v15; // x28
  unsigned __int64 v16; // x26
  char *v17; // x25
  char *v18; // x21
  unsigned __int64 v19; // x1
  unsigned __int8 *v20; // x8
  unsigned __int64 v21; // x24
  int v22; // t1
  __int64 v23; // x9
  char *v24; // x8
  const void *v25; // x8
  unsigned __int64 v26; // x9
  void *v28; // x0
  void *v29; // x2
  char *v30; // x21
  __int64 v31; // x24
  __int64 v32; // x23
  char *v33; // x21
  char *v34; // x24
  __int64 v35; // x25
  char *v36; // x27
  char *i; // x26
  _QWORD *v38; // x9
  _QWORD *v39; // x8
  char v40; // w21
  _QWORD *v41; // x1
  _QWORD *v42; // x8
  char v43; // w21
  _QWORD *v44; // x1
  unsigned __int64 v45; // x21
  size_t v46; // x22
  const void *v47; // x24
  unsigned __int64 v48; // x25
  _QWORD *v49; // x8
  _QWORD *v50; // x9
  char *j; // x22
  char v52; // w25
  _QWORD *v53; // x1
  _QWORD *v54; // x8
  void *v55; // x0
  __int64 v56; // x19
  __int64 v57; // x20
  char *v58; // x21
  char *v59; // x22
  void *v60; // x0
  __int64 v62; // [xsp+38h] [xbp-C8h]
  unsigned int v63; // [xsp+44h] [xbp-BCh] BYREF
  void *v64; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v65; // [xsp+50h] [xbp-B0h]
  __int64 v66; // [xsp+58h] [xbp-A8h]
  char v67; // [xsp+67h] [xbp-99h] BYREF
  void *v68; // [xsp+68h] [xbp-98h] BYREF
  void *v69; // [xsp+70h] [xbp-90h]
  __int128 v70; // [xsp+78h] [xbp-88h]
  __int64 v71; // [xsp+88h] [xbp-78h]
  __int128 v72; // [xsp+90h] [xbp-70h]

  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v6 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  v8 = v7;
  if ( (v6 & 0x80000000) != 0 || (v7 & 0x80000000) != 0 || (int)(v7 ^ 0x7FFFFFFF) < (int)v6 )
  {
    sub_10002CF84(a2, 0);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000AA0();
    v32 = 0;
  }
  else
  {
    v9 = (int)v7 + (int)v6;
    if ( v65 != v9 )
    {
      v72 = 0u;
      v68 = (void *)-1LL;
      v69 = nullptr;
      v70 = 0u;
      v71 = 4;
      DWORD1(v72) = -1;
      sub_100054464(&v64, v9, (unsigned __int64)&v68);
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
    }
    v10 = (char *)v64;
    v11 = (char *)v64 + 56 * (unsigned int)v6;
    v62 = v8;
    if ( (_DWORD)v6 )
    {
      v12 = 0;
      v13 = (char *)v64 + 48;
      v14 = 56LL * (unsigned int)v6;
      do
      {
        *((_BYTE *)v13 - 8) = 0;
        v12 = v12 + unpack_dq(a3, a3[1]) - 1;
        *((_QWORD *)v13 - 6) = v12;
        *(v13 - 3) = unpack_dd(a3, a3[1]);
        *(v13 - 4) = unpack_dd(a3, a3[1]);
        *(v13 - 1) = unpack_dd(a3, a3[1]);
        *v13 = unpack_dd(a3, a3[1]);
        v13 += 14;
        v14 -= 56;
      }
      while ( v14 );
      v10 = v11;
      LODWORD(v8) = v62;
    }
    v15 = &v11[56 * (unsigned int)v8];
    if ( v10 != v15 )
    {
      v16 = 0;
      v17 = v10 + 16;
      do
      {
        v18 = v17 - 16;
        v16 = v16 + unpack_dq(a3, a3[1]) - 1;
        *((_QWORD *)v17 - 2) = v16;
        v20 = (unsigned __int8 *)*a3;
        v19 = a3[1];
        if ( *a3 < v19 )
        {
          v22 = *v20;
          v21 = *v20;
          *a3 = (unsigned __int64)(v20 + 1);
          if ( v22 )
          {
            v23 = *(_QWORD *)v17;
            if ( *(_QWORD *)v17 >= v21 )
            {
              if ( *(_QWORD *)v17 != v21 )
              {
                LOBYTE(v68) = 0;
                sub_100019CE4((_QWORD **)v17 - 1, v21, &v68);
              }
            }
            else
            {
              v24 = *((char **)v17 - 1);
              if ( *((_QWORD *)v17 + 1) < v21 )
              {
                v24 = (char *)qvector_reserve((_QWORD *)v17 - 1, *((_QWORD **)v17 - 1), v21, 1u);
                *((_QWORD *)v17 - 1) = v24;
                v23 = *(_QWORD *)v17;
              }
              bzero(&v24[v23], v21 - v23);
              *(_QWORD *)v17 = v21;
            }
            v25 = (const void *)*a3;
            v19 = a3[1];
            v26 = *a3 + v21;
            if ( v26 >= *a3 && v26 <= v19 )
            {
              v28 = *((void **)v17 - 1);
              *a3 = v26;
              memcpy(v28, v25, v21);
              v19 = a3[1];
            }
          }
        }
        *((_DWORD *)v17 + 4) = unpack_dd(a3, v19);
        *((_DWORD *)v17 + 7) = unpack_dd(a3, a3[1]);
        *((_DWORD *)v17 + 8) = unpack_dd(a3, a3[1]);
        v17 += 56;
      }
      while ( v18 + 56 != v15 );
    }
    v29 = v64;
    v30 = (char *)v64 + 56 * (unsigned int)v6;
    if ( v30 == v15 )
    {
      v31 = v62;
    }
    else
    {
      v31 = v62;
      do
      {
        if ( *(_BYTE *)(a1 + 184) == 1 )
          sub_100000AA0();
        v30 += 56;
      }
      while ( v30 != v15 );
      v29 = v64;
    }
    v68 = nullptr;
    v69 = nullptr;
    *(_QWORD *)&v70 = 0;
    v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, __int64, __int64, void **))(**(_QWORD **)(a1 + 440)
                                                                                               + 328LL))(
            *(_QWORD *)(a1 + 440),
            &v63,
            v29,
            v6,
            v31,
            &v68);
    v33 = (char *)v64;
    if ( (_DWORD)v6 )
    {
      v34 = (char *)v64 + 40;
      v35 = 56LL * (unsigned int)v6;
      do
      {
        if ( *(_BYTE *)(a1 + 184) == 1 )
          sub_100000AA0();
        v34 += 56;
        v35 -= 56;
      }
      while ( v35 );
    }
    sub_10002CF84(a2, v32);
    sub_10002CF84(a2, v63);
    v36 = &v33[56 * (unsigned int)v6];
    for ( i = (char *)v64; i != v36; i += 56 )
    {
      v40 = i[40];
      v41 = *a2;
      v42 = a2[1];
      if ( a2[2] < (_QWORD *)((char *)v42 + 1) )
      {
        v41 = qvector_reserve(a2, v41, (unsigned __int64)v42 + 1, 1u);
        *a2 = v41;
        v42 = a2[1];
      }
      *((_BYTE *)v42 + (_QWORD)v41) = v40;
      v38 = a2[1];
      v39 = (_QWORD *)((char *)v38 + 1);
      a2[1] = (_QWORD *)((char *)v38 + 1);
      if ( !i[40] && *((_DWORD *)i + 8) == 4 )
      {
        v43 = i[16];
        v44 = *a2;
        if ( a2[2] < (_QWORD *)((char *)v38 + 2) )
        {
          v44 = qvector_reserve(a2, v44, (unsigned __int64)v38 + 2, 1u);
          *a2 = v44;
          v39 = a2[1];
        }
        *((_BYTE *)v39 + (_QWORD)v44) = v43;
        v45 = (unsigned __int64)a2[1] + 1;
        a2[1] = (_QWORD *)v45;
        v46 = *((_QWORD *)i + 2);
        if ( v46 )
        {
          v47 = *((const void **)i + 1);
          if ( __CFADD__(v46, v45) )
            v48 = 0x7FFFFFFFFFFFFFFFLL;
          else
            v48 = v46 + v45;
          if ( v45 >= v48 )
          {
            if ( v45 != v48 )
            {
              v67 = 0;
              sub_100019CE4(a2, v48, &v67);
            }
          }
          else
          {
            v49 = *a2;
            if ( (unsigned __int64)a2[2] >= v48 )
            {
              v50 = (_QWORD *)v45;
            }
            else
            {
              v49 = qvector_reserve(a2, *a2, v48, 1u);
              *a2 = v49;
              v50 = a2[1];
            }
            bzero((char *)v50 + (_QWORD)v49, v48 - (_QWORD)v50);
            a2[1] = (_QWORD *)v48;
          }
          memcpy((char *)*a2 + v45, v47, v46);
        }
      }
    }
    for ( j = &v36[56 * (unsigned int)v62]; i != j; i += 56 )
    {
      v52 = i[40];
      v53 = *a2;
      v54 = a2[1];
      if ( a2[2] < (_QWORD *)((char *)v54 + 1) )
      {
        v53 = qvector_reserve(a2, v53, (unsigned __int64)v54 + 1, 1u);
        *a2 = v53;
        v54 = a2[1];
      }
      *((_BYTE *)v54 + (_QWORD)v53) = v52;
      a2[1] = (_QWORD *)((char *)a2[1] + 1);
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000AA0();
    }
    if ( (_DWORD)v32 != 1 )
      sub_10004C294(a2, (__int64)&v68);
    if ( v68 )
    {
      v69 = nullptr;
      qfree(v68);
    }
  }
  v55 = v64;
  if ( v64 )
  {
    v56 = v65;
    if ( v65 )
    {
      v57 = 0;
      do
      {
        v58 = (char *)v64;
        v59 = (char *)v64 + v57;
        v60 = *(void **)((char *)v64 + v57 + 8);
        if ( v60 )
        {
          *((_QWORD *)v59 + 2) = 0;
          qfree(v60);
          *((_QWORD *)v59 + 1) = 0;
          *(_QWORD *)&v58[v57 + 24] = 0;
        }
        v57 += 56;
        --v56;
      }
      while ( v56 );
      v55 = v64;
    }
    v65 = 0;
    qfree(v55);
  }
  return v32;
}
