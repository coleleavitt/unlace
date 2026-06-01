_QWORD *__fastcall sub_21E7DF0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  __int64 p_ptr; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  const char *(*v13)(); // rax
  const char *v14; // r13
  signed __int64 v15; // r12
  _QWORD *v16; // rbp
  void *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  const char *(*v25)(); // rax
  const char *v26; // r13
  signed __int64 v27; // r12
  _QWORD *v28; // rbp
  void *v29; // rax
  __int64 v30; // r14
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  const char *(*v36)(); // rax
  signed __int64 v37; // r12
  const char *v38; // r13
  _QWORD *v39; // rbp
  void *v40; // rax
  __int64 v41; // r14
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  const char *(*v47)(); // rax
  const char *v48; // r13
  signed __int64 v49; // r12
  _QWORD *v50; // rbp
  void *v51; // rax
  signed __int64 v52; // rdx
  signed __int64 v53; // rdx
  signed __int64 v54; // rdx
  __int64 v55; // r14
  const char *(*v56)(); // rax
  const char *v57; // r13
  signed __int64 v58; // r12
  _QWORD *v59; // rbp
  void *v60; // rax
  signed __int64 v61; // rdx
  signed __int64 v62; // rdx
  const char *v64; // [rsp+0h] [rbp-3E8h]
  const char *v65; // [rsp+0h] [rbp-3E8h]
  const char *v66; // [rsp+0h] [rbp-3E8h]
  const char *v67; // [rsp+0h] [rbp-3E8h]
  bool v68; // [rsp+0h] [rbp-3E8h]
  bool v69; // [rsp+8h] [rbp-3E0h]
  bool v70; // [rsp+8h] [rbp-3E0h]
  bool v71; // [rsp+8h] [rbp-3E0h]
  bool v72; // [rsp+8h] [rbp-3E0h]
  _BYTE *v73; // [rsp+10h] [rbp-3D8h] BYREF
  unsigned __int64 v74; // [rsp+18h] [rbp-3D0h]
  _QWORD v75[4]; // [rsp+20h] [rbp-3C8h] BYREF
  __int16 v76; // [rsp+40h] [rbp-3A8h]
  _QWORD v77[4]; // [rsp+50h] [rbp-398h] BYREF
  __int16 v78; // [rsp+70h] [rbp-378h]
  _QWORD v79[4]; // [rsp+80h] [rbp-368h] BYREF
  __int16 v80; // [rsp+A0h] [rbp-348h]
  _QWORD v81[4]; // [rsp+B0h] [rbp-338h] BYREF
  __int16 v82; // [rsp+D0h] [rbp-318h]
  _QWORD v83[4]; // [rsp+E0h] [rbp-308h] BYREF
  __int16 v84; // [rsp+100h] [rbp-2E8h]
  _QWORD v85[4]; // [rsp+110h] [rbp-2D8h] BYREF
  __int16 v86; // [rsp+130h] [rbp-2B8h]
  _QWORD v87[4]; // [rsp+140h] [rbp-2A8h] BYREF
  __int16 v88; // [rsp+160h] [rbp-288h]
  _QWORD v89[4]; // [rsp+170h] [rbp-278h] BYREF
  __int16 v90; // [rsp+190h] [rbp-258h]
  _QWORD v91[4]; // [rsp+1A0h] [rbp-248h] BYREF
  __int16 v92; // [rsp+1C0h] [rbp-228h]
  _QWORD v93[4]; // [rsp+1D0h] [rbp-218h] BYREF
  __int16 v94; // [rsp+1F0h] [rbp-1F8h]
  _QWORD v95[4]; // [rsp+200h] [rbp-1E8h] BYREF
  __int16 v96; // [rsp+220h] [rbp-1C8h]
  _QWORD v97[4]; // [rsp+230h] [rbp-1B8h] BYREF
  __int16 v98; // [rsp+250h] [rbp-198h]
  _QWORD v99[4]; // [rsp+260h] [rbp-188h] BYREF
  __int16 v100; // [rsp+280h] [rbp-168h]
  _QWORD v101[4]; // [rsp+290h] [rbp-158h] BYREF
  __int16 v102; // [rsp+2B0h] [rbp-138h]
  _QWORD v103[4]; // [rsp+2C0h] [rbp-128h] BYREF
  __int16 v104; // [rsp+2E0h] [rbp-108h]
  _QWORD v105[4]; // [rsp+2F0h] [rbp-F8h] BYREF
  __int16 v106; // [rsp+310h] [rbp-D8h]
  _BYTE v107[32]; // [rsp+320h] [rbp-C8h] BYREF
  char v108; // [rsp+340h] [rbp-A8h]
  unsigned int v109; // [rsp+34Ch] [rbp-9Ch]
  _BYTE *v110; // [rsp+350h] [rbp-98h]
  unsigned __int64 v111; // [rsp+358h] [rbp-90h]
  void *ptr; // [rsp+360h] [rbp-88h] BYREF
  __int64 v113; // [rsp+368h] [rbp-80h]
  _BYTE v114[120]; // [rsp+370h] [rbp-78h] BYREF

  sub_222E840(v107, a3, 1, 35);
  if ( !v108 )
  {
LABEL_4:
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    v73 = v110;
    v74 = v111;
    v4 = sub_2246F60(&v73, 32, 0);
    if ( v4 < v74 )
    {
      v6 = v74 - v4;
      v7 = &v73[v4];
      v73 = v7;
      v74 = v6;
      if ( v6 )
      {
        if ( *v7 != 35 )
          break;
      }
    }
LABEL_3:
    sub_222E680(v107);
    if ( !v108 )
      goto LABEL_4;
  }
  p_ptr = (__int64)&ptr;
  ptr = v114;
  v113 = 0x400000000LL;
  sub_22476F0(&v73, &ptr, 32, 0xFFFFFFFFLL, 0);
  if ( (_DWORD)v113 != 3 )
  {
    v55 = v109;
    v76 = 1283;
    v75[0] = "Expected 'kind mangled_name mangled_name', found '";
    v75[2] = v73;
    v75[3] = v74;
    v97[0] = v75;
    v97[2] = "'";
    v98 = 770;
    v56 = *(const char *(**)())(*a3 + 16);
    if ( v56 == sub_FC62B0 )
    {
      v57 = "Unknown buffer";
      v58 = 14;
      v59 = (_QWORD *)operator new(0x50u);
      *v59 = &off_2C74E00;
      v60 = v59 + 3;
      v59[1] = v59 + 3;
    }
    else
    {
      v57 = (const char *)((__int64 (__fastcall *)(__int64 *))v56)(a3);
      v58 = v62;
      v68 = v57 == nullptr && &v57[v62] != nullptr;
      v59 = (_QWORD *)operator new(0x50u);
      *v59 = &off_2C74E00;
      v60 = v59 + 3;
      v59[1] = v59 + 3;
      if ( v68 )
        goto LABEL_84;
      if ( (unsigned __int64)v58 > 0xF )
      {
        if ( v58 < 0 )
          goto LABEL_83;
        v60 = (void *)operator new(v58 + 1);
        v59[3] = v58;
        v59[1] = v60;
      }
      else
      {
        if ( v58 == 1 )
        {
          *((_BYTE *)v59 + 24) = *v57;
          goto LABEL_66;
        }
        if ( !v58 )
          goto LABEL_66;
      }
    }
    memcpy(v60, v57, v58);
    v60 = (void *)v59[1];
LABEL_66:
    v59[2] = v58;
    *((_BYTE *)v60 + v58) = 0;
    v59[5] = v55;
    sub_2253560(v59 + 6, v97);
    *a1 = v59;
    goto LABEL_16;
  }
  v9 = *((_QWORD *)ptr + 1);
  v10 = *(_DWORD **)ptr;
  if ( v9 == 4 )
  {
    p_ptr = 0;
    if ( *v10 != 1701667182 )
    {
      if ( *v10 != 1701869940 )
        goto LABEL_12;
      LODWORD(p_ptr) = 1;
    }
LABEL_21:
    v18 = sub_21E67E0(a2, p_ptr, *((char **)ptr + 2), *((_QWORD *)ptr + 3), *((char **)ptr + 4), *((_QWORD *)ptr + 5));
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        if ( v18 != 1 )
        {
          if ( ptr != v114 )
            free(ptr);
          goto LABEL_3;
        }
        v79[0] = "Manglings '";
        v19 = *((_QWORD *)ptr + 4);
        v20 = *((_QWORD *)ptr + 2);
        v80 = 1283;
        v21 = *((_QWORD *)ptr + 5);
        v22 = *((_QWORD *)ptr + 3);
        v79[2] = v20;
        v23 = v109;
        v79[3] = v22;
        v81[0] = v79;
        v81[2] = "' and '";
        v82 = 770;
        v83[0] = v81;
        v84 = 1282;
        v101[0] = v83;
        v101[2] = "' have both been used in prior remappings. Move this remapping earlier in the file.";
        v102 = 770;
        v24 = *a3;
        v83[3] = v21;
        v25 = *(const char *(**)())(v24 + 16);
        v83[2] = v19;
        if ( v25 == sub_FC62B0 )
        {
          v26 = "Unknown buffer";
          v27 = 14;
          v28 = (_QWORD *)operator new(0x50u);
          *v28 = &off_2C74E00;
          v29 = v28 + 3;
          v28[1] = v28 + 3;
          goto LABEL_28;
        }
        v64 = (const char *)((__int64 (__fastcall *)(__int64 *))v25)(a3);
        v26 = v64;
        v27 = v52;
        v69 = v64 == nullptr && &v64[v52] != nullptr;
        v28 = (_QWORD *)operator new(0x50u);
        *v28 = &off_2C74E00;
        v29 = v28 + 3;
        v28[1] = v28 + 3;
        if ( !v69 )
        {
          if ( (unsigned __int64)v27 <= 0xF )
          {
            if ( v27 == 1 )
            {
              *((_BYTE *)v28 + 24) = *v64;
              goto LABEL_29;
            }
            if ( !v27 )
              goto LABEL_29;
LABEL_28:
            memcpy(v29, v26, v27);
            v29 = (void *)v28[1];
LABEL_29:
            v28[2] = v27;
            *((_BYTE *)v29 + v27) = 0;
            v28[5] = v23;
            sub_2253560(v28 + 6, v101);
            *a1 = v28;
            goto LABEL_16;
          }
          if ( v27 >= 0 )
          {
            v29 = (void *)operator new(v27 + 1);
            v28[3] = v27;
            v28[1] = v29;
            goto LABEL_28;
          }
LABEL_83:
          std::__throw_length_error("basic_string::_M_create");
        }
LABEL_84:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v30 = v109;
      v31 = *(_DWORD **)ptr;
      v32 = *((_QWORD *)ptr + 1);
      v92 = 1283;
      v91[0] = "Could not demangle '";
      v33 = *((_QWORD *)ptr + 4);
      v34 = *((_QWORD *)ptr + 5);
      v95[3] = v32;
      v91[2] = v33;
      v91[3] = v34;
      v93[0] = v91;
      v93[2] = "' as a <";
      v95[0] = v93;
      v105[0] = v95;
      v105[2] = ">; invalid mangling?";
      v35 = *a3;
      v94 = 770;
      v36 = *(const char *(**)())(v35 + 16);
      v95[2] = v31;
      v96 = 1282;
      v106 = 770;
      if ( v36 == sub_FC62B0 )
      {
        v37 = 14;
        v38 = "Unknown buffer";
        v39 = (_QWORD *)operator new(0x50u);
        *v39 = &off_2C74E00;
        v40 = v39 + 3;
        v39[1] = v39 + 3;
      }
      else
      {
        v65 = (const char *)((__int64 (__fastcall *)(__int64 *))v36)(a3);
        v38 = v65;
        v37 = v53;
        v70 = v65 == nullptr && &v65[v53] != nullptr;
        v39 = (_QWORD *)operator new(0x50u);
        *v39 = &off_2C74E00;
        v40 = v39 + 3;
        v39[1] = v39 + 3;
        if ( v70 )
          goto LABEL_84;
        if ( (unsigned __int64)v37 > 0xF )
        {
          if ( v37 < 0 )
            goto LABEL_83;
          v40 = (void *)operator new(v37 + 1);
          v39[3] = v37;
          v39[1] = v40;
        }
        else
        {
          if ( v37 == 1 )
          {
            *((_BYTE *)v39 + 24) = *v65;
            goto LABEL_33;
          }
          if ( !v37 )
            goto LABEL_33;
        }
      }
      memcpy(v40, v38, v37);
      v40 = (void *)v39[1];
LABEL_33:
      v39[2] = v37;
      *((_BYTE *)v40 + v37) = 0;
      v39[5] = v30;
      sub_2253560(v39 + 6, v105);
      *a1 = v39;
      goto LABEL_16;
    }
    v41 = v109;
    v42 = *(_DWORD **)ptr;
    v43 = *((_QWORD *)ptr + 1);
    v85[0] = "Could not demangle '";
    v86 = 1283;
    v44 = *((_QWORD *)ptr + 2);
    v45 = *((_QWORD *)ptr + 3);
    v89[3] = v43;
    v85[2] = v44;
    v85[3] = v45;
    v87[0] = v85;
    v87[2] = "' as a <";
    v89[0] = v87;
    v103[0] = v89;
    v103[2] = ">; invalid mangling?";
    v46 = *a3;
    v88 = 770;
    v47 = *(const char *(**)())(v46 + 16);
    v89[2] = v42;
    v90 = 1282;
    v104 = 770;
    if ( v47 == sub_FC62B0 )
    {
      v48 = "Unknown buffer";
      v49 = 14;
      v50 = (_QWORD *)operator new(0x50u);
      *v50 = &off_2C74E00;
      v51 = v50 + 3;
      v50[1] = v50 + 3;
    }
    else
    {
      v66 = (const char *)((__int64 (__fastcall *)(__int64 *))v47)(a3);
      v48 = v66;
      v49 = v54;
      v71 = v66 == nullptr && &v66[v54] != nullptr;
      v50 = (_QWORD *)operator new(0x50u);
      *v50 = &off_2C74E00;
      v51 = v50 + 3;
      v50[1] = v50 + 3;
      if ( v71 )
        goto LABEL_84;
      if ( (unsigned __int64)v49 > 0xF )
      {
        if ( v49 < 0 )
          goto LABEL_83;
        v51 = (void *)operator new(v49 + 1);
        v50[3] = v49;
        v50[1] = v51;
      }
      else
      {
        if ( v49 == 1 )
        {
          *((_BYTE *)v50 + 24) = *v66;
          goto LABEL_37;
        }
        if ( !v49 )
          goto LABEL_37;
      }
    }
    memcpy(v51, v48, v49);
    v51 = (void *)v50[1];
