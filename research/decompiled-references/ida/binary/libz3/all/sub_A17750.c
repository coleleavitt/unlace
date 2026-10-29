__int64 __fastcall sub_A17750(__int64 a1, int **a2, char a3, __int64 a4, _BYTE *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // eax
  char v9; // r13
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  void *v13; // rbx
  int *v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  void *v17; // rdi
  unsigned int v18; // ebx
  void *v19; // r15
  int v20; // eax
  int v21; // eax
  char v22; // r15
  void *v23; // rdi
  bool v24; // al
  signed int v25; // r15d
  void *v26; // rdi
  char v27; // al
  void *v28; // rdi
  int v29; // eax
  int v30; // edx
  __int64 *v31; // rbx
  int v32; // eax
  int v33; // eax
  bool v34; // al
  int v35; // eax
  int *v36; // rax
  int *v37; // rax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v42; // rax
  __int64 v43; // rcx
  bool v44; // r13
  unsigned int v45; // [rsp+14h] [rbp-2ACh]
  __int64 v46; // [rsp+58h] [rbp-268h]
  __int64 v47; // [rsp+58h] [rbp-268h]
  bool v48; // [rsp+6Bh] [rbp-255h]
  signed int v49; // [rsp+6Ch] [rbp-254h]
  bool v51; // [rsp+88h] [rbp-238h]
  void *v52; // [rsp+88h] [rbp-238h]
  void *v53; // [rsp+88h] [rbp-238h]
  __int64 v54; // [rsp+88h] [rbp-238h]
  __int64 v55; // [rsp+88h] [rbp-238h]
  __int64 v56; // [rsp+88h] [rbp-238h]
  __int64 v57; // [rsp+88h] [rbp-238h]
  __int64 v58; // [rsp+A0h] [rbp-220h]
  void *v59; // [rsp+A0h] [rbp-220h]
  int *v60; // [rsp+B0h] [rbp-210h]
  unsigned int v61; // [rsp+B8h] [rbp-208h]
  unsigned int v63; // [rsp+CCh] [rbp-1F4h] BYREF
  _QWORD v64[2]; // [rsp+D0h] [rbp-1F0h] BYREF
  _QWORD v65[2]; // [rsp+E0h] [rbp-1E0h] BYREF
  _QWORD v66[2]; // [rsp+F0h] [rbp-1D0h] BYREF
  _QWORD v67[2]; // [rsp+100h] [rbp-1C0h] BYREF
  _QWORD v68[2]; // [rsp+110h] [rbp-1B0h] BYREF
  _QWORD v69[2]; // [rsp+120h] [rbp-1A0h] BYREF
  _QWORD v70[2]; // [rsp+130h] [rbp-190h] BYREF
  _QWORD v71[2]; // [rsp+140h] [rbp-180h] BYREF
  _QWORD v72[2]; // [rsp+150h] [rbp-170h] BYREF
  _QWORD v73[2]; // [rsp+160h] [rbp-160h] BYREF
  int v74[2]; // [rsp+170h] [rbp-150h] BYREF
  __int64 v75; // [rsp+178h] [rbp-148h]
  _QWORD v76[2]; // [rsp+180h] [rbp-140h] BYREF
  _QWORD v77[2]; // [rsp+190h] [rbp-130h] BYREF
  _QWORD v78[2]; // [rsp+1A0h] [rbp-120h] BYREF
  _QWORD v79[2]; // [rsp+1B0h] [rbp-110h] BYREF
  _QWORD v80[2]; // [rsp+1C0h] [rbp-100h] BYREF
  _QWORD v81[4]; // [rsp+1D0h] [rbp-F0h] BYREF
  _QWORD v82[4]; // [rsp+1F0h] [rbp-D0h] BYREF
  _QWORD v83[2]; // [rsp+210h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+220h] [rbp-A0h]
  __int64 v85; // [rsp+228h] [rbp-98h]
  _QWORD v86[4]; // [rsp+230h] [rbp-90h] BYREF
  unsigned int v87[8]; // [rsp+250h] [rbp-70h] BYREF
  char v88[80]; // [rsp+270h] [rbp-50h] BYREF

  v6 = 0;
  ++*(_DWORD *)(a1 + 340);
  v63 = 0;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 1;
  v65[1] = 0;
  v66[0] = 0;
  v66[1] = 0;
  v67[0] = 1;
  v67[1] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v69[0] = 1;
  v69[1] = 0;
  v70[0] = 0;
  v70[1] = 0;
  v71[0] = 1;
  v71[1] = 0;
  v72[0] = 0;
  v72[1] = 0;
  v73[0] = 1;
  v73[1] = 0;
  *(_QWORD *)v74 = 0;
  v75 = 0;
  v76[0] = 1;
  v76[1] = 0;
  v77[0] = 0;
  v77[1] = 0;
  v78[0] = 1;
  v78[1] = 0;
  v79[0] = 0;
  v79[1] = 0;
  v80[0] = 1;
  v80[1] = 0;
  v81[0] = 0;
  v81[1] = 0;
  v81[2] = 1;
  v81[3] = 0;
  v82[0] = 0;
  v82[1] = 0;
  v82[2] = 1;
  v82[3] = 0;
  v83[0] = 0;
  v83[1] = 0;
  v84 = 1;
  v85 = 0;
  v86[0] = 0;
  v86[1] = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a5 = 0;
  v8 = 214013 * *(_DWORD *)(v7 + 7504);
  v86[2] = 1;
  v86[3] = 0;
  v48 = 0;
  v8 += 2531011;
  *(_DWORD *)(v7 + 7504) = v8;
  v45 = (HIWORD(v8) & 0x7FFF) % 0x14u + 10;
  while ( 2 )
  {
    v9 = sub_8E6FA0(v7);
    if ( v9 )
    {
LABEL_130:
      if ( v6 )
        goto LABEL_96;
      v40 = 2;
      goto LABEL_95;
    }
    v10 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v77);
    sub_182CBA0(v10, v78);
    LODWORD(v78[0]) = 1;
    BYTE4(v78[0]) &= ~1u;
    v11 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v79);
    sub_182CBA0(v11, v80);
    LODWORD(v80[0]) = 1;
    BYTE4(v80[0]) &= ~1u;
    v12 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v72);
    sub_182CBA0(v12, v73);
    LODWORD(v73[0]) = 1;
    BYTE4(v73[0]) &= ~1u;
    v13 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v74);
    sub_182CBA0(v13, v76);
    BYTE4(v76[0]) &= ~1u;
    LODWORD(v76[0]) = 1;
    v14 = *a2;
    if ( !*a2 || (v60 = &v14[10 * *(v14 - 1)], v14 == v60) )
    {
LABEL_94:
      v40 = 0;
      v63 = 0;
      *a5 = 0;
LABEL_95:
      if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
        goto LABEL_96;
      goto LABEL_97;
    }
    v49 = -1;
    v61 = -1;
    do
    {
      while ( 1 )
      {
        v18 = v14[8];
        if ( v18 == -1 )
          goto LABEL_16;
        v87[0] = -1;
        v19 = qword_1C7F2C0;
        if ( (v14[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v70, v14);
        }
        else
        {
          v20 = *v14;
          BYTE4(v70[0]) &= ~1u;
          LODWORD(v70[0]) = v20;
        }
        if ( (v14[5] & 1) != 0 )
        {
          sub_182C690(v19, v71, v14 + 4);
        }
        else
        {
          v21 = v14[4];
          BYTE4(v71[0]) &= ~1u;
          LODWORD(v71[0]) = v21;
        }
        v58 = 8LL * v18;
        v22 = SLODWORD(v70[0]) > 0;
        if ( a3 != SLODWORD(v70[0]) > 0 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v18);
          if ( !v15 )
            goto LABEL_13;
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v18 + 3) >> 4) & 3) == 2 )
          {
            v54 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v18);
            v36 = sub_9AA360(a1, v18);
            v15 = v54;
            v16 = (unsigned __int64)v36;
          }
          else
          {
            v16 = *(_QWORD *)(a1 + 664) + ((unsigned __int64)v18 << 6);
          }
          v17 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v16 + 4) & 1) != 0 || (*(_BYTE *)(v15 + 20) & 1) != 0 )
          {
            v47 = v15;
            v53 = qword_1C7F2C0;
            v33 = sub_182C7B0(qword_1C7F2C0, v16, v15 + 16);
            v17 = v53;
            v15 = v47;
            if ( v33 )
              goto LABEL_12;
          }
          else if ( *(_DWORD *)v16 != *(_DWORD *)(v15 + 16) )
          {
            goto LABEL_12;
          }
          if ( (*(_BYTE *)(v16 + 20) & 1) != 0 || (*(_BYTE *)(v15 + 36) & 1) != 0 )
          {
            v57 = v15;
            v39 = sub_182C7B0(v17, v16 + 16, v15 + 32);
            v15 = v57;
            v34 = v39 == 0;
          }
          else
          {
            v34 = *(_DWORD *)(v16 + 16) == *(_DWORD *)(v15 + 32);
          }
          if ( !v34 )
            goto LABEL_12;
          goto LABEL_33;
        }
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v18);
        if ( v15 )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v18 + 3) >> 4) & 3) == 2 )
          {
            v55 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v18);
            v37 = sub_9AA360(a1, v18);
            v15 = v55;
            v16 = (unsigned __int64)v37;
          }
          else
          {
            v16 = *(_QWORD *)(a1 + 664) + ((unsigned __int64)v18 << 6);
          }
          v23 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v16 + 4) & 1) != 0 || (*(_BYTE *)(v15 + 20) & 1) != 0 )
          {
            v46 = v15;
            v52 = qword_1C7F2C0;
            v32 = sub_182C7B0(qword_1C7F2C0, v16, v15 + 16);
            v23 = v52;
            v15 = v46;
            v24 = v32 == 0;
          }
          else
          {
            v24 = *(_DWORD *)v16 == *(_DWORD *)(v15 + 16);
          }
          if ( !v24 )
            goto LABEL_12;
          if ( (*(_BYTE *)(v16 + 20) & 1) == 0 && (*(_BYTE *)(v15 + 36) & 1) == 0 )
          {
            if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(v15 + 32) )
              goto LABEL_33;
