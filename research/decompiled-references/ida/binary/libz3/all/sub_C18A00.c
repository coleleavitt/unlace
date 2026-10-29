__int64 __fastcall sub_C18A00(__int64 *a1, __int64 a2, __int64 a3)
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
  __int64 v22; // r12
  int v23; // r8d
  int v24; // r9d
  int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r12
  _DWORD *v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rax
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
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rax
  int v80; // [rsp+0h] [rbp-98h]
  int v81; // [rsp+0h] [rbp-98h]
  __int64 v82; // [rsp+0h] [rbp-98h]
  __int64 v83; // [rsp+0h] [rbp-98h]
  int v84; // [rsp+8h] [rbp-90h]
  int v85; // [rsp+8h] [rbp-90h]
  __int64 *v86; // [rsp+8h] [rbp-90h]
  int v87[2]; // [rsp+10h] [rbp-88h]
  __int64 v88; // [rsp+10h] [rbp-88h]
  int v89; // [rsp+18h] [rbp-80h]
  int v90; // [rsp+18h] [rbp-80h]
  _QWORD *v91; // [rsp+18h] [rbp-80h]
  int v92; // [rsp+20h] [rbp-78h]
  int v93; // [rsp+20h] [rbp-78h]
  __int64 v94; // [rsp+28h] [rbp-70h]
  char v95; // [rsp+28h] [rbp-70h]
  __int64 v96; // [rsp+28h] [rbp-70h]
  __int64 v97; // [rsp+30h] [rbp-68h] BYREF
  __int64 v98; // [rsp+38h] [rbp-60h] BYREF
  __int64 v99; // [rsp+40h] [rbp-58h] BYREF
  void *v100; // [rsp+48h] [rbp-50h] BYREF
  __int64 v101; // [rsp+50h] [rbp-48h] BYREF
  __int64 v102; // [rsp+58h] [rbp-40h] BYREF
  int v103; // [rsp+60h] [rbp-38h]
  void *v104; // [rsp+68h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v51 = 515;
