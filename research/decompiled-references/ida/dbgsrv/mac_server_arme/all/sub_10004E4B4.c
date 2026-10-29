/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E4B4
// Address: 0x000000010004E4B4

//----- (000000010004E4B4) ----------------------------------------------------
__int64 __fastcall sub_10004E4B4(__int64 a1, _QWORD **a2, unsigned __int64 *a3)
{
  __int64 v6; // x22
  int v7; // w0
  int v8; // w25
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
  __int64 v31; // x23
  char *v32; // x21
  char *v33; // x24
  __int64 v34; // x25
  char *v35; // x27
  char *i; // x26
  _QWORD *v37; // x9
  _QWORD *v38; // x8
  char v39; // w21
  _QWORD *v40; // x1
  _QWORD *v41; // x8
  char v42; // w21
  _QWORD *v43; // x1
  unsigned __int64 v44; // x21
  size_t v45; // x22
  const void *v46; // x24
  unsigned __int64 v47; // x25
  _QWORD *v48; // x8
  _QWORD *v49; // x9
  char *j; // x22
  char v51; // w25
  _QWORD *v52; // x1
  _QWORD *v53; // x8
  void *v54; // x0
  __int64 v55; // x19
  __int64 v56; // x20
  char *v57; // x21
  char *v58; // x22
  void *v59; // x0
  int v61; // [xsp+38h] [xbp-C8h]
  unsigned int v62; // [xsp+44h] [xbp-BCh] BYREF
  void *v63; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v64; // [xsp+50h] [xbp-B0h]
  __int64 v65; // [xsp+58h] [xbp-A8h]
  char v66; // [xsp+67h] [xbp-99h] BYREF
  void *v67; // [xsp+68h] [xbp-98h] BYREF
  void *v68; // [xsp+70h] [xbp-90h]
  __int128 v69; // [xsp+78h] [xbp-88h]
  __int64 v70; // [xsp+88h] [xbp-78h]
  __int128 v71; // [xsp+90h] [xbp-70h]

  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v6 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  v8 = v7;
  if ( (v6 & 0x80000000) != 0 || v7 < 0 || (v7 ^ 0x7FFFFFFF) < (int)v6 )
  {
    sub_10002E2F0(a2, 0);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000B44();
    v31 = 0;
  }
  else
  {
    v9 = v7 + (int)v6;
    if ( v64 != v9 )
    {
      v71 = 0u;
      v67 = (void *)-1LL;
      v68 = nullptr;
      v69 = 0u;
      v70 = 4;
      DWORD1(v71) = -1;
      sub_1000576E8(&v63, v9, (unsigned __int64)&v67);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
    }
    v10 = (char *)v63;
    v11 = (char *)v63 + 56 * (unsigned int)v6;
    v61 = v8;
    if ( (_DWORD)v6 )
    {
      v12 = 0;
      v13 = (char *)v63 + 48;
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
      v8 = v61;
    }
    v15 = &v11[56 * v8];
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
                LOBYTE(v67) = 0;
                sub_10001B764((_QWORD **)v17 - 1, v21, &v67);
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
    v29 = v63;
    v30 = (char *)v63 + 56 * (unsigned int)v6;
    if ( v30 != v15 )
    {
      do
      {
        if ( *(_BYTE *)(a1 + 184) == 1 )
          sub_100000B44();
        v30 += 56;
      }
      while ( v30 != v15 );
      v29 = v63;
    }
    v67 = nullptr;
    v68 = nullptr;
    *(_QWORD *)&v69 = 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, __int64))(**(_QWORD **)(a1 + 440) + 328LL))(
            *(_QWORD *)(a1 + 440),
            &v62,
            v29,
            v6);
    v32 = (char *)v63;
    if ( (_DWORD)v6 )
    {
      v33 = (char *)v63 + 40;
      v34 = 56LL * (unsigned int)v6;
      do
      {
        if ( *(_BYTE *)(a1 + 184) == 1 )
          sub_100000B44();
        v33 += 56;
        v34 -= 56;
      }
      while ( v34 );
    }
    sub_10002E2F0(a2, v31);
    sub_10002E2F0(a2, v62);
    v35 = &v32[56 * (unsigned int)v6];
    for ( i = (char *)v63; i != v35; i += 56 )
    {
      v39 = i[40];
      v40 = *a2;
      v41 = a2[1];
      if ( a2[2] < (_QWORD *)((char *)v41 + 1) )
      {
        v40 = qvector_reserve(a2, v40, (unsigned __int64)v41 + 1, 1u);
        *a2 = v40;
        v41 = a2[1];
      }
      *((_BYTE *)v41 + (_QWORD)v40) = v39;
      v37 = a2[1];
      v38 = (_QWORD *)((char *)v37 + 1);
      a2[1] = (_QWORD *)((char *)v37 + 1);
      if ( !i[40] && *((_DWORD *)i + 8) == 4 )
      {
        v42 = i[16];
        v43 = *a2;
        if ( a2[2] < (_QWORD *)((char *)v37 + 2) )
        {
          v43 = qvector_reserve(a2, v43, (unsigned __int64)v37 + 2, 1u);
          *a2 = v43;
          v38 = a2[1];
        }
        *((_BYTE *)v38 + (_QWORD)v43) = v42;
        v44 = (unsigned __int64)a2[1] + 1;
        a2[1] = (_QWORD *)v44;
        v45 = *((_QWORD *)i + 2);
        if ( v45 )
        {
          v46 = *((const void **)i + 1);
          if ( __CFADD__(v45, v44) )
            v47 = 0x7FFFFFFFFFFFFFFFLL;
          else
            v47 = v45 + v44;
          if ( v44 >= v47 )
          {
            if ( v44 != v47 )
            {
              v66 = 0;
              sub_10001B764(a2, v47, &v66);
            }
          }
          else
          {
            v48 = *a2;
            if ( (unsigned __int64)a2[2] >= v47 )
            {
              v49 = (_QWORD *)v44;
            }
            else
            {
              v48 = qvector_reserve(a2, *a2, v47, 1u);
              *a2 = v48;
              v49 = a2[1];
            }
            bzero((char *)v49 + (_QWORD)v48, v47 - (_QWORD)v49);
            a2[1] = (_QWORD *)v47;
          }
          memcpy((char *)*a2 + v44, v46, v45);
        }
      }
    }
    for ( j = &v35[56 * v61]; i != j; i += 56 )
    {
      v51 = i[40];
      v52 = *a2;
      v53 = a2[1];
      if ( a2[2] < (_QWORD *)((char *)v53 + 1) )
      {
        v52 = qvector_reserve(a2, v52, (unsigned __int64)v53 + 1, 1u);
        *a2 = v52;
        v53 = a2[1];
      }
      *((_BYTE *)v53 + (_QWORD)v52) = v51;
      a2[1] = (_QWORD *)((char *)a2[1] + 1);
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000B44();
    }
    if ( (_DWORD)v31 != 1 )
      sub_10004ED18(a2, (__int64)&v67);
    if ( v67 )
    {
      v68 = nullptr;
      qfree(v67);
    }
  }
  v54 = v63;
  if ( v63 )
  {
    v55 = v64;
    if ( v64 )
    {
      v56 = 0;
      do
      {
        v57 = (char *)v63;
        v58 = (char *)v63 + v56;
        v59 = *(void **)((char *)v63 + v56 + 8);
        if ( v59 )
        {
          *((_QWORD *)v58 + 2) = 0;
          qfree(v59);
          *((_QWORD *)v58 + 1) = 0;
          *(_QWORD *)&v57[v56 + 24] = 0;
        }
        v56 += 56;
        --v55;
      }
      while ( v55 );
      v54 = v63;
    }
    v64 = 0;
    qfree(v54);
  }
  return v31;
}