LABEL_37:
    v50[2] = v49;
    *((_BYTE *)v51 + v49) = 0;
    v50[5] = v41;
    sub_2253560(v50 + 6, v103);
    *a1 = v50;
    goto LABEL_16;
  }
  if ( v9 == 8 )
  {
    p_ptr = 0x676E69646F636E65LL;
    if ( *(_QWORD *)v10 == 0x676E69646F636E65LL )
    {
      LODWORD(p_ptr) = 2;
      goto LABEL_21;
    }
  }
LABEL_12:
  v11 = v109;
  v77[0] = "Invalid kind, expected 'name', 'type', or 'encoding', found '";
  v78 = 1283;
  v77[2] = *(_QWORD *)ptr;
  v12 = *((_QWORD *)ptr + 1);
  v100 = 770;
  v77[3] = v12;
  v99[0] = v77;
  v99[2] = "'";
  v13 = *(const char *(**)())(*a3 + 16);
  if ( v13 == sub_FC62B0 )
  {
    v14 = "Unknown buffer";
    v15 = 14;
    v16 = (_QWORD *)operator new(0x50u);
    *v16 = &off_2C74E00;
    v17 = v16 + 3;
    v16[1] = v16 + 3;
    goto LABEL_14;
  }
  v67 = (const char *)((__int64 (__fastcall *)(__int64 *, __int64))v13)(a3, p_ptr);
  v14 = v67;
  v15 = v61;
  v72 = v67 == nullptr && &v67[v61] != nullptr;
  v16 = (_QWORD *)operator new(0x50u);
  *v16 = &off_2C74E00;
  v17 = v16 + 3;
  v16[1] = v16 + 3;
  if ( v72 )
    goto LABEL_84;
  if ( (unsigned __int64)v15 > 0xF )
  {
    if ( v15 >= 0 )
    {
      v17 = (void *)operator new(v15 + 1);
      v16[3] = v15;
      v16[1] = v17;
      goto LABEL_14;
    }
    goto LABEL_83;
  }
  if ( v15 == 1 )
  {
    *((_BYTE *)v16 + 24) = *v67;
    goto LABEL_15;
  }
  if ( v15 )
  {
LABEL_14:
    memcpy(v17, v14, v15);
    v17 = (void *)v16[1];
  }
LABEL_15:
  v16[2] = v15;
  *((_BYTE *)v17 + v15) = 0;
  v16[5] = v11;
  sub_2253560(v16 + 6, v99);
  *a1 = v16;
LABEL_16:
  if ( ptr != v114 )
    free(ptr);
  return a1;
}
