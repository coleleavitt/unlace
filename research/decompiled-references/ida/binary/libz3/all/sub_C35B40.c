__int64 __fastcall sub_C35B40(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  int v17; // r15d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 *v30; // r14
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r15d
  unsigned __int64 v67; // r14
  __int64 *v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  int v81; // ecx
  int v82; // [rsp+0h] [rbp-78h]
  int v83; // [rsp+8h] [rbp-70h]
  unsigned int v84; // [rsp+8h] [rbp-70h]
  __int64 v85; // [rsp+8h] [rbp-70h]
  __int64 v86; // [rsp+10h] [rbp-68h]
  int v87[2]; // [rsp+18h] [rbp-60h]
  __int64 v88; // [rsp+20h] [rbp-58h] BYREF
  __int64 v89; // [rsp+28h] [rbp-50h] BYREF
  __int64 v90; // [rsp+30h] [rbp-48h] BYREF
  __int64 v91; // [rsp+38h] [rbp-40h] BYREF
  int v92; // [rsp+40h] [rbp-38h]
  void *v93; // [rsp+48h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v34 = 515;
LABEL_24:
    sub_1872CE0("");
    sub_1873130(107, v34);
  }
  if ( v3 == 3 )
  {
    v34 = 520;
    goto LABEL_24;
  }
  if ( v3 )
  {
    v44 = a1[11];
    v45 = a1[1];
    v46 = a1[10];
    if ( v44 )
    {
      v47 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v48 = *(_QWORD *)(v44 + 8 * v47);
      v85 = v48;
      if ( !v48 )
      {
        *(_DWORD *)(v44 - 4) = v47;
        goto LABEL_43;
      }
      ++*(_DWORD *)(v48 + 8);
      v49 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v50 = *(_QWORD *)(v44 + 8 * v49);
      LODWORD(v47) = *(_DWORD *)(v44 - 4) - 1;
      *(_DWORD *)(v44 - 4) = v49;
      if ( !v50 )
        goto LABEL_43;
    }
    else
    {
      v85 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        LODWORD(v47) = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_43;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v50 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v33 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v33 )
    {
      sub_15D7BC0(v46, v50);
      v44 = a1[11];
      if ( !v44 )
      {
        v52 = MEMORY[0x7FFFFFFF8];
        if ( MEMORY[0x7FFFFFFF8] )
        {
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v54 = MEMORY[0x7FFFFFFF8];
          v46 = a1[10];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_45:
          v33 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v46, v54);
          goto LABEL_47;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_47:
        v55 = sub_15E2470(a1[1], v52, v85);
        v56 = a1[63];
        v57 = a1[62];
        v58 = v55;
        if ( v55 )
        {
          ++*(_DWORD *)(v55 + 8);
          sub_C28290(v57, v56);
          a1[62] = v58;
          ++*(_DWORD *)(v58 + 8);
          v91 = v58;
        }
        else
        {
          sub_C28290(v57, v56);
          a1[62] = 0;
          v91 = 0;
        }
        sub_C28470(a1 + 11, &v91);
        sub_C28290(v52, v45);
        sub_C28290(v85, v45);
        v59 = a1[7];
        v60 = 0x7FFFFFFF8LL;
        if ( v59 )
          v60 = 8LL * (unsigned int)(*(_DWORD *)(v59 - 4) - 1);
        v61 = *(_QWORD *)(v59 + v60);
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        sub_C282B0(a1[60], a1[61]);
        a1[60] = v61;
        sub_39BF70(a1 + 6);
        sub_39BF70(a1 + 6);
        v62 = a1[60];
        v91 = v62;
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        sub_C28530(a1 + 7, &v91);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        result = a1[5];
        v63 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v63 - 1;
        if ( v63 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v63 - 2) + 8) |= 2u;
        return result;
      }
      LODWORD(v47) = *(_DWORD *)(v44 - 4);
      v46 = a1[10];
    }
    else
    {
      LODWORD(v47) = *(_DWORD *)(v44 - 4);
    }
