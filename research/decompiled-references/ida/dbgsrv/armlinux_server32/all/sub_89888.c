/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89888
// Address: 0x00089888

//----- (00089888) --------------------------------------------------------
int __fastcall sub_89888(int result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  int v4; // r4
  int v6; // r3
  char *v7; // r7
  int v8; // r1
  char v9; // r10
  char v10; // t1
  int v11; // r2
  int (__fastcall *v12)(int, int, int); // r3
  int v13; // r2
  int v14; // r0
  int v15; // r2
  void (__fastcall *v16)(int, int, int); // r3
  int v17; // r1
  int (__fastcall *v18)(int); // r3
  int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r2
  int (__fastcall *v23)(int, int, int); // r3
  int v24; // r3
  int v25; // r6
  const char *v26; // r8
  int v27; // r1
  char v28; // r5
  char v29; // t1
  int v30; // r2
  int (__fastcall *v31)(int, int, int); // r3
  bool v32; // zf
  int v33; // r3
  char *v34; // r5
  int v35; // r1
  char v36; // r8
  char v37; // t1
  int v38; // r2
  int (__fastcall *v39)(int, int, int); // r3
  int v40; // r3
  char *v41; // r5
  int v42; // r1
  char v43; // r8
  char v44; // t1
  int v45; // r2
  int (__fastcall *v46)(int, int, int); // r3
  int v47; // r1
  int v48; // r2
  int v49; // r2
  void (__fastcall *v50)(int, int, int); // r3
  int v51; // r3
  int v52; // r5
  const char *v53; // r8
  int v54; // r1
  char v55; // r6
  char v56; // t1
  int v57; // r2
  int (__fastcall *v58)(int, int, int); // r3
  int v59; // r3
  char *v60; // r7
  int v61; // r1
  char v62; // r10
  char v63; // t1
  int v64; // r2
  void (__fastcall *v65)(int, int, int); // r3
  int v66; // r3
  char *v67; // r5
  int v68; // r1
  char v69; // r8
  char v70; // t1
  int v71; // r2
  int (__fastcall *v72)(int, int, int); // r3
  char *v73; // r7
  int v74; // r1
  char v75; // r10
  char v76; // t1
  int v77; // r2
  int (__fastcall *v78)(int, int, int); // r3
  int v79; // r2
  int v80; // r3
  int v81; // r2
  int v82; // r3
  int v83; // r3
  char *v84; // r5
  int v85; // r1
  char v86; // r8
  char v87; // t1
  int v88; // r2
  int (__fastcall *v89)(int, int, int); // r3
  int v90; // r2
  int v91; // r3
  int v92; // r2
  int (__fastcall *v93)(int, int, int); // r3
  int v94; // r2
  int v95; // r3
  int v96; // r3
  char *v97; // r5
  int v98; // r1
  char v99; // r8
  char v100; // t1
  int v101; // r2
  int (__fastcall *v102)(int, int, int); // r3
  int v103; // r3
  char *v104; // r5
  int v105; // r1
  char v106; // r8
  char v107; // t1
  int v108; // r2
  int (__fastcall *v109)(int, int, int); // r3

  v3 = a3;
  v4 = result;
  switch ( *a3 )
  {
    case 3:
      a3 = (_DWORD *)a3[2];
      goto LABEL_15;
    case 0x19:
    case 0x1C:
      v96 = *(_DWORD *)(result + 256);
      v97 = " restrict";
      do
      {
        v98 = v96;
        result = v4;
        v100 = *v97++;
        v99 = v100;
        if ( v96 == 255 )
        {
          v101 = *(_DWORD *)(v4 + 268);
          v102 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v102(v4, 255, v101);
          v96 = 1;
          v98 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v96;
        }
        *(_DWORD *)(v4 + 256) = v96;
        *(_BYTE *)(v4 + v98) = v99;
        *(_BYTE *)(v4 + 260) = v99;
      }
      while ( "" != v97 );
      return result;
    case 0x1A:
    case 0x1D:
      v83 = *(_DWORD *)(result + 256);
      v84 = " volatile";
      do
      {
        v85 = v83;
        result = v4;
        v87 = *v84++;
        v86 = v87;
        if ( v83 == 255 )
        {
          v88 = *(_DWORD *)(v4 + 268);
          v89 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v89(v4, 255, v88);
          v83 = 1;
          v85 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v83;
        }
        *(_DWORD *)(v4 + 256) = v83;
        *(_BYTE *)(v4 + v85) = v86;
        *(_BYTE *)(v4 + 260) = v86;
      }
      while ( "" != v84 );
      return result;
    case 0x1B:
    case 0x1E:
      v103 = *(_DWORD *)(result + 256);
      v104 = " const";
      do
      {
        v105 = v103;
        result = v4;
        v107 = *v104++;
        v106 = v107;
        if ( v103 == 255 )
        {
          v108 = *(_DWORD *)(v4 + 268);
          v109 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v109(v4, 255, v108);
          v103 = 1;
          v105 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v103;
        }
        *(_DWORD *)(v4 + 256) = v103;
        *(_BYTE *)(v4 + v105) = v106;
        *(_BYTE *)(v4 + 260) = v106;
      }
      while ( v104 != "" );
      return result;
    case 0x1F:
      v79 = *(_DWORD *)(result + 256);
      if ( v79 == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        v80 = *(_DWORD *)(v4 + 292);
        v79 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 292) = v80 + 1;
      }
      v20 = v79 + 1;
      *(_DWORD *)(v4 + 256) = v79 + 1;
      *(_BYTE *)(v4 + v79) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      goto LABEL_17;
    case 0x20:
      v81 = *(_DWORD *)(result + 256);
      if ( v81 == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        v82 = *(_DWORD *)(v4 + 292);
        v81 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 292) = v82 + 1;
      }
      v24 = v81 + 1;
      *(_DWORD *)(v4 + 256) = v81 + 1;
      *(_BYTE *)(v4 + v81) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      goto LABEL_23;
    case 0x21:
      v90 = *(_DWORD *)(result + 256);
      if ( v90 == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        v91 = *(_DWORD *)(v4 + 292);
        v90 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 292) = v91 + 1;
      }
      *(_DWORD *)(v4 + 256) = v90 + 1;
      *(_BYTE *)(v4 + v90) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      return sub_86C84(v4, a2, v3[3]);
    case 0x22:
      if ( (a2 & 4) == 0 )
      {
        v92 = *(_DWORD *)(result + 256);
        if ( v92 == 255 )
        {
          v93 = *(int (__fastcall **)(int, int, int))(result + 264);
          v94 = *(_DWORD *)(result + 268);
          *(_BYTE *)(result + 255) = 0;
          result = v93(result, 255, v94);
          v95 = *(_DWORD *)(v4 + 292);
          v92 = 0;
          *(_DWORD *)(v4 + 256) = 0;
          *(_DWORD *)(v4 + 292) = v95 + 1;
        }
        *(_DWORD *)(v4 + 256) = v92 + 1;
        *(_BYTE *)(v4 + v92) = 42;
        *(_BYTE *)(v4 + 260) = 42;
      }
      return result;
    case 0x23:
      v20 = *(_DWORD *)(result + 256);
