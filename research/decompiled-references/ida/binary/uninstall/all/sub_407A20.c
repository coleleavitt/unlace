__int64 sub_407A20()
{
  __int64 v0; // r12
  _DWORD *v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rbp
  int v34; // r8d
  int v35; // r9d
  char **v36; // rbx
  const char *v37; // rdx
  int v38; // edx
  int v39; // ecx
  __int64 v40; // rbx
  int v41; // r8d
  int v42; // r9d
  char **v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v53; // rax
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  int v59; // [rsp+Ch] [rbp-4Ch] BYREF
  char v60[72]; // [rsp+10h] [rbp-48h] BYREF

  sub_4489A0();
  v0 = sub_40FB00(1232);
  *(_QWORD *)(v0 + 8) = 0;
  *(_DWORD *)(v0 + 16) = 0;
  *(_QWORD *)v0 = v0 + 472;
  v1 = (_DWORD *)sub_47B0B0();
  ++*v1;
  *(_QWORD *)(v0 + 680) = v1;
  *(_QWORD *)(v0 + 32) = sub_487800(v0);
  *(_QWORD *)(v0 + 40) = 0;
  *(_QWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 56) = 0;
  *(_DWORD *)(v0 + 152) = 0;
  *(_DWORD *)(v0 + 156) = 1000;
  *(_QWORD *)(v0 + 160) = 0;
  *(_QWORD *)(v0 + 168) = 0;
  *(_QWORD *)(v0 + 952) = 0;
  *(_QWORD *)(v0 + 976) = sub_40FB00(88);
  *(_QWORD *)(v0 + 984) = sub_40FB00(88);
  *(_QWORD *)(v0 + 1000) = sub_40FB00(88);
  v2 = sub_40FB00(88);
  v3 = *(_QWORD *)(v0 + 976);
  *(_QWORD *)(v0 + 992) = v2;
  sub_457B90(v3, 1);
  sub_457B90(*(_QWORD *)(v0 + 984), 1);
  sub_457B90(*(_QWORD *)(v0 + 1000), 1);
  sub_457B90(*(_QWORD *)(v0 + 992), 1);
  *(_QWORD *)(v0 + 1008) = 0;
  *(_QWORD *)(v0 + 176) = 0;
  *(_QWORD *)(v0 + 720) = 0;
  *(_QWORD *)(v0 + 728) = 0;
  v4 = sub_496740();
  *(_QWORD *)(v0 + 736) = v4;
  *(_DWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = sub_40FB00(12);
  strcpy(*(char **)(*(_QWORD *)(v0 + 736) + 8LL), "::errorInfo");
  v5 = *(_QWORD *)(v0 + 736);
  *(_QWORD *)(v0 + 744) = 0;
  ++*(_DWORD *)v5;
  *(_DWORD *)(v5 + 16) = 11;
  *(_QWORD *)(v5 + 24) = 0;
  v6 = sub_496740();
  *(_QWORD *)(v0 + 752) = v6;
  *(_DWORD *)v6 = 0;
  *(_QWORD *)(v6 + 8) = sub_40FB00(12);
  strcpy(*(char **)(*(_QWORD *)(v0 + 752) + 8LL), "::errorCode");
  v7 = *(_QWORD *)(v0 + 752);
  *(_QWORD *)(v0 + 192) = 0;
  *(_QWORD *)(v0 + 200) = 0;
  *(_QWORD *)(v0 + 208) = 0;
  ++*(_DWORD *)v7;
  *(_DWORD *)(v7 + 16) = 11;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v0 + 760) = 1;
  *(_DWORD *)(v0 + 184) = 0;
  *(_DWORD *)(v0 + 216) = 0;
  *(_DWORD *)(v0 + 220) = 0;
  sub_457B90(v0 + 224, 0);
  *(_QWORD *)(v0 + 312) = 0;
  v8 = getenv("TCL_PKG_PREFER_LATEST");
  *(_DWORD *)(v0 + 320) = 0;
  *(_DWORD *)(v0 + 1016) = v8 == nullptr;
  sub_470800(v0 + 336);
  *(_DWORD *)(v0 + 392) = 0;
  *(_QWORD *)(v0 + 400) = 0;
  *(_QWORD *)(v0 + 408) = 0;
  *(_DWORD *)(v0 + 324) = 0;
  *(_QWORD *)(v0 + 416) = 0;
  *(_DWORD *)(v0 + 424) = 0;
  *(_QWORD *)(v0 + 440) = 0;
  *(_DWORD *)(v0 + 712) = 0;
  *(_QWORD *)(v0 + 696) = 0;
  *(_QWORD *)(v0 + 704) = 0;
  *(_QWORD *)(v0 + 448) = 0;
  *(_QWORD *)(v0 + 456) = 0;
  v9 = (_DWORD *)sub_47B0B0();
  ++*v9;
  *(_QWORD *)(v0 + 464) = v9;
  *(_BYTE *)(v0 + 472) = 0;
  *(_QWORD *)(v0 + 688) = j__pthread_self();
  if ( getenv("TCL_INTERP_DEBUG_FRAME") )
    *(_DWORD *)(v0 + 424) |= 0x10u;
  sub_457B90(v0 + 1024, 1);
  sub_457B90(v0 + 1112, 1);
  *(_QWORD *)(v0 + 40) = 0;
  v10 = sub_473FB0(v0, "", 0, 0);
  *(_QWORD *)(v0 + 40) = v10;
  if ( !v10 )
    sub_47D740((unsigned int)"Tcl_CreateInterp: can't create global namespace", (unsigned int)"", v11, v12, v13, v14);
  v15 = sub_40FB00(96);
  if ( (unsigned int)sub_473440(v0, v15, *(_QWORD *)(v0 + 40), 0) )
    sub_47D740((unsigned int)"Tcl_CreateInterp: failed to push the root stack frame", v15, v16, v17, v18, v19);
  *(_DWORD *)(v15 + 12) = 0;
  *(_QWORD *)(v0 + 160) = v15;
  *(_QWORD *)(v0 + 168) = v15;
  *(_QWORD *)(v0 + 192) = v15;
  v20 = (__int64 *)&off_650EA0;
  *(_QWORD *)(v0 + 456) = sub_448FE0(v0);
  *(_QWORD *)(v0 + 944) = 0;
  *(_QWORD *)(v0 + 928) = 0;
  *(_DWORD *)(v0 + 936) = 0;
  *(_DWORD *)(v0 + 940) = 0;
  *(_QWORD *)(v0 + 24) = qword_656620;
  sub_45B740(v0);
  v21 = sub_4AE540();
  *(_QWORD *)(v0 + 1208) = 0;
  *(_QWORD *)(v0 + 1200) = v21;
  *(_QWORD *)(v0 + 1216) = sub_4BF620();
  sub_4ADDD0(v0 + 1224);
  if ( "dictLappend" != (char *)-5LL )
  {
    do
    {
      while ( 1 )
      {
        if ( !v20[1] && !v20[2] )
          sub_47D740(
            (unsigned int)"builtin command with NULL object command proc and a NULL compile proc",
            v15,
            v22,
            v23,
            v24,
            v25);
        v15 = *v20;
        v26 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)(v0 + 40) + 232LL))(
                *(_QWORD *)(v0 + 40) + 160LL,
                *v20,
                &v59);
        if ( v59 )
          break;
        v20 += 4;
        if ( !*v20 )
          goto LABEL_15;
      }
      v22 = sub_40FB00(104);
      *(_QWORD *)v22 = v26;
      v27 = *(_QWORD *)(v0 + 40);
      *(_QWORD *)(v22 + 56) = v22;
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 72) = 0;
      *(_DWORD *)(v22 + 16) = 1;
      *(_QWORD *)(v22 + 8) = v27;
      v28 = v20[2];
      *(_DWORD *)(v22 + 20) = 0;
      *(_QWORD *)(v22 + 48) = TclInvokeObjectCommand;
      *(_QWORD *)(v22 + 64) = 0;
      *(_DWORD *)(v22 + 80) = 0;
      *(_QWORD *)(v22 + 24) = v28;
      v29 = v20[1];
      v20 += 4;
      v30 = *v20 == 0;
      *(_QWORD *)(v22 + 88) = 0;
      *(_QWORD *)(v22 + 96) = 0;
      *(_QWORD *)(v26 + 24) = v22;
      *(_QWORD *)(v22 + 32) = v29;
    }
    while ( !v30 );
  }
