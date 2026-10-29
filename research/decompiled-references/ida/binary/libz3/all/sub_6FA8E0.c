__int64 __fastcall sub_6FA8E0(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  _QWORD *v16; // r15
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r13
  int v23; // r8d
  int v24; // r9d
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r13
  _DWORD *v76; // rax
  __int64 v77; // [rsp+0h] [rbp-98h]
  __int64 *v78; // [rsp+0h] [rbp-98h]
  __int64 v79; // [rsp+0h] [rbp-98h]
  int v80[2]; // [rsp+0h] [rbp-98h]
  __int64 v81; // [rsp+8h] [rbp-90h]
  int v82; // [rsp+10h] [rbp-88h]
  _QWORD *v83; // [rsp+10h] [rbp-88h]
  int v84; // [rsp+18h] [rbp-80h]
  __int64 v85; // [rsp+18h] [rbp-80h]
  __int64 v86; // [rsp+18h] [rbp-80h]
  int v87; // [rsp+20h] [rbp-78h]
  __int64 v88; // [rsp+20h] [rbp-78h]
  char v89; // [rsp+28h] [rbp-70h]
  __int64 v90; // [rsp+28h] [rbp-70h]
  __int64 v91; // [rsp+30h] [rbp-68h] BYREF
  __int64 v92; // [rsp+38h] [rbp-60h] BYREF
  __int64 v93; // [rsp+40h] [rbp-58h] BYREF
  void *v94; // [rsp+48h] [rbp-50h] BYREF
  __int64 v95; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v96[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v36 = 515;
LABEL_28:
      sub_1872CE0("");
      sub_1873130(107, v36);
    case 3:
      v36 = 520;
      goto LABEL_28;
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
        result = sub_6FA480((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v77 = *(_QWORD *)(a2 + 16);
      v13 = a1[7];
      if ( v13 )
        v14 = *(_DWORD *)(v13 - 4);
      else
        v14 = 0;
      v15 = *(unsigned int *)(a3 + 12);
      v82 = v14 - v15;
      v16 = (_QWORD *)(v13 + 8LL * (unsigned int)v15);
      v81 = a1[1];
      sub_1584610(a1, v15);
      v19 = a1[11];
      if ( v19 )
        v20 = *(_DWORD *)(v19 - 4);
      else
        v20 = 0;
      if ( v20 == *(_DWORD *)(a3 + 12) )
      {
        ++*(_DWORD *)(a2 + 8);
        sub_6EF3E0(a1[62], a1[63]);
        v21 = a2;
        v22 = 0;
      }
      else
      {
        v57 = sub_15DC610(a1[1], v77, v82, (int)v16, v17, v18, v77, v81, v82, v84, v87, v89, v91, v92, v93, v94);
        v21 = v57;
        if ( v57 )
          ++*(_DWORD *)(v57 + 8);
        v58 = sub_15E2980(a1[1]);
        v22 = v58;
        if ( v58 )
          ++*(_DWORD *)(v58 + 8);
        sub_6EF3E0(a1[62], a1[63]);
      }
      a1[62] = v22;
      v25 = sub_6EFF30(a1[18], v77, v16, a1 + 60);
      if ( v25 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v59 = sub_15DC610(a1[1], v77, v82, (int)v16, v23, v24, v77, v81, v82, v84, v87, v89, v91, v92, v93, v94);
          v60 = v59;
          if ( v59 )
            ++*(_DWORD *)(v59 + 8);
          sub_6EF400(a1[60], a1[61]);
          a1[60] = v60;
          v61 = sub_15DE370(a1[1]);
          v62 = v61;
          if ( v61 )
            ++*(_DWORD *)(v61 + 8);
          sub_6EF3E0(a1[62], a1[63]);
          a1[62] = v62;
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_6EF400(a1[60], a1[61]);
          a1[60] = a2;
        }
        sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
        v52 = a1[60];
        v95 = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        sub_6EFE70(a1 + 7, &v95);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
        v53 = a1[62];
        v96[0] = v53;
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        sub_6EF800(a1 + 11, v96);
        sub_6EF3E0(a1[62], a1[63]);
        v54 = a1[5];
        v55 = a1[60];
        a1[62] = 0;
        v56 = *(_DWORD *)(v54 - 4);
        *(_DWORD *)(v54 - 4) = v56 - 1;
        if ( a2 != v55 && v56 != 1 )
        {
          *(_BYTE *)(v54 + 16LL * (unsigned int)(v56 - 2) + 8) |= 2u;
          v55 = a1[60];
        }
        sub_6EF400(v55, a1[61]);
        a1[60] = 0;
        return sub_6EF3E0(v21, v81);
      }
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v26 = a1[60];
      v91 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v83 = a1 + 7;
      sub_6EFE70(a1 + 7, &v91);
      v78 = a1 + 10;
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v27 = a1[64];
      if ( !v27 )
      {
        v63 = sub_15DE370(a1[1]);
        if ( v63 )
          ++*(_DWORD *)(v63 + 8);
        v86 = v63;
        sub_6EF3E0(a1[64], a1[65]);
        v27 = v86;
        a1[64] = v86;
      }
      v28 = sub_15E2470(a1[1], a1[62], v27);
      v29 = a1[63];
      v30 = a1[62];
      if ( v28 )
      {
        ++*(_DWORD *)(v28 + 8);
        v85 = v28;
        sub_6EF3E0(v30, v29);
        a1[62] = v85;
        ++*(_DWORD *)(v85 + 8);
        v92 = v85;
      }
      else
      {
        sub_6EF3E0(v30, v29);
        a1[62] = 0;
        v92 = 0;
      }
      sub_6EF800(a1 + 11, &v92);
      sub_6EF3E0(a1[64], a1[65]);
      a1[64] = 0;
      v31 = a1[60];
      if ( v25 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          goto LABEL_22;
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        if ( !(unsigned __int8)sub_6FA480((__int64)a1, v31, 1) )
        {
LABEL_24:
          sub_6EF400(a1[60], a1[61]);
          v34 = a1[63];
          v35 = a1[62];
          a1[60] = 0;
          sub_6EF3E0(v35, v34);
          a1[62] = 0;
          return sub_6EF3E0(v21, v81);
        }
        v64 = a1[11];
        v88 = a1[1];
        v65 = 0x7FFFFFFF8LL;
        if ( v64 )
          v65 = 8LL * (unsigned int)(*(_DWORD *)(v64 - 4) - 1);
        v66 = *(_QWORD *)(v64 + v65);
        v90 = v66;
        if ( v66 )
          ++*(_DWORD *)(v66 + 8);
        sub_3A8160(v78);
        v67 = 0x7FFFFFFF8LL;
        v68 = a1[11];
        if ( v68 )
          v67 = 8LL * (unsigned int)(*(_DWORD *)(v68 - 4) - 1);
        v69 = *(_QWORD *)(v68 + v67);
        if ( v69 )
          ++*(_DWORD *)(v69 + 8);
        sub_3A8160(v78);
        v70 = sub_15E2470(a1[1], v69, v90);
        v71 = a1[63];
        v72 = a1[62];
        if ( v70 )
        {
          ++*(_DWORD *)(v70 + 8);
          *(_QWORD *)v80 = v70;
          sub_6EF3E0(v72, v71);
          a1[62] = *(_QWORD *)v80;
          ++*(_DWORD *)(*(_QWORD *)v80 + 8LL);
          v93 = *(_QWORD *)v80;
        }
        else
        {
          sub_6EF3E0(v72, v71);
          a1[62] = 0;
          v93 = 0;
        }
        sub_6EF800(a1 + 11, &v93);
        sub_6EF3E0(v69, v88);
        sub_6EF3E0(v90, v88);
        v73 = a1[7];
        v74 = 0x7FFFFFFF8LL;
        if ( v73 )
          v74 = 8LL * (unsigned int)(*(_DWORD *)(v73 - 4) - 1);
        v75 = *(_QWORD *)(v73 + v74);
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        sub_6EF400(a1[60], a1[61]);
        a1[60] = v75;
        sub_39BF70(a1 + 6);
        sub_39BF70(a1 + 6);
        v76 = (_DWORD *)a1[60];
        v94 = v76;
        if ( v76 )
          ++v76[2];
        sub_6EFE70(v83, &v94);
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        {
LABEL_22:
          v32 = a1[5];
          v33 = *(_DWORD *)(v32 - 4);
          *(_DWORD *)(v32 - 4) = v33 - 1;
          if ( v33 != 1 )
            *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 2) + 8) |= 2u;
          goto LABEL_24;
        }
      }
      sub_15843A0(a1, a2, a1[60], a1[62]);
      goto LABEL_22;
  }
  v37 = a1[11];
  v79 = a1[1];
  v38 = 0x7FFFFFFF8LL;
  if ( v37 )
    v38 = 8LL * (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
  v39 = *(_QWORD *)(v37 + v38);
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  sub_3A8160(a1 + 10);
  v40 = 0x7FFFFFFF8LL;
  v41 = a1[11];
  if ( v41 )
    v40 = 8LL * (unsigned int)(*(_DWORD *)(v41 - 4) - 1);
  v42 = *(_QWORD *)(v41 + v40);
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  sub_3A8160(a1 + 10);
  v43 = sub_15E2470(a1[1], v42, v39);
  v44 = a1[62];
  v45 = a1[63];
  v46 = v43;
  if ( v43 )
  {
    ++*(_DWORD *)(v43 + 8);
    sub_6EF3E0(v44, v45);
    a1[62] = v46;
    ++*(_DWORD *)(v46 + 8);
    v96[0] = v46;
  }
  else
  {
    sub_6EF3E0(v44, v45);
    a1[62] = 0;
    v96[0] = 0;
  }
  sub_6EF800(a1 + 11, v96);
  sub_6EF3E0(v42, v79);
  sub_6EF3E0(v39, v79);
  v47 = a1[7];
  v48 = 0x7FFFFFFF8LL;
  if ( v47 )
    v48 = 8LL * (unsigned int)(*(_DWORD *)(v47 - 4) - 1);
  v49 = *(_QWORD *)(v47 + v48);
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_6EF400(a1[60], a1[61]);
  a1[60] = v49;
  sub_39BF70(a1 + 6);
  sub_39BF70(a1 + 6);
  v50 = a1[60];
  v96[0] = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  sub_6EFE70(a1 + 7, v96);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v51 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v51 - 1;
  if ( v51 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v51 - 2) + 8) |= 2u;
  return result;
}

