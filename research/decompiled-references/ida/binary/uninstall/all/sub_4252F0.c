__int64 __fastcall sub_4252F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // edx
  int v8; // r12d
  __int64 v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rdi
  int v18; // eax
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE *v26; // rdi
  __int64 v27; // rdx
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r14d
  __int64 v33; // rcx
  int v34; // edx
  int v35; // r14d
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  _BYTE *v39; // rdi
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // edx
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rax
  _BYTE *v47; // rdi
  int v48; // ebx
  _BYTE *v49; // rdi
  _BYTE *v50; // rdi
  _BYTE *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdi
  int v54; // ecx
  __int64 v55; // rdi
  int v56; // r12d
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // ecx
  int v61; // ebx
  _BYTE *v62; // rdi
  _BYTE *v63; // rdi
  int v64; // eax
  int v65; // r12d
  _BYTE *v66; // rdi
  _BYTE *v67; // rdi
  _BYTE *v68; // rdi
  __int64 v69; // rdx
  _BYTE *v70; // rdi
  int v71; // eax
  int v72; // r12d
  __int64 v73; // rdx
  __int64 v74; // rdi
  int v75; // r12d
  int v76; // r12d
  __int64 v77; // [rsp+0h] [rbp-98h]
  int v78; // [rsp+20h] [rbp-78h]
  int v79; // [rsp+24h] [rbp-74h]
  int v80; // [rsp+28h] [rbp-70h]
  int v81; // [rsp+2Ch] [rbp-6Ch]
  int v82; // [rsp+30h] [rbp-68h]
  int v83; // [rsp+34h] [rbp-64h]
  __int64 v84; // [rsp+38h] [rbp-60h]
  _DWORD *v85; // [rsp+40h] [rbp-58h]
  _DWORD *v86; // [rsp+48h] [rbp-50h]
  _BYTE v87[4]; // [rsp+50h] [rbp-48h] BYREF
  int v88; // [rsp+54h] [rbp-44h]

  v6 = *(_QWORD *)(a4 + 3264);
  v7 = 1;
  v79 = *(_DWORD *)(a4 + 48);
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) != 5 )
    return v7;
  v10 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v86 = (_DWORD *)(v10 + 24 + 24LL * *(int *)(v10 + 44) + 24);
  v7 = 1;
  if ( *v86 != 2 )
    return v7;
  v11 = &v86[6 * v86[5]];
  v85 = v11 + 6;
  v12 = (__int64)&v11[6 * v11[11] + 6];
  v84 = v12 + 24;
  if ( v11[6] != 2 || *(_DWORD *)(v12 + 24) != 2 )
    return 1;
  v81 = sub_43C240(0, a4);
  v13 = sub_43C240(0, a4);
  v14 = *(_QWORD *)(v6 + 16);
  v80 = v13;
  v77 = v8;
  v15 = *(_QWORD *)(*(_QWORD *)(24LL * v8 + v14 + 16) + 8LL);
  *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24LL * v8 + v14 + 8) + 4LL);
  v16 = *(unsigned int *)(v10 + 44);
  *(_QWORD *)(a4 + 3288) = v15;
  sub_43BFD0(a1, v10 + 48, v16, a4);
  v17 = *(_BYTE **)(a4 + 120);
  if ( v17 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v17 = *(_BYTE **)(a4 + 120);
  }
  *v17 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v18 = dword_65446C;
  ++*(_QWORD *)(a4 + 120);
  if ( v18 )
  {
    if ( v18 == 0x80000000 )
    {
      v18 = 1;
    }
    else if ( v18 < 0 )
    {
      v19 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v19 )
        *(_DWORD *)(a4 + 44) = v19;
      goto LABEL_13;
    }
    v19 = *(_DWORD *)(a4 + 48);
