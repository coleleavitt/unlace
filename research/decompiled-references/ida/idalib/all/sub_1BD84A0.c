char __fastcall sub_1BD84A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 *v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r15
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // r12
  char v23; // al
  char result; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // al
  char v50; // cl
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  char v61; // al
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 *v65; // r12
  unsigned __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD *v73; // rax
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  bool v81; // al
  char v82; // al
  char v84; // [rsp+8h] [rbp-B0h]
  char v85; // [rsp+8h] [rbp-B0h]
  char v86; // [rsp+8h] [rbp-B0h]
  __int64 v88; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v89; // [rsp+20h] [rbp-98h]
  int v90; // [rsp+28h] [rbp-90h]
  char v91; // [rsp+2Fh] [rbp-89h]
  void *v92[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v93; // [rsp+40h] [rbp-78h]
  void *v94; // [rsp+50h] [rbp-68h] BYREF
  __int64 v95; // [rsp+58h] [rbp-60h]
  __int64 v96; // [rsp+60h] [rbp-58h]
  __int64 v97; // [rsp+68h] [rbp-50h]
  __int64 v98; // [rsp+70h] [rbp-48h]
  __int64 v99; // [rsp+78h] [rbp-40h]

  v6 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 13 )
    return 0;
  v12 = a3;
  v13 = sub_A62E10(*(_QWORD *)(a1 + 248), a3, a3, a4, a5);
  v18 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *v18;
  v20 = v13 == 0;
  v21 = *(_QWORD *)(*v18 + 8);
  if ( v20 )
  {
    v32 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *v32;
    if ( *(_BYTE *)(*v32 + 16) != 47 )
      goto LABEL_24;
    if ( *((char *)sub_F60F10(*v32, v12, v14, v15, v16, v17) + 76) < 0 )
      return 0;
  }
  else
  {
    v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(_BYTE *)(v22 + 16);
    if ( v23 == 13 )
    {
      if ( ((*(_WORD *)(v22 + 18) >> 3) & 0x1FF) != 0x1B4 )
      {
LABEL_5:
        if ( sub_F65140(v19, v12, v14, v15, v16, v17) )
          return ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 452;
        v75 = sub_A97D20(*(_QWORD *)(a1 + 248), *v18);
        if ( v75 < sub_A97D20(*(_QWORD *)(a1 + 248), *v6) )
          return ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 452;
        else
          return ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 444;
      }
      goto LABEL_24;
    }
    if ( v23 != 47 )
      goto LABEL_5;
    if ( *((char *)sub_F60F10(v22, v12, v14, v15, v16, v17) + 76) < 0 )
      return 0;
  }
  if ( (*((_BYTE *)sub_F60F10(v22, v12, v33, v34, v35, v36) + 77) & 2) != 0 )
  {
    v41 = sub_F60F10(v22, v12, v37, v38, v39, v40);
    v42 = sub_6F3660((__int64)v41);
    result = sub_1BC70C0(v42, a4);
    if ( !result )
      return sub_1BD84A0(a1, 0, v43, a4);
    return result;
  }
  if ( sub_9EC890(*v6, v12, v37, v38, v39) )
  {
    v12 = (unsigned int)sub_EEB7E0(a2, v12, a6);
    if ( !(unsigned __int8)sub_1E63330(a1, v12, a3, 1, 0) )
    {
      v73 = sub_F60F10(v22, v12, v69, v70, v71, v72);
      return sub_1BC70C0(a4, v73[17]);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    return 0;
  v19 = *v18;
LABEL_24:
  if ( !sub_F57FF0(v19) || (unsigned __int8)sub_F57EE0(*v18) || !sub_9EC890(*v6, v12, v25, v26, v27) )
  {
LABEL_25:
    if ( a2 )
    {
      v44 = sub_BFEF90(a2);
      if ( v44 )
      {
        v12 = *(_QWORD *)(a1 + 248);
        v46 = *v18;
        v93 = 0;
        *(_OWORD *)v92 = 0;
        if ( sub_F60F80(v46, v12, v25, v26, v27, v45) )
        {
          v49 = *(_BYTE *)(v44 + 68);
          if ( (v49 & 1) != 0 )
          {
            v12 = *(_QWORD *)(v44 + 72);
            if ( (v49 & 0xC) != 0xC && (v49 & 0xC) != 0 )
              v12 = *(_QWORD *)(v12 + 8);
          }
          else
          {
            v12 = 0;
          }
          sub_C3EB00((__int64)&v94, v12, *(_QWORD *)(a1 + 248), nullptr, v47, v48);
          if ( (_BYTE)v96 )
          {
            v76 = v95;
            LOBYTE(v93) = 1;
            LODWORD(v95) = 0;
            LODWORD(v92[1]) = v76;
            v92[0] = v94;
            BYTE4(v92[1]) = BYTE4(v95);
            sub_98E4B0((__int64)&v94);
            v50 = BYTE4(v92[1]);
            LODWORD(v95) = v92[1];
            if ( LODWORD(v92[1]) > 0x40 )
            {
              v86 = BYTE4(v92[1]);
              sub_2205470(&v94, 0, 0);
              v50 = v86;
            }
            else
            {
              v94 = nullptr;
            }
            v51 = *(_QWORD *)(a1 + 248);
            v52 = *v6;
            BYTE4(v95) = v50;
            v53 = sub_A97D20(v51, v52);
            v54 = (unsigned int)v95;
            if ( (unsigned int)v95 > 0x40 )
            {
              *(_QWORD *)v94 = v53;
              memset((char *)v94 + 8, 0, 8 * ((unsigned int)((unsigned __int64)(v54 + 63) >> 6) + 0x1FFFFFFF));
            }
            else
            {
              v55 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v95) & v53);
              if ( !(_DWORD)v95 )
                v55 = nullptr;
              v94 = v55;
            }
            if ( BYTE4(v92[1]) )
              v56 = (unsigned int)sub_2205DB0(v92, &v94) >> 31;
            else
              v56 = (unsigned int)sub_2205E20(v92, &v94) >> 31;
            if ( (_BYTE)v56
              || sub_F65140(*v18, (__int64)&v94, v57, v58, v59, v60)
              && (!BYTE4(v92[1]) ? (v81 = (int)sub_2205E20(v92, &v94) <= 0) : (v81 = (int)sub_2205DB0(v92, &v94) <= 0),
                  v81) )
            {
              v61 = ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 452;
            }
            else
            {
              v61 = sub_F65360(*v18, (__int64)&v94, v77, v78, v79, v80);
              if ( v61 )
              {
                v61 = BYTE4(v92[1]) ? (int)sub_2205DB0(v92, &v94) <= 0 : (int)sub_2205E20(v92, &v94) <= 0;
                if ( v61 )
                  v61 = ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 444;
              }
            }
            if ( (unsigned int)v95 > 0x40 && v94 )
            {
              v84 = v61;
              operator delete[](v94);
              v61 = v84;
            }
            v85 = v61;
            sub_98E4B0((__int64)v92);
            return v85;
          }
          sub_98E4B0((__int64)&v94);
        }
        sub_98E4B0((__int64)v92);
      }
    }
    v28 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) == 13 && ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
      v25 = *(unsigned __int16 *)(v8 + 18);
      result = 1;
      LOWORD(v25) = ((unsigned __int16)v25 >> 3) & 0x1FF;
      if ( (_WORD)v25 == 452 )
        return result;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 89LL) & 1) != 0
      && sub_9EC890(*v18, v12, v25, v26, v27)
      && sub_9EC890(*v6, v12, v29, v30, v31) )
    {
      v74 = sub_A97D20(*(_QWORD *)(a1 + 248), *v18);
      return v74 < sub_A97D20(*(_QWORD *)(a1 + 248), *v6);
    }
    return 0;
  }
  v91 = sub_F65140(*v18, v12, v25, v26, v27, v62);
  v63 = sub_A97D20(*(_QWORD *)(a1 + 248), *v18);
  v64 = *(_QWORD *)(a1 + 248);
  v26 = 0;
  v89 = v63;
  v94 = *(void **)(v64 + 18720);
  v95 = *(_QWORD *)(v64 + 18768);
  v96 = *(_QWORD *)(v64 + 18728);
  v97 = *(_QWORD *)(v64 + 18776);
  v98 = *(_QWORD *)(v64 + 18736);
  v99 = *(_QWORD *)(v64 + 18784);
  while ( 1 )
  {
    v90 = v26;
    v88 = v26;
    v65 = (__int64 *)((unsigned __int64)*(&v94 + v26) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *v65;
    v66 = sub_A97D20(v64, *v65);
    v68 = v88;
    if ( v89 < v66 )
      break;
    if ( v89 == v66 )
    {
      v82 = sub_F65140(*v65, v12, v25, v88, v27, v67);
      v68 = v88;
      if ( v82 == v91 )
        break;
    }
    v26 = v68 + 1;
    if ( v26 == 6 )
      goto LABEL_25;
    v64 = *(_QWORD *)(a1 + 248);
  }
  return sub_1BC70C0(a4, (__int64)*(&v94 + v90));
}
