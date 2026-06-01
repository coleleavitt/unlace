void __fastcall sub_EF4570(_QWORD **a1, __int64 a2)
{
  _WORD *v3; // rsi
  _QWORD *v4; // rdi
  _WORD **v5; // rax
  _WORD **v6; // r12
  _WORD **v7; // rbp
  _WORD *v8; // rsi
  _WORD **v9; // rax
  _WORD **v10; // r12
  _WORD **v11; // rbp
  _WORD *v12; // rsi
  _WORD **v13; // rax
  _WORD **v14; // r12
  _WORD **v15; // rbp
  _WORD *v16; // rsi
  _WORD **v17; // rax
  _WORD **v18; // r12
  _WORD **v19; // rbp
  _WORD *v20; // rsi
  _WORD **v21; // rax
  _WORD **v22; // r12
  _WORD **v23; // rbp
  _WORD *v24; // rsi
  _WORD **v25; // rax
  _WORD **v26; // r12
  _WORD **v27; // rbp
  _WORD *v28; // rsi
  _WORD **v29; // rax
  _WORD **v30; // rax
  __int64 v31; // r12
  _WORD **v32; // rbp
  _WORD *v33; // rsi
  _WORD **v34; // rax
  _WORD **v35; // r12
  _WORD **v36; // rbp
  _WORD *v37; // rsi
  _WORD **v38; // rax
  _WORD **v39; // r12
  _WORD **v40; // rbp
  _WORD *v41; // rsi
  _WORD **v42; // rax
  _WORD **v43; // r12
  _WORD **v44; // rbp
  _WORD *v45; // rsi
  _WORD **v46; // rax
  _WORD **v47; // r12
  _WORD **v48; // rbp
  _WORD *v49; // rsi
  _WORD **v50; // rax
  _WORD **v51; // r12
  _WORD **v52; // rbp
  _WORD *v53; // rsi
  _WORD **v54; // rax
  _WORD **v55; // r12
  _WORD **v56; // rbp
  _WORD *v57; // rsi
  _WORD **v58; // rax
  _WORD **v59; // r12
  _WORD **v60; // rbp
  _WORD *v61; // rsi
  _WORD **v62; // rax
  _WORD **v63; // r12
  _WORD **v64; // rbp
  _WORD *v65; // rsi
  _WORD **v66; // rax
  _WORD **v67; // r12
  _WORD **v68; // rbp
  _WORD *v69; // rsi
  _WORD **v70; // rax
  _WORD **v71; // r12
  _WORD **v72; // rbp
  _WORD *v73; // rsi
  _WORD **v74; // rax
  _WORD **v75; // r12
  _WORD **v76; // rbp
  _WORD *v77; // rsi
  _WORD **v78; // rax
  _WORD **v79; // r12
  _WORD **v80; // rbp
  _WORD *v81; // rsi
  _WORD **v82; // rax
  _WORD **v83; // r12
  _WORD **v84; // rbp
  _WORD *v85; // rsi
  unsigned int v86; // r12d
  __int64 v87; // rdx
  _WORD **v88; // rax
  _WORD **v89; // r12
  _WORD **v90; // rbp
  _WORD *v91; // rsi
  _WORD **v92; // rax
  _WORD **v93; // r12
  _WORD **v94; // rbp
  _WORD *v95; // rsi
  _WORD **v96; // rax
  _WORD **v97; // r12
  _WORD **v98; // rbp
  _WORD *v99; // rsi
  _WORD **v100; // rax
  _WORD **v101; // r12
  _WORD **v102; // rbp
  _WORD *v103; // rsi
  _WORD **v104; // rax
  _WORD **v105; // r12
  _WORD **v106; // rbp
  _WORD *v107; // rsi
  _WORD **v108; // rax
  _WORD **v109; // r12
  _WORD **v110; // rbp
  _WORD *v111; // rsi
  _WORD **v112; // rax
  _WORD **v113; // r12
  _WORD **v114; // rbp
  _WORD *v115; // rsi
  _WORD **v116; // rax
  _WORD **v117; // r12
  _WORD **v118; // rbp
  _WORD *v119; // rsi
  _WORD **v120; // rax
  _WORD **v121; // r12
  _WORD **v122; // rbp
  _WORD *v123; // rsi
  __int64 v124; // r12
  _WORD **v125; // rbp
  _WORD *v126; // rsi

  if ( a2 )
  {
    switch ( *(_BYTE *)(a2 + 8) )
    {
      case 0:
      case 0x2E:
      case 0x31:
        if ( *(_QWORD *)(a2 + 32) )
        {
          v3 = **(_WORD ***)(a2 + 24);
          goto LABEL_36;
        }
        return;
      case 1:
        v104 = *(_WORD ***)(a2 + 24);
        v105 = &v104[*(_QWORD *)(a2 + 32)];
        if ( v104 != v105 )
        {
          v106 = *(_WORD ***)(a2 + 24);
          do
          {
            v107 = *v106++;
            sub_EF1D60(*a1, v107);
          }
          while ( v105 != v106 );
        }
        return;
      case 2:
      case 3:
      case 0x11:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x20:
      case 0x21:
      case 0x24:
      case 0x2B:
        return;
      case 4:
      case 0x12:
      case 0x16:
      case 0x26:
      case 0x2F:
        v3 = nullptr;
        v4 = *a1;
        if ( *(_QWORD *)(a2 + 32) )
          v3 = **(_WORD ***)(a2 + 24);
        goto LABEL_7;
      case 5:
        v100 = *(_WORD ***)(a2 + 24);
        v101 = &v100[*(_QWORD *)(a2 + 32)];
        if ( v100 != v101 )
        {
          v102 = *(_WORD ***)(a2 + 24);
          do
          {
            v103 = *v102++;
            sub_EF1D60(*a1, v103);
          }
          while ( v101 != v102 );
        }
        return;
      case 6:
        v96 = *(_WORD ***)(a2 + 24);
        v97 = &v96[*(_QWORD *)(a2 + 32)];
        if ( v96 != v97 )
        {
          v98 = *(_WORD ***)(a2 + 24);
          do
          {
            v99 = *v98++;
            sub_EF1D60(*a1, v99);
          }
          while ( v97 != v98 );
        }
        return;
      case 7:
        v120 = *(_WORD ***)(a2 + 24);
        v121 = &v120[*(_QWORD *)(a2 + 32)];
        if ( v120 != v121 )
        {
          v122 = *(_WORD ***)(a2 + 24);
          do
          {
            v123 = *v122++;
            sub_EF1D60(*a1, v123);
          }
          while ( v121 != v122 );
        }
        return;
      case 8:
        v66 = *(_WORD ***)(a2 + 24);
        v67 = &v66[*(_QWORD *)(a2 + 32)];
        if ( v66 != v67 )
        {
          v68 = *(_WORD ***)(a2 + 24);
          do
          {
            v69 = *v68++;
            sub_EF1D60(*a1, v69);
          }
          while ( v67 != v68 );
        }
        return;
      case 9:
        v62 = *(_WORD ***)(a2 + 24);
        v63 = &v62[*(_QWORD *)(a2 + 32)];
        if ( v62 != v63 )
        {
          v64 = *(_WORD ***)(a2 + 24);
          do
          {
            v65 = *v64++;
            sub_EF1D60(*a1, v65);
          }
          while ( v63 != v64 );
        }
        return;
      case 0xA:
        v58 = *(_WORD ***)(a2 + 24);
        v59 = &v58[*(_QWORD *)(a2 + 32)];
        if ( v58 != v59 )
        {
          v60 = *(_WORD ***)(a2 + 24);
          do
          {
            v61 = *v60++;
            sub_EF1D60(*a1, v61);
          }
          while ( v59 != v60 );
        }
        return;
      case 0xB:
        v54 = *(_WORD ***)(a2 + 24);
        v55 = &v54[*(_QWORD *)(a2 + 32)];
        if ( v54 != v55 )
        {
          v56 = *(_WORD ***)(a2 + 24);
          do
          {
            v57 = *v56++;
            sub_EF1D60(*a1, v57);
          }
          while ( v55 != v56 );
        }
        return;
      case 0xC:
        v50 = *(_WORD ***)(a2 + 24);
        v51 = &v50[*(_QWORD *)(a2 + 32)];
        if ( v50 != v51 )
        {
          v52 = *(_WORD ***)(a2 + 24);
          do
          {
            v53 = *v52++;
            sub_EF1D60(*a1, v53);
          }
          while ( v51 != v52 );
        }
        return;
      case 0xD:
        v46 = *(_WORD ***)(a2 + 24);
        v47 = &v46[*(_QWORD *)(a2 + 32)];
        if ( v46 != v47 )
        {
          v48 = *(_WORD ***)(a2 + 24);
          do
          {
            v49 = *v48++;
            sub_EF1D60(*a1, v49);
          }
          while ( v47 != v48 );
        }
        return;
      case 0xE:
        v42 = *(_WORD ***)(a2 + 24);
        v43 = &v42[*(_QWORD *)(a2 + 32)];
        if ( v42 != v43 )
        {
          v44 = *(_WORD ***)(a2 + 24);
          do
          {
            v45 = *v44++;
            sub_EF1D60(*a1, v45);
          }
          while ( v43 != v44 );
        }
        return;
      case 0xF:
        v38 = *(_WORD ***)(a2 + 24);
        v39 = &v38[*(_QWORD *)(a2 + 32)];
        if ( v38 != v39 )
        {
          v40 = *(_WORD ***)(a2 + 24);
          do
          {
            v41 = *v40++;
            sub_EF1D60(*a1, v41);
          }
          while ( v39 != v40 );
        }
        return;
      case 0x10:
        v34 = *(_WORD ***)(a2 + 24);
        v35 = &v34[*(_QWORD *)(a2 + 32)];
        if ( v34 != v35 )
        {
          v36 = *(_WORD ***)(a2 + 24);
          do
          {
            v37 = *v36++;
            sub_EF1D60(*a1, v37);
          }
          while ( v35 != v36 );
        }
        return;
      case 0x13:
        v25 = *(_WORD ***)(a2 + 24);
        v26 = &v25[*(_QWORD *)(a2 + 32)];
        if ( v25 != v26 )
        {
          v27 = *(_WORD ***)(a2 + 24);
          do
          {
            v28 = *v27++;
            sub_EF1D60(*a1, v28);
          }
          while ( v26 != v27 );
        }
        return;
      case 0x14:
        v21 = *(_WORD ***)(a2 + 24);
        v22 = &v21[*(_QWORD *)(a2 + 32)];
        if ( v21 != v22 )
        {
          v23 = *(_WORD ***)(a2 + 24);
          do
          {
            v24 = *v23++;
            sub_EF1D60(*a1, v24);
          }
          while ( v22 != v23 );
        }
        return;
      case 0x15:
        v17 = *(_WORD ***)(a2 + 24);
        v18 = &v17[*(_QWORD *)(a2 + 32)];
        if ( v17 != v18 )
        {
          v19 = *(_WORD ***)(a2 + 24);
          do
          {
            v20 = *v19++;
            sub_EF1D60(*a1, v20);
          }
          while ( v18 != v19 );
        }
        return;
      case 0x17:
        v116 = *(_WORD ***)(a2 + 24);
        v117 = &v116[*(_QWORD *)(a2 + 32)];
        if ( v116 != v117 )
        {
          v118 = *(_WORD ***)(a2 + 24);
          do
          {
            v119 = *v118++;
            sub_EF1D60(*a1, v119);
          }
          while ( v117 != v118 );
        }
        return;
      case 0x18:
        v112 = *(_WORD ***)(a2 + 24);
        v113 = &v112[*(_QWORD *)(a2 + 32)];
        if ( v112 != v113 )
        {
          v114 = *(_WORD ***)(a2 + 24);
          do
          {
            v115 = *v114++;
            sub_EF1D60(*a1, v115);
          }
          while ( v113 != v114 );
        }
        return;
      case 0x1C:
        v88 = *(_WORD ***)(a2 + 24);
        v89 = &v88[*(_QWORD *)(a2 + 32)];
        if ( v88 != v89 )
        {
          v90 = *(_WORD ***)(a2 + 24);
          do
          {
            v91 = *v90++;
            sub_EF1D60(*a1, v91);
          }
          while ( v89 != v90 );
        }
        return;
      case 0x1D:
        if ( *(_DWORD *)(a2 + 32) )
        {
          v86 = 0;
          do
          {
            v87 = v86++;
            sub_EF1D60(*a1, *(_WORD **)(*(_QWORD *)(a2 + 24) + 8 * v87));
          }
          while ( v86 < *(_DWORD *)(a2 + 32) );
        }
        return;
      case 0x1E:
        v82 = *(_WORD ***)(a2 + 24);
        v83 = &v82[*(_QWORD *)(a2 + 32)];
        if ( v82 != v83 )
        {
          v84 = *(_WORD ***)(a2 + 24);
          do
          {
            v85 = *v84++;
            sub_EF1D60(*a1, v85);
          }
          while ( v83 != v84 );
        }
        return;
      case 0x1F:
        v3 = *(_WORD **)(a2 + 24);
        goto LABEL_36;
      case 0x22:
        v9 = *(_WORD ***)(a2 + 24);
        v10 = &v9[*(_QWORD *)(a2 + 32)];
        if ( v9 != v10 )
        {
          v11 = *(_WORD ***)(a2 + 24);
          do
          {
            v12 = *v11++;
            sub_EF1D60(*a1, v12);
          }
          while ( v10 != v11 );
        }
        return;
      case 0x23:
        v13 = *(_WORD ***)(a2 + 24);
        v14 = &v13[*(_QWORD *)(a2 + 32)];
        if ( v13 != v14 )
        {
          v15 = *(_WORD ***)(a2 + 24);
          do
          {
            v16 = *v15++;
            sub_EF1D60(*a1, v16);
          }
          while ( v14 != v15 );
        }
        return;
      case 0x25:
        v5 = *(_WORD ***)(a2 + 24);
        v6 = &v5[*(_QWORD *)(a2 + 32)];
        if ( v5 != v6 )
        {
          v7 = *(_WORD ***)(a2 + 24);
          do
          {
            v8 = *v7++;
            sub_EF1D60(*a1, v8);
          }
          while ( v6 != v7 );
        }
        return;
      case 0x27:
        v108 = *(_WORD ***)(a2 + 24);
        v109 = &v108[*(_QWORD *)(a2 + 32)];
        if ( v108 != v109 )
        {
          v110 = *(_WORD ***)(a2 + 24);
          do
          {
            v111 = *v110++;
            sub_EF1D60(*a1, v111);
          }
          while ( v109 != v110 );
        }
        return;
      case 0x28:
        v70 = *(_WORD ***)(a2 + 24);
        v71 = &v70[*(_QWORD *)(a2 + 32)];
        if ( v70 != v71 )
        {
          v72 = *(_WORD ***)(a2 + 24);
          do
          {
            v73 = *v72++;
            sub_EF1D60(*a1, v73);
          }
          while ( v71 != v72 );
        }
        return;
      case 0x29:
        v74 = *(_WORD ***)(a2 + 24);
        v75 = &v74[*(_QWORD *)(a2 + 32)];
        if ( v74 != v75 )
        {
          v76 = *(_WORD ***)(a2 + 24);
          do
          {
            v77 = *v76++;
            sub_EF1D60(*a1, v77);
          }
          while ( v75 != v76 );
        }
        return;
      case 0x2A:
        if ( *(_BYTE *)(a2 + 25) )
        {
          if ( *(_BYTE *)(a2 + 24) )
          {
            v3 = *(_WORD **)(a2 + 32);
LABEL_36:
            v4 = *a1;
LABEL_7:
            sub_EF1D60(v4, v3);
          }
        }
        else
        {
          v124 = a2 + 32 + 8LL * *(unsigned int *)(a2 + 28);
          if ( a2 + 32 != v124 )
          {
            v125 = (_WORD **)(a2 + 32);
            do
            {
              v126 = *v125++;
              sub_EF1D60(*a1, v126);
            }
            while ( (_WORD **)v124 != v125 );
          }
        }
        break;
      case 0x2C:
        v78 = *(_WORD ***)(a2 + 24);
        v79 = &v78[*(_QWORD *)(a2 + 32)];
        if ( v78 != v79 )
        {
          v80 = *(_WORD ***)(a2 + 24);
          do
          {
            v81 = *v80++;
            sub_EF1D60(*a1, v81);
          }
          while ( v79 != v80 );
        }
        return;
      case 0x2D:
        v92 = *(_WORD ***)(a2 + 24);
        v93 = &v92[*(_QWORD *)(a2 + 32)];
        if ( v92 != v93 )
        {
          v94 = *(_WORD ***)(a2 + 24);
          do
          {
            v95 = *v94++;
            sub_EF1D60(*a1, v95);
          }
          while ( v93 != v94 );
        }
        return;
      case 0x30:
        v29 = *(_WORD ***)(a2 + 24);
        if ( *v29 )
        {
          sub_EF1D60(*a1, *v29);
          v29 = *(_WORD ***)(a2 + 24);
        }
        v30 = v29 + 1;
        v31 = (__int64)&v30[*(_QWORD *)(a2 + 32) - 1];
        if ( v30 != (_WORD **)v31 )
        {
          v32 = v30;
          do
          {
            v33 = *v32++;
            sub_EF1D60(*a1, v33);
          }
          while ( (_WORD **)v31 != v32 );
        }
        return;
    }
  }
}

