void __fastcall sub_1A02AC0(__int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 ***v8; // rax
  unsigned __int64 **v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 **v13; // rcx
  unsigned __int64 *v14; // rcx
  unsigned __int64 **v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  _BYTE *v23; // rax
  signed __int64 v24; // rdx
  _BYTE *v25; // r14
  signed __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // r14
  __int64 v39; // r15
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  unsigned __int64 *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rcx
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 *v53; // rax
  unsigned __int64 *v54; // rcx
  __int64 v55; // r15
  __int64 *v56; // rax
  int v57; // edi
  __int64 v58; // rdi
  __int64 **v59; // rax
  __int64 *v60; // rdx
  unsigned __int64 v61; // rax
  __int64 *v62; // rcx
  __int64 *v63; // rax
  unsigned __int16 v64; // ax
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rsi
  __int64 *v80; // rax
  __int64 v81; // rbx
  __int64 *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 *v85; // rax
  unsigned __int64 *v86; // rax
  unsigned __int64 *v87; // rax
  __int64 *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r14
  __int64 v95; // rax
  _QWORD *v96; // rax
  unsigned __int64 *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r14
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // [rsp+8h] [rbp-100h]
  __int64 v106; // [rsp+18h] [rbp-F0h]
  __int64 v107; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v108[2]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v109; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+48h] [rbp-C0h]
  __int64 v111; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v112[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v113; // [rsp+B8h] [rbp-50h]
  unsigned int v114; // [rsp+C0h] [rbp-48h]
  char v115; // [rsp+C4h] [rbp-44h]

  if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
    goto LABEL_160;
  v7 = (__int64)a2;
  v8 = (unsigned __int64 ***)sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
  v9 = *v8;
  v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
  if ( (unsigned __int64)v9 < v10 )
  {
    v13 = v9;
    while ( 1 )
    {
      a2 = *v13;
      if ( *((_WORD *)*v13 + 18) == 227 )
        break;
      if ( (unsigned __int64 **)v10 == ++v13 )
        goto LABEL_160;
    }
    if ( (unsigned __int64 **)v10 == v13 )
      goto LABEL_160;
  }
  else
  {
    if ( v9 == (unsigned __int64 **)v10 )
      goto LABEL_160;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 227 )
    {
      v11 = v10 + 8;
      v12 = v11;
      if ( v9 == (unsigned __int64 **)v11 )
        goto LABEL_160;
      while ( 1 )
      {
        v11 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 227 )
          break;
        v12 = v11;
        if ( v9 == (unsigned __int64 **)v11 )
          goto LABEL_160;
      }
    }
  }
  v14 = *v9;
  if ( *((_WORD *)*v9 + 18) != 227 )
  {
    v15 = v9 + 1;
    do
      v14 = *v15++;
    while ( *((_WORD *)v14 + 18) != 227 );
  }
  v16 = *((_DWORD *)v14 + 10);
  v17 = sub_168B6C0((__int64)a1);
  v18 = sub_22B7B00(*(_QWORD *)(v17 + 17448) + 216LL);
  v22 = v16 - 33;
  v108[0] = v18;
  v108[1] = v19;
  if ( ((1LL << ((unsigned __int8)v16 - 33)) & 0x6020) == 0 )
  {
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      goto LABEL_28;
    v45 = sub_B8C3D0(v7, (__int64)a2, v19, v22, v20, v21);
    v19 = *v45;
    v48 = *v45 + 8LL * *((unsigned int *)v45 + 2);
    if ( v19 < v48 )
    {
      v22 = v19;
      while ( 1 )
      {
        a2 = *(unsigned __int64 **)v22;
        if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 225 )
          break;
        v22 += 8LL;
        if ( v48 == v22 )
          goto LABEL_46;
      }
      if ( v48 == v22 )
      {
LABEL_46:
        if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
          goto LABEL_28;
        v51 = sub_B8C3D0(v7, (__int64)a2, v19, v22, v46, v47);
        v19 = *v51;
        v52 = *v51 + 8LL * *((unsigned int *)v51 + 2);
        if ( v19 >= v52 )
        {
          if ( v19 == v52 )
            goto LABEL_28;
          if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 230 )
          {
            v88 = (__int64 *)(v52 + 8);
            do
            {
              v22 = (unsigned __int64)v88;
              if ( v88 == (__int64 *)v19 )
                goto LABEL_28;
              v89 = *v88++;
            }
            while ( *(_WORD *)(v89 + 36) != 230 );
          }
        }
        else
        {
          v22 = v19;
          while ( 1 )
          {
            a2 = *(unsigned __int64 **)v22;
            if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 230 )
              break;
            v22 += 8LL;
            if ( v52 == v22 )
              goto LABEL_28;
          }
          if ( v52 == v22 )
            goto LABEL_28;
        }
        v84 = *(_QWORD *)v19;
        if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 230 )
        {
          v85 = (__int64 *)(v19 + 8);
          do
            v84 = *v85++;
          while ( *(_WORD *)(v84 + 36) != 230 );
        }
        LODWORD(v110) = 46;
        v109 = 0x2F00000026LL;
        sub_1A00090(a1, v84, v16, (int *)&v109, 3);
        a2 = (_QWORD *)(&dword_0 + 1);
        sub_B88650(v7, 1);
        goto LABEL_28;
      }
    }
    else
    {
      if ( v19 == v48 )
        goto LABEL_46;
      if ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 225 )
      {
        v49 = (__int64 *)(v48 + 8);
        do
        {
          v22 = (unsigned __int64)v49;
          if ( (__int64 *)v19 == v49 )
            goto LABEL_46;
          v50 = *v49++;
        }
        while ( *(_WORD *)(v50 + 36) != 225 );
      }
    }
    v79 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 225 )
    {
      v80 = (__int64 *)(v19 + 8);
      do
        v79 = *v80++;
      while ( *(_WORD *)(v79 + 36) != 225 );
    }
    LODWORD(v110) = 46;
    v109 = 0x2F00000026LL;
    sub_1A00090(a1, v79, v16, (int *)&v109, 3);
    a2 = (_QWORD *)(&dword_0 + 1);
    sub_B88650(v7, 1);
    goto LABEL_46;
  }
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_18;
  v86 = sub_B8C3D0(v7, (__int64)a2, v19, v22, v20, v21);
  v19 = *v86;
  v22 = *v86 + 8LL * *((unsigned int *)v86 + 2);
  if ( *v86 < v22 )
  {
    v87 = (unsigned __int64 *)*v86;
    while ( 1 )
    {
      v19 = *v87;
      if ( *(_WORD *)(*v87 + 36) == 225 )
        break;
      if ( (unsigned __int64 *)v22 == ++v87 )
        goto LABEL_18;
    }
    if ( (unsigned __int64 *)v22 != v87 )
      goto LABEL_21;
    goto LABEL_18;
  }
  if ( v19 == v22 )
  {
LABEL_18:
    sub_168B9F0((__int64)&v109, a1, *(_DWORD *)(v7 + 24), 0xF3Eu, 0);
    v23 = (_BYTE *)sub_22B6CA0(v16);
    v25 = v23;
    v26 = v24;
    if ( v113 )
    {
      sub_AEC220(v112, v23, v24);
    }
    else if ( v115 )
    {
      v73 = sub_168B9E0(&v109);
      v77 = v111;
      if ( v111 )
      {
        v105 = v73;
        v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
        v73 = v105;
      }
      v107 = v77;
      v78 = sub_1587BC0(v73, &v107, v73, v74, v75, v76);
      sub_AEC220((unsigned __int8 **)(*v78 + 32LL * v114 + 8), v25, v26);
    }
    sub_15F7200(&v109);
    a2 = (_QWORD *)(&dword_0 + 1);
    sub_B88650(v7, 1);
    goto LABEL_21;
  }
  if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 225 )
  {
    v97 = (unsigned __int64 *)(v22 + 8);
    while ( v97 != (unsigned __int64 *)v19 )
    {
      v22 = *v97++;
      if ( *(_WORD *)(v22 + 36) == 225 )
        goto LABEL_21;
    }
    goto LABEL_18;
  }