LABEL_45:
      sub_1872CE0("");
      sub_1873130(107, v51);
    case 3:
      v51 = 520;
      goto LABEL_45;
    case 0:
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
        result = sub_C18620((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
      v84 = v15 - v16;
      v17 = v13 + 8 * v16;
      *(_QWORD *)v87 = a1[1];
      sub_1584610(a1, v16);
      v20 = a1[11];
      if ( v20 )
        v21 = *(_DWORD *)(v20 - 4);
      else
        v21 = 0;
      if ( v21 == *(_DWORD *)(a3 + 12) )
      {
        ++*(_DWORD *)(a2 + 8);
        sub_C0E540(a1[62], a1[63]);
        v81 = a2;
        v22 = 0;
      }
      else
      {
        v73 = sub_15DC610(a1[1], v14, v84, v17, v18, v19, v80, v84, v87[0], v89, v92, v94, v97, v98, v99, v100);
        v81 = v73;
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        v74 = sub_15E2980(a1[1]);
        v22 = v74;
        if ( v74 )
          ++*(_DWORD *)(v74 + 8);
        sub_C0E540(a1[62], a1[63]);
      }
      a1[62] = v22;
      v25 = sub_15358B0(
              a1[18],
              v14,
              v84,
              v17,
              (int)a1 + 480,
              (int)a1 + 512,
              v81,
              v84,
              v87[0],
              v89,
              v92,
              v94,
              v97,
              v98,
              v99,
              (int)v100,
              v101,
              v102,
              v103,
              v104);
      if ( v25 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v75 = sub_15DC610(a1[1], v14, v85, v17, v23, v24, v82, v85, v88, v90, v93, v95, v97, v98, v99, v100);
          v76 = v75;
          if ( v75 )
            ++*(_DWORD *)(v75 + 8);
          sub_C0E600(a1[60], a1[61]);
          a1[60] = v76;
          v77 = sub_15DE370(a1[1]);
          v78 = v77;
          if ( v77 )
            ++*(_DWORD *)(v77 + 8);
          sub_C0E540(a1[62], a1[63]);
          a1[62] = v78;
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_C0E600(a1[60], a1[61]);
          a1[60] = a2;
        }
        sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
        v68 = a1[60];
        v101 = v68;
        if ( v68 )
          ++*(_DWORD *)(v68 + 8);
        sub_C10880(a1 + 7, &v101);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
        v69 = a1[62];
        v102 = v69;
        if ( v69 )
          ++*(_DWORD *)(v69 + 8);
        sub_C0FED0(a1 + 11, &v102);
        sub_C0E540(a1[62], a1[63]);
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
        sub_C0E600(v71, a1[61]);
        a1[60] = 0;
        return sub_C0E540(v82, v88);
      }
      v86 = a1 + 6;
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v26 = a1[60];
      v97 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v91 = a1 + 7;
      sub_C10880(a1 + 7, &v97);
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v27 = a1[64];
      if ( !v27 )
      {
        v79 = sub_15DE370(a1[1]);
        v27 = v79;
        if ( v79 )
          ++*(_DWORD *)(v79 + 8);
        sub_C0E540(a1[64], a1[65]);
        a1[64] = v27;
      }
      v28 = sub_15E2470(a1[1], a1[62], v27);
      v29 = a1[63];
      v30 = a1[62];
      v31 = v28;
      if ( v28 )
      {
        ++*(_DWORD *)(v28 + 8);
        sub_C0E540(v30, v29);
        a1[62] = v31;
        ++*(_DWORD *)(v31 + 8);
        v98 = v31;
      }
      else
      {
        sub_C0E540(v30, v29);
        a1[62] = 0;
        v98 = 0;
      }
      sub_C0FED0(a1 + 11, &v98);
      sub_C0E540(a1[64], a1[65]);
      a1[64] = 0;
      v32 = a1[60];
      if ( v25 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
LABEL_38:
          sub_15843A0(a1, a2, a1[60], a1[62]);
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        if ( !(unsigned __int8)sub_C18620((__int64)a1, v32, (unsigned int)(v25 != 3) + v25) )
        {
LABEL_41:
          sub_C0E600(a1[60], a1[61]);
          v49 = a1[63];
          v50 = a1[62];
          a1[60] = 0;
          sub_C0E540(v50, v49);
          a1[62] = 0;
          return sub_C0E540(v82, v88);
        }
        v33 = a1[11];
        v96 = a1[1];
        v34 = 0x7FFFFFFF8LL;
        if ( v33 )
          v34 = 8LL * (unsigned int)(*(_DWORD *)(v33 - 4) - 1);
        v35 = *(_QWORD *)(v33 + v34);
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        sub_3A8160(a1 + 10);
        v36 = 0x7FFFFFFF8LL;
        v37 = a1[11];
        if ( v37 )
          v36 = 8LL * (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
        v38 = *(_QWORD *)(v37 + v36);
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        sub_3A8160(a1 + 10);
        v39 = sub_15E2470(a1[1], v38, v35);
        v40 = a1[62];
        v41 = a1[63];
        v42 = v39;
        if ( v39 )
        {
          ++*(_DWORD *)(v39 + 8);
          sub_C0E540(v40, v41);
          a1[62] = v42;
          ++*(_DWORD *)(v42 + 8);
          v99 = v42;
        }
        else
        {
          sub_C0E540(v40, v41);
          a1[62] = 0;
          v99 = 0;
        }
        sub_C0FED0(a1 + 11, &v99);
        sub_C0E540(v38, v96);
        sub_C0E540(v35, v96);
        v43 = a1[7];
        v44 = 0x7FFFFFFF8LL;
        if ( v43 )
          v44 = 8LL * (unsigned int)(*(_DWORD *)(v43 - 4) - 1);
        v45 = *(_QWORD *)(v43 + v44);
        if ( v45 )
          ++*(_DWORD *)(v45 + 8);
        sub_C0E600(a1[60], a1[61]);
        a1[60] = v45;
        sub_39BF70(v86);
        sub_39BF70(v86);
        v46 = (_DWORD *)a1[60];
        v100 = v46;
        if ( v46 )
          ++v46[2];
        sub_C10880(v91, &v100);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          goto LABEL_38;
      }
      v47 = a1[5];
      v48 = *(_DWORD *)(v47 - 4);
      *(_DWORD *)(v47 - 4) = v48 - 1;
      if ( v48 != 1 )
        *(_BYTE *)(v47 + 16LL * (unsigned int)(v48 - 2) + 8) |= 2u;
      goto LABEL_41;
  }
  v52 = a1[11];
  v53 = a1[1];
  v54 = 0x7FFFFFFF8LL;
  if ( v52 )
    v54 = 8LL * (unsigned int)(*(_DWORD *)(v52 - 4) - 1);
  v55 = *(_QWORD *)(v52 + v54);
  v83 = v55;
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
  v59 = sub_15E2470(a1[1], v58, v83);
  v60 = a1[62];
  v61 = a1[63];
  v62 = v59;
  if ( v59 )
  {
    ++*(_DWORD *)(v59 + 8);
    sub_C0E540(v60, v61);
    a1[62] = v62;
    ++*(_DWORD *)(v62 + 8);
    v102 = v62;
  }
  else
  {
    sub_C0E540(v60, v61);
    a1[62] = 0;
    v102 = 0;
  }
  sub_C0FED0(a1 + 11, &v102);
  sub_C0E540(v58, v53);
  sub_C0E540(v83, v53);
  v63 = a1[7];
  v64 = 0x7FFFFFFF8LL;
  if ( v63 )
    v64 = 8LL * (unsigned int)(*(_DWORD *)(v63 - 4) - 1);
  v65 = *(_QWORD *)(v63 + v64);
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  sub_C0E600(a1[60], a1[61]);
  a1[60] = v65;
  sub_39BF70(a1 + 6);
  sub_39BF70(a1 + 6);
  v66 = a1[60];
  v102 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  sub_C10880(a1 + 7, &v102);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v67 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v67 - 1;
  if ( v67 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v67 - 2) + 8) |= 2u;
  return result;
}

