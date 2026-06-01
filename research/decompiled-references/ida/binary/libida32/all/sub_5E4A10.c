unsigned __int64 __fastcall sub_5E4A10(__int64 a1, unsigned int a2)
{
  void *v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbx
  unsigned int inited; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rbx
  char *v12; // rdx
  void *v13; // rbp
  void *v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-10B8h]
  int v19[2]; // [rsp+8h] [rbp-10B0h]
  char *v20; // [rsp+10h] [rbp-10A8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-10A0h]
  int v22; // [rsp+20h] [rbp-1098h]
  unsigned int v23; // [rsp+24h] [rbp-1094h]
  _BYTE *v24; // [rsp+28h] [rbp-1090h]
  int v25; // [rsp+30h] [rbp-1088h]
  char v26; // [rsp+38h] [rbp-1080h]
  _BYTE v27[9]; // [rsp+3Fh] [rbp-1079h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-1070h]
  int v29; // [rsp+58h] [rbp-1060h]
  int v30; // [rsp+60h] [rbp-1058h] BYREF
  void *v31; // [rsp+68h] [rbp-1050h]
  __int64 s; // [rsp+70h] [rbp-1048h] BYREF
  int v33; // [rsp+78h] [rbp-1040h]
  int v34; // [rsp+80h] [rbp-1038h]
  void *v35; // [rsp+88h] [rbp-1030h]
  __int64 v36; // [rsp+90h] [rbp-1028h]
  int v37; // [rsp+98h] [rbp-1020h]
  int v38; // [rsp+A0h] [rbp-1018h]
  int v39; // [rsp+A8h] [rbp-1010h]
  int v40; // [rsp+B0h] [rbp-1008h]
  int v41; // [rsp+B8h] [rbp-1000h]
  int v42; // [rsp+C0h] [rbp-FF8h]
  void *v43; // [rsp+C8h] [rbp-FF0h]
  __int64 v44; // [rsp+D0h] [rbp-FE8h]
  int v45; // [rsp+D8h] [rbp-FE0h]
  int v46; // [rsp+E0h] [rbp-FD8h]
  int v47; // [rsp+E8h] [rbp-FD0h]
  int v48; // [rsp+F0h] [rbp-FC8h]
  int v49; // [rsp+F8h] [rbp-FC0h]
  int v50; // [rsp+100h] [rbp-FB8h]
  int v51; // [rsp+108h] [rbp-FB0h]
  int v52; // [rsp+110h] [rbp-FA8h]
  int v53; // [rsp+118h] [rbp-FA0h]
  int v54; // [rsp+120h] [rbp-F98h]
  int v55; // [rsp+128h] [rbp-F90h]
  int v56; // [rsp+130h] [rbp-F88h]
  int v57; // [rsp+138h] [rbp-F80h]
  int v58; // [rsp+140h] [rbp-F78h]
  int v59; // [rsp+148h] [rbp-F70h]
  void *v60; // [rsp+150h] [rbp-F68h]
  __int64 v61; // [rsp+158h] [rbp-F60h]
  int v62; // [rsp+160h] [rbp-F58h]
  int v63; // [rsp+168h] [rbp-F50h]
  int v64; // [rsp+170h] [rbp-F48h]
  int v65; // [rsp+178h] [rbp-F40h]
  int v66; // [rsp+180h] [rbp-F38h]
  void *v67; // [rsp+188h] [rbp-F30h]
  __int64 v68; // [rsp+190h] [rbp-F28h]
  int v69; // [rsp+198h] [rbp-F20h]
  int v70; // [rsp+1A0h] [rbp-F18h]
  int v71; // [rsp+1A8h] [rbp-F10h]
  int v72; // [rsp+1B0h] [rbp-F08h]
  int v73; // [rsp+1B8h] [rbp-F00h]
  __int64 v74; // [rsp+1C0h] [rbp-EF8h]
  unsigned __int64 v75; // [rsp+1078h] [rbp-40h]

  v23 = a2;
  v75 = __readfsqword(0x28u);
  v2 = (void *)sub_7272B0(0, 0);
  v3 = idadir("cfg");
  set_header_path(v3, 0);
  if ( !a2 )
  {
    *(_QWORD *)v19 = 0;
    v20 = (char *)&debug;
    if ( (debug & 0x80u) == 0 )
      goto LABEL_3;
LABEL_31:
    sub_383DA0();
  }
  *(_QWORD *)v19 = get_idp_name((char *)&s);
  v20 = (char *)&debug;
  if ( (debug & 0x80u) != 0 )
    goto LABEL_31;