LABEL_21:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_28;
  v29 = sub_B8C3D0(v7, (__int64)a2, v19, v22, v27, v28);
  v19 = *v29;
  v30 = *v29 + 8LL * *((unsigned int *)v29 + 2);
  if ( v19 >= v30 )
  {
    if ( v19 == v30 )
      goto LABEL_28;
    if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 230 )
    {
      v31 = (__int64 *)(v30 + 8);
      do
      {
        v22 = (unsigned __int64)v31;
        if ( v31 == (__int64 *)v19 )
          goto LABEL_28;
        v32 = *v31++;
      }
      while ( *(_WORD *)(v32 + 36) != 230 );
    }
LABEL_106:
    v81 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 230 )
    {
      v82 = (__int64 *)(v19 + 8);
      do
        v81 = *v82++;
      while ( *(_WORD *)(v81 + 36) != 230 );
    }
    v110 = 0;
    a2 = &v109;
    v109 = 0x8000000600000006LL;
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)v108, (unsigned int *)&v109) )
    {
      if ( *(int *)(v81 + 52) <= 1 )
        goto LABEL_28;
      a2 = &v109;
      v109 = 0x8000000800000006LL;
      if ( !(unsigned __int8)sub_A09E20((unsigned int *)v108, (unsigned int *)&v109) )
        goto LABEL_28;
      sub_168B9F0((__int64)&v109, a1, *(_DWORD *)(v81 + 24), 0xF2Fu, 0);
      if ( v113 )
      {
        sub_AE9DF0(v112, v81, 0xEu);
      }
      else if ( v115 )
      {
        v102 = sub_168B9E0(&v109);
        v103 = v111;
        if ( v111 )
          v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
        v107 = v103;
        v104 = sub_1587BC0(v102, &v107, v98, v99, v100, v101);
        sub_AE9DF0((unsigned __int8 **)(*v104 + 32LL * v114 + 8), v81, 0xEu);
      }
      LODWORD(v107) = *(_DWORD *)(v81 + 52);
      v83 = sub_1587D10((__int64)&v109, (int *)&v107);
      if ( *(_BYTE *)(v83 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v83 + 32), (__int64)"6.8", 1u);
      }
      else if ( *(_BYTE *)(v83 + 132) )
      {
        sub_19FC8D0(v83, (__int64)"6.8");
      }