LABEL_13:
    *(_DWORD *)(a4 + 48) = v18 + v19;
  }
  sub_43C580(a4, 0, v87);
  v20 = *(_DWORD *)(a4 + 40);
  v21 = *(_QWORD *)(v6 + 16);
  v22 = *(_DWORD *)(a4 + 36) + 1;
  *(_DWORD *)(a4 + 36) = v22;
  if ( v20 < v22 )
    v20 = v22;
  *(_DWORD *)(a4 + 40) = v20;
  v78 = *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112);
  v83 = v78;
  v23 = 28LL * v81;
  *(_DWORD *)(v23 + *(_QWORD *)(a4 + 168) + 8) = v78;
  v24 = *(_QWORD *)(*(_QWORD *)(24 * v77 + v21 + 16) + 32LL);
  *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24 * v77 + v21 + 8) + 16LL);
  v25 = *(unsigned int *)(v84 + 20);
  *(_QWORD *)(a4 + 3288) = v24;
  sub_43BFD0(a1, v84 + 24, v25, a4);
  v26 = *(_BYTE **)(a4 + 120);
  v27 = *(_QWORD *)(a4 + 168);
  --*(_DWORD *)(a4 + 36);
  v28 = v26 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(v23 + v27 + 12) = (_DWORD)v26 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v23 + v27 + 8);
  *(_DWORD *)(a4 + 48) = v79 + 1;
  if ( v28 )
  {
    sub_439150(a4);
    v26 = *(_BYTE **)(a4 + 120);
  }
  *v26 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v29 = dword_65446C;
  v30 = *(_QWORD *)(a4 + 120) + 1LL;
  v28 = dword_65446C == 0;
  *(_QWORD *)(a4 + 120) = v30;
  if ( !v28 && v29 != 0x80000000 && v29 < 0 )
  {
    v75 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v75 )
      *(_DWORD *)(a4 + 44) = v75;
  }
  v31 = *(_DWORD *)(a4 + 40);
  v32 = v30;
  v33 = *(_QWORD *)(v6 + 16);
  v34 = *(_DWORD *)(a4 + 36) + 1;
  *(_DWORD *)(a4 + 36) = v34;
  *(_DWORD *)(a4 + 48) = v79;
  if ( v31 < v34 )
    v31 = v34;
  v35 = v32 - *(_DWORD *)(a4 + 112);
  *(_DWORD *)(a4 + 40) = v31;
  v82 = v35;
  v36 = 28LL * v80;
  *(_DWORD *)(v36 + *(_QWORD *)(a4 + 168) + 8) = v35;
  v37 = *(_QWORD *)(*(_QWORD *)(24 * v77 + v33 + 16) + 24LL);
  *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24 * v77 + v33 + 8) + 12LL);
  v38 = (unsigned int)v85[5];
  *(_QWORD *)(a4 + 3288) = v37;
  sub_43BFD0(a1, v85 + 6, v38, a4);
  v39 = *(_BYTE **)(a4 + 120);
  v40 = *(_QWORD *)(a4 + 168);
  --*(_DWORD *)(a4 + 36);
  v28 = v39 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(v36 + v40 + 12) = (_DWORD)v39 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v36 + v40 + 8);
  *(_DWORD *)(a4 + 48) = v79 + 1;
  if ( v28 )
  {
    sub_439150(a4);
    v39 = *(_BYTE **)(a4 + 120);
  }
  *v39 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v41 = dword_65446C;
  v42 = *(_QWORD *)(a4 + 120) + 1LL;
  v28 = dword_65446C == 0;
  *(_QWORD *)(a4 + 120) = v42;
  if ( !v28 && v41 != 0x80000000 && v41 < 0 )
  {
    v76 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v76 )
      *(_DWORD *)(a4 + 44) = v76;
  }
  v43 = v42 - *(_DWORD *)(a4 + 112);
  *(_DWORD *)(a4 + 48) = v79;
  if ( (unsigned int)sub_43C6D0(a4, v87, (unsigned int)(v43 - v88), 127) )
  {
    v82 = v35 + 3;
    v83 = v78 + 3;
  }
  v44 = *(_QWORD *)(v6 + 16);
  v45 = *(_DWORD *)(*(_QWORD *)(24 * v77 + v44 + 8) + 8LL);
  v46 = *(_QWORD *)(*(_QWORD *)(24 * v77 + v44 + 16) + 16LL);
  *(_DWORD *)(a4 + 48) = v79;
  *(_DWORD *)(a4 + 3272) = v45;
  *(_QWORD *)(a4 + 3288) = v46;
  sub_43AA10(a1, v86, 1);
  v47 = *(_BYTE **)(a4 + 120);
  *(_DWORD *)(a4 + 48) = v79 + 1;
  v48 = (_DWORD)v47 - *(_DWORD *)(a4 + 112) - v83;
  if ( v48 <= 127 )
  {
    if ( (unsigned __int64)(v47 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v47 = *(_BYTE **)(a4 + 120);
    }
    *v47 = 36;
    v73 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v73 + 1;
    *(_BYTE *)(v73 + 1) = -(char)v48;
    v74 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v54 = dword_65488C;
    v55 = v74 + 1;
    *(_QWORD *)(a4 + 120) = v55;
  }
  else
  {
    if ( (unsigned __int64)(v47 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v47 = *(_BYTE **)(a4 + 120);
    }
    *v47 = 37;
    v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v49;
    *v49 = (unsigned int)-v48 >> 24;
    v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v50;
    *v50 = (unsigned int)-v48 >> 16;
    v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v51;
    *v51 = (unsigned __int16)-(__int16)v48 >> 8;
    v52 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v52 + 1;
    *(_BYTE *)(v52 + 1) = -(char)v48;
    v53 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v54 = dword_6548AC;
    v55 = v53 + 1;
    *(_QWORD *)(a4 + 120) = v55;
  }
  if ( v54 )
  {
    if ( v54 == 0x80000000 )
      v54 = v48 + 1;
    if ( v54 < 0 )
    {
      v56 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v56 )
        *(_DWORD *)(a4 + 44) = v56;
    }
    else
    {
      v56 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v54 + v56;
  }
  v57 = *(_QWORD *)(a4 + 168);
  v58 = 28LL * v81;
  *(_DWORD *)(v58 + v57 + 20) = v82;
  *(_DWORD *)(v58 + v57 + 8) = v83;
  v59 = 28LL * v80;
  *(_DWORD *)(v59 + v57 + 8) = v82;
  v60 = v55 - *(_DWORD *)(a4 + 112);
  *(_DWORD *)(v58 + v57 + 16) = v60;
  *(_DWORD *)(v59 + v57 + 16) = v60;
  *(_DWORD *)(a4 + 48) = v79;
  v61 = sub_471010(a4, "", 0, 0);
  if ( v61 <= 255 )
  {
    v62 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v62 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v62 = *(_BYTE **)(a4 + 120);
    }
    *v62 = 1;
    v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v63;
    *v63 = v61;
    *(_DWORD *)(a4 + 3276) = 0;
    v64 = dword_65442C;
    ++*(_QWORD *)(a4 + 120);
    if ( v64 )
    {
      if ( v64 == 0x80000000 )
        v64 = 1 - v61;
      if ( v64 < 0 )
      {
        v65 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v65 )
          *(_DWORD *)(a4 + 44) = v65;
      }
      else
      {
        v65 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v64 + v65;
    }
    return 0;
  }
  v66 = *(_BYTE **)(a4 + 120);
  if ( (unsigned __int64)(v66 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v66 = *(_BYTE **)(a4 + 120);
  }
  *v66 = 2;
  v67 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v67;
  *v67 = HIBYTE(v61);
  v68 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v68;
  *v68 = BYTE2(v61);
  v69 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v69 + 1;
  *(_BYTE *)(v69 + 1) = BYTE1(v61);
  v70 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v70;
  *v70 = v61;
  *(_DWORD *)(a4 + 3276) = 0;
  v71 = dword_65444C;
  ++*(_QWORD *)(a4 + 120);
  if ( !v71 )
    return 0;
  if ( v71 == 0x80000000 )
    v71 = 1 - v61;
  if ( v71 < 0 )
  {
    v72 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v72 )
      *(_DWORD *)(a4 + 44) = v72;
  }
  else
  {
    v72 = *(_DWORD *)(a4 + 48);
  }
  v7 = 0;
  *(_DWORD *)(a4 + 48) = v72 + v71;
  return v7;
}

