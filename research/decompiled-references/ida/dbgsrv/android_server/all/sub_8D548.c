/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D548
// Address: 0x000000000008D548

//----- (000000000008D548) ----------------------------------------------------
__int64 __fastcall sub_8D548(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v6; // w21
  unsigned int v7; // w22
  double v8; // d0
  _BYTE *v9; // x27
  __int64 v10; // x8
  char *v11; // x25
  unsigned __int64 v12; // x26
  _DWORD *v13; // x28
  __int64 v14; // x29
  char *v15; // x8
  pthread_mutex_t *v16; // x0
  unsigned int v17; // w21
  char *v18; // x28
  unsigned __int64 v19; // x25
  char *v20; // x29
  char *v21; // x26
  unsigned __int64 v22; // x1
  unsigned __int8 *v23; // x8
  unsigned __int64 v24; // x24
  int v25; // t1
  __int64 v26; // x8
  char *v27; // x0
  unsigned __int64 v28; // x9
  void *v29; // x0
  const void *v30; // x1
  void *v31; // x2
  __int64 v32; // x24
  unsigned int *v33; // x25
  __int64 v34; // x26
  unsigned int v35; // w0
  double v36; // d0
  char *v37; // x23
  char *v38; // x26
  __int64 v39; // x28
  pthread_mutex_t *v40; // x0
  pthread_mutex_t *v41; // x0
  double v42; // d0
  char *v43; // x22
  char *v44; // x25
  __int64 v45; // x8
  void *v46; // x1
  char v47; // w26
  __int64 v48; // x9
  __int64 v49; // x8
  char v50; // w26
  void *v51; // x1
  char *v52; // x9
  __int64 v53; // x23
  const char **v54; // x24
  __int64 v55; // x8
  void *v56; // x1
  char v57; // w27
  char *v58; // x8
  char *v59; // x20
  size_t v60; // x0
  char *v61; // x19
  unsigned __int64 v62; // x20
  __int64 v63; // x22
  unsigned __int64 i; // x23
  char *v65; // x24
  void *v66; // x0
  __int64 v68; // [xsp+10h] [xbp-B0h]
  void *ptr; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v70; // [xsp+20h] [xbp-A0h]
  __int64 v71; // [xsp+28h] [xbp-98h]
  unsigned int v72; // [xsp+34h] [xbp-8Ch] BYREF
  void *v73; // [xsp+38h] [xbp-88h] BYREF
  unsigned __int64 v74; // [xsp+40h] [xbp-80h]
  __int64 v75; // [xsp+48h] [xbp-78h]
  pthread_mutex_t src; // [xsp+50h] [xbp-70h] BYREF

  *(&src.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v74 = 0;
  v75 = 0;
  v73 = nullptr;
  v6 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  if ( ((v7 | v6) & 0x80000000) != 0 || (int)(0x7FFFFFFF - v7) < (int)v6 )
  {
    v16 = pack_dd(&src, (unsigned __int64)&src.__align + 5, 0);
    sub_545E8((pthread_mutex_t *)a2, &src, (char *)v16 - (char *)&src);
    if ( *(_BYTE *)(a1 + 184) )
      sub_39FA0((__int64)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", v6, v7);
    return 0;
  }
  else
  {
    sub_8DC78((__int64)&v73, (int)(v7 + v6));
    v9 = v73;
    v10 = 56LL * (int)v6;
    v11 = (char *)v73 + v10;
    v68 = (int)v6;
    if ( v10 )
    {
      v12 = 0;
      v13 = (char *)v73 + 48;
      v14 = 56LL * (int)v6;
      do
      {
        *((_BYTE *)v13 - 8) = 0;
        v12 = v12 + unpack_dq(a3, a3[1]) - 1;
        *((_QWORD *)v13 - 6) = v12;
        *(v13 - 3) = unpack_dd(a3, a3[1]);
        *(v13 - 4) = unpack_dd(a3, a3[1]);
        *(v13 - 1) = unpack_dd(a3, a3[1]);
        v14 -= 56;
        *v13 = unpack_dd(a3, a3[1]);
        v13 += 14;
      }
      while ( v14 );
      v15 = v11;
    }
    else
    {
      v15 = (char *)v73;
    }
    v18 = &v11[56 * v7];
    if ( v15 != v18 )
    {
      v19 = 0;
      v20 = v15 + 16;
      do
      {
        v19 = v19 + unpack_dq(a3, a3[1]) - 1;
        *((_QWORD *)v20 - 2) = v19;
        v21 = v20 - 16;
        v23 = (unsigned __int8 *)*a3;
        v22 = a3[1];
        if ( *a3 < v22 )
        {
          v25 = *v23;
          v24 = *v23;
          *a3 = (unsigned __int64)(v23 + 1);
          if ( v25 )
          {
            v26 = *(_QWORD *)v20;
            if ( *(_QWORD *)v20 >= v24 )
            {
              if ( *(_QWORD *)v20 != v24 )
              {
                LOBYTE(ptr) = 0;
                sub_5BBF4((pthread_mutex_t *)(v20 - 8), v24, (char *)&ptr);
              }
            }
            else
            {
              if ( *((_QWORD *)v20 + 1) >= v24 )
              {
                v27 = *((char **)v20 - 1);
              }
              else
              {
                v27 = (char *)qvector_reserve((pthread_mutex_t *)(v20 - 8), *((void **)v20 - 1), v24, 1u);
                v26 = *(_QWORD *)v20;
                *((_QWORD *)v20 - 1) = v27;
              }
              memset(&v27[v26], 0, v24 - v26);
              *(_QWORD *)v20 = v24;
            }
            v22 = a3[1];
            v28 = *a3 + v24;
            if ( v28 >= *a3 && v28 <= v22 )
            {
              v29 = *((void **)v20 - 1);
              v30 = (const void *)*a3;
              *a3 = v28;
              memcpy(v29, v30, v24);
              v22 = a3[1];
            }
          }
        }
        *((_DWORD *)v20 + 4) = unpack_dd(a3, v22);
        *((_DWORD *)v20 + 7) = unpack_dd(a3, a3[1]);
        *((_DWORD *)v20 + 8) = unpack_dd(a3, a3[1]);
        v20 += 56;
      }
      while ( v21 + 56 != v18 );
    }
    v31 = v73;
    v32 = (int)v7;
    if ( (char *)v73 + 56 * (int)v6 != v18 )
    {
      v33 = (unsigned int *)((char *)v73 + 56 * (int)v6 + 32);
      v34 = &v9[56 * v7] - (_BYTE *)v73;
      do
      {
        if ( *(_BYTE *)(a1 + 184) )
          sub_39FA0(
            (__int64)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n",
            v8,
            *((_QWORD *)v33 - 4),
            *v33,
            *((_QWORD *)v33 - 2));
        v34 -= 56;
        v33 += 14;
      }
      while ( v34 );
      v31 = v73;
    }
    v70 = 0;
    v71 = 0;
    ptr = nullptr;
    v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, _QWORD, _QWORD, void **))(**(_QWORD **)(a1 + 440)
                                                                                             + 328LL))(
            *(_QWORD *)(a1 + 440),
            &v72,
            v31,
            v6,
            v7,
            &ptr);
    v37 = (char *)v73;
    v17 = v35;
    if ( 56 * v68 )
    {
      v38 = (char *)v73 + 40;
      v39 = 56 * v68;
      do
      {
        if ( *(_BYTE *)(a1 + 184) )
          sub_39FA0(
            (__int64)"add_bpt(ea=%a type=%d len=%d) => %s\n",
            v36,
            *((_QWORD *)v38 - 5),
            *((_DWORD *)v38 - 2),
            (const char *)*((unsigned int *)v38 - 1));
        v39 -= 56;
        v38 += 56;
      }
      while ( v39 );
    }
    v40 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v17);
    sub_545E8((pthread_mutex_t *)a2, &src, (char *)v40 - (char *)&src);
    v41 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v72);
    sub_545E8((pthread_mutex_t *)a2, &src, (char *)v41 - (char *)&src);
    v43 = (char *)v73;
    v44 = &v37[56 * v68];
    if ( v73 != v44 )
    {
      do
      {
        v45 = *(_QWORD *)(a2 + 8);
        v46 = *(void **)a2;
        v47 = v43[40];
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v45 + 1) )
        {
          v46 = qvector_reserve((pthread_mutex_t *)a2, v46, v45 + 1, 1u);
          v45 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v46;
        }
        *((_BYTE *)v46 + v45) = v47;
        v48 = *(_QWORD *)(a2 + 8);
        v49 = v48 + 1;
        *(_QWORD *)(a2 + 8) = v48 + 1;
        if ( !v43[40] && *((_DWORD *)v43 + 8) == 4 )
        {
          v50 = v43[16];
          v51 = *(void **)a2;
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v48 + 2) )
          {
            v51 = qvector_reserve((pthread_mutex_t *)a2, v51, v48 + 2, 1u);
            v49 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v51;
          }
          *((_BYTE *)v51 + v49) = v50;
          ++*(_QWORD *)(a2 + 8);
          sub_545E8((pthread_mutex_t *)a2, *((void **)v43 + 1), *((_QWORD *)v43 + 2));
        }
        v43 += 56;
      }
      while ( v44 != v43 );
    }
    if ( 56 * v32 )
    {
      v52 = &v37[56 * v68];
      v53 = 56 * v32;
      v54 = (const char **)(v52 + 40);
      do
      {
        v55 = *(_QWORD *)(a2 + 8);
        v56 = *(void **)a2;
        v57 = *(_BYTE *)v54;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v55 + 1) )
        {
          v56 = qvector_reserve((pthread_mutex_t *)a2, v56, v55 + 1, 1u);
          v55 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v56;
        }
        *((_BYTE *)v56 + v55) = v57;
        ++*(_QWORD *)(a2 + 8);
        if ( *(_BYTE *)(a1 + 184) )
          sub_39FA0((__int64)"del_bpt(ea=%a) => %s\n", v42, *(v54 - 5));
        v53 -= 56;
        v54 += 7;
      }
      while ( v53 );
    }
    if ( v17 != 1 )
    {
      if ( v70 )
        v58 = (char *)ptr;
      else
        v58 = &byte_F154B;
      if ( v58 )
        v59 = v58;
      else
        v59 = "";
      v60 = strlen(v59);
      sub_545E8((pthread_mutex_t *)a2, v59, v60 + 1);
    }
    if ( ptr )
    {
      v70 = 0;
      qfree(ptr);
      ptr = nullptr;
      v71 = 0;
    }
    v61 = (char *)v73;
    if ( v73 )
    {
      v62 = v74;
      if ( v74 )
      {
        v63 = 0;
        for ( i = 1; ; ++i )
        {
          v65 = &v61[v63];
          v66 = *(void **)&v61[v63 + 8];
          if ( v66 )
          {
            *((_QWORD *)v65 + 2) = 0;
            qfree(v66);
            *((_QWORD *)v65 + 1) = 0;
            *(_QWORD *)&v61[v63 + 24] = 0;
          }
          if ( i >= v62 )
            break;
          v61 = (char *)v73;
          v63 += 56;
        }
        v61 = (char *)v73;
      }
      v74 = 0;
      qfree(v61);
      v73 = nullptr;
      v75 = 0;
    }
  }
  return v17;
}
// 8D6B0: conditional instruction was optimized away because %var_88.8==0
// 8D840: variable 'v8' is possibly undefined
// 8D8E0: variable 'v36' is possibly undefined
// 8DA94: variable 'v42' is possibly undefined
// F154B: using guessed type char byte_F154B;