LABEL_43:
    v51 = (unsigned int)(v47 - 1);
    v52 = *(_QWORD *)(v44 + 8 * v51);
    if ( v52 )
    {
      ++*(_DWORD *)(v52 + 8);
      v53 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v54 = *(_QWORD *)(v44 + 8 * v53);
      *(_DWORD *)(v44 - 4) = v53;
      if ( v54 )
        goto LABEL_45;
    }
    else
    {
      *(_DWORD *)(v44 - 4) = v51;
    }
    goto LABEL_47;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8);
    v12 = v11 >> 6;
    if ( v11 >> 6 >= v7 )
      break;
    v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
    v9 = ((v12 + 1) << 6) | v11 & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_C351E0(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v13 = a1[7];
  v14 = *(_QWORD *)(a2 + 16);
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = *(unsigned int *)(a3 + 12);
  v83 = v15 - v16;
  v17 = v13 + 8 * v16;
  v86 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v71 = sub_15DC610(a1[1], v14, v83, v17, v18, v19, v82, v83, v86, v22, v88, v89, v90, v91, v92, v93);
    v23 = v71;
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    v72 = sub_15E2980(a1[1]);
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    *(_QWORD *)v87 = v72;
    sub_C28290(a1[62], a1[63]);
    v24 = *(_QWORD *)v87;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C28290(a1[62], a1[63]);
    v23 = a2;
    v24 = 0;
  }
  a1[62] = v24;
  if ( (unsigned int)sub_C30200(a1[18], v14, v83, v17, (int)a1 + 480, (int)a1 + 512) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v73 = sub_15DC610(a1[1], v14, v83, v17, v25, v26, v82, v83, v86, v87[0], v88, v89, v90, v91, v92, v93);
      v74 = v73;
      if ( v73 )
        ++*(_DWORD *)(v73 + 8);
      sub_C282B0(a1[60], a1[61]);
      a1[60] = v74;
      v75 = sub_15DE370(a1[1]);
      v76 = v75;
      if ( v75 )
        ++*(_DWORD *)(v75 + 8);
      sub_C28290(a1[62], a1[63]);
      a1[62] = v76;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_C282B0(a1[60], a1[61]);
      a1[60] = a2;
    }
    sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
    v64 = a1[60];
    v90 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    sub_C28530(a1 + 7, &v90);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v65 = a1[11];
    if ( v65 )
    {
      v66 = *(_DWORD *)(a3 + 12);
      v67 = v65 + 8LL * *(unsigned int *)(v65 - 4);
      v68 = (__int64 *)(v65 + 8LL * v66);
      if ( (unsigned __int64)v68 >= v67 )
        goto LABEL_90;
      do
      {
        v69 = *v68;
        if ( *v68 )
        {
          v70 = a1[10];
          v33 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v70, v69);
        }
        ++v68;
      }
      while ( (unsigned __int64)v68 < v67 );
      v65 = a1[11];
      if ( v65 )
LABEL_90:
        *(_DWORD *)(v65 - 4) = v66;
    }
    v78 = a1[62];
    v91 = v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    sub_C28470(a1 + 11, &v91);
    sub_C28290(a1[62], a1[63]);
    v79 = a1[5];
    v80 = a1[60];
    a1[62] = 0;
    v81 = *(_DWORD *)(v79 - 4);
    *(_DWORD *)(v79 - 4) = v81 - 1;
    if ( a2 != v80 && v81 != 1 )
    {
      *(_BYTE *)(v79 + 16LL * (unsigned int)(v81 - 2) + 8) |= 2u;
      v80 = a1[60];
    }
    sub_C282B0(v80, a1[61]);
    a1[60] = 0;
  }
  else
  {
    sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
    v27 = a1[60];
    v88 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_C28530(a1 + 7, &v88);
    v28 = a1[11];
    if ( v28 )
    {
      v29 = v28 + 8LL * *(unsigned int *)(v28 - 4);
      v84 = *(_DWORD *)(a3 + 12);
      v30 = (__int64 *)(v28 + 8LL * v84);
      if ( (unsigned __int64)v30 >= v29 )
        goto LABEL_26;
      do
      {
        v31 = *v30;
        if ( *v30 )
        {
          v32 = a1[10];
          v33 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v32, v31);
        }
        ++v30;
      }
      while ( (unsigned __int64)v30 < v29 );
      v28 = a1[11];
      if ( v28 )
LABEL_26:
        *(_DWORD *)(v28 - 4) = v84;
    }
    v35 = a1[64];
    if ( !v35 )
    {
      v77 = sub_15DE370(a1[1]);
      v35 = v77;
      if ( v77 )
        ++*(_DWORD *)(v77 + 8);
      sub_C28290(a1[64], a1[65]);
      a1[64] = v35;
    }
    v36 = sub_15E2470(a1[1], a1[62], v35);
    v37 = a1[63];
    v38 = a1[62];
    v39 = v36;
    if ( v36 )
    {
      ++*(_DWORD *)(v36 + 8);
      sub_C28290(v38, v37);
      a1[62] = v39;
      ++*(_DWORD *)(v39 + 8);
      v89 = v39;
    }
    else
    {
      sub_C28290(v38, v37);
      a1[62] = 0;
      v89 = 0;
    }
    sub_C28470(a1 + 11, &v89);
    sub_C28290(a1[64], a1[65]);
    a1[64] = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v40 = a1[5];
    v41 = *(_DWORD *)(v40 - 4);
    *(_DWORD *)(v40 - 4) = v41 - 1;
    if ( v41 != 1 )
      *(_BYTE *)(v40 + 16LL * (unsigned int)(v41 - 2) + 8) |= 2u;
    sub_C282B0(a1[60], a1[61]);
    v42 = a1[63];
    v43 = a1[62];
    a1[60] = 0;
    sub_C28290(v43, v42);
    a1[62] = 0;
  }
  return sub_C28290(v23, v86);
}

