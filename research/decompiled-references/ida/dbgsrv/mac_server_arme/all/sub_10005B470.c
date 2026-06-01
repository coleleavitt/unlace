/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B470
// Address: 0x000000010005B470

//----- (000000010005B470) ----------------------------------------------------
bool __fastcall sub_10005B470(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  void **v8; // x1
  __int64 v9; // x8
  void **v10; // x9
  void *v11; // x23
  __int64 v12; // x10
  int v13; // w23
  __int64 v14; // x9
  __int64 v15; // x11
  _QWORD *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x24
  __int64 v19; // x9
  __int64 v20; // x11
  _QWORD *i; // x0
  int v22; // w23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  __int64 v41; // x9
  __int64 v42; // x11
  _QWORD *v43; // x0
  __int64 v44; // x8
  __int64 v46; // x8
  _Unwind_Exception *v47; // x0
  int v48; // w1
  int v49; // [xsp+8h] [xbp-68h] BYREF
  void *v50; // [xsp+10h] [xbp-60h]
  __int64 v51; // [xsp+18h] [xbp-58h]
  __int64 v52; // [xsp+20h] [xbp-50h]

  if ( (a1[84] & 0x10) == 0 || *((_DWORD *)a2 + 8) != 4 && a1 + 64 != sub_10005B96C(a1, *a2, *((_DWORD *)a2 + 107)) )
  {
    v8 = (void **)a1[44];
    v9 = a1[45];
    v10 = v8;
    if ( (v9 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v11 = (void *)*a2;
      v12 = 8 * v9;
      v10 = (void **)a1[44];
      while ( v11 != *v10 )
      {
        ++v10;
        v12 -= 8;
        if ( !v12 )
          goto LABEL_11;
      }
    }
    if ( v10 != &v8[v9] )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(616);
      if ( v48 )
        sub_10000150C(v47);
      _Unwind_Resume(v47);
    }
    v11 = (void *)*a2;
LABEL_11:
    if ( a1[46] < (unsigned __int64)(v9 + 1) )
    {
      v8 = (void **)qvector_reserve(a1 + 44, v8, v9 + 1, 8u);
      a1[44] = v8;
      v9 = a1[45];
    }
    v8[v9] = v11;
    ++a1[45];
    if ( (a4 & 1) != 0 )
      goto LABEL_27;
    v49 = -2;
    v51 = 0;
    v52 = 0;
    v50 = (void *)*a2;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, int *, _QWORD))(*a1 + 232LL))(
            a1,
            *(unsigned int *)(a3 + 4),
            *((unsigned int *)a1 + 164),
            &v49,
            0);
    if ( v13 <= 0 )
    {
      v14 = a1[45];
      if ( (v14 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
      {
        v15 = 8 * v14;
        v16 = (_QWORD *)a1[44];
        while ( *a2 != *v16 )
        {
          ++v16;
          v15 -= 8;
          if ( !v15 )
            goto LABEL_23;
        }
      }
      else
      {
        v16 = (_QWORD *)a1[44];
      }
      v17 = a1[44] + 8 * v14;
      if ( v16 != (_QWORD *)v17 )
      {
        memmove(v16, v16 + 1, v17 - (_QWORD)v16 - 8);
        --a1[45];
      }
    }
LABEL_23:
    if ( v49 >= -1 && v50 )
    {
      v51 = 0;
      qfree(v50);
    }
    if ( v13 >= 1 )
    {
LABEL_27:
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, *(unsigned int *)(a3 + 4)) < 1 )
      {
        v19 = a1[45];
        if ( (v19 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v20 = 8 * v19;
          for ( i = (_QWORD *)a1[44]; *a2 != *i; ++i )
          {
            v20 -= 8;
            if ( !v20 )
              return 0;
          }
        }
        else
        {
          i = (_QWORD *)a1[44];
        }
        v46 = a1[44] + 8 * v19;
        if ( i != (_QWORD *)v46 )
        {
          memmove(i, i + 1, v46 - (_QWORD)i - 8);
          --a1[45];
          return 0;
        }
      }
      else
      {
        if ( *((_DWORD *)a2 + 8) == 4 )
          v18 = *((unsigned int *)a2 + 12);
        else
          v18 = *((unsigned int *)a2 + 107);
        v22 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
        if ( v22 >= 1 )
        {
          if ( (*(int (__fastcall **)(_QWORD *, __int64, _QWORD *))*a1)(a1, a3, a2 + 8) <= 0 )
          {
            sub_100004BD4((__int64)a1, "%a: failed to single step\n", v23, v24, v25, v26, v27, v28, *(_QWORD *)(a3 + 8));
            v22 = 0;
          }
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64))(*a1 + 312LL))(
                 a1,
                 0,
                 *((unsigned int *)a2 + 8),
                 *a2,
                 v18) <= 0 )
          {
            sub_1000067E4((__int64)a1, "%a: could not restore deleted bpt\n", v29, v30, v31, v32, v33, v34, *a2);
            v22 = 0;
          }
        }
        if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, *(unsigned int *)(a3 + 4)) <= 0 )
        {
          sub_1000067E4(
            (__int64)a1,
            "%d: could not resume suspended threads\n",
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            *(_DWORD *)(a3 + 4));
          v22 = 0;
        }
        v41 = a1[45];
        if ( (v41 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v42 = 8 * v41;
          v43 = (_QWORD *)a1[44];
          while ( *a2 != *v43 )
          {
            ++v43;
            v42 -= 8;
            if ( !v42 )
              goto LABEL_51;
          }
        }
        else
        {
          v43 = (_QWORD *)a1[44];
        }
        v44 = a1[44] + 8 * v41;
        if ( v43 != (_QWORD *)v44 )
        {
          memmove(v43, v43 + 1, v44 - (_QWORD)v43 - 8);
          --a1[45];
        }
LABEL_51:
        if ( v22 >= 1 && (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) == 6 )
          return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
      }
    }
    return 0;
  }
  return (a4 & 2) != 0 || (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
}
// 10005B744: variable 'v23' is possibly undefined
// 10005B744: variable 'v24' is possibly undefined
// 10005B744: variable 'v25' is possibly undefined
// 10005B744: variable 'v26' is possibly undefined
// 10005B744: variable 'v27' is possibly undefined
// 10005B744: variable 'v28' is possibly undefined
// 10005B7A0: variable 'v29' is possibly undefined
// 10005B7A0: variable 'v30' is possibly undefined
// 10005B7A0: variable 'v31' is possibly undefined
// 10005B7A0: variable 'v32' is possibly undefined
// 10005B7A0: variable 'v33' is possibly undefined
// 10005B7A0: variable 'v34' is possibly undefined
// 10005B7E8: variable 'v35' is possibly undefined
// 10005B7E8: variable 'v36' is possibly undefined
// 10005B7E8: variable 'v37' is possibly undefined
// 10005B7E8: variable 'v38' is possibly undefined
// 10005B7E8: variable 'v39' is possibly undefined
// 10005B7E8: variable 'v40' is possibly undefined
// 10005B940: variable 'v48' is possibly undefined
// 10005B948: variable 'v47' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
