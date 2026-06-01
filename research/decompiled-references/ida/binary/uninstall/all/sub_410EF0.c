__int64 __fastcall sub_410EF0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v6; // r12
  __int64 v8; // rsi
  int v9; // r13d
  int v10; // edx
  struct tm *v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int tm_year; // eax
  int v16; // r13d
  int v17; // r13d
  int *v18; // rax
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edx
  unsigned int v24; // eax
  int v25; // kr00_4
  int v26; // ecx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int *v34; // rdi
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int *v52; // rax
  __int64 v53; // rax
  int v54; // r8d
  int v55; // r9d
  int v56; // [rsp+Ch] [rbp-10Ch] BYREF
  __int64 v57; // [rsp+10h] [rbp-108h] BYREF
  char src; // [rsp+18h] [rbp-100h] BYREF
  char v59[2]; // [rsp+19h] [rbp-FFh] BYREF
  char v60[2]; // [rsp+1Bh] [rbp-FDh] BYREF
  char v61[3]; // [rsp+1Dh] [rbp-FBh] BYREF
  time_t timer; // [rsp+20h] [rbp-F8h] BYREF
  int v63; // [rsp+2Ch] [rbp-ECh] BYREF
  _QWORD *v64; // [rsp+30h] [rbp-E8h] BYREF
  int v65; // [rsp+3Ch] [rbp-DCh] BYREF
  _DWORD v66[8]; // [rsp+40h] [rbp-D8h] BYREF
  int v67; // [rsp+60h] [rbp-B8h]
  int v68; // [rsp+64h] [rbp-B4h]
  int v69; // [rsp+6Ch] [rbp-ACh]
  unsigned int v70; // [rsp+7Ch] [rbp-9Ch]
  int v71; // [rsp+80h] [rbp-98h]
  int v72; // [rsp+84h] [rbp-94h]
  __int64 v73; // [rsp+90h] [rbp-88h] BYREF
  __int64 v74; // [rsp+98h] [rbp-80h]
  int v75; // [rsp+A0h] [rbp-78h] BYREF
  int *v76; // [rsp+A8h] [rbp-70h]
  unsigned int v77; // [rsp+B0h] [rbp-68h]
  int v78; // [rsp+B4h] [rbp-64h]
  unsigned int v79; // [rsp+B8h] [rbp-60h]
  unsigned int v80; // [rsp+BCh] [rbp-5Ch]
  unsigned int v81; // [rsp+C0h] [rbp-58h]
  unsigned int v82; // [rsp+C4h] [rbp-54h]
  unsigned int tm_mday; // [rsp+C8h] [rbp-50h]
  unsigned int v84; // [rsp+CCh] [rbp-4Ch]
  unsigned int v85; // [rsp+D0h] [rbp-48h]
  unsigned int v86; // [rsp+D4h] [rbp-44h]

  v6 = *(_QWORD **)(a1 + 8);
  if ( a3 != 4 )
  {
    sub_458930(a2, 1, a4, "seconds tzdata changeover");
    return 1;
  }
  if ( (unsigned int)sub_47C250(a2, a4[1], &v73) || (unsigned int)sub_47C180(a2, a4[3], &v65) )
    return 1;
  if ( *(char ***)(a4[1] + 24LL) == &off_6560A0 )
  {
    sub_48AFD0(a2, v6[12]);
    return 1;
  }
  v8 = a4[2];
  v9 = v65;
  if ( *(_UNKNOWN ***)(v8 + 24) == &off_655E20 )
  {
    v48 = *(_QWORD *)(v8 + 32);
    v49 = (_QWORD *)(v48 + 16);
    v10 = *(_DWORD *)(v48 + 8);
    v64 = v49;
    v63 = v10;
  }
  else
  {
    if ( (unsigned int)sub_46FD90(a2, v8, &v63, &v64) )
      return 1;
    v10 = v63;
  }
  if ( v10 )
  {
    v50 = sub_40FFF0(a2, v73, v10, v64);
    if ( v50 )
    {
      if ( *(_UNKNOWN ***)(v50 + 24) == &off_655E20 )
      {
        v53 = *(_QWORD *)(v50 + 32);
        v51 = v53 + 16;
        LODWORD(v53) = *(_DWORD *)(v53 + 8);
        v57 = v51;
        v56 = v53;
LABEL_37:
        if ( !(unsigned int)sub_47C180(a2, *(_QWORD *)(v51 + 8), &v75) )
        {
          v52 = *(int **)(v57 + 24);
          ++*v52;
          v76 = v52;
          v74 = v73 + v75;
LABEL_17:
          v19 = 0;
          goto LABEL_18;
        }
        goto LABEL_38;
      }
      if ( !(unsigned int)sub_46FD90(a2, v50, &v56, &v57) )
      {
        v51 = v57;
        goto LABEL_37;
      }
    }
LABEL_38:
    v19 = 1;
    goto LABEL_18;
  }
  timer = v73;
  sub_410E30();
  v11 = (struct tm *)sub_496130(&qword_65A468, 56);
  localtime_r(&timer, v11);
  if ( v11 )
  {
    tm_year = v11->tm_year;
    v78 = 0;
    v80 = tm_year + 1900;
    v82 = v11->tm_mon + 1;
    tm_mday = v11->tm_mday;
    sub_410150(&v73, v9);
    v16 = v11->tm_sec + 60 * (v11->tm_min + 60 * (v11->tm_hour + 24 * v77)) - 413405696 - v73;
    v74 = v11->tm_sec + 60 * (v11->tm_min + 60 * (v11->tm_hour + 24LL * (int)v77)) - 0x3118A41200LL;
    v75 = v16;
    if ( v16 < 0 )
    {
      v16 = -v16;
      src = 45;
    }
    else
    {
      src = 43;
    }
    sprintf(v59, "%02d", v16 / 3600);
    v17 = v16 % 3600;
    sprintf(v60, "%02d", v17 / 60);
    if ( v17 % 60 > 0 )
      sprintf(v61, "%02d", v17 % 60);
    v18 = (int *)sub_48DF10(&src, 0xFFFFFFFF);
    ++*v18;
    v76 = v18;
    goto LABEL_17;
  }
  sub_48B710(a2, (unsigned int)"localtime failed (clock value may be too large/small to represent)", 0, v12, v13, v14);
  sub_48BC40(a2, (unsigned int)"CLOCK", (unsigned int)"localtimeFailed", 0, v54, v55);
  v19 = 1;