LABEL_12:
            v9 = 1;
            goto LABEL_13;
          }
          v56 = v15;
          v38 = sub_182C7B0(v23, v16 + 16, v15 + 32);
          v15 = v56;
          if ( v38 )
            goto LABEL_12;
LABEL_33:
          if ( sub_3ED680((__int64)qword_1C7F2C0, v16 + 32, v15 + 48) )
            goto LABEL_15;
          goto LABEL_12;
        }
LABEL_13:
        v51 = a3 == v22;
        if ( (unsigned __int8)sub_9BEB30(
                                (_QWORD *)a1,
                                v18,
                                a3 == v22,
                                (__int64)v66,
                                (__int64)v81,
                                (__int64)v83,
                                a5,
                                v87) )
          break;
        ++v63;
LABEL_15:
        v9 = 1;
LABEL_16:
        v14 += 10;
        if ( v60 == v14 )
          goto LABEL_46;
      }
      v25 = v87[0];
      if ( v87[0] == -1 )
      {
        sub_98B520((__int64)v72, (int *)v81);
        sub_98B520((__int64)v77, (int *)v83);
        if ( !v9 )
        {
          v61 = v18;
          v48 = v51;
          goto LABEL_49;
        }
        v29 = v72[0];
        if ( SLODWORD(v72[0]) > 0 )
        {
          v61 = v18;
          v49 = -1;
          v48 = v51;
          goto LABEL_50;
        }
        if ( !LODWORD(v72[0]) && v74[0] > 0 )
        {
          ++v63;
          v61 = v18;
          v48 = v51;
          goto LABEL_87;
        }
        v61 = v18;
        v48 = v51;
        goto LABEL_88;
      }
      v26 = qword_1C7F2C0;
      if ( (v78[0] & 0x100000000LL) != 0 || LODWORD(v78[0]) != 1 || (v84 & 0x100000000LL) != 0 || (_DWORD)v84 != 1 )
      {
        v27 = sub_1848D40(qword_1C7F2C0, v77, v83);
        v26 = qword_1C7F2C0;
        if ( v27 )
          goto LABEL_39;
      }
      else if ( (v77[0] & 0x100000000LL) != 0 || (v83[0] & 0x100000000LL) != 0 )
      {
        v35 = sub_182C7B0(qword_1C7F2C0, v77, v83);
        v26 = qword_1C7F2C0;
        if ( v35 < 0 )
          goto LABEL_39;
      }
      else if ( SLODWORD(v77[0]) < SLODWORD(v83[0]) )
      {
        goto LABEL_39;
      }
      if ( !sub_3ED680((__int64)v26, (__int64)v77, (__int64)v83)
        || !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v79, (__int64)v86) )
      {
        if ( LODWORD(v86[0]) | LODWORD(v83[0]) || v49 != -1 && v25 >= v49 )
          goto LABEL_16;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, (int *)v66);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v68, (int *)v70);
        goto LABEL_45;
      }
      v26 = qword_1C7F2C0;
