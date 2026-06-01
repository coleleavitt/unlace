__int64 __fastcall sub_412AF0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // eax
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // ebx
  _DWORD *v55; // rax
  __int64 v56; // rax
  int v57; // eax
  _DWORD *v58; // rax
  char *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  int v63; // eax
  __int64 v64; // rax
  __int64 *v65; // rdi
  __int64 v66; // rax
  __int64 *v67; // rdi
  __int64 v68; // rax
  __int64 *v69; // rdi
  __int64 v70; // rax
  __int64 *v71; // rdi
  __int64 v72; // rax
  __int64 *v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // rdi
  __int64 v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rax
  __int64 *v79; // rdi
  __int64 v80; // rax
  __int64 *v81; // rdi
  __int64 v82; // rax
  __int64 *v83; // rdi
  __int64 v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // rdi
  __int64 v88; // rax
  __int64 *v89; // rdi
  __int64 v90; // rax
  __int64 *v91; // rdi

  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v6 = sub_40FB00(4);
  *(_QWORD *)(v5 + 8) = v6;
  *(_WORD *)v6 = 25956;
  *(_BYTE *)(v6 + 2) = 118;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 3LL) = 0;
  ++*(_DWORD *)v5;
  v7 = *a3;
  *(_DWORD *)(v5 + 16) = 3;
  *(_QWORD *)(v5 + 24) = 0;
  v8 = sub_47BE30(v7);
  if ( !sub_4A4160(a1, a2, v5, v8, 512) )
    goto LABEL_28;
  v9 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v9;
  if ( v9 < 0 || v10 )
  {
    v66 = *(_QWORD *)(v5 + 24);
    if ( v66 && *(_QWORD *)(v66 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v67 = *(__int64 **)(v5 + 8);
      if ( v67 && v67 != off_656088 )
        Tcl_Free((__int64)v67);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v11 = sub_40FB00(4);
  *(_QWORD *)(v5 + 8) = v11;
  *(_WORD *)v11 = 28265;
  *(_BYTE *)(v11 + 2) = 111;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 3LL) = 0;
  ++*(_DWORD *)v5;
  v12 = a3[1];
  *(_DWORD *)(v5 + 16) = 3;
  *(_QWORD *)(v5 + 24) = 0;
  v14 = sub_47CDC0(v12, a2, v13);
  if ( !sub_4A4160(a1, a2, v5, v14, 512) )
    goto LABEL_28;
  v15 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v15;
  if ( v15 < 0 || v10 )
  {
    v68 = *(_QWORD *)(v5 + 24);
    if ( v68 && *(_QWORD *)(v68 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v69 = *(__int64 **)(v5 + 8);
      if ( v69 && v69 != off_656088 )
        Tcl_Free((__int64)v69);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v16 = sub_40FB00(6);
  *(_QWORD *)(v5 + 8) = v16;
  *(_DWORD *)v16 = 1852402798;
  *(_BYTE *)(v16 + 4) = 107;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 5LL) = 0;
  ++*(_DWORD *)v5;
  v17 = a3[2];
  *(_DWORD *)(v5 + 16) = 5;
  *(_QWORD *)(v5 + 24) = 0;
  v18 = sub_47BE30(v17);
  if ( !sub_4A4160(a1, a2, v5, v18, 512) )
    goto LABEL_28;
  v19 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v19;
  if ( v19 < 0 || v10 )
  {
    v72 = *(_QWORD *)(v5 + 24);
    if ( v72 && *(_QWORD *)(v72 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v73 = *(__int64 **)(v5 + 8);
      if ( v73 && v73 != off_656088 )
        Tcl_Free((__int64)v73);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v20 = sub_40FB00(4);
  *(_QWORD *)(v5 + 8) = v20;
  *(_WORD *)v20 = 26997;
  *(_BYTE *)(v20 + 2) = 100;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 3LL) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 3;
  v21 = *((unsigned int *)a3 + 7);
  *(_QWORD *)(v5 + 24) = 0;
  v22 = sub_47BE30(v21);
  if ( !sub_4A4160(a1, a2, v5, v22, 512) )
    goto LABEL_28;
  v23 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v23;
  if ( v23 < 0 || v10 )
  {
    v70 = *(_QWORD *)(v5 + 24);
    if ( v70 && *(_QWORD *)(v70 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v71 = *(__int64 **)(v5 + 8);
      if ( v71 && v71 != off_656088 )
        Tcl_Free((__int64)v71);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v24 = sub_40FB00(4);
  *(_QWORD *)(v5 + 8) = v24;
  *(_WORD *)v24 = 26983;
  *(_BYTE *)(v24 + 2) = 100;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 3LL) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 3;
  v25 = *((unsigned int *)a3 + 8);
  *(_QWORD *)(v5 + 24) = 0;
  v26 = sub_47BE30(v25);
  if ( !sub_4A4160(a1, a2, v5, v26, 512) )
    goto LABEL_28;
  v27 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v27;
  if ( v27 < 0 || v10 )
  {
    v74 = *(_QWORD *)(v5 + 24);
    if ( v74 && *(_QWORD *)(v74 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v75 = *(__int64 **)(v5 + 8);
      if ( v75 && v75 != off_656088 )
        Tcl_Free((__int64)v75);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v28 = (_DWORD *)sub_40FB00(5);
  *(_QWORD *)(v5 + 8) = v28;
  *v28 = 1702521203;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
  ++*(_DWORD *)v5;
  v29 = a3[6];
  *(_DWORD *)(v5 + 16) = 4;
  *(_QWORD *)(v5 + 24) = 0;
  v31 = sub_47CDC0(v29, a2, v30);
  if ( !sub_4A4160(a1, a2, v5, v31, 512) )
    goto LABEL_28;
  v32 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v32;
  if ( v32 < 0 || v10 )
  {
    v76 = *(_QWORD *)(v5 + 24);
    if ( v76 && *(_QWORD *)(v76 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v77 = *(__int64 **)(v5 + 8);
      if ( v77 && v77 != off_656088 )
        Tcl_Free((__int64)v77);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v33 = sub_40FB00(7);
  *(_QWORD *)(v5 + 8) = v33;
  *(_DWORD *)v33 = 1668246626;
  *(_WORD *)(v33 + 4) = 29547;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 6LL) = 0;
  ++*(_DWORD *)v5;
  v34 = a3[8];
  *(_DWORD *)(v5 + 16) = 6;
  *(_QWORD *)(v5 + 24) = 0;
  v36 = sub_47CDC0(v34, a2, v35);
  if ( !sub_4A4160(a1, a2, v5, v36, 512) )
    goto LABEL_28;
  v37 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v37;
  if ( v37 < 0 || v10 )
  {
    v78 = *(_QWORD *)(v5 + 24);
    if ( v78 && *(_QWORD *)(v78 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v79 = *(__int64 **)(v5 + 8);
      if ( v79 && v79 != off_656088 )
        Tcl_Free((__int64)v79);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v38 = sub_40FB00(8);
  *(_QWORD *)(v5 + 8) = v38;
  *(_DWORD *)v38 = 1936419938;
  *(_WORD *)(v38 + 4) = 31337;
  *(_BYTE *)(v38 + 6) = 101;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 7LL) = 0;
  ++*(_DWORD *)v5;
  v39 = a3[7];
  *(_DWORD *)(v5 + 16) = 7;
  *(_QWORD *)(v5 + 24) = 0;
  v40 = sub_47BE30(v39);
  if ( !sub_4A4160(a1, a2, v5, v40, 512) )
    goto LABEL_28;
  v41 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v41;
  if ( v41 < 0 || v10 )
  {
    v80 = *(_QWORD *)(v5 + 24);
    if ( v80 && *(_QWORD *)(v80 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v81 = *(__int64 **)(v5 + 8);
      if ( v81 && v81 != off_656088 )
        Tcl_Free((__int64)v81);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v42 = sub_40FB00(6);
  *(_QWORD *)(v5 + 8) = v42;
  *(_DWORD *)v42 = 1835627617;
  *(_BYTE *)(v42 + 4) = 101;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 5LL) = 0;
  ++*(_DWORD *)v5;
  v43 = a3[9];
  *(_DWORD *)(v5 + 16) = 5;
  *(_QWORD *)(v5 + 24) = 0;
  v44 = sub_47BE30(v43);
  if ( !sub_4A4160(a1, a2, v5, v44, 512) )
    goto LABEL_28;
  v45 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v45;
  if ( v45 < 0 || v10 )
  {
    v82 = *(_QWORD *)(v5 + 24);
    if ( v82 && *(_QWORD *)(v82 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v83 = *(__int64 **)(v5 + 8);
      if ( v83 && v83 != off_656088 )
        Tcl_Free((__int64)v83);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v46 = sub_40FB00(6);
  *(_QWORD *)(v5 + 8) = v46;
  *(_DWORD *)v46 = 1835627629;
  *(_BYTE *)(v46 + 4) = 101;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 5LL) = 0;
  ++*(_DWORD *)v5;
  v47 = a3[11];
  *(_DWORD *)(v5 + 16) = 5;
  *(_QWORD *)(v5 + 24) = 0;
  v48 = sub_47BE30(v47);
  if ( !sub_4A4160(a1, a2, v5, v48, 512) )
    goto LABEL_28;
  v49 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v49;
  if ( v49 < 0 || v10 )
  {
    v84 = *(_QWORD *)(v5 + 24);
    if ( v84 && *(_QWORD *)(v84 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v85 = *(__int64 **)(v5 + 8);
      if ( v85 && v85 != off_656088 )
        Tcl_Free((__int64)v85);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v50 = sub_40FB00(6);
  *(_QWORD *)(v5 + 8) = v50;
  *(_DWORD *)v50 = 1835627619;
  *(_BYTE *)(v50 + 4) = 101;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 5LL) = 0;
  ++*(_DWORD *)v5;
  v51 = a3[13];
  *(_DWORD *)(v5 + 16) = 5;
  *(_QWORD *)(v5 + 24) = 0;
  v52 = sub_47BE30(v51);
  if ( !sub_4A4160(a1, a2, v5, v52, 512) )
    goto LABEL_28;
  v53 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v53;
  if ( v53 < 0 || v10 )
  {
    v88 = *(_QWORD *)(v5 + 24);
    if ( v88 && *(_QWORD *)(v88 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v89 = *(__int64 **)(v5 + 8);
      if ( v89 && v89 != off_656088 )
        Tcl_Free((__int64)v89);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v54 = *((unsigned __int16 *)a3 + 12);
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v55 = (_DWORD *)sub_40FB00(5);
  *(_QWORD *)(v5 + 8) = v55;
  *v55 = 1701080941;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 4;
  *(_QWORD *)(v5 + 24) = 0;
  v56 = sub_47BD00(v54);
  if ( !sub_4A4160(a1, a2, v5, v56, 512) )
    goto LABEL_28;
  v57 = *(_DWORD *)v5 - 1;
  v10 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v57;
  if ( v57 < 0 || v10 )
  {
    v86 = *(_QWORD *)(v5 + 24);
    if ( v86 && *(_QWORD *)(v86 + 8) )
    {
      sub_47B120(v5);
    }
    else
    {
      v87 = *(__int64 **)(v5 + 8);
      if ( v87 && v87 != off_656088 )
        Tcl_Free((__int64)v87);
      *(_DWORD *)(v5 + 16) = -1;
      sub_496830(v5);
    }
  }
  v5 = sub_496740();
  *(_DWORD *)v5 = 0;
  v58 = (_DWORD *)sub_40FB00(5);
  *(_QWORD *)(v5 + 8) = v58;
  *v58 = 1701869940;
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 4;
  *(_QWORD *)(v5 + 24) = 0;
  v59 = sub_412A70(v54);
  v60 = sub_48DF10(v59, 0xFFFFFFFF);
  if ( sub_4A4160(a1, a2, v5, v60, 512) )
  {
    v61 = *(_DWORD *)v5 - 1;
    v10 = *(_DWORD *)v5 == 1;
    *(_DWORD *)v5 = v61;
    if ( v61 < 0 || v10 )
    {
      v90 = *(_QWORD *)(v5 + 24);
      if ( v90 && *(_QWORD *)(v90 + 8) )
      {
        sub_47B120(v5);
        return 0;
      }
      else
      {
        v91 = *(__int64 **)(v5 + 8);
        if ( v91 )
        {
          if ( v91 != off_656088 )
            Tcl_Free((__int64)v91);
        }
        *(_DWORD *)(v5 + 16) = -1;
        sub_496830(v5);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
LABEL_28:
    v63 = *(_DWORD *)v5 - 1;
    v10 = *(_DWORD *)v5 == 1;
    *(_DWORD *)v5 = v63;
    if ( v63 < 0 || v10 )
    {
      v64 = *(_QWORD *)(v5 + 24);
      if ( v64 && *(_QWORD *)(v64 + 8) )
      {
        sub_47B120(v5);
      }
      else
      {
        v65 = *(__int64 **)(v5 + 8);
        if ( v65 && v65 != off_656088 )
          Tcl_Free((__int64)v65);
        *(_DWORD *)(v5 + 16) = -1;
        sub_496830(v5);
      }
    }
    return 1;
  }
}

