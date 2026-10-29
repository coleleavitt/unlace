__int64 __fastcall sub_C60610(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  _QWORD *v16; // r15
  unsigned int v17; // r13d
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
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r13
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r13
  _DWORD *v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rax
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // [rsp+0h] [rbp-98h]
  __int64 v81; // [rsp+0h] [rbp-98h]
  __int64 v82; // [rsp+0h] [rbp-98h]
  __int64 v83; // [rsp+8h] [rbp-90h]
  __int64 **v84; // [rsp+10h] [rbp-88h]
  __int64 *v85; // [rsp+10h] [rbp-88h]
  int v86[2]; // [rsp+10h] [rbp-88h]
  int v87; // [rsp+18h] [rbp-80h]
  _QWORD *v88; // [rsp+18h] [rbp-80h]
  int v89; // [rsp+20h] [rbp-78h]
  char v90; // [rsp+28h] [rbp-70h]
  __int64 v91; // [rsp+28h] [rbp-70h]
  __int64 v92; // [rsp+30h] [rbp-68h] BYREF
  __int64 v93; // [rsp+38h] [rbp-60h] BYREF
  __int64 v94; // [rsp+40h] [rbp-58h] BYREF
  void *v95; // [rsp+48h] [rbp-50h] BYREF
  __int64 v96; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v97[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v52 = 515;
LABEL_44:
    sub_1872CE0("");
    sub_1873130(107, v52);
  }
  if ( v3 == 3 )
  {
    v52 = 520;
    goto LABEL_44;
  }
  if ( v3 )
  {
    v53 = a1[11];
    v82 = a1[1];
    v54 = 0x7FFFFFFF8LL;
    if ( v53 )
      v54 = 8LL * (unsigned int)(*(_DWORD *)(v53 - 4) - 1);
    v55 = *(_QWORD *)(v53 + v54);
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    sub_3A8160(a1 + 10);
    v56 = 0x7FFFFFFF8LL;
    v57 = a1[11];
    if ( v57 )
      v56 = 8LL * (unsigned int)(*(_DWORD *)(v57 - 4) - 1);
    v58 = *(_QWORD *)(v57 + v56);
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    sub_3A8160(a1 + 10);
    v59 = sub_15E2470(a1[1], v58, v55);
    v60 = a1[62];
    v61 = a1[63];
    v62 = v59;
    if ( v59 )
    {
      ++*(_DWORD *)(v59 + 8);
      sub_C4E200(v60, v61);
      a1[62] = v62;
      ++*(_DWORD *)(v62 + 8);
      v97[0] = v62;
    }
    else
    {
      sub_C4E200(v60, v61);
      a1[62] = 0;
      v97[0] = 0;
    }
    sub_C50B00(a1 + 11, v97);
    sub_C4E200(v58, v82);
    sub_C4E200(v55, v82);
    v63 = a1[7];
    v64 = 0x7FFFFFFF8LL;
    if ( v63 )
      v64 = 8LL * (unsigned int)(*(_DWORD *)(v63 - 4) - 1);
    v65 = *(_QWORD *)(v63 + v64);
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    sub_C4E2C0(a1[60], a1[61]);
    a1[60] = v65;
    sub_39BF70(a1 + 6);
    sub_39BF70(a1 + 6);
    v66 = a1[60];
    v97[0] = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    sub_C516F0(a1 + 7, v97);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    result = a1[5];
    v67 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v67 - 1;
    if ( v67 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v67 - 2) + 8) |= 2u;
  }
  else
  {
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
      result = sub_C600A0((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
      if ( !(_BYTE)result )
        return result;
    }
    v80 = *(_QWORD *)(a2 + 16);
    v13 = a1[7];
    if ( v13 )
      v14 = *(_DWORD *)(v13 - 4);
    else
      v14 = 0;
    v15 = *(unsigned int *)(a3 + 12);
    v16 = (_QWORD *)(v13 + 8 * v15);
    v17 = v14 - v15;
    v83 = a1[1];
    sub_1584610(a1, v15);
    v20 = a1[11];
    if ( v20 )
      v21 = *(_DWORD *)(v20 - 4);
    else
      v21 = 0;
    v22 = v21 - *(_DWORD *)(a3 + 12);
    if ( v22 )
    {
      v73 = sub_15DC610(a1[1], v80, v17, (int)v16, v18, v19, v80, v83, v22, v87, v89, v90, v92, v93, v94, v95);
      v23 = v73;
      if ( v73 )
        ++*(_DWORD *)(v73 + 8);
      v74 = sub_15E2980(a1[1]);
      if ( v74 )
        ++*(_DWORD *)(v74 + 8);
      *(_QWORD *)v86 = v74;
      sub_C4E200(a1[62], a1[63]);
      v24 = *(_QWORD *)v86;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_C4E200(a1[62], a1[63]);
      v23 = a2;
      v24 = 0;
    }
    a1[62] = v24;
    v84 = (__int64 **)a1[18];
    sub_C4E200(a1[64], a1[65]);
    a1[64] = 0;
    if ( (unsigned int)sub_C4FC60(v84, v80, v17, v16, a1 + 60) == 5 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v75 = sub_15DC610(
                a1[1],
                v80,
                v17,
                (int)v16,
                v25,
                v26,
                v80,
                v83,
                (int)v84,
                (int)a1 + 480,
                v89,
                v90,
                v92,
                v93,
                v94,
                v95);
        v76 = v75;
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        sub_C4E2C0(a1[60], a1[61]);
        a1[60] = v76;
        v77 = sub_15DE370(a1[1]);
        v78 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        sub_C4E200(a1[62], a1[63]);
        a1[62] = v78;
      }
      else
      {
        ++*(_DWORD *)(a2 + 8);
        sub_C4E2C0(a1[60], a1[61]);
        a1[60] = a2;
      }
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v68 = a1[60];
      v96 = v68;
      if ( v68 )
        ++*(_DWORD *)(v68 + 8);
      sub_C516F0(a1 + 7, &v96);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, a1[60], a1[62]);
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v69 = a1[62];
      v97[0] = v69;
      if ( v69 )
        ++*(_DWORD *)(v69 + 8);
      sub_C50B00(a1 + 11, v97);
      sub_C4E200(a1[62], a1[63]);
      v70 = a1[5];
      v71 = a1[60];
      a1[62] = 0;
      v72 = *(_DWORD *)(v70 - 4);
      *(_DWORD *)(v70 - 4) = v72 - 1;
      if ( a2 != v71 && v72 != 1 )
      {
        *(_BYTE *)(v70 + 16LL * (unsigned int)(v72 - 2) + 8) |= 2u;
        v71 = a1[60];
      }
      sub_C4E2C0(v71, a1[61]);
      a1[60] = 0;
    }
    else
    {
      v85 = a1 + 6;
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v27 = a1[60];
      v92 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v88 = a1 + 7;
      sub_C516F0(a1 + 7, &v92);
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v28 = a1[64];
      if ( !v28 )
      {
        v79 = sub_15DE370(a1[1]);
        v28 = v79;
        if ( v79 )
          ++*(_DWORD *)(v79 + 8);
        sub_C4E200(a1[64], a1[65]);
        a1[64] = v28;
      }
      v29 = sub_15E2470(a1[1], a1[62], v28);
      v30 = a1[63];
      v31 = a1[62];
      v32 = v29;
      if ( v29 )
      {
        ++*(_DWORD *)(v29 + 8);
        sub_C4E200(v31, v30);
        a1[62] = v32;
        ++*(_DWORD *)(v32 + 8);
        v93 = v32;
      }
      else
      {
        sub_C4E200(v31, v30);
        a1[62] = 0;
        v93 = 0;
      }
      sub_C50B00(a1 + 11, &v93);
      sub_C4E200(a1[64], a1[65]);
      v33 = *(_BYTE *)(a3 + 8);
      a1[64] = 0;
      *(_BYTE *)(a3 + 8) = v33 & 0xF3 | 4;
      if ( (unsigned __int8)sub_C600A0((__int64)a1, a1[60], 3) )
      {
        v34 = a1[11];
        v91 = a1[1];
        v35 = 0x7FFFFFFF8LL;
        if ( v34 )
          v35 = 8LL * (unsigned int)(*(_DWORD *)(v34 - 4) - 1);
        v36 = *(_QWORD *)(v34 + v35);
        v81 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        sub_3A8160(a1 + 10);
        v37 = 0x7FFFFFFF8LL;
        v38 = a1[11];
        if ( v38 )
          v37 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
        v39 = *(_QWORD *)(v38 + v37);
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        sub_3A8160(a1 + 10);
        v40 = sub_15E2470(a1[1], v39, v81);
        v41 = a1[63];
        v42 = a1[62];
        v43 = v40;
        if ( v40 )
        {
          ++*(_DWORD *)(v40 + 8);
          sub_C4E200(v42, v41);
          a1[62] = v43;
          ++*(_DWORD *)(v43 + 8);
          v94 = v43;
        }
        else
        {
          sub_C4E200(v42, v41);
          a1[62] = 0;
          v94 = 0;
        }
        sub_C50B00(a1 + 11, &v94);
        sub_C4E200(v39, v91);
        sub_C4E200(v81, v91);
        v44 = a1[7];
        v45 = 0x7FFFFFFF8LL;
        if ( v44 )
          v45 = 8LL * (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
        v46 = *(_QWORD *)(v44 + v45);
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        sub_C4E2C0(a1[60], a1[61]);
        a1[60] = v46;
        sub_39BF70(v85);
        sub_39BF70(v85);
        v47 = (_DWORD *)a1[60];
        v95 = v47;
        if ( v47 )
          ++v47[2];
        sub_C516F0(v88, &v95);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v48 = a1[5];
        v49 = *(_DWORD *)(v48 - 4);
        *(_DWORD *)(v48 - 4) = v49 - 1;
        if ( v49 != 1 )
          *(_BYTE *)(v48 + 16LL * (unsigned int)(v49 - 2) + 8) |= 2u;
      }
      sub_C4E2C0(a1[60], a1[61]);
      v50 = a1[63];
      v51 = a1[62];
      a1[60] = 0;
      sub_C4E200(v51, v50);
      a1[62] = 0;
    }
    return sub_C4E200(v23, v83);
  }
  return result;
}

