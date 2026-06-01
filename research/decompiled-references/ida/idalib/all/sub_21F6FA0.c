__int64 __fastcall sub_21F6FA0(__int64 a1, __int64 a2, int *a3, bool *a4)
{
  void *v5; // r15
  void *v6; // rbp
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // rax
  bool v11; // r13
  double v12; // xmm0_8
  bool v13; // r15
  double v14; // xmm0_8
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  bool v20; // dl
  void *v21; // rax
  int v23; // eax
  bool v24; // zf
  bool v25; // bl
  void *v26; // rax
  int v27; // eax
  void *v28; // rax
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // r12
  __int64 v50; // rdi
  __int64 v51; // rcx
  void *v52; // r15
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 j; // rbx
  __int64 v60; // rdi
  __int64 v61; // rax
  bool v62; // bl
  void *v63; // r13
  bool v64; // bl
  bool v65; // cc
  void *v66; // rax
  __int64 i; // [rsp+10h] [rbp-148h]
  __int64 v68; // [rsp+10h] [rbp-148h]
  __int64 v69; // [rsp+10h] [rbp-148h]
  __int64 v70; // [rsp+10h] [rbp-148h]
  unsigned int v71; // [rsp+10h] [rbp-148h]
  void *v74; // [rsp+48h] [rbp-110h]
  char v75; // [rsp+5Fh] [rbp-F9h] BYREF
  void *v76; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-F0h]
  bool v78; // [rsp+6Ch] [rbp-ECh]
  void *v79; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v80; // [rsp+78h] [rbp-E0h]
  void *v81; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v82; // [rsp+88h] [rbp-D0h]
  void *v83; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-B0h]
  void *v85; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-90h]
  void *v87; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-70h]
  void *v89; // [rsp+100h] [rbp-58h] BYREF
  unsigned int v90; // [rsp+108h] [rbp-50h]
  char v91; // [rsp+113h] [rbp-45h]

  v5 = *(void **)a2;
  v6 = (void *)sub_21F90D0(a1, a2, a3);
  if ( v6 != v5 )
  {
    if ( (*(_BYTE *)(a2 + 20) & 7) != 1 )
      goto LABEL_3;
LABEL_44:
    if ( a4 )
      *a4 = 1;
    v18 = *(unsigned __int16 *)a3;
    v19 = HIBYTE(*a3);
    LODWORD(v88) = v18;
    if ( v18 > 0x40 )
    {
      sub_2205470(&v87, 0, (v19 >> 5) & 1);
      v18 = v88;
      v64 = (*a3 & 0x20000000) == 0;
      v20 = v64;
      v90 = v88;
      if ( (unsigned int)v88 > 0x40 )
      {
        sub_2205510(&v89);
        v65 = (unsigned int)v88 <= 0x40;
        *(_DWORD *)(a1 + 8) = v90;
        v66 = v89;
        *(_BYTE *)(a1 + 12) = v64;
        *(_QWORD *)a1 = v66;
        *(_DWORD *)(a1 + 16) = *a3;
        if ( !v65 && v87 )
          operator delete[](v87);
        return a1;
      }
    }
    else
    {
      v87 = nullptr;
      v20 = (v19 & 0x20) == 0;
    }
    *(_DWORD *)(a1 + 8) = v18;
    v21 = v87;
    *(_BYTE *)(a1 + 12) = v20;
    *(_QWORD *)a1 = v21;
    *(_DWORD *)(a1 + 16) = *a3;
    return a1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 20LL) & 7) == 1 )
    goto LABEL_44;
LABEL_3:
  v7 = (__int64)v5;
  for ( i = sub_21F90B0(a1, a2); ; v7 = i )
  {
    v8 = sub_21EF140(a3, v7);
    if ( v8 )
      break;
    while ( v7 != sub_21F9090() )
    {
      v9 = sub_21F9080();
      v10 = sub_21F90A0();
      if ( v7 != v9 )
      {
        if ( v7 == v10 )
          break;
        v10 = sub_21F90C0();
      }
      v7 = v10;
      v8 = sub_21EF140(a3, v10);
      if ( v8 )
        goto LABEL_10;
    }
  }
