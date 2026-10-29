__int64 __fastcall sub_CBAC10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int *v22; // r12
  unsigned int v23; // r13d
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // al
  char v31; // al
  char v32; // bp
  __int64 (*v33)(void); // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // r9d
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // r9
  __int64 v51; // rdx
  __int64 *v52; // r13
  unsigned int v53; // r12d
  __int64 v54; // rbp
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rsi
  int v66; // r9d
  __int64 v67; // r13
  char v68; // al
  __int64 *v69; // rbp
  unsigned int v70; // r12d
  __int64 v71; // r15
  unsigned __int64 v72; // rsi
  char v73; // al
  unsigned __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // r13
  __int64 v79; // rax
  unsigned __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // [rsp+18h] [rbp-E0h]
  unsigned int v85; // [rsp+20h] [rbp-D8h]
  __int64 *v86; // [rsp+20h] [rbp-D8h]
  __int64 v87; // [rsp+20h] [rbp-D8h]
  __int64 v88; // [rsp+20h] [rbp-D8h]
  __int64 v89; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v90; // [rsp+20h] [rbp-D8h]
  __int64 v91; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v93; // [rsp+38h] [rbp-C0h]
  __int64 *v94; // [rsp+38h] [rbp-C0h]
  __int64 v95; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v96; // [rsp+48h] [rbp-B0h]
  unsigned int v97; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v98; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+60h] [rbp-98h]
  unsigned __int64 v101; // [rsp+68h] [rbp-90h]
  __int64 v102; // [rsp+78h] [rbp-80h] BYREF
  unsigned __int64 v103; // [rsp+80h] [rbp-78h] BYREF
  __int64 v104; // [rsp+88h] [rbp-70h] BYREF
  __int64 (__fastcall **v105)(); // [rsp+90h] [rbp-68h] BYREF
  __int64 v106; // [rsp+98h] [rbp-60h]
  __int64 v107; // [rsp+A0h] [rbp-58h]
  __int64 v108; // [rsp+A8h] [rbp-50h]
  int v109; // [rsp+B0h] [rbp-48h]
  unsigned int v110; // [rsp+B4h] [rbp-44h]
  char v111; // [rsp+B8h] [rbp-40h]

  v2 = a1;
  v3 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    v4 -= 64LL;
  v5 = sub_C90D90(a1, v4);
  v8 = v5;
  v91 = v5;
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 648) && (unsigned __int8)sub_B753A0(a2, &v105, v6, v7) )
  {
    if ( !*(_DWORD *)(v8 + 288)
      || (v105 = (__int64 (__fastcall **)())(a2 & 0xFFFFFFFFFFFFFFFBLL), (unsigned __int8)sub_CE4700(a1, &v105))
      && (v102 = **(_QWORD **)(a2 + 120),
          v51 = *(unsigned int *)sub_C943D0(a1 + 8, &v102, v47, v48, v49, v50),
          v105 = (__int64 (__fastcall **)())(a2 & 0xFFFFFFFFFFFFFFFBLL),
          (unsigned __int8)sub_D64FA0(a1, 13, v51, &v105))
      && (v103 = a2 & 0xFFFFFFFFFFFFFFFBLL, (unsigned __int8)sub_CE3230(a1, &v103))
      && (v104 = a2 & 0xFFFFFFFFFFFFFFFBLL, (unsigned __int8)sub_CE3FA0(a1, &v104)) )
    {
      v105 = (__int64 (__fastcall **)())(a2 & 0xFFFFFFFFFFFFFFFBLL);
      return sub_CDB9D0(a1, &v105);
    }
    return 0;
  }
  v95 = a1 + 1376;
  v9 = *(unsigned int *)(a1 + 1384);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1388) )
  {
    sub_22134E0(a1 + 1376, a1 + 1392, v9 + 1, 16);
    v9 = *(unsigned int *)(a1 + 1384);
  }
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v9);
  *v10 = 0;
  v10[1] = 0;
  ++*(_DWORD *)(a1 + 1384);
  v84 = sub_B751E0(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
  v11 = sub_B751E0(a2);
  if ( v84 == v11 )
  {
LABEL_25:
    v33 = *(__int64 (**)(void))(*(_QWORD *)a2 + 64LL);
    if ( (char *)v33 == (char *)sub_6CEBD0 )
      v34 = sub_B5BA10((_QWORD *)a2, &v105, (__int64)sub_6CEBD0, v12, v13, v14);
    else
      v34 = v33();
    if ( !v34 || (result = sub_CB8E80(v2, v34, v35, v36, v37), (_BYTE)result) )
    {
      v105 = nullptr;
      result = sub_CDB9D0(v2, &v105);
    }
    goto LABEL_15;
  }
  v15 = (__int64 *)v11;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v2 + 1328);
    v17 = *v15;
    v106 = v2;
    v108 = 0;
    v107 = v16;
    v109 = 1;
    *(_QWORD *)(v2 + 1328) = &v105;
    v111 = 0;
    v105 = &off_2B21738;
    v18 = *(_QWORD *)(v17 + 8);
    if ( ((*(__int64 *)v17 >> 1) & 3) == 1 )
    {
      v19 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19 )
      {
        v20 = sub_E0DFD0(v91, v19);
        v21 = *(_QWORD *)(v18 + 8);
        v22 = (unsigned int *)v20;
        v23 = *(_DWORD *)(v20 + 8);
        if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_14;
        v45 = 13;
        if ( (*(_BYTE *)(v18 + 1) & 6) == 0 )
        {
          v60 = sub_CC2440(*(_QWORD *)(v2 + 1264), v21);
          if ( !BYTE4(v60) )
          {
            v98 = v98 & 0xFFFFFFFF00000000LL | 1;
            v99 = v22[2] | v99 & 0xFFFFFFFF00000000LL;
            sub_C963D0(v95, (unsigned int)v98, v99);
            v104 = v18 | 4;
            if ( !(unsigned __int8)sub_CE27D0(v2, v23, &v104) || !(unsigned __int8)sub_CB2E50(v2, v18, v61, v62, v63) )
              goto LABEL_56;
            v104 = v18 | 4;
            v30 = sub_CDD1D0(v2, &v104);
            --*(_DWORD *)(v2 + 1384);
            goto LABEL_21;
          }
          v45 = v60;
        }
        v85 = v45;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 48LL))(v2, v18) )
          goto LABEL_14;
        v46 = (*(_BYTE *)(*(_QWORD *)v22 + 68LL) & 1) == 0;
        v104 = v18 | 4;
        if ( v46 )
          v30 = sub_D040B0(v2, v85, v23, &v104);
        else
          v30 = sub_D2B340(v2, v85, v22, v23, &v104);
