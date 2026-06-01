__int64 __fastcall sub_1E8B930(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r13
  unsigned __int8 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rbx
  unsigned __int64 v46; // rsi
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // rax
  __int64 *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  char v81; // r13
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 *v99; // rax
  __int64 *v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 **v104; // rax
  __int64 v105; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v106[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v107; // [rsp+20h] [rbp-58h]

  v4 = a1[29];
  v105 = a2;
  if ( (*(_BYTE *)(v4 + 1) & 8) == 0 || *(char *)(a2 + 28) < 0 )
    return 0;
  v106[0] = 0;
  v106[1] = &v105;
  v107 = 0;
  v11 = sub_B8E180(a2 + 64);
  if ( v11 )
    goto LABEL_5;
  v39 = v105;
  sub_7052B0((__int64 *)(*(_QWORD *)(v105 + 104) + 96LL), *(_QWORD *)(v105 + 104), v7, v8, v9, v10);
  v44 = *(_QWORD *)(v39 + 128);
  if ( (*(_BYTE *)(v44 + 24) & 1) != 0 )
    v45 = sub_B96980(v44);
  else
    v45 = *(_QWORD *)(v44 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v40, v41, v42, v43);
  v46 = *(_QWORD *)(v39 + 104);
  v47 = v45 + 24LL * *(unsigned int *)(*(_QWORD *)(v39 + 128) + 16LL);
  sub_7052B0((__int64 *)(v46 + 96), v46, v48, v49, v50, v51);
  v56 = *(_QWORD *)(v39 + 128);
  if ( (*(_BYTE *)(v56 + 24) & 1) != 0 )
    v57 = sub_B96980(v56);
  else
    v57 = *(_QWORD *)(v56 + 24);
  if ( v47 != v57 )
  {
    while ( 1 )
    {
      v58 = sub_1E85C80(*(__int64 **)(v57 + 16), v46, v52, v53, v54);
      v63 = sub_F63270(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL), v46, v59, v60, v61, v62);
      if ( v63 )
      {
        if ( (*(_BYTE *)(v57 + 12) & 1) != 0 )
          break;
        if ( !(unsigned __int8)sub_B8E180((unsigned __int64)(v63 + 8)) )
        {
          v46 = sub_1E85C80(*(__int64 **)(v57 + 16), v46, v52, v53, v54);
          if ( !(unsigned __int8)sub_1E8C160(a1, v46) )
            break;
        }
      }
      v57 += 24;
      if ( v57 == v47 )
        goto LABEL_52;
    }
    v12 = 0;
    goto LABEL_6;
  }
LABEL_52:
  v81 = *(_BYTE *)(v39 + 73) >> 5;
  v82 = sub_B7E900(v39, v46, v52, v53, v54, v55);
  if ( v82 )
  {
LABEL_53:
    v46 = *(_QWORD *)(v82 + 48);
    v83 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v83 + 17) & 4) == 0
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v83 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    {
      if ( !(unsigned __int8)sub_1E8C160(a1, v46) )
        goto LABEL_5;
      if ( v81 == 2 )
      {
        v97 = a1[31];
        v46 = *(_QWORD *)(v82 + 48);
        v98 = *(_QWORD *)(v97 + 2320);
        if ( (*(_BYTE *)(v98 + 16) & 1) != 0 || *(char *)(v98 + 15) < 0 )
        {
          if ( (unsigned __int8)sub_A976E0(v97, v46, v94, v95, v96) )
            goto LABEL_5;
        }
      }
    }
    while ( 1 )
    {
      v84 = *(_QWORD *)(v82 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v82 = v84;
      if ( !v84 )
        break;
      if ( (*(_BYTE *)(v84 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_53;
    }
  }
  v11 = sub_B97400(v39);
  if ( !v11 )
  {
    if ( (*(_BYTE *)(v105 + 29) & 1) != 0 )
    {
      v99 = sub_B8C3D0(v105, v46, v85, v86, v87, v88);
      v85 = *v99;
      v86 = *v99 + 8LL * *((unsigned int *)v99 + 2);
      if ( *v99 >= v86 )
      {
        if ( v85 != v86 )
        {
          while ( *(_WORD *)(*(_QWORD *)v86 + 36LL) != 382 )
          {
            v86 += 8LL;
            if ( v85 == v86 )
              goto LABEL_60;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v100 = (__int64 *)*v99;
        while ( 1 )
        {
          v85 = *v100;
          if ( *(_WORD *)(*v100 + 36) == 382 )
            break;
          if ( (__int64 *)v86 == ++v100 )
            goto LABEL_60;
        }
        if ( (__int64 *)v86 != v100 )
          goto LABEL_77;
      }
    }
LABEL_60:
    if ( !(unsigned __int8)sub_1E86B10((unsigned __int8 *)v106, v46, v85, v86, v87, v88) )
    {
      v11 = 1;
      LOBYTE(v107) = sub_1E8B740(a1, v105, v89, v90, v91, v92, a3, a4);
      v12 = v107;
      goto LABEL_6;
    }
LABEL_77:
    v12 = 1;
    goto LABEL_6;
  }
LABEL_5:
  v11 = 0;
  v12 = 0;
LABEL_6:
  if ( !(unsigned __int8)sub_B8E180(v105 + 64) )
  {
    v17 = v105;
    sub_7052B0((__int64 *)(*(_QWORD *)(v105 + 104) + 96LL), *(_QWORD *)(v105 + 104), v13, v14, v15, v16);
    v22 = *(_QWORD *)(v17 + 128);
    if ( (*(_BYTE *)(v22 + 24) & 1) != 0 )
      v23 = sub_B96980(v22);
    else
      v23 = *(_QWORD *)(v22 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104), v18, v19, v20, v21);
    v24 = *(_QWORD *)(v17 + 104);
    v25 = v23 + 24LL * *(unsigned int *)(*(_QWORD *)(v17 + 128) + 16LL);
    sub_7052B0((__int64 *)(v24 + 96), v24, v26, v27, v28, v29);
    v34 = *(_QWORD *)(v17 + 128);
    if ( (*(_BYTE *)(v34 + 24) & 1) != 0 )
      v35 = sub_B96980(v34);
    else
      v35 = *(_QWORD *)(v34 + 24);
    for ( ; v25 != v35; v35 += 24 )
    {
      v36 = *(_QWORD *)(**(_QWORD **)(v35 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v36 + 8) & 0xF) != 0 )
        v36 = sub_F64F00(**(_QWORD **)(v35 + 16), v24, v30, v31, v32);
      v37 = sub_F63270(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), v24, v30, v31, v32, v33);
      if ( v37 )
      {
        if ( !(unsigned __int8)sub_B8E180((unsigned __int64)(v37 + 8)) )
        {
          v24 = sub_1E85C80(*(__int64 **)(v35 + 16), v24, v30, v31, v32);
          if ( !(unsigned __int8)sub_1E8BFD0(a1, v24) )
            goto LABEL_19;
        }
      }
    }
    v64 = sub_B7E900(v17, v24, v30, v31, v32, v33);
    if ( v64 )
    {
LABEL_34:
      v24 = *(_QWORD *)(v64 + 48);
      if ( (*(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
        && !(unsigned __int8)sub_1E8BFD0(a1, v24) )
      {
        goto LABEL_19;
      }
      while ( 1 )
      {
        v65 = *(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v64 = v65;
        if ( !v65 )
          break;
        if ( (*(_BYTE *)(v65 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_34;
      }
    }
    if ( !sub_B97400(v17) )
    {
      if ( (*(_BYTE *)(v105 + 29) & 1) == 0 )
        goto LABEL_41;
      v74 = sub_B8C3D0(v105, v24, v66, (__int64)v67, v68, v69);
      v66 = *v74;
      v67 = (__int64 *)(*v74 + 8LL * *((unsigned int *)v74 + 2));
      if ( *v74 >= (unsigned __int64)v67 )
      {
        if ( (__int64 *)v66 != v67 )
        {
          if ( *(_WORD *)(*v67 + 36) == 345 )
            goto LABEL_79;
          v104 = (__int64 **)(v67 + 1);
          while ( 1 )
          {
            v67 = (__int64 *)v104;
            if ( v104 == (__int64 **)v66 )
              break;
            v67 = *v104++;
            if ( *((_WORD *)v67 + 18) == 345 )
              goto LABEL_79;
          }
        }
      }
      else
      {
        v75 = (__int64 *)*v74;
        while ( 1 )
        {
          v66 = *v75;
          if ( *(_WORD *)(*v75 + 36) == 345 )
            break;
          if ( v67 == ++v75 )
            goto LABEL_41;
        }
        if ( v67 != v75 )
        {
LABEL_79:
          v76 = v105;
          sub_7052B0((__int64 *)(*(_QWORD *)(v105 + 104) + 96LL), *(_QWORD *)(v105 + 104), v66, (__int64)v67, v68, v69);
          if ( (**(_BYTE **)(v76 + 128) & 8) == 0 )
          {
            v101 = *(_QWORD *)(v76 + 104);
            sub_7052B0((__int64 *)(v101 + 96), v101, v77, v78, v79, v80);
            if ( (*(_BYTE *)(*(_QWORD *)(v76 + 128) + 9LL) & 4) != 0
              || (unsigned __int8)sub_B9C060(v76, v101, v77, v78, v79, v80) )
            {
              sub_7052B0((__int64 *)(*(_QWORD *)(v76 + 104) + 96LL), *(_QWORD *)(v76 + 104), v77, v78, v79, v80);
              if ( (*(_BYTE *)(*(_QWORD *)(v76 + 128) + 4LL) & 8) == 0 )
                goto LABEL_51;
            }
          }
          goto LABEL_82;
        }
      }
LABEL_41:
      if ( !(unsigned __int8)sub_1E86B10((unsigned __int8 *)v106, v24, v66, (__int64)v67, v68, v69) )
      {
        if ( !v11 )
          LOBYTE(v107) = sub_1E8B740(a1, v105, v70, v71, v72, v73, a3, a4);
        v38 = (unsigned __int8)v107;
        return (v38 << 32) | v12;
      }
      v76 = v105;
      if ( (unsigned __int8)sub_1E88290(v105, v24, v70, v71, v72, v73) )
        goto LABEL_51;
LABEL_82:
      sub_7052B0((__int64 *)(*(_QWORD *)(v76 + 104) + 96LL), *(_QWORD *)(v76 + 104), v77, v78, v79, v80);
      if ( (**(_BYTE **)(v76 + 128) & 4) != 0
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v76 + 104) + 96LL), *(_QWORD *)(v76 + 104), v102, v78, v79, v80),
            (*(_BYTE *)(*(_QWORD *)(v76 + 128) + 4LL) & 4) != 0) )
      {
        v103 = sub_1E86DC0(a1, v76, 0, v78, v79, v80, a3, a4);
        if ( !v103 || (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103) + 82) & 0x40) != 0 )
          goto LABEL_19;
      }
LABEL_51:
      v38 = (unsigned __int8)sub_1E880D0(a1, v105, 1, v78, v79, v80, a3, a4);
      return (v38 << 32) | v12;
    }
  }
LABEL_19:
  v38 = 0;
  return (v38 << 32) | v12;
}
