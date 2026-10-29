/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100057E44
// Address: 0x0000000100057E44

//----- (0000000100057E44) ----------------------------------------------------
bool __fastcall sub_100057E44(_QWORD *a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  _QWORD *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x9
  unsigned __int64 v11; // x23
  __int64 v12; // x10
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  int v15; // w0
  _QWORD *v16; // x8
  _QWORD *v17; // x10
  _QWORD *v18; // x9
  unsigned int v19; // w12
  int v20; // w23
  __int64 v21; // x9
  __int64 v22; // x11
  _QWORD *v23; // x0
  _QWORD *v24; // x10
  _QWORD *v25; // x10
  int v26; // w10
  unsigned __int64 v27; // x11
  bool v28; // zf
  __int64 v29; // x8
  __int64 v30; // x24
  __int64 v31; // x9
  __int64 v32; // x11
  _QWORD *i; // x0
  int v34; // w23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  __int64 v53; // x9
  __int64 v54; // x11
  _QWORD *v55; // x0
  __int64 v56; // x8
  __int64 v58; // x8
  _Unwind_Exception *v59; // x0
  int v60; // w1
  int v61; // [xsp+8h] [xbp-58h] BYREF
  void *v62; // [xsp+10h] [xbp-50h]
  __int64 v63; // [xsp+18h] [xbp-48h]
  __int64 v64; // [xsp+20h] [xbp-40h]

  if ( (a1[84] & 0x10) == 0 )
    goto LABEL_2;
  if ( *((_DWORD *)a2 + 8) != 4 )
  {
    v13 = *a2;
    v14 = *((int *)a2 + 107);
    v15 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
    v16 = a1 + 64;
    v17 = (_QWORD *)a1[64];
    if ( v17 )
    {
      v18 = a1 + 64;
      do
      {
        if ( v17[4] < (v13 & -v15) )
        {
          v19 = 1;
        }
        else
        {
          v18 = v17;
          v19 = 0;
        }
        v17 = (_QWORD *)v17[v19];
      }
      while ( v17 );
      if ( v18 != v16 && v18[4] < v13 + v14 )
      {
LABEL_35:
        if ( (_DWORD)v14 )
        {
          v26 = *((_DWORD *)v18 + 15);
          if ( v26 )
          {
            v27 = v18[4];
            if ( v13 + v14 - 1 >= v27 )
            {
              v28 = v27 + v26 - 1 < v13 || v18 == v16;
              if ( !v28 )
              {
LABEL_2:
                v8 = (_QWORD *)a1[44];
                v9 = a1[45];
                v10 = v8;
                if ( (v9 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                {
                  v11 = *a2;
                  v12 = 8 * v9;
                  v10 = (_QWORD *)a1[44];
                  while ( v11 != *v10 )
                  {
                    ++v10;
                    v12 -= 8;
                    if ( !v12 )
                      goto LABEL_19;
                  }
                }
                if ( v10 != &v8[v9] )
                {
                  if ( under_debugger == 1 )
                    __break(1u);
                  interr(616);
                  if ( v60 )
                    sub_1000013F4(v59);
                  _Unwind_Resume(v59);
                }
                v11 = *a2;
LABEL_19:
                if ( a1[46] < (unsigned __int64)(v9 + 1) )
                {
                  v8 = qvector_reserve(a1 + 44, v8, v9 + 1, 8u);
                  a1[44] = v8;
                  v9 = a1[45];
                }
                v8[v9] = v11;
                ++a1[45];
                if ( (a4 & 1) != 0 )
                  goto LABEL_51;
                v61 = -2;
                v63 = 0;
                v64 = 0;
                v62 = (void *)*a2;
                v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, int *, _QWORD))(*a1 + 232LL))(
                        a1,
                        *(unsigned int *)(a3 + 4),
                        *((unsigned int *)a1 + 164),
                        &v61,
                        0);
                if ( v20 <= 0 )
                {
                  v21 = a1[45];
                  if ( (v21 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                  {
                    v22 = 8 * v21;
                    v23 = (_QWORD *)a1[44];
                    while ( *a2 != *v23 )
                    {
                      ++v23;
                      v22 -= 8;
                      if ( !v22 )
                        goto LABEL_47;
                    }
                  }
                  else
                  {
                    v23 = (_QWORD *)a1[44];
                  }
                  v29 = a1[44] + 8 * v21;
                  if ( v23 != (_QWORD *)v29 )
                  {
                    memmove(v23, v23 + 1, v29 - (_QWORD)v23 - 8);
                    --a1[45];
                  }
                }
LABEL_47:
                if ( v61 >= -1 && v62 )
                {
                  v63 = 0;
                  qfree(v62);
                }
                if ( v20 >= 1 )
                {
LABEL_51:
                  if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, *(unsigned int *)(a3 + 4)) < 1 )
                  {
                    v31 = a1[45];
                    if ( (v31 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                    {
                      v32 = 8 * v31;
                      for ( i = (_QWORD *)a1[44]; *a2 != *i; ++i )
                      {
                        v32 -= 8;
                        if ( !v32 )
                          return 0;
                      }
                    }
                    else
                    {
                      i = (_QWORD *)a1[44];
                    }
                    v58 = a1[44] + 8 * v31;
                    if ( i != (_QWORD *)v58 )
                    {
                      memmove(i, i + 1, v58 - (_QWORD)i - 8);
                      --a1[45];
                      return 0;
                    }
                  }
                  else
                  {
                    if ( *((_DWORD *)a2 + 8) == 4 )
                      v30 = *((unsigned int *)a2 + 12);
                    else
                      v30 = *((unsigned int *)a2 + 107);
                    v34 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
                    if ( v34 >= 1 )
                    {
                      if ( (*(int (__fastcall **)(_QWORD *, __int64, unsigned __int64 *))*a1)(a1, a3, a2 + 8) <= 0 )
                      {
                        sub_100004854(
                          (__int64)a1,
                          "%a: failed to single step\n",
                          v35,
                          v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          *(_QWORD *)(a3 + 8));
                        v34 = 0;
                      }
                      if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, unsigned __int64, __int64))(*a1 + 312LL))(
                             a1,
                             0,
                             *((unsigned int *)a2 + 8),
                             *a2,
                             v30) <= 0 )
                      {
                        sub_100006388(
                          (__int64)a1,
                          "%a: could not restore deleted bpt\n",
                          v41,
                          v42,
                          v43,
                          v44,
                          v45,
                          v46,
                          *a2);
                        v34 = 0;
                      }
                    }
                    if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, *(unsigned int *)(a3 + 4)) <= 0 )
                    {
                      sub_100006388(
                        (__int64)a1,
                        "%d: could not resume suspended threads\n",
                        v47,
                        v48,
                        v49,
                        v50,
                        v51,
                        v52,
                        *(_DWORD *)(a3 + 4));
                      v34 = 0;
                    }
                    v53 = a1[45];
                    if ( (v53 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                    {
                      v54 = 8 * v53;
                      v55 = (_QWORD *)a1[44];
                      while ( *a2 != *v55 )
                      {
                        ++v55;
                        v54 -= 8;
                        if ( !v54 )
                          goto LABEL_75;
                      }
                    }
                    else
                    {
                      v55 = (_QWORD *)a1[44];
                    }
                    v56 = a1[44] + 8 * v53;
                    if ( v55 != (_QWORD *)v56 )
                    {
                      memmove(v55, v55 + 1, v56 - (_QWORD)v55 - 8);
                      --a1[45];
                    }
LABEL_75:
                    if ( v34 >= 1 && (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) == 6 )
                      return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
                  }
                }
                return 0;
              }
            }
          }
        }
        return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
      }
    }
    else
    {
      v18 = a1 + 64;
    }
    if ( v18 == (_QWORD *)a1[63] )
      return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
    v24 = (_QWORD *)*v18;
    if ( *v18 )
    {
      do
      {
        v18 = v24;
        v24 = (_QWORD *)v24[1];
      }
      while ( v24 );
    }
    else
    {
      v25 = v18;
      do
      {
        v18 = (_QWORD *)v25[2];
        v28 = *v18 == (_QWORD)v25;
        v25 = v18;
      }
      while ( v28 );
    }
    goto LABEL_35;
  }
  return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
}
// 100058180: variable 'v35' is possibly undefined
// 100058180: variable 'v36' is possibly undefined
// 100058180: variable 'v37' is possibly undefined
// 100058180: variable 'v38' is possibly undefined
// 100058180: variable 'v39' is possibly undefined
// 100058180: variable 'v40' is possibly undefined
// 1000581C4: variable 'v41' is possibly undefined
// 1000581C4: variable 'v42' is possibly undefined
// 1000581C4: variable 'v43' is possibly undefined
// 1000581C4: variable 'v44' is possibly undefined
// 1000581C4: variable 'v45' is possibly undefined
// 1000581C4: variable 'v46' is possibly undefined
// 1000581FC: variable 'v47' is possibly undefined
// 1000581FC: variable 'v48' is possibly undefined
// 1000581FC: variable 'v49' is possibly undefined
// 1000581FC: variable 'v50' is possibly undefined
// 1000581FC: variable 'v51' is possibly undefined
// 1000581FC: variable 'v52' is possibly undefined
// 100058338: variable 'v60' is possibly undefined
// 100058340: variable 'v59' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