LABEL_17:
      if ( v20 == 255 )
      {
        v22 = *(_DWORD *)(v4 + 268);
        v23 = *(int (__fastcall **)(int, int, int))(v4 + 264);
        *(_BYTE *)(v4 + 255) = 0;
        result = v23(v4, 255, v22);
        v21 = 1;
        v20 = 0;
        ++*(_DWORD *)(v4 + 292);
      }
      else
      {
        v21 = v20 + 1;
      }
      *(_DWORD *)(v4 + 256) = v21;
      *(_BYTE *)(v4 + v20) = 38;
      *(_BYTE *)(v4 + 260) = 38;
      return result;
    case 0x24:
      v24 = *(_DWORD *)(result + 256);
LABEL_23:
      v25 = 2;
      v26 = "&&";
      do
      {
        v27 = v24;
        result = v4;
        v29 = *v26++;
        v28 = v29;
        if ( v24 == 255 )
        {
          v30 = *(_DWORD *)(v4 + 268);
          v31 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v31(v4, 255, v30);
          v24 = 1;
          v27 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v24;
        }
        v32 = v25 == 1;
        *(_DWORD *)(v4 + 256) = v24;
        v25 = 1;
        *(_BYTE *)(v4 + v27) = v28;
        *(_BYTE *)(v4 + 260) = v28;
      }
      while ( !v32 );
      return result;
    case 0x25:
      v33 = *(_DWORD *)(result + 256);
      v34 = &algn_B674B;
      do
      {
        v35 = v33;
        result = v4;
        v37 = *++v34;
        v36 = v37;
        if ( v33 == 255 )
        {
          v38 = *(_DWORD *)(v4 + 268);
          v39 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v39(v4, 255, v38);
          v33 = 1;
          v35 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v33;
        }
        *(_DWORD *)(v4 + 256) = v33;
        *(_BYTE *)(v4 + v35) = v36;
        *(_BYTE *)(v4 + 260) = v36;
      }
      while ( v34 != " " );
      return result;
    case 0x26:
      v40 = *(_DWORD *)(result + 256);
      v41 = "imaginary ";
      do
      {
        v42 = v40;
        result = v4;
        v44 = *v41++;
        v43 = v44;
        if ( v40 == 255 )
        {
          v45 = *(_DWORD *)(v4 + 268);
          v46 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v46(v4, 255, v45);
          v40 = 1;
          v42 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v40;
        }
        *(_DWORD *)(v4 + 256) = v40;
        *(_BYTE *)(v4 + v42) = v43;
        *(_BYTE *)(v4 + 260) = v43;
      }
      while ( "" != v41 );
      return result;
    case 0x2B:
      if ( *(_BYTE *)(result + 260) != 40 )
      {
        v47 = *(_DWORD *)(result + 256);
        if ( v47 == 255 )
        {
          v49 = *(_DWORD *)(result + 268);
          v50 = *(void (__fastcall **)(int, int, int))(result + 264);
          *(_BYTE *)(result + 255) = 0;
          v50(result, 255, v49);
          v48 = 1;
          v47 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          v48 = v47 + 1;
        }
        *(_DWORD *)(v4 + 256) = v48;
        *(_BYTE *)(v4 + v47) = 32;
        *(_BYTE *)(v4 + 260) = 32;
      }
      sub_86C84(v4, a2, v3[2]);
      v51 = *(_DWORD *)(v4 + 256);
      v52 = 3;
      v53 = "::*";
      do
      {
        v54 = v51;
        result = v4;
        v56 = *v53++;
        v55 = v56;
        if ( v51 == 255 )
        {
          v57 = *(_DWORD *)(v4 + 268);
          v58 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v58(v4, 255, v57);
          v51 = 1;
          v54 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v51;
        }
        --v52;
        *(_DWORD *)(v4 + 256) = v51;
        *(_BYTE *)(v4 + v54) = v55;
        *(_BYTE *)(v4 + 260) = v55;
      }
      while ( v52 );
      return result;
    case 0x2D:
      v59 = *(_DWORD *)(result + 256);
      v60 = " __vector(";
      do
      {
        v61 = v59;
        v63 = *v60++;
        v62 = v63;
        if ( v59 == 255 )
        {
          v64 = *(_DWORD *)(v4 + 268);
          v65 = *(void (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          v65(v4, 255, v64);
          v59 = 1;
          v61 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v59;
        }
        *(_DWORD *)(v4 + 256) = v59;
        *(_BYTE *)(v4 + v61) = v62;
        *(_BYTE *)(v4 + 260) = v62;
      }
      while ( "" != v60 );
      result = sub_86C84(v4, a2, v3[2]);
      v17 = *(_DWORD *)(v4 + 256);
      if ( v17 != 255 )
        goto LABEL_59;
      goto LABEL_12;
    case 0x4C:
      v66 = *(_DWORD *)(result + 256);
      v67 = &algn_B671F;
      do
      {
        v68 = v66;
        result = v4;
        v70 = *++v67;
        v69 = v70;
        if ( v66 == 255 )
        {
          v71 = *(_DWORD *)(v4 + 268);
          v72 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v72(v4, 255, v71);
          v66 = 1;
          v68 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v66;
        }
        *(_DWORD *)(v4 + 256) = v66;
        *(_BYTE *)(v4 + v68) = v69;
        *(_BYTE *)(v4 + 260) = v69;
      }
      while ( "e" != v67 );
      return result;
    case 0x4E:
      v6 = *(_DWORD *)(result + 256);
      v73 = " noexcept";
      do
      {
        v74 = v6;
        result = v4;
        v76 = *v73++;
        v75 = v76;
        if ( v6 == 255 )
        {
          v77 = *(_DWORD *)(v4 + 268);
          v78 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v78(v4, 255, v77);
          v6 = 1;
          v74 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v6;
        }
        *(_DWORD *)(v4 + 256) = v6;
        *(_BYTE *)(v4 + v74) = v75;
        *(_BYTE *)(v4 + 260) = v75;
      }
      while ( "" != v73 );
      goto LABEL_7;
    case 0x4F:
      v6 = *(_DWORD *)(result + 256);
      v7 = " throw";
      do
      {
        v8 = v6;
        result = v4;
        v10 = *v7++;
        v9 = v10;
        if ( v6 == 255 )
        {
          v11 = *(_DWORD *)(v4 + 268);
          v12 = *(int (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v12(v4, 255, v11);
          v6 = 1;
          v8 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          ++v6;
        }
        *(_DWORD *)(v4 + 256) = v6;
        *(_BYTE *)(v4 + v8) = v9;
        *(_BYTE *)(v4 + 260) = v9;
      }
      while ( v7 != "" );
LABEL_7:
      v13 = v3[3];
      if ( v13 )
      {
        if ( v6 == 255 )
        {
          v15 = *(_DWORD *)(v4 + 268);
          v16 = *(void (__fastcall **)(int, int, int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          v16(v4, 255, v15);
          v14 = 1;
          v6 = 0;
          v13 = v3[3];
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
          v14 = v6 + 1;
        }
        *(_DWORD *)(v4 + 256) = v14;
        *(_BYTE *)(v4 + v6) = 40;
        *(_BYTE *)(v4 + 260) = 40;
        result = sub_86C84(v4, a2, v13);
        v17 = *(_DWORD *)(v4 + 256);
        if ( v17 == 255 )
        {
LABEL_12:
          v18 = *(int (__fastcall **)(int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v18(v4);
          v19 = 1;
          v17 = 0;
          ++*(_DWORD *)(v4 + 292);
        }
        else
        {
LABEL_59:
          v19 = v17 + 1;
        }
        *(_DWORD *)(v4 + 256) = v19;
        *(_BYTE *)(v4 + v17) = 41;
        *(_BYTE *)(v4 + 260) = 41;
      }
      break;
    default:
LABEL_15:
      result = sub_86C84(result, a2, (int)a3);
      break;
  }
  return result;
}
// B671F: using guessed type _BYTE algn_B671F;
// B674B: using guessed type _BYTE algn_B674B;
