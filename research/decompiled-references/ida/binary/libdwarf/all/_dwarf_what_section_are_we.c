__int64 __fastcall dwarf_what_section_are_we(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  __int64 v26; // rdx
  unsigned __int64 v27; // r10
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx

  v8 = a1[45];
  if ( a2 >= v8 && v8 && a2 < a1[46] + v8 )
  {
    *a3 = a1[68];
    *a4 = a1[45];
    v9 = a1[46];
    *a5 = v9;
    *a6 = a1[45] + v9;
    return 0;
  }
  v11 = a1[190];
  if ( a2 >= v11 && v11 && a2 < a1[191] + v11 )
  {
    *a3 = a1[213];
    *a4 = a1[190];
    v12 = a1[191];
    *a5 = v12;
    *a6 = a1[190] + v12;
    return 0;
  }
  v13 = a1[422];
  if ( a2 >= v13 && v13 && a2 < a1[423] + v13 )
  {
    *a3 = a1[445];
    *a4 = a1[422];
    v14 = a1[423];
    *a5 = v14;
    *a6 = a1[422] + v14;
    return 0;
  }
  else
  {
    v15 = a1[451];
    if ( a2 >= v15 && v15 && a2 < a1[452] + v15 )
    {
      *a3 = a1[474];
      *a4 = a1[451];
      v16 = a1[452];
      *a5 = v16;
      *a6 = a1[451] + v16;
      return 0;
    }
    v17 = a1[799];
    if ( v17 != 0 && a2 >= v17 && a2 < v17 + a1[800] )
      goto LABEL_20;
    v19 = a1[132];
    if ( a2 >= v19 && v19 && a2 < a1[133] + v19 )
    {
      *a3 = a1[155];
      *a4 = a1[132];
      v20 = a1[133];
      *a5 = v20;
      *a6 = a1[132] + v20;
      return 0;
    }
    v21 = a1[219];
    if ( a2 >= v21 && v21 && a2 < a1[220] + v21 )
    {
      *a3 = a1[242];
      *a4 = a1[219];
      v22 = a1[220];
      *a5 = v22;
      *a6 = a1[219] + v22;
      return 0;
    }
    v23 = a1[277];
    if ( a2 >= v23 && v23 && a2 < a1[278] + v23 )
    {
      *a3 = a1[300];
      *a4 = a1[277];
      v24 = a1[278];
      *a5 = v24;
      *a6 = a1[277] + v24;
      return 0;
    }
    v25 = a1[741];
    if ( a2 >= v25 && v25 && a2 < a1[742] + v25 )
    {
      *a3 = a1[764];
      *a4 = a1[741];
      v26 = a1[742];
      *a5 = v26;
      *a6 = a1[741] + v26;
      return 0;
    }
    v27 = a1[770];
    if ( a2 >= v27 && v27 && a2 < a1[771] + v27 )
    {
      *a3 = a1[793];
      *a4 = a1[770];
      v28 = a1[771];
      *a5 = v28;
      *a6 = a1[770] + v28;
      return 0;
    }
    if ( v17 != 0 && a2 >= v17 && a2 < a1[800] + v17 )
    {
LABEL_20:
      *a3 = a1[822];
      *a4 = a1[799];
      v18 = a1[800];
      *a5 = v18;
      *a6 = a1[799] + v18;
      return 0;
    }
    v29 = a1[596];
    if ( a2 >= v29 && v29 && a2 < a1[597] + v29 )
    {
      *a3 = a1[619];
      *a4 = a1[596];
      v30 = a1[597];
      *a5 = v30;
      *a6 = a1[596] + v30;
      return 0;
    }
    v31 = a1[832];
    if ( a2 >= v31 && v31 && a2 < a1[833] + v31 )
    {
      *a3 = a1[855];
      *a4 = a1[832];
      v32 = a1[833];
      *a5 = v32;
      *a6 = a1[832] + v32;
      return 0;
    }
    v33 = a1[103];
    if ( a2 >= v33 && v33 && a2 < a1[104] + v33 )
    {
      *a3 = a1[126];
      *a4 = a1[103];
      v34 = a1[104];
      *a5 = v34;
      *a6 = a1[103] + v34;
      return 0;
    }
    v35 = a1[861];
    if ( a2 >= v35 && v35 && a2 < a1[862] + v35 )
    {
      *a3 = a1[884];
      *a4 = a1[861];
      v36 = a1[862];
      *a5 = v36;
      *a6 = a1[861] + v36;
      return 0;
    }
    v37 = a1[890];
    if ( a2 >= v37 && v37 && a2 < a1[891] + v37 )
    {
      *a3 = a1[913];
      *a4 = a1[890];
      v38 = a1[891];
      *a5 = v38;
      *a6 = a1[890] + v38;
      return 0;
    }
    v39 = a1[161];
    if ( a2 >= v39 && v39 && a2 < a1[162] + v39 )
    {
      *a3 = a1[184];
      *a4 = a1[161];
      v40 = a1[162];
      *a5 = v40;
      *a6 = a1[161] + v40;
      return 0;
    }
    v41 = a1[74];
    if ( a2 >= v41 && v41 && a2 < a1[75] + v41 )
    {
      *a3 = a1[97];
      *a4 = a1[74];
      v42 = a1[75];
      *a5 = v42;
      *a6 = a1[74] + v42;
      return 0;
    }
    v43 = a1[393];
    if ( a2 >= v43 && v43 && a2 < a1[394] + v43 )
    {
      *a3 = a1[416];
      *a4 = a1[393];
      v44 = a1[394];
      *a5 = v44;
      *a6 = a1[393] + v44;
      return 0;
    }
    v45 = a1[480];
    if ( a2 >= v45 && v45 && a2 < a1[481] + v45 )
    {
      *a3 = a1[503];
      *a4 = a1[480];
      v46 = a1[481];
      *a5 = v46;
      *a6 = a1[480] + v46;
      return 0;
    }
    v47 = a1[567];
    if ( a2 >= v47 && v47 && a2 < a1[568] + v47 )
    {
      *a3 = a1[590];
      *a4 = a1[567];
      v48 = a1[568];
      *a5 = v48;
      *a6 = a1[567] + v48;
      return 0;
    }
    v49 = a1[509];
    if ( a2 >= v49 && v49 && a2 < a1[510] + v49 )
    {
      *a3 = a1[532];
      *a4 = a1[509];
      v50 = a1[510];
      *a5 = v50;
      *a6 = a1[509] + v50;
      return 0;
    }
    v51 = a1[538];
    if ( a2 >= v51 && v51 && a2 < a1[539] + v51 )
    {
      *a3 = a1[561];
      *a4 = a1[538];
      v52 = a1[539];
      *a5 = v52;
      *a6 = a1[538] + v52;
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
}

