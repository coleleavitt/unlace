/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B118
// Address: 0x000000000045B118

//----- (000000000045B118) ----------------------------------------------------
__int64 __fastcall sub_45B118(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        __int64 a7,
        double a8,
        double a9)
{
  int v14; // w20
  unsigned int v16; // w20
  int v18; // w5
  char *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x3
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x0
  _DWORD *v28; // x0
  __int64 v29; // x3
  unsigned int v30; // w0
  double v31; // d0
  int v32; // x0^4
  _DWORD *v33; // x0
  __int64 v34; // x3
  _DWORD *v35; // x0
  __int64 v36; // x3
  double v37; // d0
  int v38; // [xsp+60h] [xbp-30h]
  int v39; // [xsp+60h] [xbp-30h]
  int v40; // [xsp+60h] [xbp-30h]
  int v41; // [xsp+60h] [xbp-30h]
  int v42; // [xsp+68h] [xbp-28h]

  v14 = dword_52024C;
  if ( dword_52024C == -1 )
  {
    v41 = a6;
    v14 = (unsigned __int8)sub_4950A8("IDA_IDB_BIN_SEARCH", 0);
    dword_52024C = v14;
    a6 = v41;
    if ( v14 )
      return 0;
  }
  else if ( dword_52024C )
  {
    return 0;
  }
  v38 = a6;
  sub_45CDF8(a1, (__int64)"dbg_bin_search %a..%a\n", a8, a9);
  if ( a3 >= a4 || !a5[1] || !*(_QWORD *)(a1 + 464) )
    return 0;
  v18 = v38;
  v39 = v38 & 0x10;
  if ( (v18 & 0x10) != 0 )
  {
    v40 = v18;
    v19 = (char *)sub_49E050(0x1098u);
    *((_QWORD *)v19 + 2) = a1;
    *((_QWORD *)v19 + 3) = a5;
    *((_DWORD *)v19 + 8) = v40;
    *((_QWORD *)v19 + 5) = a7;
    *(_QWORD *)v19 = qword_51DCA8;
    *((_QWORD *)v19 + 1) = a2;
    *((_QWORD *)v19 + 518) = -1;
    *((_QWORD *)v19 + 519) = v19 + 4152;
    *((_QWORD *)v19 + 520) = v19 + 4152;
    *((_QWORD *)v19 + 521) = 0;
    *((_QWORD *)v19 + 522) = -1;
    *((_QWORD *)v19 + 523) = 0;
    *((_QWORD *)v19 + 524) = 0;
    *((_QWORD *)v19 + 525) = 0;
    v20 = a5[1];
    *((_QWORD *)v19 + 526) = 0;
    *((_QWORD *)v19 + 527) = 0;
    *((_QWORD *)v19 + 528) = 0;
    if ( v20 )
    {
      v21 = 0;
      do
      {
        v22 = *a5 + 80 * v21;
        if ( *(_QWORD *)(v22 + 8) )
        {
          if ( (*((_DWORD *)v19 + 8) & 1) != 0 && !*(_QWORD *)(v22 + 32) )
          {
            v33 = *((_DWORD **)v19 + 523);
            v34 = *((_QWORD *)v19 + 524);
            if ( (unsigned __int64)(v34 + 1) > *((_QWORD *)v19 + 525) )
            {
              v33 = sub_491288((__int64)(v19 + 4184), *((void **)v19 + 523), v34 + 1, 4u);
              v34 = *((_QWORD *)v19 + 524);
              *((_QWORD *)v19 + 523) = v33;
            }
            v33[v34] = v14;
            ++*((_QWORD *)v19 + 524);
          }
          else
          {
            v23 = *((_DWORD **)v19 + 526);
            v24 = *((_QWORD *)v19 + 527);
            if ( (unsigned __int64)(v24 + 1) > *((_QWORD *)v19 + 528) )
            {
              v23 = sub_491288((__int64)(v19 + 4208), *((void **)v19 + 526), v24 + 1, 4u);
              v24 = *((_QWORD *)v19 + 527);
              *((_QWORD *)v19 + 526) = v23;
            }
            v23[v24] = v14;
            ++*((_QWORD *)v19 + 527);
          }
        }
        a5 = *((_QWORD **)v19 + 3);
        v21 = ++v14;
      }
      while ( (unsigned __int64)v14 < a5[1] );
    }
    memset(v19 + 48, 0, 0x1000u);
    *((_DWORD *)v19 + 1058) = (unsigned __int64)sub_4926B8() >> 32;
    *(_QWORD *)v19 = off_51AB78;
    *((_QWORD *)v19 + 530) = 0;
    v30 = sub_45A098((__int64 *)v19, a3, a4);
  }
  else
  {
    v42 = v18;
    v19 = (char *)sub_49E050(0x1098u);
    *((_QWORD *)v19 + 2) = a1;
    *((_QWORD *)v19 + 3) = a5;
    *((_DWORD *)v19 + 8) = v42;
    *((_QWORD *)v19 + 5) = a7;
    *(_QWORD *)v19 = qword_51DCA8;
    *((_QWORD *)v19 + 1) = a2;
    *((_QWORD *)v19 + 518) = -1;
    *((_QWORD *)v19 + 519) = v19 + 4152;
    *((_QWORD *)v19 + 520) = v19 + 4152;
    *((_QWORD *)v19 + 521) = 0;
    *((_QWORD *)v19 + 522) = -1;
    *((_QWORD *)v19 + 523) = 0;
    *((_QWORD *)v19 + 524) = 0;
    *((_QWORD *)v19 + 525) = 0;
    v25 = a5[1];
    *((_QWORD *)v19 + 526) = 0;
    *((_QWORD *)v19 + 527) = 0;
    *((_QWORD *)v19 + 528) = 0;
    if ( v25 )
    {
      v26 = 0;
      do
      {
        v27 = *a5 + 80 * v26;
        if ( *(_QWORD *)(v27 + 8) )
        {
          if ( (*((_DWORD *)v19 + 8) & 1) != 0 && !*(_QWORD *)(v27 + 32) )
          {
            v35 = *((_DWORD **)v19 + 523);
            v36 = *((_QWORD *)v19 + 524);
            if ( (unsigned __int64)(v36 + 1) > *((_QWORD *)v19 + 525) )
            {
              v35 = sub_491288((__int64)(v19 + 4184), *((void **)v19 + 523), v36 + 1, 4u);
              v36 = *((_QWORD *)v19 + 524);
              *((_QWORD *)v19 + 523) = v35;
            }
            v35[v36] = v39;
            ++*((_QWORD *)v19 + 524);
          }
          else
          {
            v28 = *((_DWORD **)v19 + 526);
            v29 = *((_QWORD *)v19 + 527);
            if ( (unsigned __int64)(v29 + 1) > *((_QWORD *)v19 + 528) )
            {
              v28 = sub_491288((__int64)(v19 + 4208), *((void **)v19 + 526), v29 + 1, 4u);
              v29 = *((_QWORD *)v19 + 527);
              *((_QWORD *)v19 + 526) = v28;
            }
            v28[v29] = v39;
            ++*((_QWORD *)v19 + 527);
          }
        }
        a5 = *((_QWORD **)v19 + 3);
        v26 = ++v39;
      }
      while ( (unsigned __int64)v39 < a5[1] );
    }
    memset(v19 + 48, 0, 0x1000u);
    v32 = (unsigned __int64)sub_4926B8() >> 32;
    *(_QWORD *)v19 = off_51AB48;
    *((_DWORD *)v19 + 1058) = v32;
    *((_QWORD *)v19 + 530) = 4096;
    v30 = sub_459BF8((__int64 *)v19, a3, a4);
  }
  v16 = v30;
  if ( v30 == -7 )
  {
    if ( *((_QWORD *)v19 + 522) != -1
      && (sub_45CDF8(a1, (__int64)"dbg_bin_search failed to read memory at %a\n", v31), a7)
      && *(_QWORD *)(a7 + 8) <= 1u )
    {
      sub_40CD68(a7, "Failed to read memory at %a\n", v37);
    }
    else
    {
      return (unsigned int)-7;
    }
  }
  return v16;
}
// 45B118: could not find valid save-restore pair for x26
// 45B1C0: variable 'a8' is possibly undefined
// 45B1C0: variable 'a9' is possibly undefined
// 45B51C: variable 'v31' is possibly undefined
// 45B584: variable 'v37' is possibly undefined
// 51AB48: using guessed type __int64 (__fastcall *off_51AB48[4])();
// 51AB78: using guessed type __int64 (__fastcall *off_51AB78[4])();
// 51DCA8: using guessed type __int64 qword_51DCA8[2];
// 52024C: using guessed type int dword_52024C;