LABEL_3:
  *(_QWORD *)&v27[1] = 0;
  v24 = &v27[1];
  *(_OWORD *)ptr = 0;
  if ( !(unsigned __int8)sub_811EA0(&v27[1], "ida.cfg") )
    goto LABEL_15;
  if ( !ptr[0] )
  {
LABEL_14:
    dto_copy_to_inf(a1 + 448);
    sub_396090(8u, v23);
LABEL_15:
    if ( v23 )
    {
      v9 = *(_DWORD *)(a1 + 320);
      v10 = *(_DWORD *)(a1 + 324);
      if ( v9 )
      {
        if ( v9 + 2 > v10 )
        {
          sub_727620(
            (_DWORD)v2,
            (unsigned int)"FPNUM_LENGTH is too low for FPNUM_DIGITS (must be at least %d)",
            v9 + 2,
            v10,
            v5,
            v6);
          *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 320) + 2;
        }
      }
      else if ( v10 > 64 )
      {
        sub_727620((_DWORD)v2, (unsigned int)"FPNUM_LENGTH specifies too high exponent (>64)", v4, v10, v5, v6);
        *(_DWORD *)(a1 + 324) = 64;
      }
      v11 = qword_2CA1698;
      sub_3841A0((_QWORD *)qword_2CA1698, 1);
      sub_4BF910(v11);
    }
    else
    {
      sub_3841A0((_QWORD *)qword_2CA1698, 1);
    }
    goto LABEL_20;
  }
  v7 = 0;
  v21 = *(_QWORD *)v19 != 0;
  while ( 1 )
  {
    inited = lex_init_file(v2);
    if ( inited )
      break;
    sub_727070(v2, *(_QWORD *)v19, v21 << 12);
    getinf_buf(1, &v30, 16);
    sub_727070(v2, &v30, 16);
    if ( (unsigned __int8)getinf_flag(45, 16) )
      sub_727070(v2, "TEST", 4);
    if ( *v20 < 0 )
      sub_383DA0();
    *(_QWORD *)(sub_726FF0(v2) + 8) = 0;
    v27[0] = 0;
    while ( (unsigned __int8)sub_728B90(
                               (int)v27,
                               (int)v2,
                               (int)&off_2B07280,
                               119,
                               (int)sub_5E30F0,
                               a1,
                               v18,
                               v19[0],
                               (int)v20,
                               v21,
                               v22,
                               (int)v24,
                               v25,
                               v26,
                               *(int *)&v27[1],
                               ptr[0],
                               (__int64)ptr[1],
                               v29,
                               v30,
                               v31,
                               s,
                               v33,
                               v34,
                               v35,
                               v36,
                               v37,
                               v38,
                               v39,
                               v40,
                               v41,
                               v42,
                               v43,
                               v44,
                               v45,
                               v46,
                               v47,
                               v48,
                               v49,
                               v50,
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
                               v64,
                               v65,
                               v66,
                               v67,
                               v68,
                               v69,
                               v70,
                               v71,
                               v72,
                               v73,
                               v74)
         && !v27[0] )
      ;
    if ( (void *)++v7 >= ptr[0] )
      goto LABEL_14;
  }
  sub_727810(v2, inited);
LABEL_20:
  if ( v2 )
    sub_7275A0(v2);
  v12 = *(char **)&v27[1];
  if ( *(_QWORD *)&v27[1] )
  {
    v13 = ptr[0];
    if ( ptr[0] )
    {
      v14 = nullptr;
      do
      {
        v15 = &v12[24 * (_QWORD)v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = *(char **)&v27[1];
        }
        v14 = (char *)v14 + 1;
      }
      while ( v13 != v14 );
    }
    ptr[0] = nullptr;
    qfree(v12);
  }
  return v75 - __readfsqword(0x28u);
}

