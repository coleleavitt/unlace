__int64 __fastcall sub_77A780(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rcx
  int v12; // edi
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  void *v19; // rbp
  __int64 v20; // rbp
  void *v21; // rdi
  __int64 *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // edi
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  void *v38; // rdi
  void *v39; // rdi
  char v40; // al
  __int64 v41; // rdx
  void *v42; // rbx
  void *v43; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rbp
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // r10
  __int64 v52; // rax
  int v53; // edi
  unsigned int v54; // edx
  __int64 *v55; // rsi
  __int64 v56; // rdx
  __int64 *v57; // r9
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  _QWORD *v64; // rsi
  int v65; // edi
  __int64 v66; // rax
  __int64 *v67; // rax
  _QWORD *v68; // r12
  unsigned __int64 v69; // rbp
  __int64 v70; // r13
  __int64 *v71; // rbx
  __int64 v72; // rsi
  __int64 v74; // rax
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int *v77; // rax
  _QWORD *v78; // rax
  char **exception; // r12
  __int64 v80; // [rsp+10h] [rbp-138h]
  __int64 v81; // [rsp+10h] [rbp-138h]
  __int64 v82; // [rsp+10h] [rbp-138h]
  __int64 v83; // [rsp+18h] [rbp-130h]
  __int64 v84; // [rsp+18h] [rbp-130h]
  unsigned int v85; // [rsp+20h] [rbp-128h]
  _QWORD *v86; // [rsp+20h] [rbp-128h]
  __int64 v87; // [rsp+20h] [rbp-128h]
  __int64 v88; // [rsp+20h] [rbp-128h]
  __int64 v90; // [rsp+38h] [rbp-110h]
  __int64 v91; // [rsp+40h] [rbp-108h]
  void *v92; // [rsp+40h] [rbp-108h]
  unsigned int v93; // [rsp+40h] [rbp-108h]
  __int64 v94; // [rsp+40h] [rbp-108h]
  __int64 v95; // [rsp+58h] [rbp-F0h]
  int v96; // [rsp+70h] [rbp-D8h] BYREF
  int v97[6]; // [rsp+78h] [rbp-D0h]
  _QWORD v98[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v99[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v100[2]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v101[2]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v102[2]; // [rsp+D0h] [rbp-78h] BYREF
  int v103; // [rsp+E0h] [rbp-68h] BYREF
  char v104; // [rsp+E4h] [rbp-64h]
  __int64 v105; // [rsp+E8h] [rbp-60h]
  __int64 v106[2]; // [rsp+F0h] [rbp-58h] BYREF
  int v107; // [rsp+100h] [rbp-48h] BYREF
  char v108; // [rsp+104h] [rbp-44h]
  __int64 v109; // [rsp+108h] [rbp-40h]

  sub_16744A0(&v96, a1[4]);
  v98[0] = 0;
  v98[1] = 0;
  v99[0] = 1;
  v99[1] = 0;
  v100[0] = 2;
  v100[1] = 0;
  v101[0] = 1;
  v101[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v101);
  v5 = a1[5];
  BYTE4(v101[0]) &= ~1u;
  LODWORD(v101[0]) = 1;
  if ( !v5 || (v6 = *(unsigned int *)(v5 - 4), !(_DWORD)v6) )
  {
    v7 = v98;
    goto LABEL_44;
  }
  v7 = v98;
  v90 = 8 * v6;
  v8 = 0;
  while ( 2 )
  {
    v9 = *(_QWORD *)(v5 + v8);
    v10 = *(unsigned int *)(a2 + 32);
    v11 = *(__int64 **)(a2 + 24);
    v12 = *(_DWORD *)(v9 + 12);
    v13 = v10 - 1;
    v10 *= 24;
    v14 = (__int64 *)((char *)v11 + v10);
    v15 = 24LL * (v12 & v13);
    v16 = &v11[(unsigned __int64)v15 / 8];
    if ( v15 == v10 )
    {
LABEL_54:
      if ( v11 != v16 )
      {
        while ( 1 )
        {
          v46 = *v11;
          if ( (unsigned __int64)*v11 > 1 )
          {
            if ( *(_DWORD *)(v46 + 12) == v12 && v9 == v46 )
            {
              v17 = v11;
              goto LABEL_42;
            }
          }
          else if ( !v46 )
          {
            goto LABEL_11;
          }
          v11 += 3;
          if ( v16 == v11 )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v17 = &v11[(unsigned __int64)v15 / 8];
    while ( 1 )
    {
      v18 = *v17;
      if ( (unsigned __int64)*v17 > 1 )
        break;
      if ( !v18 )
        goto LABEL_11;
LABEL_8:
      v17 += 3;
      if ( v14 == v17 )
        goto LABEL_54;
    }
    if ( *(_DWORD *)(v18 + 12) != v12 || v9 != v18 )
      goto LABEL_8;
LABEL_42:
    v41 = v17[2];
    if ( v41 )
    {
      sub_135F9B0(a3, v9, v41);
      v8 += 8;
      if ( v8 != v90 )
        goto LABEL_26;
      break;
    }
LABEL_11:
    v19 = qword_1C7F2C0;
    v80 = *(_QWORD *)(a1[7] + v8);
    sub_182CEF0(qword_1C7F2C0, v7);
    sub_182CBA0(v19, v99);
    BYTE4(v99[0]) &= ~1u;
    LODWORD(v99[0]) = 1;
    v85 = *(_DWORD *)(v80 + 24);
    if ( !v85 )
    {
LABEL_24:
      v31 = sub_1674520(&v96, v7, v85);
      sub_135F9B0(a3, *(_QWORD *)(a1[5] + v8), v31);
      goto LABEL_25;
    }
    v20 = v80;
    v83 = v80 + 8LL * v85;
    while ( 1 )
    {
LABEL_13:
      v21 = qword_1C7F2C0;
      if ( (v99[0] & 0x100000000LL) != 0
        || LODWORD(v99[0]) != 1
        || (v101[0] & 0x100000000LL) != 0
        || LODWORD(v101[0]) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v7, v100);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, v7, v100);
        sub_182CBA0(v21, v99);
        BYTE4(v99[0]) &= ~1u;
        LODWORD(v99[0]) = 1;
      }
      v22 = *(__int64 **)(a2 + 24);
      v23 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 16LL);
      v24 = *(unsigned int *)(a2 + 32);
      v25 = *(_DWORD *)(v23 + 12);
      v26 = v24 - 1;
      v24 *= 24;
      v27 = (__int64 *)((char *)v22 + v24);
      v28 = 24LL * (v25 & v26);
      v29 = (__int64 *)((char *)v22 + v28);
      if ( v28 == v24 )
      {
LABEL_45:
        if ( v22 == v29 )
        {
LABEL_23:
          v20 += 8;
          if ( v20 != v83 )
            continue;
          goto LABEL_24;
        }
        while ( 1 )
        {
          v45 = *v22;
          if ( (unsigned __int64)*v22 > 1 )
          {
            if ( *(_DWORD *)(v45 + 12) == v25 && v23 == v45 )
            {
              v30 = v22;
              goto LABEL_28;
            }
          }
          else if ( !v45 )
          {
            v20 += 8;
            if ( v20 == v83 )
              goto LABEL_24;
            goto LABEL_13;
          }
          v22 += 3;
          if ( v29 == v22 )
            goto LABEL_23;
        }
      }
      v30 = (__int64 *)((char *)v22 + v28);
      while ( 1 )
      {
        v28 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
          break;
        if ( !v28 )
          goto LABEL_23;
LABEL_20:
        v30 += 3;
        if ( v27 == v30 )
          goto LABEL_45;
      }
      if ( *(_DWORD *)(v28 + 12) != v25 || v23 != v28 )
        goto LABEL_20;
LABEL_28:
      v32 = v30[2];
      if ( !v32 )
        goto LABEL_23;
      v91 = v30[2];
      v33 = sub_16742E0(&v96, v32, v28, v22, v29);
      v37 = v91;
      if ( !v33 )
      {
        v37 = v91;
        if ( !(unsigned __int8)sub_1674290(&v96, v91) )
          break;
      }
      if ( !(unsigned __int8)sub_16742E0(&v96, v37, v34, v35, v36) )
        goto LABEL_23;
      BYTE4(v102[0]) &= 0xFCu;
      v38 = qword_1C7F2C0;
      v104 &= 0xFCu;
      LODWORD(v102[0]) = 0;
      v102[1] = 0;
      v103 = 1;
      v105 = 0;
      if ( (v98[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v102, v7);
      else
        LODWORD(v102[0]) = v98[0];
      if ( (v99[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v38, &v103, v99);
      }
      else
      {
        v104 &= ~1u;
        v103 = v99[0];
      }
      v39 = qword_1C7F2C0;
      LODWORD(v106[0]) = 1;
      v106[1] = 0;
      v107 = 1;
      BYTE4(v106[0]) &= 0xFCu;
      v109 = 0;
      v40 = v108 & 0xFC;
      v108 &= 0xFCu;
      if ( LODWORD(v98[0]) )
      {
        if ( (v99[0] & 0x100000000LL) == 0 && LODWORD(v99[0]) == 1 )
        {
          sub_1831A80(qword_1C7F2C0, v7, v106, v7);
          sub_182CBA0(v39, v99);
          BYTE4(v99[0]) &= ~1u;
          LODWORD(v99[0]) = 1;
        }
        else
        {
          sub_1851D20(qword_1C7F2C0, v7, v106, v7);
        }
      }
      else
      {
        BYTE4(v98[0]) &= ~1u;
        LODWORD(v98[0]) = 1;
        if ( (v40 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v99, &v107);
        }
        else
        {
          BYTE4(v99[0]) &= ~1u;
          LODWORD(v99[0]) = 1;
        }
      }
      v20 += 8;
      v92 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v102);
      sub_182CBA0(v92, &v103);
      if ( v20 == v83 )
        goto LABEL_24;
    }
    v47 = nullptr;
    v84 = a1[4];
    v102[0] = v84;
    v48 = v80 + 32;
    v49 = 8LL * *(unsigned int *)(v80 + 24);
    v81 = v80 + 32 + v49;
    if ( !v49 )
    {
      v65 = v97[0];
      goto LABEL_80;
    }
    while ( 2 )
    {
      v50 = *(__int64 **)(a2 + 24);
      v51 = *(_QWORD *)(*(_QWORD *)v48 + 16LL);
      v52 = *(unsigned int *)(a2 + 32);
      v53 = *(_DWORD *)(v51 + 12);
      v54 = v52 - 1;
      v52 *= 24;
      v55 = (__int64 *)((char *)v50 + v52);
      v56 = 24LL * (v53 & v54);
      v57 = &v50[(unsigned __int64)v56 / 8];
      if ( v56 == v52 )
      {
LABEL_95:
        if ( v50 != v57 )
        {
          while ( 1 )
          {
            v74 = *v50;
            if ( (unsigned __int64)*v50 > 1 )
            {
              if ( *(_DWORD *)(v74 + 12) == v53 && v51 == v74 )
              {
                v58 = v50;
                goto LABEL_93;
              }
            }
            else if ( !v74 )
            {
              goto LABEL_74;
            }
            v50 += 3;
            if ( v57 == v50 )
              goto LABEL_74;
          }
        }
        goto LABEL_74;
      }
      v58 = &v50[(unsigned __int64)v56 / 8];
      while ( 2 )
      {
        v59 = *v58;
        if ( (unsigned __int64)*v58 <= 1 )
        {
          if ( !v59 )
            goto LABEL_74;
          goto LABEL_71;
        }
        if ( *(_DWORD *)(v59 + 12) != v53 || v51 != v59 )
        {
LABEL_71:
          v58 += 3;
          if ( v55 == v58 )
            goto LABEL_95;
          continue;
        }
        break;
      }
LABEL_93:
      v60 = v58[2];
      if ( v60 )
      {
LABEL_94:
        ++*(_DWORD *)(v60 + 8);
        goto LABEL_75;
      }
LABEL_74:
      v60 = *(_QWORD *)(a1[4] + 864LL);
      if ( v60 )
        goto LABEL_94;
LABEL_75:
      if ( v47 )
      {
        v61 = *((_DWORD *)v47 - 1);
        if ( v61 == *((_DWORD *)v47 - 2) )
        {
          v75 = (3 * v61 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v76 || v61 >= v75 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v106, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v106);
            sub_233E40((__int64)v106);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = v48;
          v93 = (3 * v61 + 1) >> 1;
          v87 = v60;
          v77 = (unsigned int *)sub_186B300(v47 - 1, v76);
          v47 = v77 + 2;
          v60 = v87;
          v48 = v95;
          *v77 = v93;
          LODWORD(v77) = v77[1];
          v64 = &v47[(unsigned int)v77];
          v63 = (_DWORD)v77 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = &v47[v62];
        }
      }
      else
      {
        v94 = v48;
        v88 = v60;
        v78 = (_QWORD *)sub_186B270(0x18u);
        v47 = v78 + 1;
        v60 = v88;
        v48 = v94;
        *v78 = 2;
        v64 = v78 + 1;
        v63 = 1;
      }
      *v64 = v60;
      v48 += 8;
      *((_DWORD *)v47 - 1) = v63;
      if ( v81 != v48 )
        continue;
      break;
    }
    v65 = v97[0];
LABEL_80:
    v66 = sub_15E1AF0(v65);
    sub_135F9B0(a3, *(_QWORD *)(a1[5] + v8), v66);
    if ( v47 )
    {
      v67 = v47;
      if ( v47 < &v47[*((unsigned int *)v47 - 1)] )
      {
        v82 = a2;
        v68 = v47;
        v69 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
        v86 = v7;
        v70 = v8;
        v71 = v67;
        do
        {
          v72 = *v71;
          if ( *v71 )
          {
            if ( (*(_DWORD *)(v72 + 8))-- == 1 )
              sub_15D7BC0(v84, v72);
          }
          ++v71;
        }
        while ( (unsigned __int64)v71 < v69 );
        v47 = v68;
        v8 = v70;
        a2 = v82;
        v7 = v86;
      }
      sub_186B220(v47 - 1);
    }
LABEL_25:
    v8 += 8;
    if ( v8 != v90 )
    {
LABEL_26:
      v5 = a1[5];
      continue;
    }
    break;
  }
LABEL_44:
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v100);
  sub_182CBA0(v42, v101);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7);
  return sub_182CBA0(v43, v99);
}

