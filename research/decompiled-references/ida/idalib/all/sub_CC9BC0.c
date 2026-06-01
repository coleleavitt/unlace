__int64 __fastcall sub_CC9BC0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r13
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  int v7; // eax
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rbp
  __int64 (__fastcall **v24)(); // rbx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // r13d
  int v28; // r10d
  unsigned int v29; // edx
  __int64 (__fastcall **v30)(); // rax
  __int64 (__fastcall *v31)(); // rcx
  __int64 v32; // r15
  int v33; // r13d
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ecx
  __int64 (__fastcall **v38)(); // rax
  __int64 (__fastcall *v39)(); // rsi
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rdx
  int v43; // r11d
  int v44; // esi
  int *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // eax
  int v59; // r11d
  __int64 v60; // [rsp-10h] [rbp-128h]
  __int64 v61; // [rsp-8h] [rbp-120h]
  unsigned int v62; // [rsp+8h] [rbp-110h]
  int v63; // [rsp+Ch] [rbp-10Ch]
  _QWORD *v64; // [rsp+28h] [rbp-F0h]
  int v65; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v66; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-C0h]
  unsigned int v71; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall **v72)(); // [rsp+70h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+78h] [rbp-A0h]
  __int64 v74; // [rsp+80h] [rbp-98h]
  __int64 v75; // [rsp+88h] [rbp-90h]
  int v76; // [rsp+90h] [rbp-88h]
  unsigned int v77; // [rsp+94h] [rbp-84h]
  char v78; // [rsp+98h] [rbp-80h]
  __int64 (__fastcall **v79)(); // [rsp+A0h] [rbp-78h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-70h]
  __int64 v81; // [rsp+B0h] [rbp-68h]
  __int64 v82; // [rsp+B8h] [rbp-60h]
  __int64 v83; // [rsp+C0h] [rbp-58h]
  __int64 v84; // [rsp+C8h] [rbp-50h]
  int v85; // [rsp+D0h] [rbp-48h]
  __int64 v86; // [rsp+D8h] [rbp-40h]

  v2 = 0;
  v3 = a2[((*a2 & 0x200) != 0) + 3 + ((*a2 & 0x400) != 0)];
  if ( (*(_DWORD *)v3 & 0x40000) == 0 )
  {
    v5 = a1;
    v6 = (unsigned __int64)a2;
    v7 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v3 + 8));
    v73 = a1;
    v63 = v7;
    v8 = v7;
    v9 = *(_QWORD *)(a1 + 552);
    v78 = 0;
    v75 = 0;
    v74 = v9;
    *(_QWORD *)(a1 + 552) = &v72;
    v76 = 1;
    v68 = 0;
    v72 = &off_2B4B5B8;
    v65 = *(_DWORD *)(a1 + 384) + 1;
    *(_DWORD *)(a1 + 384) = v65;
    v79 = (__int64 (__fastcall **)())(v3 | 2);
    v62 = sub_CBEFF0(a1, (__int64 *)&v79, v8, 1u, 0, 1, 0);
    v11 = *a2;
    v12 = v60;
    if ( (*a2 & 0x200) != 0 )
    {
      v13 = a2[3];
      if ( v13 )
      {
        if ( !(unsigned __int8)sub_CC99A0(a1, v13, v60, v61, v10) )
          goto LABEL_11;
        v11 = *(_QWORD *)v6;
      }
    }
    if ( (v11 & 0x400) == 0
      || (v14 = *(_QWORD *)(v6 + 8LL * ((v11 & 0x200) != 0) + 24)) == 0
      || (unsigned __int8)sub_CC6D50(a1, v14, 0) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3, v12) )
      {
        v15 = v6 | 4;
        v79 = (__int64 (__fastcall **)())(v6 | 4);
        if ( (unsigned __int8)sub_CA5390(a1, v8, v62, (__int64 *)&v79) )
        {
          v16 = sub_EEE140(v6);
          if ( (unsigned __int8)sub_CC6A90(a1, v16) )
          {
            v21 = *(_QWORD *)(v6 + 8);
            v71 = 0;
            v69 = 0;
            v70 = 0;
            v66 = v21;
            if ( v21 )
            {
              v64 = (_QWORD *)v6;
              v22 = v21;
              v24 = (__int64 (__fastcall **)())v15;
              while ( (*(_WORD *)v22 & 0x1FF) != 0x85 )
              {
                v40 = *(_DWORD *)(a1 + 384);
                BYTE4(v68) = 1;
                *(_DWORD *)(a1 + 384) = ++v40;
                LODWORD(v68) = v40;
LABEL_26:
                v22 = *(_QWORD *)(v66 + 16);
                v66 = v22;
                if ( !v22 )
                {
                  v6 = (unsigned __int64)v64;
                  v5 = a1;
                  goto LABEL_52;
                }
              }
              v25 = v69;
              v26 = v71;
              if ( (*(_WORD *)v22 & 0x200) != 0 )
                goto LABEL_30;
              v27 = *(_DWORD *)(a1 + 384) + 1;
              *(_DWORD *)(a1 + 384) = v27;
              if ( (_DWORD)v26 )
              {
                v28 = v26 - 1;
                v29 = (v26 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
                v30 = (__int64 (__fastcall **)())(v25 + 16LL * v29);
                v31 = *v30;
                if ( *v30 == (__int64 (__fastcall *)())v22 )
                  goto LABEL_20;
                v20 = 1;
                v19 = 0;
                if ( v31 != (__int64 (__fastcall *)())-4096LL )
                {
                  while ( 1 )
                  {
                    if ( !v19 && v31 == (__int64 (__fastcall *)())-8192LL )
                      v19 = (__int64)v30;
                    v59 = v20 + 1;
                    v20 = v29 + (unsigned int)v20;
                    v29 = v28 & v20;
                    v30 = (__int64 (__fastcall **)())(v25 + 16LL * (v28 & (unsigned int)v20));
                    v31 = *v30;
                    if ( *v30 == (__int64 (__fastcall *)())v22 )
                      break;
                    if ( v31 == (__int64 (__fastcall *)())-4096LL )
                    {
                      if ( v19 )
                        v30 = (__int64 (__fastcall **)())v19;
                      goto LABEL_33;
                    }
                    LODWORD(v20) = v59;
                  }
LABEL_20:
                  v32 = *(_QWORD *)(v22 + 24);
                  *((_DWORD *)v30 + 2) = v27;
                  v33 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v32 + 8));
                  v79 = (__int64 (__fastcall **)())(v22 | 4);
                  if ( !(unsigned __int8)sub_CA48C0(a1, v63, v62, (__int64 *)&v79)
                    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v32)
                    || (v79 = v24, !(unsigned __int8)sub_CA1080(a1, v33, (__int64 *)&v79)) )
                  {
LABEL_29:
                    v26 = v71;
                    v25 = v69;
LABEL_30:
                    v2 = 0;
                    goto LABEL_31;
                  }
                  v67 = v22;
                  if ( v71 )
                  {
                    v37 = (v71 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
                    v38 = (__int64 (__fastcall **)())(v69 + 16LL * v37);
                    v39 = *v38;
                    if ( *v38 == (__int64 (__fastcall *)())v22 )
                      goto LABEL_25;
                    v43 = 1;
                    v35 = 0;
                    if ( v39 != (__int64 (__fastcall *)())-4096LL )
                    {
                      while ( 1 )
                      {
                        if ( v39 == (__int64 (__fastcall *)())-8192LL && !v35 )
                          v35 = (__int64)v38;
                        v36 = (unsigned int)(v43 + 1);
                        v37 = (v71 - 1) & (v43 + v37);
                        v38 = (__int64 (__fastcall **)())(v69 + 16LL * v37);
                        v39 = *v38;
                        if ( *v38 == (__int64 (__fastcall *)())v22 )
                          break;
                        if ( v39 == (__int64 (__fastcall *)())-4096LL )
                        {
                          if ( v35 )
                            v38 = (__int64 (__fastcall **)())v35;
                          goto LABEL_42;
                        }
                        ++v43;
                      }
LABEL_25:
                      if ( !(unsigned __int8)sub_CAD000(a1, (int *)v38 + 2) )
                        goto LABEL_29;
                      goto LABEL_26;
                    }
LABEL_42:
                    v79 = v38;
                    v34 = (unsigned int)(v70 + 1);
                    if ( 4 * (int)v34 < 3 * v71 )
                    {
                      if ( v71 - HIDWORD(v70) - (unsigned int)v34 > v71 >> 3 )
                      {
LABEL_44:
                        v41 = (__int64 (__fastcall *)())((char *)*v38 + 4096) == nullptr;
                        LODWORD(v70) = v34;
                        if ( !v41 )
                          --HIDWORD(v70);
                        *v38 = (__int64 (__fastcall *)())v22;
                        *((_DWORD *)v38 + 2) = 0;
                        goto LABEL_25;
                      }
                      v44 = v71;
LABEL_49:
                      sub_CBDEC0(&v69, v44, v71, v34, v35, v36);
                      sub_CBA220(&v69, &v67, &v79);
                      v22 = v67;
                      LODWORD(v34) = v70 + 1;
                      v38 = v79;
                      goto LABEL_44;
                    }
                  }
                  else
                  {
                    v79 = nullptr;
                  }
                  v44 = 2 * v71;
                  goto LABEL_49;
                }
LABEL_33:
                v79 = v30;
                v17 = (unsigned int)(v70 + 1);
                v18 = (unsigned int)(3 * v26);
                if ( 4 * (int)v17 < (unsigned int)v18 )
                {
                  v18 = (unsigned int)(v26 - HIDWORD(v70) - v17);
                  if ( (unsigned int)v18 > (unsigned int)v26 >> 3 )
                  {
LABEL_35:
                    v41 = (__int64 (__fastcall *)())((char *)*v30 + 4096) == nullptr;
                    LODWORD(v70) = v17;
                    if ( !v41 )
                      --HIDWORD(v70);
                    v42 = v66;
                    *((_DWORD *)v30 + 2) = 0;
                    *v30 = (__int64 (__fastcall *)())v42;
                    goto LABEL_20;
                  }
LABEL_40:
                  sub_CBDEC0(&v69, v26, v17, v18, v19, v20);
                  sub_CBA220(&v69, &v66, &v79);
                  LODWORD(v17) = v70 + 1;
                  v30 = v79;
                  goto LABEL_35;
                }
              }
              else
              {
                v79 = nullptr;
              }
              LODWORD(v26) = 2 * v26;
              goto LABEL_40;
            }
LABEL_52:
            v45 = (int *)&v68;
            if ( !BYTE4(v68) )
              v45 = &v65;
            v2 = sub_CACDE0(v5, v45);
            if ( (_BYTE)v2 )
            {
              v46 = *(_QWORD *)(v5 + 680);
              *(_QWORD *)(v5 + 680) = 0;
              v83 = v46;
              v47 = *(_QWORD *)(v5 + 688);
              v79 = &off_2B4B638;
              v48 = *(_QWORD *)(v5 + 712);
              *(_QWORD *)(v5 + 688) = 0;
              v81 = v48;
              v49 = *(_QWORD *)(v5 + 736);
              *(_BYTE *)(v5 + 716) = 1;
              v82 = v49;
              LODWORD(v49) = *(_DWORD *)(v5 + 696);
              *(_DWORD *)(v5 + 696) = 0;
              v85 = v49;
              v50 = *(_QWORD *)(v5 + 704);
              v84 = v47;
              v86 = v50;
              v80 = v5;
              *(_DWORD *)(v5 + 712) = v65;
              *(_QWORD *)(v5 + 736) = v68;
              operator delete(0, 0, 8);
              v51 = v69;
              v69 = 0;
              *(_QWORD *)(v5 + 680) = v51;
              *(_DWORD *)(v5 + 688) = v70;
              LODWORD(v51) = HIDWORD(v70);
              v70 = 0;
              *(_DWORD *)(v5 + 692) = v51;
              LODWORD(v51) = v71;
              v71 = 0;
              *(_DWORD *)(v5 + 696) = v51;
              *(_QWORD *)(v80 + 704) = *(_QWORD *)(v80 + 552);
              v2 = sub_CC99A0(
                     v5,
                     *(_QWORD *)(v6
                               + 8LL
                               * (((*(_QWORD *)v6 & 0x200) != 0) + (unsigned int)((*(_QWORD *)v6 & 0x400) != 0) + 1)
                               + 24),
                     (*(_QWORD *)v6 & 0x200) != 0,
                     v52,
                     v53);
              if ( (_BYTE)v2 )
              {
                sub_CAE070(v5, v65, v54, v55, v56, v57);
                if ( v78 )
                {
                  v58 = sub_CBBA10((__int64)&v72, 0);
                  v67 = 4;
                  v2 = v58;
                  sub_CA4500(v73, v77, &v67);
                }
              }
              sub_CAEE30((__int64)&v79);
            }
            v26 = v71;
            v25 = v69;
LABEL_31:
            operator delete(v25, 16 * v26, 8);
LABEL_12:
            sub_CBB210((__int64)&v72);
            return v2;
          }
        }
      }
    }
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  return v2;
}
