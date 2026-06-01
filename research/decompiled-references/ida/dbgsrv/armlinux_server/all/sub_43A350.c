/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A350
// Address: 0x000000000043A350

//----- (000000000043A350) ----------------------------------------------------
__int64 __fastcall sub_43A350(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // x0
  unsigned int v7; // w21
  __int64 v8; // x0
  _QWORD *v9; // x23
  void *v10; // x0
  char *v11; // x0
  __int64 v12; // x22
  __int64 v13; // x19
  __int64 *v14; // x0
  char *v15; // x1
  __int64 v16; // x23
  __int64 v17; // x19
  __int64 v18; // x22
  void *v19; // x0
  char *v20; // x1
  char *v21; // x1
  __int64 v22; // x23
  __int64 v23; // x19
  __int64 v24; // x22
  void *v25; // x0
  char *v26; // x1
  char *v27; // x1
  __int64 v28; // x23
  __int64 v29; // x19
  __int64 v30; // x22
  void *v31; // x0
  char *v32; // x1
  _QWORD v34[4]; // [xsp+30h] [xbp-1D0h] BYREF
  char v35; // [xsp+50h] [xbp-1B0h]
  void *v36; // [xsp+58h] [xbp-1A8h] BYREF
  __int64 v37; // [xsp+60h] [xbp-1A0h]
  __int64 v38; // [xsp+68h] [xbp-198h]
  __int16 v39; // [xsp+70h] [xbp-190h]
  __int64 v40; // [xsp+78h] [xbp-188h]
  char v41; // [xsp+80h] [xbp-180h]
  __int64 v42; // [xsp+88h] [xbp-178h]
  __int64 v43; // [xsp+90h] [xbp-170h]
  __int64 v44; // [xsp+98h] [xbp-168h]
  void *v45; // [xsp+A0h] [xbp-160h]
  __int64 v46; // [xsp+A8h] [xbp-158h]
  __int64 v47; // [xsp+B0h] [xbp-150h]
  void *v48; // [xsp+B8h] [xbp-148h]
  __int64 v49; // [xsp+C0h] [xbp-140h]
  __int64 v50; // [xsp+C8h] [xbp-138h]
  void *v51; // [xsp+D0h] [xbp-130h]
  __int64 v52; // [xsp+D8h] [xbp-128h]
  __int64 v53; // [xsp+E0h] [xbp-120h]
  __int64 v54; // [xsp+E8h] [xbp-118h]
  __int64 v55; // [xsp+F0h] [xbp-110h]
  _QWORD *v56; // [xsp+F8h] [xbp-108h]
  int v57; // [xsp+100h] [xbp-100h]
  char v58; // [xsp+104h] [xbp-FCh]
  int v59; // [xsp+108h] [xbp-F8h]
  char v60; // [xsp+10Ch] [xbp-F4h]
  void *v61; // [xsp+110h] [xbp-F0h]
  __int64 v62; // [xsp+118h] [xbp-E8h]
  __int64 v63; // [xsp+120h] [xbp-E0h]
  void *v64; // [xsp+128h] [xbp-D8h]
  __int64 v65; // [xsp+130h] [xbp-D0h]
  __int64 v66; // [xsp+138h] [xbp-C8h]
  void *v67; // [xsp+140h] [xbp-C0h]
  __int64 v68; // [xsp+148h] [xbp-B8h]
  __int64 v69; // [xsp+150h] [xbp-B0h]
  void *v70; // [xsp+158h] [xbp-A8h]
  __int64 v71; // [xsp+160h] [xbp-A0h]
  __int64 v72; // [xsp+168h] [xbp-98h]
  void *v73; // [xsp+170h] [xbp-90h]
  __int64 v74; // [xsp+178h] [xbp-88h]
  __int64 v75; // [xsp+180h] [xbp-80h]
  void *v76; // [xsp+188h] [xbp-78h]
  __int64 v77; // [xsp+190h] [xbp-70h]
  __int64 v78; // [xsp+198h] [xbp-68h]
  void *v79; // [xsp+1A0h] [xbp-60h]
  __int64 v80; // [xsp+1A8h] [xbp-58h]
  __int64 v81; // [xsp+1B0h] [xbp-50h]
  void *v82; // [xsp+1B8h] [xbp-48h]
  __int64 v83; // [xsp+1C0h] [xbp-40h]
  __int64 v84; // [xsp+1C8h] [xbp-38h]
  __int64 v85; // [xsp+1D0h] [xbp-30h]
  void *ptr; // [xsp+1D8h] [xbp-28h]
  __int64 v87; // [xsp+1E0h] [xbp-20h]
  __int64 v88; // [xsp+1E8h] [xbp-18h]
  int v89; // [xsp+1F0h] [xbp-10h]
  char v90; // [xsp+1F4h] [xbp-Ch]

  v34[0] = sub_432A38;
  v34[1] = 0;
  v34[2] = &off_51A3D0;
  v34[3] = &off_519CA0;
  v35 = 0;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = a1;
  v45 = nullptr;
  v46 = 0;
  v47 = 0;
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  v57 = 0;
  v53 = 0;
  v54 = 0;
  v58 = -90;
  v6 = *(_QWORD *)(a1 + 32);
  v55 = 0;
  v56 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = nullptr;
  v62 = 0;
  v63 = 0;
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v67 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = nullptr;
  v71 = 0;
  v72 = 0;
  v73 = nullptr;
  v74 = 0;
  v75 = 0;
  v76 = nullptr;
  v77 = 0;
  v78 = 0;
  v79 = nullptr;
  v80 = 0;
  v81 = 0;
  v82 = nullptr;
  v83 = 0;
  v84 = 0;
  v85 = a2;
  ptr = nullptr;
  v87 = 0;
  v88 = 0;
  v89 = -1;
  v90 = a4;
  sub_4524B8(v6, (__int64)v34);
  sub_4869C8(0);
  v7 = sub_459A18((__int64)v34, 0);
  v8 = *(_QWORD *)(a1 + 32);
  if ( !(_BYTE)v7 )
  {
    sub_43A0C8(v8, (__int64)&v36, a3);
    v9 = v56;
    if ( v56 )
    {
      v10 = (void *)*v56;
      if ( *v56 )
      {
        v56[1] = 0;
        j__free(v10);
        *v9 = 0;
        v9[2] = 0;
      }
    }
    sub_435D18((__int64)v34);
    v8 = *(_QWORD *)(a1 + 32);
  }
  sub_4524B8(v8, 0);
  sub_435D18((__int64)v34);
  v11 = (char *)ptr;
  v54 = 0;
  if ( ptr )
  {
    v12 = v87;
    if ( v87 )
    {
      v13 = 0;
      do
      {
        v14 = (__int64 *)&v11[32 * v13++];
        sub_448310(v14);
        v11 = (char *)ptr;
      }
      while ( v12 != v13 );
    }
    v87 = 0;
    j__free(v11);
  }
  if ( v82 )
  {
    v83 = 0;
    j__free(v82);
  }
  if ( v79 )
  {
    v80 = 0;
    j__free(v79);
  }
  if ( v76 )
  {
    v77 = 0;
    j__free(v76);
  }
  if ( v73 )
  {
    v74 = 0;
    j__free(v73);
  }
  if ( v70 )
  {
    v71 = 0;
    j__free(v70);
  }
  if ( v67 )
  {
    v68 = 0;
    j__free(v67);
  }
  if ( v64 )
  {
    v65 = 0;
    j__free(v64);
  }
  if ( v61 )
  {
    v62 = 0;
    j__free(v61);
  }
  v15 = (char *)v51;
  if ( v51 )
  {
    v16 = v52;
    if ( v52 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = *(void **)&v15[v17];
        v20 = &v15[v17];
        if ( v19 )
        {
          *((_QWORD *)v20 + 1) = 0;
          j__free(v19);
        }
        ++v18;
        v17 += 24;
        v15 = (char *)v51;
      }
      while ( v16 != v18 );
    }
    v52 = 0;
    j__free(v15);
  }
  v21 = (char *)v48;
  if ( v48 )
  {
    v22 = v49;
    if ( v49 )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = *(void **)&v21[v23];
        v26 = &v21[v23];
        if ( v25 )
        {
          *((_QWORD *)v26 + 1) = 0;
          j__free(v25);
        }
        ++v24;
        v23 += 24;
        v21 = (char *)v48;
      }
      while ( v22 != v24 );
    }
    v49 = 0;
    j__free(v21);
  }
  v27 = (char *)v45;
  if ( v45 )
  {
    v28 = v46;
    if ( v46 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = *(void **)&v27[v29];
        v32 = &v27[v29];
        if ( v31 )
        {
          *((_QWORD *)v32 + 1) = 0;
          j__free(v31);
        }
        ++v30;
        v29 += 24;
        v27 = (char *)v45;
      }
      while ( v28 != v30 );
    }
    v46 = 0;
    j__free(v27);
  }
  if ( v36 )
  {
    v37 = 0;
    j__free(v36);
  }
  return v7;
}
// 519CA0: using guessed type __int64 (__fastcall *off_519CA0)();
// 51A3D0: using guessed type _UNKNOWN *off_51A3D0;
