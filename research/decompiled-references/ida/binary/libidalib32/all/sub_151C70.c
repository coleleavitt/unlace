unsigned __int64 __fastcall sub_151C70(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r13d
  __int16 v3; // ax
  _WORD *v5; // rsi
  _WORD *v6; // rsi
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // rdx
  __int16 v10; // r14
  __int64 v11; // rax
  _WORD *v12; // rsi
  _WORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // r14
  __int64 v17; // rax
  _WORD *v18; // rsi
  _WORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int16 v22; // r14
  __int64 v23; // rax
  _WORD *v24; // rsi
  _WORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int16 v28; // r14
  __int64 v29; // rax
  _WORD *v30; // rsi
  _WORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int16 v34; // r14
  __int64 v35; // rax
  _WORD *v36; // rsi
  _WORD *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int16 v40; // r14
  __int64 v41; // rax
  _WORD *v42; // rsi
  _WORD *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int16 v46; // r14
  __int64 v47; // rax
  _WORD *v48; // rsi
  _WORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int16 v52; // r14
  __int64 v53; // rax
  _WORD *v54; // rsi
  _WORD *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int16 v58; // r14
  __int64 v59; // rax
  _WORD *v60; // rsi
  _WORD *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int16 v64; // r14
  __int64 v65; // rax
  _WORD *v66; // rsi
  _WORD *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int16 v70; // r14
  __int64 v71; // rax
  _WORD *v72; // rsi
  _WORD *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int16 v76; // r14
  __int64 v77; // rax
  _WORD *v78; // rsi
  _WORD *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int16 v82; // r14
  __int64 v83; // rax
  _WORD *v84; // rsi
  _WORD *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int16 v88; // r14
  __int64 v89; // rax
  _WORD *v90; // rsi
  _WORD *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int16 v94; // bp
  __int64 v95; // rax
  _WORD *v96; // rsi
  void *v97; // rax
  unsigned __int64 v98; // [rsp+8h] [rbp-30h]

  v98 = __readfsqword(0x28u);
  if ( (getShiftState() & 3) != 0 && (unsigned __int8)(*(_BYTE *)(a1 + 9) - 71) <= 0xAu )
    *(_BYTE *)(a1 + 8) = 0;
  v1 = xmmword_253098;
  v2 = *(unsigned __int16 *)(a1 + 8);
  if ( !(_QWORD)xmmword_253098 )
  {
    v5 = qword_253090;
    if ( !*((_QWORD *)&xmmword_253098 + 1) )
    {
      v97 = (void *)qvector_reserve();
      v1 = xmmword_253098;
      qword_253090 = v97;
      v5 = v97;
    }
    v5[v1] = 15;
    v6 = qword_253090;
    v7 = xmmword_253098 + 1;
    v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
    *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
    if ( v8 )
    {
      qword_253090 = (void *)qvector_reserve();
      v6 = qword_253090;
      v7 = xmmword_253098;
    }
    v6[v7] = 19200;
    v9 = xmmword_253098;
    v10 = unk_24DE9E;
    v11 = xmmword_253098 + 1;
    *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
    if ( unk_24DE9E != 0xFFFF )
    {
      v12 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v9 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v12 = qword_253090;
        v11 = xmmword_253098;
      }
      v12[v11] = v10;
      v13 = qword_253090;
      v14 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v13 = qword_253090;
        v14 = xmmword_253098;
      }
      v13[v14] = 19712;
      v15 = xmmword_253098;
      v16 = unk_24DEA0;
      v17 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEA0 == 0xFFFF )
        goto LABEL_88;
      v18 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v15 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v18 = qword_253090;
        v17 = xmmword_253098;
      }
      v18[v17] = v16;
      v19 = qword_253090;
      v20 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v19 = qword_253090;
        v20 = xmmword_253098;
      }
      v19[v20] = 29440;
      v21 = xmmword_253098;
      v22 = unk_24DEA2;
      v23 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEA2 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v24 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v21 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v24 = qword_253090;
        v23 = xmmword_253098;
      }
      v24[v23] = v22;
      v25 = qword_253090;
      v26 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v25 = qword_253090;
        v26 = xmmword_253098;
      }
      v25[v26] = 29696;
      v27 = xmmword_253098;
      v28 = unk_24DEA4;
      v29 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEA4 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v30 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v27 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v30 = qword_253090;
        v29 = xmmword_253098;
      }
      v30[v29] = v28;
      v31 = qword_253090;
      v32 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v31 = qword_253090;
        v32 = xmmword_253098;
      }
      v31[v32] = 18176;
      v33 = xmmword_253098;
      v34 = unk_24DE96;
      v35 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE96 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v36 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v33 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v36 = qword_253090;
        v35 = xmmword_253098;
      }
      v36[v35] = v34;
      v37 = qword_253090;
      v38 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v37 = qword_253090;
        v38 = xmmword_253098;
      }
      v37[v38] = 20224;
      v39 = xmmword_253098;
      v40 = unk_24DE98;
      v41 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE98 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v42 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v39 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v42 = qword_253090;
        v41 = xmmword_253098;
      }
      v42[v41] = v40;
      v43 = qword_253090;
      v44 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v43 = qword_253090;
        v44 = xmmword_253098;
      }
      v43[v44] = 18432;
      v45 = xmmword_253098;
      v46 = unk_24DEA6;
      v47 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEA6 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v48 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v45 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v48 = qword_253090;
        v47 = xmmword_253098;
      }
      v48[v47] = v46;
      v49 = qword_253090;
      v50 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v49 = qword_253090;
        v50 = xmmword_253098;
      }
      v49[v50] = 20480;
      v51 = xmmword_253098;
      v52 = unk_24DEA8;
      v53 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEA8 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v54 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v51 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v54 = qword_253090;
        v53 = xmmword_253098;
      }
      v54[v53] = v52;
      v55 = qword_253090;
      v56 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v55 = qword_253090;
        v56 = xmmword_253098;
      }
      v55[v56] = 18688;
      v57 = xmmword_253098;
      v58 = unk_24DEAA;
      v59 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEAA == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v60 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v57 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v60 = qword_253090;
        v59 = xmmword_253098;
      }
      v60[v59] = v58;
      v61 = qword_253090;
      v62 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v61 = qword_253090;
        v62 = xmmword_253098;
      }
      v61[v62] = 20736;
      v63 = xmmword_253098;
      v64 = unk_24DEAC;
      v65 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEAC == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v66 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v63 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v66 = qword_253090;
        v65 = xmmword_253098;
      }
      v66[v65] = v64;
      v67 = qword_253090;
      v68 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v67 = qword_253090;
        v68 = xmmword_253098;
      }
      v67[v68] = -31744;
      v69 = xmmword_253098;
      v70 = unk_24DE9A;
      v71 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE9A == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v72 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v69 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v72 = qword_253090;
        v71 = xmmword_253098;
      }
      v72[v71] = v70;
      v73 = qword_253090;
      v74 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v73 = qword_253090;
        v74 = xmmword_253098;
      }
      v73[v74] = 30208;
      v75 = xmmword_253098;
      v76 = unk_24DE9C;
      v77 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE9C == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v78 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v75 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v78 = qword_253090;
        v77 = xmmword_253098;
      }
      v78[v77] = v76;
      v79 = qword_253090;
      v80 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v79 = qword_253090;
        v80 = xmmword_253098;
      }
      v79[v80] = 7181;
      v81 = xmmword_253098;
      v82 = unk_24DEE8;
      v83 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DEE8 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v84 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v81 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v84 = qword_253090;
        v83 = xmmword_253098;
      }
      v84[v83] = v82;
      v85 = qword_253090;
      v86 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v85 = qword_253090;
        v86 = xmmword_253098;
      }
      v85[v86] = 30464;
      v87 = xmmword_253098;
      v88 = unk_24DE92;
      v89 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE92 == 0xFFFF )
      {
        if ( under_debugger )
          goto LABEL_113;
        goto LABEL_87;
      }
      v90 = qword_253090;
      if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v87 + 2) )
      {
        qword_253090 = (void *)qvector_reserve();
        v90 = qword_253090;
        v89 = xmmword_253098;
      }
      v90[v89] = v88;
      v91 = qword_253090;
      v92 = xmmword_253098 + 1;
      v8 = *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(xmmword_253098 + 2);
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( v8 )
      {
        qword_253090 = (void *)qvector_reserve();
        v91 = qword_253090;
        v92 = xmmword_253098;
      }
      v91[v92] = 29952;
      v93 = xmmword_253098;
      v94 = unk_24DE94;
      v95 = xmmword_253098 + 1;
      *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
      if ( unk_24DE94 != 0xFFFF )
      {
        v96 = qword_253090;
        if ( *((_QWORD *)&xmmword_253098 + 1) < (unsigned __int64)(v93 + 2) )
        {
          qword_253090 = (void *)qvector_reserve();
          v96 = qword_253090;
          v95 = xmmword_253098;
        }
        v96[v95] = v94;
        *(_QWORD *)&xmmword_253098 = xmmword_253098 + 1;
        goto LABEL_5;
      }
    }
    if ( under_debugger )
      goto LABEL_113;
    do
    {
LABEL_87:
      interr();
LABEL_88:
      ;
    }
    while ( !under_debugger );
LABEL_113:
    BUG();
  }
LABEL_5:
  v3 = scanKeyMap(qword_253090, v2);
  if ( v3 )
  {
    *(_WORD *)(a1 + 8) = v3;
    *(_WORD *)a1 = 256;
  }
  return v98 - __readfsqword(0x28u);
}