LABEL_10:
  v11 = v8;
  if ( v6 == *(void **)a2 )
    sub_21FFE60(&v81, a2);
  else
    sub_21F97A0(&v81, a2);
  if ( (void *)v7 != v5 )
    sub_22028C0(&v81, v7, 0, &v75);
  v12 = pow(2.0, (double)-((__int16)(8 * *((_WORD *)a3 + 1)) >> 3));
  sub_21FBFD0(&v89, v12);
  sub_22023D0(&v83, &v89, i);
  sub_21F9830(&v89);
  sub_22028C0(&v83, v7, 0, &v75);
  if ( v6 == v81 )
    sub_22018C0(&v81, &v83, 0);
  else
    sub_21FEB40(&v81, &v83, 0);
  v13 = (*a3 & 0x20000000) == 0;
  v77 = *(unsigned __int16 *)a3;
  if ( v77 > 0x40 )
    sub_2205470(&v76, 0, 0);
  else
    v76 = nullptr;
  v78 = v13;
  sub_2202BA0(&v81, &v76, 0, &v75);
  v14 = pow(2.0, (double)((__int16)(8 * *((_WORD *)a3 + 1)) >> 3));
  sub_21FBFD0(&v89, v14);
  sub_22023D0(&v87, &v89, i);
  sub_21F9830(&v89);
  if ( v6 != v83 )
  {
    if ( v6 == v87 )
    {
      sub_21F9830(&v83);
      v28 = v87;
      goto LABEL_70;
    }
    sub_21F9590(&v83, &v87);
    goto LABEL_21;
  }
  v57 = v84;
  if ( v6 == v87 )
  {
    if ( !v84 )
      goto LABEL_136;
    v51 = 24LL * *(_QWORD *)(v84 - 8);
    if ( v84 == v84 + v51 )
      goto LABEL_135;
    v69 = v7;
    v52 = v87;
    v53 = v84 + v51;
    v74 = v6;
    while ( 1 )
    {
      v54 = v53 - 24;
      v55 = v53 - 24;
      if ( v52 == *(void **)(v53 - 24) )
      {
        sub_A4F010(v55);
        if ( v84 == v54 )
        {
LABEL_134:
          v56 = v53;
          v57 = v53 - 24;
          v7 = v69;
          v6 = v74;
          v51 = 24LL * *(_QWORD *)(v56 - 32);
LABEL_135:
          operator delete[]((void *)(v57 - 8), v51 + 8);
LABEL_136:
          sub_21FFED0(&v83, &v87);
LABEL_21:
          if ( v6 == v87 )
            goto LABEL_72;
LABEL_22:
          sub_21F9830(&v87);
          goto LABEL_23;
        }
      }
      else
      {
        sub_21F9830(v55);
        if ( v54 == v84 )
          goto LABEL_134;
      }
      v53 -= 24;
    }
  }
  if ( !v84 )
    goto LABEL_71;
  v58 = 24LL * *(_QWORD *)(v84 - 8);
  if ( v84 == v84 + v58 )
    goto LABEL_146;
  v70 = v7;
  for ( j = v84 + v58; ; j -= 24 )
  {
    v57 = j - 24;
    v60 = j - 24;
    if ( v6 == *(void **)(j - 24) )
      break;
    sub_21F9830(v60);
    if ( v57 == v84 )
      goto LABEL_145;
LABEL_142:
    ;
  }
  sub_A4F010(v60);
  if ( v84 != v57 )
    goto LABEL_142;
LABEL_145:
  v61 = j;
  v7 = v70;
  v58 = 24LL * *(_QWORD *)(v61 - 32);
LABEL_146:
  operator delete[]((void *)(v57 - 8), v58 + 8);
  v28 = v87;
LABEL_70:
  if ( v6 == v28 )
    goto LABEL_136;