LABEL_15:
  sub_467D30(v0);
  sub_443E80(v0);
  sub_414C80(v0);
  sub_41E120(v0);
  sub_40FD90(v0);
  sub_407770(v0, "::tcl::Bgerror", (__int64)sub_447CB0, 0, 0);
  sub_407770(v0, "::tcl::unsupported::disassemble", (__int64)sub_48A0F0, 0, 0);
  v33 = sub_473FB0(v0, "::tcl::mathfunc", 0, 0);
  if ( !v33 )
    sub_47D740(
      (unsigned int)"Can't create math function namespace",
      (unsigned int)"::tcl::mathfunc",
      v31,
      v32,
      v34,
      v35);
  strcpy(v60, "::tcl::mathfunc::");
  v36 = &off_651C60;
  if ( "abs" )
  {
    do
    {
      strcpy(&v60[17], *v36);
      sub_407770(v0, v60, (__int64)v36[1], (__int64)v36[2], 0);
      v37 = *v36;
      v36 += 3;
      sub_474420(v0, v33, v37, 0);
    }
    while ( *v36 );
  }
  v40 = sub_473FB0(v0, "::tcl::mathop", 0, 0);
  if ( !v40 )
    sub_47D740((unsigned int)"can't create math operator namespace", (unsigned int)"::tcl::mathop", v38, v39, v41, v42);
  v43 = &off_6518A0;
  sub_474420(v0, v40, "*", 1);
  strcpy(v60, "::tcl::mathop::");
  if ( "~" )
  {
    do
    {
      v44 = sub_40FB00(24);
      *(_QWORD *)v44 = *v43;
      *(_DWORD *)(v44 + 16) = *((_DWORD *)v43 + 6);
      *(_QWORD *)(v44 + 8) = v43[4];
      strcpy(&v60[15], *v43);
      v45 = sub_407770(v0, v60, (__int64)v43[1], v44, (__int64)j_Tcl_Free);
      if ( v45 )
      {
        v49 = v43[2];
        if ( v49 )
          *(_QWORD *)(v45 + 24) = v49;
      }
      else
      {
        sub_47D740((unsigned int)"failed to create math operator %s", (unsigned int)*v43, 0, v46, v47, v48);
      }
      v43 += 5;
    }
    while ( *v43 );
  }
  sub_458D80(v0);
  sub_447180(v0);
  sub_486900(v0);
  sub_4A42F0(v0, "tcl_platform", "engine", "Tcl", 1);
  sub_4A42F0(v0, "tcl_platform", "byteOrder", "littleEndian", 1);
  v50 = sub_47BE30(8);
  sub_4A4220(v0, "tcl_platform", "wordSize", v50, 1);
  v51 = sub_47BE30(8);
  sub_4A4220(v0, "tcl_platform", "pointerSize", v51, 1);
  sub_4A42F0(v0, "tcl_patchLevel", 0, "8.5.19", 1);
  sub_4A42F0(v0, "tcl_version", 0, "8.5", 1);
  sub_49B9C0(v0, "tcl_precision", 0, 113, TclPrecTraceProc, 0);
  sub_4ADA40(v0);
  sub_4A42F0(v0, "tcl_platform", "threaded", "1", 1);
  sub_484BA0(v0, "Tcl", "8.5.19", qword_656620);
  sub_4975E0(v0, "8.5", 1);
  if ( (unsigned int)sub_4A64D0(v0) )
  {
    v53 = sub_48B5D0(v0);
    v54 = sub_47B3B0(v53);
    sub_47D740((unsigned int)"%s", v54, v55, v56, v57, v58);
  }
  return v0;
}