LABEL_18:
  if ( v19 )
    return 1;
  v77 = (v74 + 0x3118A41200LL) / 86400;
  sub_40FE80(&v73, v65);
  sub_4105B0(&v73);
  v20 = v65;
  v67 = v77 - 3;
  sub_40FE80(v66, v65);
  if ( v68 == 1 )
    v21 = v69 - 1;
  else
    v21 = v69 + 1;
  v70 = v21;
  v71 = 1;
  v72 = 1;
  sub_410600(v66, v20);
  v22 = v77;
  v23 = v67;
  if ( (int)v77 < v67 )
  {
    v24 = v70 + 1;
    if ( v68 != 1 )
      v24 = v70 - 1;
    v70 = v24;
    sub_410600(v66, v20);
    v23 = v67;
    v22 = v77;
  }
  v84 = v70;
  v25 = v22 - v23;
  v26 = v22 - v23 + 1;
  v85 = v25 / 7 + 1;
  v27 = (unsigned int)(v26 / 7);
  v28 = v26 % 7;
  if ( v26 % 7 <= 0 )
    v28 += 7;
  v86 = v28;
  v29 = sub_4401E0();
  v31 = sub_47CDC0(v74, v27, v30);
  sub_440560(0, v29, v6[16], v31);
  v33 = sub_47CDC0(v73, v29, v32);
  sub_440560(0, v29, v6[18], v33);
  sub_440560(0, v29, v6[19], v76);
  v34 = v76;
  v35 = *v76 - 1;
  v36 = *v76 == 1;
  *v76 = v35;
  if ( v35 < 0 || v36 )
    sub_47B120(v34);
  v37 = sub_47BD00((unsigned int)v75);
  sub_440560(0, v29, v6[20], v37);
  v38 = sub_47BD00(v77);
  sub_440560(0, v29, v6[15], v38);
  v39 = sub_47BD00(v79);
  sub_440560(0, v29, v6[11], v39);
  v40 = v6 + 2;
  if ( !v78 )
    v40 = v6 + 5;
  sub_440560(0, v29, v6[9], *v40);
  v41 = sub_47BD00(v80);
  sub_440560(0, v29, v6[21], v41);
  v42 = sub_47BD00(v81);
  sub_440560(0, v29, v6[8], v42);
  v43 = sub_47BD00(v82);
  sub_440560(0, v29, v6[17], v43);
  v44 = sub_47BD00(tm_mday);
  sub_440560(0, v29, v6[6], v44);
  v45 = sub_47BD00(v84);
  sub_440560(0, v29, v6[14], v45);
  v46 = sub_47BD00(v85);
  sub_440560(0, v29, v6[13], v46);
  v47 = sub_47BD00(v86);
  sub_440560(0, v29, v6[7], v47);
  sub_48AFD0(a2, v29);
  return 0;
}