LABEL_71:
  sub_21F97D0(&v83, &v87);
  if ( v6 != v87 )
    goto LABEL_22;
LABEL_72:
  v29 = v88;
  if ( !v88 )
    goto LABEL_23;
  v30 = 24LL * *(_QWORD *)(v88 - 8);
  if ( v88 == v88 + v30 )
    goto LABEL_80;
  v68 = v7;
  v31 = v88 + v30;
  while ( 2 )
  {
    v29 = v31 - 24;
    v32 = v31 - 24;
    if ( v6 != *(void **)(v31 - 24) )
    {
      sub_21F9830(v32);
      if ( v29 == v88 )
        break;
      goto LABEL_76;
    }
    sub_A4F010(v32);
    if ( v88 != v29 )
    {
LABEL_76:
      v31 -= 24;
      continue;
    }
    break;
  }
  v33 = v31;
  v7 = v68;
  v30 = 24LL * *(_QWORD *)(v33 - 32);
LABEL_80:
  operator delete[]((void *)(v29 - 8), v30 + 8);
LABEL_23:
  sub_22028C0(&v83, v7, 0, &v75);
  if ( v6 == v81 )
    sub_22011D0(&v81, 0);
  else
    sub_21FDA60(&v81, 0);
  if ( v6 == v81 )
    sub_22018C0(&v81, &v83, 0);
  else
    sub_21FEB40(&v81, &v83, 0);
  sub_21EEC90((__int64)&v89, (unsigned __int16 *)a3);
  sub_21F6CB0(&v85, (__int64)&v89, v7);
  if ( v90 > 0x40 && v89 )
    operator delete[](v89);
  sub_21EEEF0((__int64)&v89, a3);
  sub_21F6CB0(&v87, (__int64)&v89, v7);
  if ( v90 > 0x40 && v89 )
    operator delete[](v89);
  if ( (*a3 & 0x40000000) != 0 )
  {
    if ( v6 == v81 )
      v15 = sub_2201020(&v81, &v85);
    else
      v15 = sub_21FA440(&v81, &v85);
    if ( v15 == 2 )
    {
      sub_21EEC90((__int64)&v89, (unsigned __int16 *)a3);
    }
    else
    {
      if ( v6 == v81 )
        v16 = sub_2201020(&v81, &v87);
      else
        v16 = sub_21FA440(&v81, &v87);
      if ( v16 )
      {
LABEL_40:
        v17 = v77;
        goto LABEL_41;
      }
      sub_21EEEF0((__int64)&v89, a3);
    }
    v17 = v90;
    v62 = (v91 & 0x20) == 0;
    v80 = v90;
    if ( v90 > 0x40 )
    {
      sub_2205510(&v79);
      v17 = v80;
      v63 = v79;
    }
    else
    {
      v63 = v89;
    }
    if ( v77 > 0x40 && v76 )
    {
      v71 = v17;
      operator delete[](v76);
      v17 = v71;
    }
    v76 = v63;
    v77 = v17;
    v78 = v62;
    if ( v90 > 0x40 && v89 )
    {
      operator delete[](v89);
      goto LABEL_40;
    }
LABEL_41:
    v11 = 0;
  }
  else
  {
    if ( v6 == v81 )
      v23 = sub_2201020(&v81, &v85);
    else
      v23 = sub_21FA440(&v81, &v85);
    if ( v23 != 2 )
    {
      if ( v6 == v81 )
        v34 = sub_2201020(&v81, &v87);
      else
        v34 = sub_21FA440(&v81, &v87);
      v11 = v34 == 0;
    }
    v17 = v77;
  }
  if ( a4 )
    *a4 = v11;
  v24 = (*a3 & 0x20000000) == 0;
  v90 = v17;
  v25 = v24;
  if ( v17 > 0x40 )
  {
    sub_2205510(&v89);
    v17 = v90;
    v26 = v89;
  }
  else
  {
    v26 = v76;
  }
  *(_QWORD *)a1 = v26;
  v27 = *a3;
  *(_DWORD *)(a1 + 8) = v17;
  *(_BYTE *)(a1 + 12) = v25;
  *(_DWORD *)(a1 + 16) = v27;
  if ( v6 == v87 )
  {
    v47 = v88;
    if ( v88 )
    {
      v48 = 24LL * *(_QWORD *)(v88 - 8);
      v49 = v88 + v48;
      if ( v88 != v88 + v48 )
      {
        while ( 1 )
        {
          v47 = v49 - 24;
          v50 = v49 - 24;
          if ( v6 == *(void **)(v49 - 24) )
          {
            sub_A4F010(v50);
            if ( v88 == v47 )
            {
LABEL_124:
              v48 = 24LL * *(_QWORD *)(v49 - 32);
              break;
            }
          }
          else
          {
            sub_21F9830(v50);
            if ( v47 == v88 )
              goto LABEL_124;
          }
          v49 -= 24;
        }
      }
      operator delete[]((void *)(v47 - 8), v48 + 8);
    }
  }
  else
  {
    sub_21F9830(&v87);
  }
  if ( v6 == v85 )
  {
    v43 = v86;
    if ( v86 )
    {
      v44 = 24LL * *(_QWORD *)(v86 - 8);
      v45 = v86 + v44;
      if ( v86 != v86 + v44 )
      {
        while ( 1 )
        {
          v43 = v45 - 24;
          v46 = v45 - 24;
          if ( v6 == *(void **)(v45 - 24) )
          {
            sub_A4F010(v46);
            if ( v86 == v43 )
            {
LABEL_115:
              v44 = 24LL * *(_QWORD *)(v45 - 32);
              break;
            }
          }
          else
          {
            sub_21F9830(v46);
            if ( v43 == v86 )
              goto LABEL_115;
          }
          v45 -= 24;
        }
      }
      operator delete[]((void *)(v43 - 8), v44 + 8);
    }
  }
  else
  {
    sub_21F9830(&v85);
  }
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  if ( v6 != v83 )
  {
    sub_21F9830(&v83);
    goto LABEL_67;
  }
  v35 = v84;
  if ( !v84 )
  {
LABEL_67:
    if ( v6 == v81 )
      goto LABEL_99;
    goto LABEL_68;
  }
  v36 = 24LL * *(_QWORD *)(v84 - 8);
  v37 = v84 + v36;
  if ( v84 != v84 + v36 )
  {
    while ( 1 )
    {
      v35 = v37 - 24;
      v38 = v37 - 24;
      if ( v6 == *(void **)(v37 - 24) )
      {
        sub_A4F010(v38);
        if ( v84 == v35 )
        {
LABEL_97:
          v36 = 24LL * *(_QWORD *)(v37 - 32);
          break;
        }
      }
      else
      {
        sub_21F9830(v38);
        if ( v35 == v84 )
          goto LABEL_97;
      }
      v37 -= 24;
    }
  }
  operator delete[]((void *)(v35 - 8), v36 + 8);
  if ( v6 != v81 )
  {
LABEL_68:
    sub_21F9830(&v81);
    return a1;
  }
LABEL_99:
  v39 = v82;
  if ( v82 )
  {
    v40 = 24LL * *(_QWORD *)(v82 - 8);
    v41 = v82 + v40;
    if ( v82 != v82 + v40 )
    {
      while ( 1 )
      {
        v39 = v41 - 24;
        v42 = v41 - 24;
        if ( v6 == *(void **)(v41 - 24) )
        {
          sub_A4F010(v42);
          if ( v82 == v39 )
          {
LABEL_106:
            v40 = 24LL * *(_QWORD *)(v41 - 32);
            break;
          }
        }
        else
        {
          sub_21F9830(v42);
          if ( v39 == v82 )
            goto LABEL_106;
        }
        v41 -= 24;
      }
    }
    operator delete[]((void *)(v39 - 8), v40 + 8);
  }
  return a1;
}