LABEL_21:
        if ( !v30 )
          goto LABEL_14;
        goto LABEL_22;
      }
    }
    v25 = sub_B74D90(v17);
    if ( v25 )
    {
      v26 = sub_F3F530(v25);
      if ( (*(_BYTE *)(v17 + 28) & 2) != 0 )
      {
        v104 = v18 | 4;
        if ( !(unsigned __int8)sub_CE28C0(v2, v26, &v104) )
          goto LABEL_14;
      }
      else
      {
        v44 = sub_E0E140(v91, v26);
        v104 = v18 | 4;
        if ( !(unsigned __int8)sub_CE26F0(v2, *(unsigned int *)(v44 + 8), &v104) )
          goto LABEL_14;
      }
      if ( !(unsigned __int8)sub_CB2E50(v2, v18, v27, v28, v29) )
        goto LABEL_14;
      v104 = v18 | 4;
      v30 = sub_CDD1D0(v2, &v104);
      goto LABEL_21;
    }
    v38 = *(_QWORD *)v17;
    if ( ((*(__int64 *)v17 >> 1) & 3) != 2
      || (v39 = v38 & 0xFFFFFFFFFFFFFFF8LL, v93 = v38 & 0xFFFFFFFFFFFFFFF8LL, (v38 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
    {
      v40 = v18 | 4;
      v104 = v40;
      if ( !(unsigned __int8)sub_CE4700(v2, &v104)
        || !(unsigned __int8)sub_CB2E50(v2, *(_QWORD *)(v17 + 8), v41, v42, v43) )
      {
        goto LABEL_14;
      }
      v104 = v40;
      v30 = sub_CE3FA0(v2, &v104);
      goto LABEL_21;
    }
    v52 = *(__int64 **)(v39 + 56);
    v86 = &v52[*(unsigned int *)(v39 + 64)];
    if ( v52 == v86 )
    {
      v64 = 0;
      v53 = 0;
    }
    else
    {
      v96 = v18;
      v53 = 0;
      v54 = v2;
      do
      {
        v58 = *v52;
        v59 = *(_QWORD *)(*v52 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(*v52 + 16) & 4) != 0 )
          v59 = *(_QWORD *)v59;
        if ( (*(_BYTE *)(v59 + 8) & 0x7Fu) - 58 <= 3 )
          v55 = v59 - 64;
        else
          v55 = 0;
        v56 = sub_E05EB0(*(_QWORD *)(v54 + 1272), v55);
        ++v52;
        v57 = sub_E0DFD0(v56, v58);
        v53 += *(_DWORD *)(v57 + 8);
      }
      while ( v86 != v52 );
      v2 = v54;
      v18 = v96;
      v64 = v57;
    }
    v65 = *(_QWORD *)(v18 + 8);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_14;
    v66 = 13;
    if ( (*(_BYTE *)(v18 + 1) & 6) != 0 )
      goto LABEL_61;
    v89 = v64;
    v76 = sub_CC2440(*(_QWORD *)(v2 + 1264), v65);
    v64 = v89;
    if ( BYTE4(v76) )
    {
      v66 = v76;
LABEL_61:
      v97 = v66;
      v87 = v64;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 48LL))(v2, v18) )
        goto LABEL_14;
      v67 = v18 | 4;
      v46 = (*(_BYTE *)(*(_QWORD *)v87 + 68LL) & 1) == 0;
      v104 = v18 | 4;
      if ( v46 )
        v68 = sub_D040B0(v2, v97, v53, &v104);
      else
        v68 = sub_D2B340(v2, v97, v87, v53, &v104);
      goto LABEL_64;
    }
    v77 = v100 & 0xFFFFFFFF00000000LL | 1;
    v100 = v77;
    v78 = *(unsigned int *)(v89 + 8) | v101 & 0xFFFFFFFF00000000LL;
    v79 = *(unsigned int *)(v2 + 1384);
    v101 = v78;
    if ( v79 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 1388) )
    {
      v90 = v77;
      sub_22134E0(v95, v2 + 1392, v79 + 1, 16);
      v79 = *(unsigned int *)(v2 + 1384);
      v77 = v90;
    }
    v80 = (unsigned __int64 *)(*(_QWORD *)(v2 + 1376) + 16 * v79);
    v80[1] = v78;
    *v80 = v77;
    v67 = v18 | 4;
    ++*(_DWORD *)(v2 + 1384);
    v104 = v18 | 4;
    if ( !(unsigned __int8)sub_CE27D0(v2, v53, &v104) || !(unsigned __int8)sub_CB2E50(v2, v18, v81, v82, v83) )
    {
LABEL_56:
      --*(_DWORD *)(v2 + 1384);
      goto LABEL_14;
    }
    v104 = v18 | 4;
    v68 = sub_CDD1D0(v2, &v104);
    --*(_DWORD *)(v2 + 1384);
