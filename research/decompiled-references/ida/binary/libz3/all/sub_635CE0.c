__int64 __fastcall sub_635CE0(_QWORD *a1, __int64 a2, __int64 a3)
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
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r14d
  unsigned __int64 v34; // r15
  __int64 *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // zf
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // ecx
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
  int v66; // [rsp+0h] [rbp-68h]
  __int64 v67; // [rsp+8h] [rbp-60h]
  __int64 v68; // [rsp+8h] [rbp-60h]
  __int64 v69; // [rsp+10h] [rbp-58h]
  int v70[2]; // [rsp+18h] [rbp-50h]
  __int64 v71; // [rsp+20h] [rbp-48h] BYREF
  __int64 v72; // [rsp+28h] [rbp-40h] BYREF
  int v73; // [rsp+30h] [rbp-38h]
  int v74; // [rsp+38h] [rbp-30h]
  int v75; // [rsp+40h] [rbp-28h]
  void *v76; // [rsp+48h] [rbp-20h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v39 = 515;
LABEL_31:
    sub_1872CE0("");
    sub_1873130(107, v39);
  }
  if ( v3 == 3 )
  {
    v39 = 520;
    goto LABEL_31;
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
      v68 = v48;
      if ( !v48 )
      {
        *(_DWORD *)(v44 - 4) = v47;
        goto LABEL_47;
      }
      ++*(_DWORD *)(v48 + 8);
      v49 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v50 = *(_QWORD *)(v44 + 8 * v49);
      LODWORD(v47) = *(_DWORD *)(v44 - 4) - 1;
      *(_DWORD *)(v44 - 4) = v49;
      if ( !v50 )
        goto LABEL_47;
    }
    else
    {
      v68 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        LODWORD(v47) = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_47;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v50 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v38 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v38 )
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
LABEL_49:
          v38 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(v46, v54);
          goto LABEL_51;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_51:
        v55 = sub_15E2470(a1[1], v52, v68);
        v56 = a1[63];
        v57 = a1[62];
        v58 = v55;
        if ( v55 )
        {
          ++*(_DWORD *)(v55 + 8);
          sub_629F20(v57, v56);
          a1[62] = v58;
          ++*(_DWORD *)(v58 + 8);
          v72 = v58;
        }
        else
        {
          sub_629F20(v57, v56);
          a1[62] = 0;
          v72 = 0;
        }
        sub_62BCA0(a1 + 11, &v72);
        sub_629F20(v52, v45);
        sub_629F20(v68, v45);
        v59 = a1[7];
        v60 = 0x7FFFFFFF8LL;
        if ( v59 )
          v60 = 8LL * (unsigned int)(*(_DWORD *)(v59 - 4) - 1);
        v61 = *(_QWORD *)(v59 + v60);
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        sub_629FE0(a1[60], a1[61]);
        a1[60] = v61;
        sub_39BF70(a1 + 6);
        sub_39BF70(a1 + 6);
        v62 = a1[60];
        v72 = v62;
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        sub_62BD60(a1 + 7, &v72);
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
LABEL_47:
    v51 = (unsigned int)(v47 - 1);
    v52 = *(_QWORD *)(v44 + 8 * v51);
    if ( v52 )
    {
      ++*(_DWORD *)(v52 + 8);
      v53 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v54 = *(_QWORD *)(v44 + 8 * v53);
      *(_DWORD *)(v44 - 4) = v53;
      if ( v54 )
        goto LABEL_49;
    }
    else
    {
      *(_DWORD *)(v44 - 4) = v51;
    }
    goto LABEL_51;
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
    result = sub_6358A0(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  HIDWORD(v69) = v15 - v16;
  v17 = v13 + 8 * v16;
  v67 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v64 = sub_15DC610(a1[1], v14, SHIDWORD(v69), v17, v18, v19, v66, v67, v69, v22, v71, v72, v73, v74, v75, v76);
    v25 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    v65 = sub_15E2980(a1[1]);
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    *(_QWORD *)v70 = v65;
    sub_629F20(a1[62], a1[63]);
    v26 = *(_QWORD *)v70;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_629F20(a1[62], a1[63]);
    v25 = a2;
    v26 = 0;
  }
  a1[62] = v26;
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v27 = sub_15DC610(a1[1], v14, SHIDWORD(v69), v17, v23, v24, v66, v67, v69, v70[0], v71, v72, v73, v74, v75, v76);
    v28 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_629FE0(a1[60], a1[61]);
    a1[60] = v28;
    v29 = sub_15DE370(a1[1]);
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    sub_629F20(a1[62], a1[63]);
    a1[62] = v30;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_629FE0(a1[60], a1[61]);
    a1[60] = a2;
  }
  sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
  v31 = a1[60];
  v71 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_62BD60(a1 + 7, &v71);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  v32 = a1[11];
  if ( v32 )
  {
    v33 = *(_DWORD *)(a3 + 12);
    v34 = v32 + 8LL * *(unsigned int *)(v32 - 4);
    v35 = (__int64 *)(v32 + 8LL * v33);
    if ( (unsigned __int64)v35 >= v34 )
      goto LABEL_33;
    do
    {
      v36 = *v35;
      if ( *v35 )
      {
        v37 = a1[10];
        v38 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v37, v36);
      }
      ++v35;
    }
    while ( (unsigned __int64)v35 < v34 );
    v32 = a1[11];
    if ( v32 )
LABEL_33:
      *(_DWORD *)(v32 - 4) = v33;
  }
  v40 = a1[62];
  v72 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  sub_62BCA0(a1 + 11, &v72);
  sub_629F20(a1[62], a1[63]);
  v41 = a1[5];
  v42 = a1[60];
  a1[62] = 0;
  v43 = *(_DWORD *)(v41 - 4);
  *(_DWORD *)(v41 - 4) = v43 - 1;
  if ( a2 != v42 && v43 != 1 )
  {
    *(_BYTE *)(v41 + 16LL * (unsigned int)(v43 - 2) + 8) |= 2u;
    v42 = a1[60];
  }
  sub_629FE0(v42, a1[61]);
  a1[60] = 0;
  return sub_629F20(v25, v67);
}