LABEL_39:
      if ( (v66[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v26, v64, v66);
        if ( (v67[0] & 0x100000000LL) != 0 )
        {
LABEL_99:
          sub_182C690(v26, v65, v67);
          goto LABEL_42;
        }
      }
      else
      {
        BYTE4(v64[0]) &= ~1u;
        LODWORD(v64[0]) = v66[0];
        if ( (v67[0] & 0x100000000LL) != 0 )
          goto LABEL_99;
      }
      BYTE4(v65[0]) &= ~1u;
      LODWORD(v65[0]) = v67[0];
LABEL_42:
      v28 = qword_1C7F2C0;
      if ( (v70[0] & 0x100000000LL) != 0 )
      {
        v59 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v68, v70);
        v28 = v59;
        if ( (v71[0] & 0x100000000LL) == 0 )
        {
LABEL_44:
          BYTE4(v69[0]) &= ~1u;
          LODWORD(v69[0]) = v71[0];
          goto LABEL_45;
        }
      }
      else
      {
        BYTE4(v68[0]) &= ~1u;
        LODWORD(v68[0]) = v70[0];
        if ( (v71[0] & 0x100000000LL) == 0 )
          goto LABEL_44;
      }
      sub_182C690(v28, v69, v71);
LABEL_45:
      sub_98B520((__int64)v77, (int *)v83);
      sub_98B520((__int64)v72, (int *)v81);
      v49 = v25;
      v14 += 10;
      v61 = v18;
      v48 = v51;
    }
    while ( v60 != v14 );
