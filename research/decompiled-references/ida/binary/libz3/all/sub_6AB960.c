__int64 __fastcall sub_6AB960(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // r14
  int v12; // r9d
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // r9d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  int v24; // r9d
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v31; // rax
  int v32; // [rsp-8h] [rbp-338h]
  int v33; // [rsp+0h] [rbp-330h]
  int v34; // [rsp+0h] [rbp-330h]
  _QWORD *v35; // [rsp+8h] [rbp-328h]
  int v36; // [rsp+8h] [rbp-328h]
  __int64 v37; // [rsp+8h] [rbp-328h]
  unsigned int v38; // [rsp+10h] [rbp-320h]
  int v39; // [rsp+10h] [rbp-320h]
  int v40; // [rsp+10h] [rbp-320h]
  int v41[2]; // [rsp+18h] [rbp-318h]
  int v42; // [rsp+18h] [rbp-318h]
  __int64 v43; // [rsp+18h] [rbp-318h]
  int v44; // [rsp+20h] [rbp-310h]
  int v45; // [rsp+20h] [rbp-310h]
  int v46; // [rsp+28h] [rbp-308h] BYREF
  int v47[2]; // [rsp+30h] [rbp-300h] BYREF
  void *v48; // [rsp+38h] [rbp-2F8h]
  int v49; // [rsp+40h] [rbp-2F0h]
  void *v50; // [rsp+48h] [rbp-2E8h]
  int v51; // [rsp+50h] [rbp-2E0h]
  int v52; // [rsp+58h] [rbp-2D8h]
  int v53; // [rsp+60h] [rbp-2D0h]
  int v54; // [rsp+68h] [rbp-2C8h]
  int v55; // [rsp+70h] [rbp-2C0h]
  int v56; // [rsp+78h] [rbp-2B8h]
  int v57; // [rsp+80h] [rbp-2B0h]
  int v58; // [rsp+88h] [rbp-2A8h]
  int v59; // [rsp+90h] [rbp-2A0h]
  int v60; // [rsp+98h] [rbp-298h]
  int v61; // [rsp+A0h] [rbp-290h]
  void *v62; // [rsp+A8h] [rbp-288h]
  int v63; // [rsp+B0h] [rbp-280h]
  __int64 v64; // [rsp+B8h] [rbp-278h]
  int v65; // [rsp+C0h] [rbp-270h]
  int v66[2]; // [rsp+D0h] [rbp-260h] BYREF
  _BYTE *v67; // [rsp+160h] [rbp-1D0h]
  int v68; // [rsp+168h] [rbp-1C8h]
  __int64 v69; // [rsp+170h] [rbp-1C0h]
  _QWORD v70[19]; // [rsp+178h] [rbp-1B8h] BYREF
  int v71; // [rsp+210h] [rbp-120h]
  __int64 (__fastcall **v72)(); // [rsp+218h] [rbp-118h] BYREF
  int v73; // [rsp+2A8h] [rbp-88h]
  __int64 v74; // [rsp+2B0h] [rbp-80h]
  __int64 v75; // [rsp+2B8h] [rbp-78h]
  __int64 v76; // [rsp+2C0h] [rbp-70h]
  __int64 v77; // [rsp+2C8h] [rbp-68h]
  __int64 v78; // [rsp+2D0h] [rbp-60h]
  __int64 v79; // [rsp+2D8h] [rbp-58h]
  __int64 v80; // [rsp+2E0h] [rbp-50h]
  _BYTE v81[72]; // [rsp+2E8h] [rbp-48h] BYREF

  v35 = a2;
  *(_QWORD *)v41 = a2[1];
  v5 = *(unsigned int *)(a1 + 20);
  if ( (_DWORD)v5 )
  {
    v6 = a1;
    v7 = a1 + 8 * v5;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v6 + 80);
      sub_180C5A0(&v46, "x");
      v12 = v11;
      LODWORD(v11) = v41[0];
      v13 = sub_15E3D10(
              v41[0],
              (int)&v46,
              (int)&qword_18D6CD0,
              0,
              0,
              v12,
              1,
              v32,
              v33,
              (int)v35,
              v38,
              v41[0],
              v44,
              v46,
              v47[0],
              (int)v48,
              v49,
              (int)v50,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
      v16 = sub_15DC610(v11, v13, 0, 0, v14, v15, v34, v36, v39, v42, v45, v46, v47[0], (int)v48, v49, v50);
      v17 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v18 = *(_QWORD **)(a3 + 8);
      if ( !v18 )
        break;
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0((__int64 *)v66, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v66);
          sub_233E40((__int64)v66);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (3 * v19 + 1) >> 1;
        v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
        v23 = v22[1];
        LODWORD(v18) = (_DWORD)v22 + 8;
        v6 += 8;
        *(_QWORD *)(a3 + 8) = v22 + 2;
        *v22 = v38;
        *(_QWORD *)&v22[2 * v23 + 2] = v17;
        v22[1] = v23 + 1;
        if ( v7 == v6 )
          goto LABEL_12;
      }
      else
      {
        v8 = v19;
        v9 = v19 + 1;
        v10 = &v18[v8];
LABEL_4:
        v6 += 8;
        *v10 = v17;
        *((_DWORD *)v18 - 1) = v9;
        if ( v7 == v6 )
          goto LABEL_12;
      }
    }
    v31 = (_QWORD *)sub_186B270(0x18u);
    v18 = v31 + 1;
    *v31 = 2;
    v9 = 1;
    *(_QWORD *)(a3 + 8) = v18;
    v10 = v18;
    goto LABEL_4;
  }
  v18 = *(_QWORD **)(a3 + 8);
LABEL_12:
  v40 = (int)v18;
  sub_1584DD0(v66, *(_QWORD *)v41, 0);
  *(_QWORD *)v66 = &off_1C4CA60;
  v67 = v81;
  v68 = 0;
  v69 = 0;
  sub_1584DD0(v70, *(_QWORD *)v41, 0);
  v70[18] = 0;
  v71 = 0;
  v70[0] = &off_1C61DB8;
  sub_1584DD0(&v72, *(_QWORD *)v41, 0);
  v73 = 0;
  v74 = 0;
  v75 = *(_QWORD *)v41;
  v72 = &off_1C61DE0;
  v25 = *(_QWORD *)(a3 + 8);
  v76 = 0;
  v77 = *(_QWORD *)v41;
  v78 = 0;
  v79 = *(_QWORD *)v41;
  v80 = 0;
  *(_QWORD *)v66 = &off_1C4CA80;
  v81[8] = 1;
  if ( v25 )
    v26 = *(_DWORD *)(v25 - 4);
  else
    v26 = 0;
  sub_157BE40((int)v47, (int)v66, *v35, v26, v40, v24, v33, (__int64)v35, v40, v41[0], v44, v46, *(__int64 *)v47, v48);
  v27 = *(_QWORD *)v47;
  sub_1584DD0(v47, v43, 0);
  v65 = 0;
  *(_QWORD *)v47 = &off_1C61DE0;
  v28 = *(_QWORD *)(a3 + 8);
  if ( v28 )
    v29 = *(unsigned int *)(v28 - 4);
  else
    v29 = 0;
  sub_1585DF0(v47, v27, v29, v37);
  *(_QWORD *)v47 = &qword_1C637E8;
  sub_15841B0(v47);
  *(_QWORD *)v66 = &off_1C4CA80;
  sub_267D20(v66);
  return sub_6A99C0(v27, v43);
}

