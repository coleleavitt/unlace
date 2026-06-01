__int64 __fastcall sub_16D1970(__int64 a1, void **p_ptr, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // r15d
  char v10; // al
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  int v14; // ebx
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rbx
  _DWORD *v18; // r15
  __int64 v19; // rdx
  char v20; // al
  unsigned __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // si
  unsigned int v30; // edx
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rax
  void *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  bool v37; // cc
  _QWORD *v38; // rbp
  unsigned __int64 v39; // r14
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 v46; // r13
  void *v47; // rdi
  int v48; // edx
  _QWORD *v49; // rdx
  __int64 v50; // r14
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rdx
  bool v55; // al
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  int v60; // r12d
  unsigned int v61; // r15d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 *v68; // rsi
  unsigned int v69; // ecx
  _BYTE *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 v73; // rbx
  unsigned int v74; // eax
  unsigned __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // eax
  _BYTE *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbx
  unsigned __int64 v82; // rbp
  unsigned int v83; // r13d
  __int64 v84; // rdi
  __int64 *v85; // [rsp+0h] [rbp-138h]
  __int64 *v86; // [rsp+0h] [rbp-138h]
  char v87; // [rsp+8h] [rbp-130h]
  unsigned __int64 v88; // [rsp+10h] [rbp-128h]
  __int64 v89; // [rsp+10h] [rbp-128h]
  char v90; // [rsp+1Bh] [rbp-11Dh]
  unsigned int v91; // [rsp+1Ch] [rbp-11Ch]
  unsigned int v92; // [rsp+1Ch] [rbp-11Ch]
  unsigned __int64 v93; // [rsp+28h] [rbp-110h]
  int v94; // [rsp+34h] [rbp-104h] BYREF
  int v95; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v96; // [rsp+3Ch] [rbp-FCh] BYREF
  void *v97; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v98; // [rsp+48h] [rbp-F0h]
  char v99; // [rsp+4Ch] [rbp-ECh]
  void *v100[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v103; // [rsp+78h] [rbp-C0h]
  _QWORD v104[23]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = a1;
  v8 = (__int64)p_ptr;
  v9 = *((_DWORD *)p_ptr + 4);
  if ( v9 <= 1 )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *((_DWORD *)p_ptr + 5), 0x1469u, 0);
    v94 = 0;
    v62 = sub_1587D10((__int64)&ptr, &v94);
    v95 = 2;
    v63 = sub_1587D10(v62, &v95);
    v96 = *((_DWORD *)p_ptr + 4);
    v64 = sub_16CF160(v63, &v96);
    LODWORD(v97) = 0;
    v65 = sub_1587D10(v64, (int *)&v97);
    v23 = 1;
    v100[0] = (void *)sub_EEC8C0((unsigned __int64)p_ptr, (__int64)&v97, a3);
    sub_1587DB0(v65, (__int64 *)v100);
    sub_15F7200(&ptr);
    return v23;
  }
  v10 = *((_BYTE *)p_ptr + 2);
  v11 = ((v10 & 8) != 0) + 1LL;
  v12 = p_ptr[v11 + 4];
  v13 = v12[1];
  v93 = v13;
  if ( (*(_DWORD *)v12 & 0x10000) != 0 || (v49 = p_ptr[v11 + 5], (*(_DWORD *)v49 & 0x10000) != 0) )
  {
    v14 = 0;
    if ( v9 != 2 )
    {
LABEL_4:
      p_ptr = &v97;
      v15 = 2;
      v16 = v9;
      v88 = (unsigned int)(2 * v14);
      while ( 1 )
      {
        v17 = 8LL * v15;
        v18 = *(_DWORD **)(v17 + v8 + 8 * (((v10 & 8) != 0) + 1LL) + 32);
        if ( ((*v18 >> 14) & 0xC) != 0 )
        {
          if ( ++v15 >= v16 )
            goto LABEL_35;
          goto LABEL_6;
        }
        v19 = *(_QWORD *)(v7 + 248);
        v101 = 0;
        a3 = 0.0;
        *(_OWORD *)v100 = 0;
        sub_C3EB00((__int64)&ptr, (unsigned __int64)v18, v19, nullptr, a6, a7);
        if ( (_BYTE)v101 )
        {
          v20 = v104[0];
          if ( LOBYTE(v104[0]) )
          {
            if ( LODWORD(v100[1]) > 0x40 && v100[0] )
            {
              operator delete[](v100[0]);
              v20 = v101;
            }
            v100[0] = ptr;
            v48 = v103;
            LODWORD(v103) = 0;
            LODWORD(v100[1]) = v48;
            BYTE4(v100[1]) = BYTE4(v103);
          }
          else
          {
            LOBYTE(v101) = 0;
            if ( LODWORD(v100[1]) <= 0x40 || !v100[0] )
            {
LABEL_13:
              v21 = (unsigned __int64)v18;
              sub_98E4B0((__int64)&ptr);
              goto LABEL_14;
            }
            operator delete[](v100[0]);
            v20 = v101;
          }
          v87 = v20;
          sub_98E4B0((__int64)&ptr);
          if ( !v87 )
          {
            v21 = (unsigned __int64)v18;
LABEL_14:
            v22 = sub_BF6D70(v8);
            sub_168B9F0((__int64)&ptr, (__int64 *)(v7 + 8), v22, 0x1376u, 0);
            v23 = 1;
            v97 = (void *)sub_EEC8C0(v21, v7 + 8, 0.0);
            sub_1587DB0((__int64)&ptr, (__int64 *)&v97);
            sub_15F7200(&ptr);
LABEL_15:
            sub_98E4B0((__int64)v100);
            return v23;
          }
        }
        else
        {
          if ( !LOBYTE(v104[0]) )
            goto LABEL_13;
          v25 = v103;
          LODWORD(v103) = 0;
          LOBYTE(v101) = 1;
          LODWORD(v100[1]) = v25;
          v100[0] = ptr;
          BYTE4(v100[1]) = BYTE4(v103);
          sub_98E4B0((__int64)&ptr);
        }
        v29 = BYTE4(v100[1]);
        v30 = (unsigned int)v100[1];
        if ( BYTE4(v100[1]) )
        {
          v47 = v100[0];
          if ( LODWORD(v100[1]) <= 0x40 )
            goto LABEL_44;
        }
        else
        {
          if ( !LODWORD(v100[1]) )
            goto LABEL_27;
          if ( LODWORD(v100[1]) <= 0x40 )
          {
            v34 = v100[0];
            v26 = (unsigned int)(64 - LODWORD(v100[1]));
            v47 = v100[0];
            if ( v100[0] == (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - LOBYTE(v100[1]))) )
              goto LABEL_28;
LABEL_44:
            v33 = (unsigned __int64)v47;
            goto LABEL_25;
          }
          v91 = (unsigned int)v100[1];
          v90 = BYTE4(v100[1]);
          v31 = sub_2206980(v100);
          v30 = v91;
          v29 = v90;
          if ( v31 == v91 )
          {
            v98 = v31;
            goto LABEL_46;
          }
        }
        v92 = v30;
        v32 = sub_2206780(v100);
        v30 = v92;
        if ( v92 - v32 > 0x40 )
          goto LABEL_75;
        v33 = *(_QWORD *)v100[0];
LABEL_25:
        if ( v88 <= v33 )
        {
LABEL_75:
          v66 = sub_BF6D70(v8);
          sub_168B9F0((__int64)&ptr, (__int64 *)(v7 + 8), v66, 0x1374u, 0);
          v23 = 1;
          v97 = (void *)sub_EEC8C0((unsigned __int64)v18, v7 + 8, 0.0);
          sub_1587DB0((__int64)&ptr, (__int64 *)&v97);
          sub_15F7200(&ptr);
          goto LABEL_15;
        }
        v98 = v30;
        if ( v30 <= 0x40 )
        {
LABEL_27:
          v34 = v100[0];
LABEL_28:
          v97 = v34;
          goto LABEL_29;
        }
LABEL_46:
        sub_2205510(&v97);
        v34 = v97;
        v29 = BYTE4(v100[1]);
        v30 = v98;
LABEL_29:
        LODWORD(v104[0]) = v30;
        v35 = *(_QWORD **)(v7 + 248);
        v99 = v29;
        BYTE4(v104[0]) = v29;
        p_ptr = (void **)v18;
        BYTE4(ptr) &= ~1u;
        LODWORD(ptr) = 2;
        v98 = 0;
        v103 = (__int64)v34;
        v36 = sub_C09C20(v35, (__int64)v18, (int *)&ptr, v26, v27, v28);
        v37 = (unsigned int)ptr <= 1;
        *(_QWORD *)(v17 + v8 + 8 * (((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL) + 32) = v36;
        if ( !v37 )
          sub_A4F8E0((int *)&ptr);
        if ( v98 > 0x40 && v97 )
          operator delete[](v97);
        ++v15;
        sub_98E4B0((__int64)v100);
        v16 = *(_DWORD *)(v8 + 16);
        if ( v15 >= v16 )
        {
LABEL_35:
          v9 = v16;
          goto LABEL_36;
        }
LABEL_6:
        v10 = *(_BYTE *)(v8 + 2);
      }
    }
    p_ptr = &ptr;
    HIDWORD(v103) = 6;
    ptr = v104;
    goto LABEL_38;
  }
  v50 = v49[1];
  v51 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v52 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1
    || (v53 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFF0LL),
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL)
      - 57 > 1) )
  {
    v67 = sub_BF6D70((__int64)p_ptr);
    v68 = (__int64 *)(a1 + 8);
    v69 = 5439;
LABEL_77:
    sub_168B9F0((__int64)&ptr, v68, v67, v69, 0);
    v70 = (_BYTE *)sub_BFBC70(*(_QWORD *)(v8 + 32));
    if ( v70 && (v70[28] & 0x7Fu) - 34 >= 6 )
      v70 = nullptr;
    v97 = v70;
    v71 = sub_16CEDA0((__int64)&ptr, (__int64 *)&v97);
    LOBYTE(v96) = 0;
    v72 = sub_1588420(v71, (unsigned __int8 *)&v96);
    v73 = 8 * (((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL);
    v74 = sub_EEC140(*(_QWORD *)(v8 + v73 + 40));
    v75 = *(_QWORD *)(v8 + v73 + 32);
    v23 = 1;
    v100[0] = (void *)__PAIR64__(v74, sub_EEB7E0(v75, (__int64)&v96, a3));
    sub_1587DB0(v72, (__int64 *)v100);
    sub_15F7200(&ptr);
    return v23;
  }
  v54 = (unsigned int)*(unsigned __int8 *)(v52 + 16) - 57;
  if ( (unsigned int)v54 > 1 )
  {
    v52 = sub_F63050(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v54, v53);
    v9 = *((_DWORD *)p_ptr + 4);
    v53 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v51 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v14 = *(_DWORD *)(v52 + 20);
  if ( v9 != 2 )
  {
    p_ptr = (void **)v50;
    v85 = (__int64 *)v51;
    v55 = sub_16B66C0(v13, v50);
    a6 = (__int64)v85;
    if ( v55 )
    {
      if ( v9 - 2 == v14 )
      {
LABEL_64:
        if ( v9 > 2 )
        {
          v10 = *(_BYTE *)(v8 + 2);
          goto LABEL_4;
        }
LABEL_36:
        v38 = v104;
        ptr = v104;
        v103 = 0x600000000LL;
        if ( !v9 )
        {
          v39 = 0;
LABEL_72:
          v59 = sub_EEB7E0(*(_QWORD *)(v8 + 32), (__int64)p_ptr, a3);
          v60 = *(_DWORD *)(v8 + 20);
          v61 = v59;
          v23 = sub_EEE9A0(32, *(_QWORD **)(v7 + 248), 8u);
          sub_C0BE70(v23, *(_QWORD **)(v7 + 248), v38, v39, v93, v61, v60);
          if ( ptr != v104 )
            free(ptr);
          return v23;
        }
        v10 = *(_BYTE *)(v8 + 2);
LABEL_38:
        LODWORD(v103) = 1;
        v39 = 1;
        v40 = (__int64 *)(v8 + 8 * (((v10 & 8) != 0) + 1LL) + 32);
        v41 = *v40;
        *v40 = 0;
        v104[0] = v41;
        if ( v9 != 1 )
        {
          p_ptr = &ptr;
          v42 = 1;
          v43 = 1;
          v89 = v7;
          do
          {
            v45 = 8LL * v43;
            v46 = *(_QWORD *)(v45 + v8 + 8 * (((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL) + 32);
            if ( v39 + 1 > HIDWORD(v103) )
            {
              p_ptr = (void **)v104;
              sub_2237220(&ptr, v104, v39 + 1, 8);
              v42 = (unsigned int)v103;
            }
            ++v43;
            *((_QWORD *)ptr + v42) = v46;
            v42 = (unsigned int)(v103 + 1);
            v44 = ((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL;
            LODWORD(v103) = v42;
            v39 = (unsigned int)v42;
            *(_QWORD *)(v45 + v8 + 8 * v44 + 32) = 0;
          }
          while ( v43 != v9 );
          v7 = v89;
        }
        v38 = ptr;
        goto LABEL_72;
      }
      v57 = *v85;
      v58 = (unsigned int)*(unsigned __int8 *)(*v85 + 16) - 57;
      if ( (unsigned int)v58 > 1 )
        v57 = sub_F63050(v57, v50, v58, v56);
      p_ptr = *(void ***)(v57 + 32);
      v93 = sub_A70300(*(_QWORD *)(a1 + 248), (__int64)p_ptr, v9 - 2, 0);
LABEL_63:
      v9 = *(_DWORD *)(v8 + 16);
      goto LABEL_64;
    }
    v67 = sub_BF6D70(v8);
    v68 = (__int64 *)(a1 + 8);
    v69 = 5438;
    goto LABEL_77;
  }
  v86 = v53;
  if ( sub_F61A60(*v53, (__int64)p_ptr, v54, (__int64)v53, v51, a7) )
  {
    v76 = *v86;
    v77 = (unsigned int)*(unsigned __int8 *)(*v86 + 16) - 57;
    if ( (unsigned int)v77 > 1 )
      v76 = sub_F63050(v76, p_ptr, v77, v86);
    if ( v14 == *(_DWORD *)(v76 + 20) )
      goto LABEL_63;
  }
  v78 = sub_BF6D70((__int64)p_ptr);
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v78, 0x153Eu, 0);
  v79 = (_BYTE *)sub_BFBC70((unsigned __int64)p_ptr[4]);
  if ( v79 && (v79[28] & 0x7Fu) - 34 >= 6 )
    v79 = nullptr;
  v97 = v79;
  v80 = sub_16CEDA0((__int64)&ptr, (__int64 *)&v97);
  LOBYTE(v96) = 0;
  v81 = sub_1588420(v80, (unsigned __int8 *)&v96);
  v82 = (unsigned __int64)p_ptr[((*((_BYTE *)p_ptr + 2) & 8) != 0) + 6];
  v83 = sub_EEC140(v82);
  v84 = v81;
  v100[0] = (void *)__PAIR64__(v83, sub_EEB7E0(v82, (__int64)&v96, a3));
  v23 = 1;
  sub_1587DB0(v84, (__int64 *)v100);
  sub_15F7200(&ptr);
  return v23;
}