LABEL_46:
    if ( v9 == 1 || v49 != -1 )
    {
      if ( v61 == -1 )
      {
        v6 = v63;
        goto LABEL_130;
      }
      v29 = v72[0];
      if ( SLODWORD(v72[0]) > 0 )
        goto LABEL_50;
      if ( LODWORD(v72[0]) )
        goto LABEL_53;
      if ( v74[0] > 0 )
        goto LABEL_52;
      if ( v49 == -1 )
        goto LABEL_87;
LABEL_54:
      if ( !sub_9B2ED0(a1, v61) )
      {
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v61);
        if ( v42 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v61);
          if ( v43 )
          {
            sub_992E80((__int64)v87, v43 + 16, v42 + 16);
            v44 = sub_9B0850((__int64)v87, (__int64)v77);
            sub_25A130(v88);
            sub_25A130((char *)v87);
            if ( v44 )
            {
              if ( !v48 )
              {
                sub_1831620(qword_1C7F2C0, v77);
                sub_1831620(qword_1C7F2C0, v79);
              }
              goto LABEL_91;
            }
          }
        }
      }
      sub_A15BB0(a1, v49, v61, (int *)v64, 0);
      if ( v48 )
        v30 = LODWORD(v64[0]) >> 31;
      else
        LOBYTE(v30) = SLODWORD(v64[0]) > 0;
      sub_9DA270((_QWORD *)a1, v49, v30, (int *)&v63, a5);
      v31 = (__int64 *)(*(_QWORD *)(a1 + 632) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 4LL * v61) & 0xFFFFFFF));
      sub_1831620(qword_1C7F2C0, v68);
      sub_9C2960(a1, (__int64)a2, (__int64)v68, v31);
LABEL_92:
      v6 = v63;
      if ( v63 >= v45 )
        goto LABEL_96;
      v7 = *(_QWORD *)(a1 + 16);
      continue;
    }
    break;
  }
  if ( v61 == -1 )
    goto LABEL_94;
LABEL_49:
  v49 = -1;
  v29 = v72[0];
  if ( SLODWORD(v72[0]) <= 0 )
  {
    if ( !LODWORD(v72[0]) && v74[0] > 0 )
      ++v63;
  }
  else
  {
LABEL_50:
    if ( (v72[0] & 0x100000000LL) != 0 || v29 != 1 || (v73[0] & 0x100000000LL) != 0 || LODWORD(v73[0]) != 1 || v74[0] )
LABEL_52:
      ++v63;
LABEL_53:
    if ( v49 != -1 )
      goto LABEL_54;
  }
LABEL_87:
  v58 = 8LL * v61;
LABEL_88:
  if ( v48 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 688) + v58) )
      goto LABEL_94;
    if ( !(LODWORD(v79[0]) | LODWORD(v77[0])) )
      goto LABEL_96;
LABEL_91:
    sub_9D7F30((_QWORD *)a1, v61, (__int64)v77);
    goto LABEL_92;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 680) + v58) )
    goto LABEL_94;
  if ( LODWORD(v79[0]) | LODWORD(v77[0]) )
  {
    sub_1831620(qword_1C7F2C0, v77);
    sub_1831620(qword_1C7F2C0, v79);
    sub_9D7F30((_QWORD *)a1, v61, (__int64)v77);
    goto LABEL_92;
  }
LABEL_96:
  v40 = 3;
LABEL_97:
  sub_25A130((char *)v86);
  sub_25A130((char *)v83);
  sub_25A130((char *)v82);
  sub_25A130((char *)v81);
  sub_25A130((char *)v79);
  sub_25A130((char *)v77);
  sub_25A130((char *)v74);
  sub_25A130((char *)v72);
  sub_25A130((char *)v70);
  sub_25A130((char *)v68);
  sub_25A130((char *)v66);
  sub_25A130((char *)v64);
  return v40;
}

