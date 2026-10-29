__int64 __fastcall sub_43EF40(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // rdi
  int v16; // eax
  bool v17; // zf
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+4h] [rbp-104h] BYREF
  int v51; // [rsp+8h] [rbp-100h] BYREF
  int v52; // [rsp+Ch] [rbp-FCh] BYREF
  _QWORD v53[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+20h] [rbp-E8h]
  __int64 v55; // [rsp+28h] [rbp-E0h]
  __int64 v56; // [rsp+30h] [rbp-D8h]
  int v57; // [rsp+38h] [rbp-D0h]
  signed __int64 v58; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+48h] [rbp-C0h]
  __int64 v60; // [rsp+50h] [rbp-B8h]
  int v61; // [rsp+58h] [rbp-B0h]
  int v62; // [rsp+5Ch] [rbp-ACh]
  __int64 v63; // [rsp+60h] [rbp-A8h]
  int v64; // [rsp+68h] [rbp-A0h]
  int v65; // [rsp+6Ch] [rbp-9Ch]
  __int64 v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+78h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-88h]
  int v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+90h] [rbp-78h]
  int v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-68h]
  __int64 v73; // [rsp+A8h] [rbp-60h]
  int v74; // [rsp+B0h] [rbp-58h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]

  if ( a3 != 5 )
  {
    sub_458930(a2, 1, a4, "stringToParse baseYear baseMonth baseDay");
    return 1;
  }
  v7 = sub_47B3B0(a4[1]);
  v8 = a4[2];
  v76 = v7;
  v75 = v7;
  v57 = 0;
  if ( (unsigned int)sub_47C180(a2, v8, &v52) )
    return 1;
  if ( (unsigned int)sub_47C180(a2, a4[3], &v51) )
    return 1;
  v9 = a4[4];
  if ( (unsigned int)sub_47C180(a2, v9, &v50) )
    return 1;
  v62 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 2;
  v65 = 0;
  v63 = 0;
  v54 = v52;
  v64 = 2;
  v71 = 0;
  v70 = 0;
  v74 = 0;
  v72 = 0;
  v73 = 0;
  v55 = v51;
  v69 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v77 = 0;
  v56 = v50;
  v11 = (_DWORD *)sub_47B0B0(a2, v9, v10);
  ++*v11;
  v53[0] = v11;
  v53[1] = "";
  v12 = sub_43DA80((__int64)v53);
  if ( v12 == 1 )
  {
    v20 = v53[0];
LABEL_21:
    sub_48AFD0(a2, v20);
    v21 = v53[0];
    v22 = *(_DWORD *)v53[0] - 1;
    v17 = *(_DWORD *)v53[0] == 1;
    *(_DWORD *)v53[0] = v22;
    if ( v22 < 0 || v17 )
      sub_47B120(v21);
    return 1;
  }
  v14 = "memory exhausted";
  if ( v12 == 2 )
  {
LABEL_20:
    v20 = sub_48DF10(v14, 0xFFFFFFFF);
    goto LABEL_21;
  }
  if ( v12 )
  {
    v14 = "Unknown status returned from date parser. Please report this error as a bug in Tcl.";
    goto LABEL_20;
  }
  v15 = v53[0];
  v16 = *(_DWORD *)v53[0] - 1;
  v17 = *(_DWORD *)v53[0] == 1;
  *(_DWORD *)v53[0] = v16;
  if ( v16 < 0 || v17 )
    sub_47B120(v15);
  v18 = "more than one date in string";
  if ( v57 > 1 )
    goto LABEL_18;
  v18 = "more than one time of day in string";
  if ( v62 > 1 )
    goto LABEL_18;
  v18 = "more than one time zone in string";
  if ( v65 > 1 )
    goto LABEL_18;
  v18 = "more than one weekday in string";
  if ( v74 > 1 )
    goto LABEL_18;
  if ( v71 > 1 )
  {
    v18 = "more than one ordinal month in string";
LABEL_18:
    v19 = sub_48DF10(v18, 0xFFFFFFFF);
    sub_48AFD0(a2, v19);
    return 1;
  }
  v23 = sub_47B0B0("more than one weekday in string", 0xFFFFFFFFLL, v13);
  v25 = sub_47B0B0("more than one weekday in string", 0xFFFFFFFFLL, v24);
  if ( v57 )
  {
    v44 = sub_47BD00((unsigned int)v54);
    sub_46FBF0(a2, v25, v44);
    v45 = sub_47BD00((unsigned int)v55);
    sub_46FBF0(a2, v25, v45);
    v46 = sub_47BD00((unsigned int)v56);
    sub_46FBF0(a2, v25, v46);
  }
  sub_46FBF0(a2, v23, v25);
  if ( !v62 )
  {
    v28 = sub_47B0B0(a2, v23, v26);
    goto LABEL_31;
  }
  if ( ((unsigned __int64)v60 >> 63) | (v59 > 0x3B) || v60 > 59 )
  {
    v27 = -1;
  }
  else
  {
    if ( v61 == 1 )
    {
      v27 = -1;
      if ( (unsigned __int64)(v58 - 1) <= 0xB )
        v27 = v60 + 60 * (v59 + 60 * (v58 % 12)) + 43200;
      goto LABEL_30;
    }
    if ( v61 )
    {
      v27 = -1;
      if ( v61 != 2 || (unsigned __int64)v58 > 0x17 )
        goto LABEL_30;
      LODWORD(v47) = 15 * v58;
    }
    else
    {
      v27 = -1;
      if ( (unsigned __int64)(v58 - 1) > 0xB )
        goto LABEL_30;
      v47 = 15 * (v58 % 12);
    }
    v27 = v60 + 60 * (v59 + 4 * v47);
  }
LABEL_30:
  v28 = sub_47BD00(v27);
LABEL_31:
  sub_46FBF0(a2, v23, v28);
  v30 = sub_47B0B0(a2, v23, v29);
  if ( v65 )
  {
    v42 = sub_47BD00((unsigned int)-(int)v63);
    sub_46FBF0(a2, v30, v42);
    v43 = sub_47BD00((unsigned int)(1 - v64));
    sub_46FBF0(a2, v30, v43);
  }
  sub_46FBF0(a2, v23, v30);
  v32 = sub_47B0B0(a2, v23, v31);
  if ( v69 )
  {
    v39 = sub_47BD00(v66);
    sub_46FBF0(a2, v32, v39);
    v40 = sub_47BD00(v67);
    sub_46FBF0(a2, v32, v40);
    v41 = sub_47BD00(v68);
    sub_46FBF0(a2, v32, v41);
  }
  sub_46FBF0(a2, v23, v32);
  v34 = sub_47B0B0(a2, v23, v33);
  if ( v74 && !v57 )
  {
    v35 = sub_47BD00(v72);
    sub_46FBF0(a2, v34, v35);
    v36 = sub_47BD00(v73);
    sub_46FBF0(a2, v34, v36);
  }
  sub_46FBF0(a2, v23, v34);
  v38 = sub_47B0B0(a2, v23, v37);
  if ( v71 )
  {
    v48 = sub_47BD00(v70);
    sub_46FBF0(a2, v38, v48);
    v49 = sub_47BD00(v55);
    sub_46FBF0(a2, v38, v49);
  }
  sub_46FBF0(a2, v23, v38);
  sub_48AFD0(a2, v23);
  return 0;
}