LABEL_117:
      sub_15F7200(&v109);
      a2 = (_QWORD *)(&dword_0 + 1);
      sub_B88650(v7, 1);
      goto LABEL_28;
    }
    sub_168B9F0((__int64)&v109, a1, *(_DWORD *)(v81 + 24), 0xF2Du, 0);
    if ( v113 )
    {
      sub_AE9DF0(v112, v81, 0xEu);
    }
    else
    {
      if ( !v115 )
        goto LABEL_117;
      v94 = sub_168B9E0(&v109);
      v95 = v111;
      if ( v111 )
        v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
      v107 = v95;
      v96 = sub_1587BC0(v94, &v107, v90, v91, v92, v93);
      sub_AE9DF0((unsigned __int8 **)(*v96 + 32LL * v114 + 8), v81, 0xEu);
    }
    if ( v113 )
    {
      sub_AE9DF0(v112, (__int64)"6.6", 1u);
    }
    else if ( v115 )
    {
      sub_19FC8D0((__int64)&v109, (__int64)"6.6");
    }
    goto LABEL_117;
  }
  v22 = v19;
  while ( 1 )
  {
    a2 = *(unsigned __int64 **)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 230 )
      break;
    v22 += 8LL;
    if ( v30 == v22 )
      goto LABEL_28;
  }
  if ( v30 != v22 )
    goto LABEL_106;
