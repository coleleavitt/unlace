unsigned __int64 __fastcall sub_45C630(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  int v10[2]; // [rsp+0h] [rbp-308h] BYREF
  void *v11; // [rsp+8h] [rbp-300h]
  __int64 v12[2]; // [rsp+10h] [rbp-2F8h]
  void *v13; // [rsp+20h] [rbp-2E8h]
  __int128 v14; // [rsp+28h] [rbp-2E0h]
  void *v15; // [rsp+38h] [rbp-2D0h]
  __int128 v16; // [rsp+40h] [rbp-2C8h]
  void *v17; // [rsp+50h] [rbp-2B8h]
  __int128 v18; // [rsp+58h] [rbp-2B0h]
  void *v19; // [rsp+68h] [rbp-2A0h]
  __int128 v20; // [rsp+70h] [rbp-298h]
  int v21; // [rsp+80h] [rbp-288h]
  void *v22; // [rsp+88h] [rbp-280h]
  __int128 v23; // [rsp+90h] [rbp-278h]
  void *v24; // [rsp+A0h] [rbp-268h]
  __int128 v25; // [rsp+A8h] [rbp-260h]
  void *v26; // [rsp+B8h] [rbp-250h]
  __int128 v27; // [rsp+C0h] [rbp-248h]
  void *v28; // [rsp+D0h] [rbp-238h]
  __int128 v29; // [rsp+D8h] [rbp-230h]
  int v30; // [rsp+E8h] [rbp-220h]
  void *v31; // [rsp+F0h] [rbp-218h]
  __int128 v32; // [rsp+F8h] [rbp-210h]
  void *v33; // [rsp+108h] [rbp-200h]
  __int128 v34; // [rsp+110h] [rbp-1F8h]
  void *v35; // [rsp+120h] [rbp-1E8h]
  __int128 v36; // [rsp+128h] [rbp-1E0h]
  void *v37; // [rsp+138h] [rbp-1D0h]
  __int128 v38; // [rsp+140h] [rbp-1C8h]
  int v39; // [rsp+150h] [rbp-1B8h]
  int v40; // [rsp+158h] [rbp-1B0h]
  int v41; // [rsp+15Ch] [rbp-1ACh]
  int v42; // [rsp+160h] [rbp-1A8h]
  int v43[2]; // [rsp+170h] [rbp-198h] BYREF
  void *v44; // [rsp+178h] [rbp-190h]
  __int128 v45; // [rsp+180h] [rbp-188h]
  void *v46; // [rsp+190h] [rbp-178h]
  __int128 v47; // [rsp+198h] [rbp-170h]
  void *v48; // [rsp+1A8h] [rbp-160h]
  __int128 v49; // [rsp+1B0h] [rbp-158h]
  void *v50; // [rsp+1C0h] [rbp-148h]
  __int128 v51; // [rsp+1C8h] [rbp-140h]
  void *v52; // [rsp+1D8h] [rbp-130h]
  __int128 v53; // [rsp+1E0h] [rbp-128h]
  int v54; // [rsp+1F0h] [rbp-118h]
  void *v55; // [rsp+1F8h] [rbp-110h]
  __int128 v56; // [rsp+200h] [rbp-108h]
  void *v57; // [rsp+210h] [rbp-F8h]
  __int128 v58; // [rsp+218h] [rbp-F0h]
  void *v59; // [rsp+228h] [rbp-E0h]
  __int128 v60; // [rsp+230h] [rbp-D8h]
  void *v61; // [rsp+240h] [rbp-C8h]
  __int128 v62; // [rsp+248h] [rbp-C0h]
  int v63; // [rsp+258h] [rbp-B0h]
  void *v64; // [rsp+260h] [rbp-A8h]
  __int128 v65; // [rsp+268h] [rbp-A0h]
  void *v66; // [rsp+278h] [rbp-90h]
  __int128 v67; // [rsp+280h] [rbp-88h]
  void *v68; // [rsp+290h] [rbp-78h]
  __int128 v69; // [rsp+298h] [rbp-70h]
  void *ptr; // [rsp+2A8h] [rbp-60h]
  __int128 v71; // [rsp+2B0h] [rbp-58h]
  int v72; // [rsp+2C0h] [rbp-48h]
  int v73; // [rsp+2C8h] [rbp-40h]
  int v74; // [rsp+2CCh] [rbp-3Ch]
  int v75; // [rsp+2D0h] [rbp-38h]
  unsigned __int64 v76; // [rsp+2D8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 12);
  v76 = __readfsqword(0x28u);
  *(_OWORD *)v12 = 0;
  *(_QWORD *)v10 = 0xFFFFFFFF00000000LL;
  v11 = nullptr;
  v13 = nullptr;
  v15 = nullptr;
  v17 = nullptr;
  v19 = nullptr;
  v21 = -1;
  v22 = nullptr;
  v24 = nullptr;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v23 = 0;
  v25 = 0;
  v26 = nullptr;
  v6 = *(_QWORD *)(a1 + 32);
  v28 = nullptr;
  v30 = -1;
  v31 = nullptr;
  v33 = nullptr;
  v35 = nullptr;
  v37 = nullptr;
  v39 = -1;
  v40 = -1;
  v41 = v4;
  v42 = -1;
  v27 = 0;
  v29 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  sub_45B310(v10, v6, a3);
  v7 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)v43 = 0xFFFFFFFF00000000LL;
  v44 = nullptr;
  v46 = nullptr;
  v48 = nullptr;
  v50 = nullptr;
  v52 = nullptr;
  v54 = -1;
  v55 = nullptr;
  v57 = nullptr;
  v59 = nullptr;
  v61 = nullptr;
  v63 = -1;
  v64 = nullptr;
  v66 = nullptr;
  v68 = nullptr;
  ptr = nullptr;
  v72 = -1;
  v73 = -1;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v74 = v7;
  v8 = *(_QWORD *)(a1 + 32);
  v75 = -1;
  sub_45B310(v43, v8, a3);
  if ( (v10[0] & ~unk_2389830) != 0 || (v43[0] & ~unk_2389830) == 0 )
  {
    if ( !under_debugger )
      interr(2149);
    BUG();
  }
  sub_45BAF0((__int64)v43, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), a3);
  if ( ptr )
  {
    *(_QWORD *)&v71 = 0;
    qfree(ptr);
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
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
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
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
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
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    v12[0] = 0;
    qfree(v11);
  }
  return v76 - __readfsqword(0x28u);
}