LABEL_64:
    if ( !v68 )
      goto LABEL_14;
    v69 = *(__int64 **)(v93 + 56);
    v88 = (__int64)&v69[*(unsigned int *)(v93 + 64) - 1];
    if ( v69 != (__int64 *)v88 )
      break;
LABEL_22:
    if ( v111 )
    {
      v31 = sub_C97A90((__int64)&v105, 0);
      v104 = 4;
      v32 = v31;
      sub_CDBA30(v106, v110, &v104);
      if ( !v32 )
        goto LABEL_14;
    }
    ++v15;
    v105 = &off_2B21738;
    sub_C977B0((__int64)&v105);
    if ( (__int64 *)v84 == v15 )
      goto LABEL_25;
  }
  v94 = v15;
  v70 = 0;
  while ( 1 )
  {
    v71 = *v69;
    v72 = *(_QWORD *)(*v69 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*v69 + 16) & 4) != 0 )
      v72 = *(_QWORD *)v72;
    v73 = *(_BYTE *)(v72 + 8);
    v74 = v72 - 64;
    if ( (v73 & 0x7Fu) - 58 >= 4 )
      v74 = 0;
    v75 = sub_E05EB0(*(_QWORD *)(v2 + 1272), v74);
    v70 += *(_DWORD *)(sub_E0DFD0(v75, v71) + 8);
    v104 = v67;
    if ( !(unsigned __int8)sub_CE27D0(v2, v70, &v104) )
      break;
    v104 = v67;
    if ( !(unsigned __int8)sub_CDD1D0(v2, &v104) )
      break;
    if ( (__int64 *)v88 == ++v69 )
    {
      v15 = v94;
      goto LABEL_22;
    }
  }
LABEL_14:
  v105 = &off_2B21738;
  sub_C977B0((__int64)&v105);
  result = 0;
LABEL_15:
  --*(_DWORD *)(v2 + 1384);
  return result;
}