LABEL_28:
  v33 = *(__int64 **)(v7 + 120);
  v38 = &v33[(unsigned int)sub_B76070(v7, (__int64)a2, v19, v22)];
  if ( v38 != v33 )
  {
    while ( 1 )
    {
      v39 = *v33;
      if ( (*(_BYTE *)(*v33 + 29) & 1) == 0 )
        goto LABEL_34;
      v40 = sub_B8C3D0(*v33, (__int64)a2, v34, v35, v36, v37);
      v44 = *v40;
      a2 = (unsigned __int64 *)(*v40 + 8LL * *((unsigned int *)v40 + 2));
      if ( *v40 >= (unsigned __int64)a2 )
      {
        if ( (unsigned __int64 *)v44 == a2 )
          goto LABEL_34;
        if ( (unsigned __int16)(*(_WORD *)(*a2 + 36) - 105) > 5u )
        {
          v53 = a2 + 1;
          while ( 1 )
          {
            v54 = v53;
            if ( v53 == (unsigned __int64 *)v44 )
              break;
            ++v53;
            v41 = (unsigned int)*(unsigned __int16 *)(*v54 + 36) - 105;
            if ( (unsigned __int16)v41 <= 5u )
              goto LABEL_57;
          }
LABEL_34:
          sub_168B9F0((__int64)&v109, a1, *(_DWORD *)(v7 + 24), 0xF40u, 0);
          sub_15F7200(&v109);
          sub_168B9F0((__int64)&v109, a1, *(_DWORD *)(v39 + 24), 0x188Bu, 0);
          if ( v113 )
          {
            sub_AE9DF0(v112, v39, 0xAu);
          }
          else if ( v115 )
          {
            v67 = sub_168B9E0(&v109);
            v71 = v111;
            if ( v111 )
            {
              v106 = v67;
              v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
              v67 = v106;
            }
            v107 = v71;
            v72 = sub_1587BC0(v67, &v107, v67, v68, v69, v70);
            sub_AE9DF0((unsigned __int8 **)(*v72 + 32LL * v114 + 8), v39, 0xAu);
          }
          sub_15F7200(&v109);
          a2 = (_QWORD *)(&dword_0 + 1);
          sub_B88650(v7, 1);
          goto LABEL_37;
        }
      }
      else
      {
        v41 = *v40;
        while ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v41 + 36LL) - 105) > 5u )
        {
          v41 += 8;
          if ( a2 == (unsigned __int64 *)v41 )
            goto LABEL_34;
        }
        if ( a2 == (unsigned __int64 *)v41 )
          goto LABEL_34;
      }
LABEL_57:
      v55 = *(_QWORD *)v44;
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v44 + 36LL) - 105) > 5u )
      {
        v56 = (__int64 *)(v44 + 8);
        do
        {
          v55 = *v56++;
          v57 = *(unsigned __int16 *)(v55 + 36);
          v44 = (unsigned int)(v57 - 105);
        }
        while ( (unsigned __int16)(v57 - 105) > 5u );
      }
      if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
        goto LABEL_160;
      v58 = v7;
      v59 = (__int64 **)sub_B8C3D0(v7, (__int64)a2, v44, v41, v42, v43);
      v60 = *v59;
      v61 = (unsigned __int64)&(*v59)[*((unsigned int *)v59 + 2)];
      if ( (unsigned __int64)v60 >= v61 )
      {
        if ( v60 == (__int64 *)v61 )
          goto LABEL_160;
        if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 227 )
        {
          v65 = (__int64 *)(v61 + 8);
          while ( v60 != v65 )
          {
            v66 = *v65++;
            if ( *(_WORD *)(v66 + 36) == 227 )
              goto LABEL_66;
          }
LABEL_160:
          BUG();
        }
      }
      else
      {
        v62 = v60;
        while ( 1 )
        {
          v58 = *v62;
          if ( *(_WORD *)(*v62 + 36) == 227 )
            break;
          if ( (__int64 *)v61 == ++v62 )
            goto LABEL_160;
        }
        if ( (__int64 *)v61 == v62 )
          goto LABEL_160;
      }
LABEL_66:
      v35 = *v60;
      if ( *(_WORD *)(*v60 + 36) != 227 )
      {
        v63 = v60 + 1;
        do
          v35 = *v63++;
        while ( *(_WORD *)(v35 + 36) != 227 );
      }
      v64 = *(_WORD *)(v55 + 36);
      v34 = *(unsigned int *)(v35 + 40);
      if ( v64 < 0x6Au )
      {
LABEL_159:
        sub_1A03540(v58, a2, v34);
        return;
      }
      if ( v64 <= 0x6Du )
        break;
      if ( v64 != 110 )
        goto LABEL_159;
      if ( (_DWORD)v34 != 33 )
      {
        LODWORD(v109) = 33;
LABEL_74:
        a2 = (unsigned __int64 *)v55;
        sub_1A00090(a1, v55, v34, (int *)&v109, 1);
      }
LABEL_37:
      if ( v38 == ++v33 )
        return;
    }
    if ( (_DWORD)v34 == 38 )
      goto LABEL_37;
    LODWORD(v109) = 38;
    goto LABEL_74;
  }
}
