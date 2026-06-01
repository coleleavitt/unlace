unsigned __int64 __fastcall sub_470A50(__int64 a1, __int64 a2, void *a3)
{
  int v4; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  int v10; // [rsp+0h] [rbp-318h] BYREF
  void *v11; // [rsp+8h] [rbp-310h]
  void *v12; // [rsp+10h] [rbp-308h]
  int v13[4]; // [rsp+18h] [rbp-300h]
  void *v14; // [rsp+28h] [rbp-2F0h]
  __int128 v15; // [rsp+30h] [rbp-2E8h]
  void *v16; // [rsp+40h] [rbp-2D8h]
  __int128 v17; // [rsp+48h] [rbp-2D0h]
  void *v18; // [rsp+58h] [rbp-2C0h]
  __int128 v19; // [rsp+60h] [rbp-2B8h]
  void *v20; // [rsp+70h] [rbp-2A8h]
  __int128 v21; // [rsp+78h] [rbp-2A0h]
  int v22; // [rsp+88h] [rbp-290h]
  void *v23; // [rsp+90h] [rbp-288h]
  __int128 v24; // [rsp+98h] [rbp-280h]
  void *v25; // [rsp+A8h] [rbp-270h]
  __int128 v26; // [rsp+B0h] [rbp-268h]
  void *v27; // [rsp+C0h] [rbp-258h]
  __int128 v28; // [rsp+C8h] [rbp-250h]
  void *v29; // [rsp+D8h] [rbp-240h]
  __int128 v30; // [rsp+E0h] [rbp-238h]
  int v31; // [rsp+F0h] [rbp-228h]
  void *v32; // [rsp+F8h] [rbp-220h]
  __int128 v33; // [rsp+100h] [rbp-218h]
  void *v34; // [rsp+110h] [rbp-208h]
  __int128 v35; // [rsp+118h] [rbp-200h]
  void *v36; // [rsp+128h] [rbp-1F0h]
  __int128 v37; // [rsp+130h] [rbp-1E8h]
  void *v38; // [rsp+140h] [rbp-1D8h]
  __int128 v39; // [rsp+148h] [rbp-1D0h]
  int v40; // [rsp+158h] [rbp-1C0h]
  int v41; // [rsp+160h] [rbp-1B8h]
  int v42; // [rsp+164h] [rbp-1B4h]
  __int64 v43; // [rsp+168h] [rbp-1B0h]
  int v44; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+178h] [rbp-1A0h]
  void *v46; // [rsp+180h] [rbp-198h]
  __int128 v47; // [rsp+188h] [rbp-190h]
  void *v48; // [rsp+198h] [rbp-180h]
  __int128 v49; // [rsp+1A0h] [rbp-178h]
  void *v50; // [rsp+1B0h] [rbp-168h]
  __int128 v51; // [rsp+1B8h] [rbp-160h]
  void *v52; // [rsp+1C8h] [rbp-150h]
  __int128 v53; // [rsp+1D0h] [rbp-148h]
  void *v54; // [rsp+1E0h] [rbp-138h]
  __int128 v55; // [rsp+1E8h] [rbp-130h]
  int v56; // [rsp+1F8h] [rbp-120h]
  void *v57; // [rsp+200h] [rbp-118h]
  __int128 v58; // [rsp+208h] [rbp-110h]
  void *v59; // [rsp+218h] [rbp-100h]
  __int128 v60; // [rsp+220h] [rbp-F8h]
  void *v61; // [rsp+230h] [rbp-E8h]
  __int128 v62; // [rsp+238h] [rbp-E0h]
  void *v63; // [rsp+248h] [rbp-D0h]
  __int128 v64; // [rsp+250h] [rbp-C8h]
  int v65; // [rsp+260h] [rbp-B8h]
  void *v66; // [rsp+268h] [rbp-B0h]
  __int128 v67; // [rsp+270h] [rbp-A8h]
  void *v68; // [rsp+280h] [rbp-98h]
  __int128 v69; // [rsp+288h] [rbp-90h]
  void *v70; // [rsp+298h] [rbp-80h]
  __int128 v71; // [rsp+2A0h] [rbp-78h]
  void *ptr; // [rsp+2B0h] [rbp-68h]
  __int128 v73; // [rsp+2B8h] [rbp-60h]
  int v74; // [rsp+2C8h] [rbp-50h]
  int v75; // [rsp+2D0h] [rbp-48h]
  int v76; // [rsp+2D4h] [rbp-44h]
  __int64 v77; // [rsp+2D8h] [rbp-40h]
  unsigned __int64 v78; // [rsp+2E8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 12);
  v78 = __readfsqword(0x28u);
  v10 = 0;
  v11 = (void *)-1LL;
  v12 = nullptr;
  v14 = nullptr;
  v16 = nullptr;
  v18 = nullptr;
  v20 = nullptr;
  v22 = -1;
  v23 = nullptr;
  v25 = nullptr;
  v27 = nullptr;
  *(_OWORD *)v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29 = nullptr;
  v6 = *(_QWORD *)(a1 + 32);
  v31 = -1;
  v32 = nullptr;
  v34 = nullptr;
  v36 = nullptr;
  v38 = nullptr;
  v40 = -1;
  v41 = -1;
  v42 = v4;
  v43 = -1;
  v30 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  sub_46F710(&v10, v6, (__int64)a3);
  v7 = *(_DWORD *)(a2 + 12);
  v44 = 0;
  v45 = -1;
  v46 = nullptr;
  v48 = nullptr;
  v50 = nullptr;
  v52 = nullptr;
  v54 = nullptr;
  v56 = -1;
  v57 = nullptr;
  v59 = nullptr;
  v61 = nullptr;
  v63 = nullptr;
  v65 = -1;
  v66 = nullptr;
  v68 = nullptr;
  v70 = nullptr;
  ptr = nullptr;
  v74 = -1;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v75 = -1;
  v8 = *(_QWORD *)(a1 + 32);
  v76 = v7;
  v77 = -1;
  sub_46F710(&v44, v8, (__int64)a3);
  if ( (v10 & ~unk_23AD870) != 0 || (v44 & ~unk_23AD870) == 0 )
  {
    if ( !under_debugger )
      interr(2149);
    BUG();
  }
  sub_46FF00((__int64)&v44, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), a3);
  if ( ptr )
  {
    *(_QWORD *)&v73 = 0;
    qfree(ptr);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    *(_QWORD *)v13 = 0;
    qfree(v12);
  }
  return v78 - __readfsqword(0x28u);
}
