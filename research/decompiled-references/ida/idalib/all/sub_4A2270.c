__int64 __fastcall sub_4A2270(__int64 a1, __int32 a2, int a3, unsigned int a4, char a5)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  int alias_target; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-3B8h]
  __int64 v20; // [rsp+18h] [rbp-3A8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-3A0h] BYREF
  __int64 v22; // [rsp+28h] [rbp-398h] BYREF
  __int64 v23; // [rsp+30h] [rbp-390h] BYREF
  __int128 v24; // [rsp+38h] [rbp-388h]
  __int64 v25; // [rsp+48h] [rbp-378h]
  __int128 v26; // [rsp+50h] [rbp-370h]
  __int64 v27; // [rsp+60h] [rbp-360h]
  __int128 v28; // [rsp+68h] [rbp-358h]
  __int64 v29; // [rsp+78h] [rbp-348h]
  __int128 v30; // [rsp+80h] [rbp-340h]
  __int64 v31; // [rsp+90h] [rbp-330h]
  __int128 v32; // [rsp+98h] [rbp-328h]
  int v33; // [rsp+A8h] [rbp-318h]
  __int64 v34; // [rsp+B0h] [rbp-310h]
  __int128 v35; // [rsp+B8h] [rbp-308h]
  __int64 v36; // [rsp+C8h] [rbp-2F8h]
  __int128 v37; // [rsp+D0h] [rbp-2F0h]
  __int64 v38; // [rsp+E0h] [rbp-2E0h]
  char v39; // [rsp+E8h] [rbp-2D8h]
  __int64 v40; // [rsp+F0h] [rbp-2D0h]
  __int128 v41; // [rsp+F8h] [rbp-2C8h]
  __int64 v42; // [rsp+108h] [rbp-2B8h]
  __int128 v43; // [rsp+110h] [rbp-2B0h]
  __int64 v44; // [rsp+120h] [rbp-2A0h]
  __int128 v45; // [rsp+128h] [rbp-298h]
  __int64 v46; // [rsp+138h] [rbp-288h]
  __int16 v47; // [rsp+140h] [rbp-280h]
  char v48; // [rsp+142h] [rbp-27Eh]
  __int64 v49; // [rsp+148h] [rbp-278h]
  __int128 v50; // [rsp+150h] [rbp-270h]
  _OWORD *v51; // [rsp+160h] [rbp-260h]
  __int64 v52; // [rsp+168h] [rbp-258h]
  __int64 v53; // [rsp+170h] [rbp-250h]
  __int64 v54; // [rsp+178h] [rbp-248h]
  __int64 v55; // [rsp+180h] [rbp-240h]
  __int64 v56; // [rsp+188h] [rbp-238h]
  _OWORD v57[2]; // [rsp+190h] [rbp-230h] BYREF
  __int64 v58; // [rsp+1B0h] [rbp-210h]
  __int128 v59; // [rsp+1B8h] [rbp-208h]
  __int64 v60; // [rsp+1C8h] [rbp-1F8h]
  __int16 v61; // [rsp+1D0h] [rbp-1F0h]
  __int64 v62; // [rsp+1E0h] [rbp-1E0h] BYREF
  __int128 v63; // [rsp+1E8h] [rbp-1D8h]
  __int64 v64; // [rsp+1F8h] [rbp-1C8h]
  __int128 v65; // [rsp+200h] [rbp-1C0h]
  __int64 v66; // [rsp+210h] [rbp-1B0h]
  __int128 v67; // [rsp+218h] [rbp-1A8h]
  __int64 v68; // [rsp+228h] [rbp-198h]
  __int128 v69; // [rsp+230h] [rbp-190h]
  __int64 v70; // [rsp+240h] [rbp-180h]
  __int128 v71; // [rsp+248h] [rbp-178h]
  int v72; // [rsp+258h] [rbp-168h]
  __int64 v73; // [rsp+260h] [rbp-160h]
  __int128 v74; // [rsp+268h] [rbp-158h]
  __int64 v75; // [rsp+278h] [rbp-148h]
  __int128 v76; // [rsp+280h] [rbp-140h]
  __int64 v77; // [rsp+290h] [rbp-130h]
  char v78; // [rsp+298h] [rbp-128h]
  __int64 v79; // [rsp+2A0h] [rbp-120h]
  __int128 v80; // [rsp+2A8h] [rbp-118h]
  __int64 v81; // [rsp+2B8h] [rbp-108h]
  __int128 v82; // [rsp+2C0h] [rbp-100h]
  __int64 v83; // [rsp+2D0h] [rbp-F0h]
  __int128 v84; // [rsp+2D8h] [rbp-E8h]
  __int64 v85; // [rsp+2E8h] [rbp-D8h]
  __int16 v86; // [rsp+2F0h] [rbp-D0h]
  char v87; // [rsp+2F2h] [rbp-CEh]
  __int64 v88; // [rsp+2F8h] [rbp-C8h]
  __int128 v89; // [rsp+300h] [rbp-C0h]
  _OWORD *v90; // [rsp+310h] [rbp-B0h]
  __int64 v91; // [rsp+318h] [rbp-A8h]
  __int64 v92; // [rsp+320h] [rbp-A0h]
  __int64 v93; // [rsp+328h] [rbp-98h]
  __int64 v94; // [rsp+330h] [rbp-90h]
  __int64 v95; // [rsp+338h] [rbp-88h]
  _OWORD v96[2]; // [rsp+340h] [rbp-80h] BYREF
  __int64 v97; // [rsp+360h] [rbp-60h]
  __int128 v98; // [rsp+368h] [rbp-58h]
  __int64 v99; // [rsp+378h] [rbp-48h]
  __int16 v100; // [rsp+380h] [rbp-40h]
  unsigned __int64 v101; // [rsp+388h] [rbp-38h]

  v7 = *(int *)(a1 + 4LL * a3 + 16);
  v101 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(switch_dbctx(v7) + 1672);
  v47 = 0;
  v51 = v57;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = -1;
  v48 = 0;
  v49 = 0;
  v52 = 1;
  v53 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v35 = 0;
  v37 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v50 = 0;
  v54 = 0;
  v55 = 1065353216;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v61 = 0;
  memset(v57, 0, sizeof(v57));
  v59 = 0;
  v10 = *(_QWORD *)(v9 + 8);
  LODWORD(v38) = a4;
  v19 = v10;
  alias_target = get_alias_target(v10, a4);
  if ( alias_target != a4 )
    HIDWORD(v38) = alias_target;
  if ( !(unsigned __int8)sub_4981B0((__int64)&v23, (unsigned int)a3, v19) )
    goto LABEL_13;
  if ( (a5 & 1) != 0 )
  {
    v20 = 0;
    v21 = v25;
    v16 = 0;
    if ( (unsigned __int64)v28 > 1 )
      v16 = v27;
    v22 = v16;
    v17 = 0;
    if ( (unsigned __int64)v32 > 1 )
      v17 = v31;
    v62 = v17;
    deserialize_tinfo(&v20, 0, &v21, &v22, &v62, 0);
    if ( (v20 & 0x100) != 0 && get_tinfo_property(v20, 4) )
    {
      clear_tinfo_t(&v20);
      goto LABEL_5;
    }
    clear_tinfo_t(&v20);
LABEL_13:
    v14 = 0;
    goto LABEL_6;
  }
LABEL_5:
  v90 = v96;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v85 = -1;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v91 = 1;
  v92 = 0;
  v93 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v74 = 0;
  v76 = 0;
  v80 = 0;
  v82 = 0;
  v84 = 0;
  v89 = 0;
  v94 = 1065353216;
  v95 = 0;
  v12 = *(int *)(a1 + 4LL * a2 + 16);
  v97 = 0;
  v99 = 0;
  v100 = 0;
  memset(v96, 0, sizeof(v96));
  v98 = 0;
  v13 = switch_dbctx(v12);
  sub_4A16E0((__int64)&v62, a1, *(_QWORD *)(*(_QWORD *)(v13 + 1672) + 8LL), 0, (__int64)&v23, a2, a3, 0);
  v14 = v77;
  sub_496580((__int64)&v62);
LABEL_6:
  sub_496580((__int64)&v23);
  return v14;
}
