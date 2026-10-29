__int64 __fastcall sub_8255F0(unsigned __int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r15
  _QWORD *v7; // r13
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // r15
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // r15
  _QWORD *v19; // r14
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rbp
  _QWORD *v25; // r15
  __int16 v26; // ax
  _QWORD *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // r12
  __int64 v33; // r15
  _QWORD *v34; // r13
  _QWORD *v35; // rdx
  __int16 v36; // ax
  __int64 v37; // rbp
  __int64 v38; // rax
  _QWORD *v39; // r8
  _QWORD *v40; // r14
  __int64 v41; // rcx
  _QWORD *v42; // r13
  _QWORD *v43; // r9
  __int16 v44; // ax
  _QWORD *v45; // rbp
  __int64 v46; // rax
  __int64 v47; // r12
  _QWORD *v48; // r11
  __int16 v49; // ax
  _QWORD *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r10
  _QWORD *v53; // rsi
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // rdi
  _QWORD *v57; // rcx
  __int64 v58; // r9
  unsigned int v59; // edi
  __int64 v60; // rdi
  unsigned __int64 v61; // rdi
  unsigned int v62; // eax
  __int64 result; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  __int64 v66; // rdi
  unsigned __int64 v67; // rdi
  __int64 v68; // rdi
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rdi
  __int64 v73; // rdi
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // [rsp+8h] [rbp-E0h]
  _QWORD *v79; // [rsp+8h] [rbp-E0h]
  __int64 v80; // [rsp+10h] [rbp-D8h]
  __int64 v81; // [rsp+10h] [rbp-D8h]
  _QWORD *v82; // [rsp+18h] [rbp-D0h]
  _QWORD *v83; // [rsp+20h] [rbp-C8h]
  _QWORD *v84; // [rsp+20h] [rbp-C8h]
  _QWORD *v85; // [rsp+20h] [rbp-C8h]
  _QWORD *v86; // [rsp+28h] [rbp-C0h]
  _QWORD *v87; // [rsp+28h] [rbp-C0h]
  __int64 v88; // [rsp+30h] [rbp-B8h]
  _QWORD *v89; // [rsp+38h] [rbp-B0h]
  _QWORD *v90; // [rsp+38h] [rbp-B0h]
  __int64 v91; // [rsp+40h] [rbp-A8h]
  _QWORD *v92; // [rsp+48h] [rbp-A0h]
  __int64 v93; // [rsp+50h] [rbp-98h]
  _QWORD *v94; // [rsp+58h] [rbp-90h]
  _QWORD *v95; // [rsp+60h] [rbp-88h]
  __int64 v96; // [rsp+68h] [rbp-80h]
  _QWORD *v97; // [rsp+70h] [rbp-78h]
  _QWORD *v98; // [rsp+78h] [rbp-70h]
  __int64 v99; // [rsp+80h] [rbp-68h]
  _QWORD *v100; // [rsp+88h] [rbp-60h]
  _QWORD *v101; // [rsp+90h] [rbp-58h]
  __int64 v102; // [rsp+98h] [rbp-50h]
  _QWORD *v103; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-40h]

  while ( 1 )
  {
    v2 = *(_WORD *)a1 & 0x1FF;
    if ( v2 == 55 )
      return 0;
    if ( v2 != 54 )
      return 1;
    v3 = *(_QWORD *)(a1 + 16);
    v4 = (*(_QWORD *)(a1 + 24) - v3) >> 3;
    if ( (_DWORD)v4 )
      break;
LABEL_88:
    v77 = *(_QWORD *)(a1 + 56);
    if ( v77 )
    {
      result = ((v77 >> 1) & 1) == 0;
      if ( ((v77 >> 1) & 1) != 0 )
        return result;
      a1 = v77 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v77 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        continue;
    }
    return 0;
  }
  v104 = a1;
  v5 = *(_QWORD **)(a1 + 16);
  v6 = v3 + 8LL * (unsigned int)(v4 - 1) + 8;
  while ( 1 )
  {
    v7 = (_QWORD *)*v5;
    v8 = *(_WORD *)*v5 & 0x1FF;
    if ( v8 != 55 )
      break;
LABEL_86:
    if ( (_QWORD *)v6 == ++v5 )
    {
      a1 = v104;
      goto LABEL_88;
    }
  }
  if ( v8 != 54 )
    return 1;
  v9 = v7[2];
  v10 = (v7[3] - v9) >> 3;
  if ( !(_DWORD)v10 )
  {
LABEL_82:
    v76 = v7[7];
    if ( v76 )
    {
      if ( (v76 & 2) == 0 && (v76 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        result = sub_8255F0(v76 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (_BYTE)result )
          return result;
      }
    }
    goto LABEL_86;
  }
  v102 = v6;
  v11 = (_QWORD *)v7[2];
  v103 = v5;
  v101 = (_QWORD *)*v5;
  v12 = v9 + 8LL * (unsigned int)(v10 - 1) + 8;
  while ( 1 )
  {
    v13 = (_QWORD *)*v11;
    v14 = *(_WORD *)*v11 & 0x1FF;
    if ( v14 != 55 )
      break;
LABEL_80:
    if ( (_QWORD *)v12 == ++v11 )
    {
      v7 = v101;
      v6 = v102;
      v5 = v103;
      goto LABEL_82;
    }
  }
  if ( v14 != 54 )
    return 1;
  v15 = v13[2];
  v16 = (v13[3] - v15) >> 3;
  if ( !(_DWORD)v16 )
  {
LABEL_77:
    v75 = v13[7];
    if ( v75 )
    {
      if ( (v75 & 2) == 0 && (v75 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        result = sub_8255F0(v75 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (_BYTE)result )
          return result;
      }
    }
    goto LABEL_80;
  }
  v99 = v12;
  v17 = (_QWORD *)v13[2];
  v100 = v11;
  v98 = (_QWORD *)*v11;
  v18 = v15 + 8LL * (unsigned int)(v16 - 1) + 8;
  while ( 1 )
  {
    v19 = (_QWORD *)*v17;
    v20 = *(_WORD *)*v17 & 0x1FF;
    if ( v20 != 55 )
      break;
LABEL_75:
    if ( (_QWORD *)v18 == ++v17 )
    {
      v13 = v98;
      v12 = v99;
      v11 = v100;
      goto LABEL_77;
    }
  }
  if ( v20 != 54 )
    return 1;
  v21 = v19[2];
  v22 = (v19[3] - v21) >> 3;
  if ( !(_DWORD)v22 )
  {
LABEL_71:
    v73 = v19[7];
    if ( v73 )
    {
      if ( (v73 & 2) == 0 )
      {
        v74 = v73 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v74 )
        {
          result = sub_8255F0(v74);
          if ( (_BYTE)result )
            return result;
        }
      }
    }
    goto LABEL_75;
  }
  v95 = (_QWORD *)*v17;
  v96 = v18;
  v23 = v21 + 8LL * (unsigned int)(v22 - 1) + 8;
  v97 = v17;
  v24 = (_QWORD *)v19[2];
  while ( 1 )
  {
    v25 = (_QWORD *)*v24;
    v26 = *(_WORD *)*v24 & 0x1FF;
    if ( v26 != 55 )
      break;
LABEL_69:
    if ( (_QWORD *)v23 == ++v24 )
    {
      v19 = v95;
      v18 = v96;
      v17 = v97;
      goto LABEL_71;
    }
  }
  if ( v26 != 54 )
    return 1;
  v27 = (_QWORD *)v25[2];
  v28 = (__int64)(v25[3] - (_QWORD)v27) >> 3;
  if ( !(_DWORD)v28 )
  {
LABEL_65:
    v71 = v25[7];
    if ( v71 )
    {
      if ( (v71 & 2) == 0 )
      {
        v72 = v71 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v72 )
        {
          result = sub_8255F0(v72);
          if ( (_BYTE)result )
            return result;
        }
      }
    }
    goto LABEL_69;
  }
  v94 = v24;
  v29 = (__int64)&v27[(unsigned int)(v28 - 1) + 1];
  v30 = v23;
  v31 = (_QWORD *)*v24;
  v32 = (_QWORD *)v29;
  v33 = v30;
  v34 = v27;
  while ( 1 )
  {
    v35 = (_QWORD *)*v34;
    v36 = *(_WORD *)*v34 & 0x1FF;
    if ( v36 != 55 )
      break;
LABEL_63:
    if ( v32 == ++v34 )
    {
      v70 = v33;
      v24 = v94;
      v25 = v31;
      v23 = v70;
      goto LABEL_65;
    }
  }
  if ( v36 != 54 )
    return 1;
  v37 = v35[2];
  v38 = (v35[3] - v37) >> 3;
  if ( !(_DWORD)v38 )
  {
LABEL_59:
    v68 = v35[7];
    if ( v68 )
    {
      if ( (v68 & 2) == 0 )
      {
        v69 = v68 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v69 )
        {
          result = sub_8255F0(v69);
          if ( (_BYTE)result )
            return result;
        }
      }
    }
    goto LABEL_63;
  }
  v82 = (_QWORD *)*v34;
  v39 = v34;
  v40 = (_QWORD *)v35[2];
  v41 = v37 + 8LL * (unsigned int)(v38 - 1) + 8;
  v42 = v32;
  while ( 1 )
  {
    v43 = (_QWORD *)*v40;
    v44 = *(_WORD *)*v40 & 0x1FF;
    if ( v44 != 55 )
      break;
LABEL_57:
    if ( (_QWORD *)v41 == ++v40 )
    {
      v35 = v82;
      v32 = v42;
      v34 = v39;
      goto LABEL_59;
    }
  }
  if ( v44 != 54 )
    return 1;
  v45 = (_QWORD *)v43[2];
  v46 = (__int64)(v43[3] - (_QWORD)v45) >> 3;
  if ( !(_DWORD)v46 )
  {
LABEL_53:
    v66 = v43[7];
    if ( v66 )
    {
      if ( (v66 & 2) == 0 )
      {
        v67 = v66 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v67 )
        {
          v81 = v41;
          v79 = v39;
          result = sub_8255F0(v67);
          v39 = v79;
          v41 = v81;
          if ( (_BYTE)result )
            return result;
        }
      }
    }
    goto LABEL_57;
  }
  v78 = (_QWORD *)*v40;
  v80 = v41;
  v47 = (__int64)&v45[(unsigned int)(v46 - 1) + 1];
  while ( 1 )
  {
    v48 = (_QWORD *)*v45;
    v49 = *(_WORD *)*v45 & 0x1FF;
    if ( v49 != 55 )
      break;
LABEL_51:
    if ( (_QWORD *)v47 == ++v45 )
    {
      v43 = v78;
      v41 = v80;
      goto LABEL_53;
    }
  }
  if ( v49 != 54 )
    return 1;
  v50 = (_QWORD *)v48[2];
  v51 = (__int64)(v48[3] - (_QWORD)v50) >> 3;
  if ( !(_DWORD)v51 )
  {
LABEL_47:
    v64 = v48[7];
    if ( v64 )
    {
      if ( (v64 & 2) == 0 )
      {
        v65 = v64 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v65 )
        {
          v85 = v39;
          result = sub_8255F0(v65);
          v39 = v85;
          if ( (_BYTE)result )
            return result;
        }
      }
    }
    goto LABEL_51;
  }
  v52 = (__int64)&v50[(unsigned int)(v51 - 1) + 1];
  while ( 1 )
  {
    v53 = (_QWORD *)*v50;
    v54 = *(_WORD *)*v50 & 0x1FF;
    if ( v54 == 55 )
      goto LABEL_46;
    if ( v54 != 54 )
      return 1;
    v55 = v53[2];
    v56 = (v53[3] - v55) >> 3;
    if ( (_DWORD)v56 )
      break;
LABEL_39:
    v60 = v53[7];
    if ( v60 )
    {
      if ( (v60 & 2) == 0 )
      {
        v61 = v60 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v61 )
        {
          v90 = v50;
          v88 = v52;
          v87 = v39;
          v84 = v48;
          v62 = sub_8255F0(v61);
          v48 = v84;
          v39 = v87;
          v52 = v88;
          v50 = v90;
          v59 = v62;
          if ( (_BYTE)v62 )
            return v59;
        }
      }
    }
LABEL_46:
    if ( (_QWORD *)v52 == ++v50 )
      goto LABEL_47;
  }
  v57 = (_QWORD *)v53[2];
  v58 = v55 + 8LL * (unsigned int)(v56 - 1) + 8;
  while ( 1 )
  {
    v93 = v58;
    v92 = v50;
    v91 = v52;
    v89 = v39;
    v86 = v48;
    v83 = v57;
    v59 = sub_8255F0(*v57);
    if ( (_BYTE)v59 )
      return v59;
    v58 = v93;
    v48 = v86;
    v57 = v83 + 1;
    v39 = v89;
    v52 = v91;
    v50 = v92;
    if ( (_QWORD *)v93 == v83 + 1 )
      goto LABEL_39;
  }
}

