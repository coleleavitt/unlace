__int64 __fastcall sub_4340A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  unsigned int v9; // edx
  __int64 v10; // rax
  int *v11; // r13
  int v13; // eax
  const void *v14; // r8
  __int64 v15; // rsi
  _DWORD *v16; // rdx
  _DWORD *v17; // rsi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // rsi
  __int64 v21; // rax
  _DWORD *v22; // rsi
  __int64 v23; // rbp
  bool v24; // zf
  unsigned int v25; // ecx
  void *v26; // r8
  int v27; // r9d
  int v28; // ebx
  void *v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  _BYTE *v33; // rsi
  _BYTE *v34; // rbx
  __int64 v35; // rbp
  __int64 *v36; // rax
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rbp
  int v40; // eax
  const char *v41; // rdi
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 *v45; // rdi
  int v46; // edx
  int v47; // ebx
  void *v48; // rax
  void *v49; // r8
  _BYTE *v50; // rsi
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  void *v55; // [rsp+8h] [rbp-350h]
  void *v56; // [rsp+8h] [rbp-350h]
  void *v57; // [rsp+28h] [rbp-330h]
  int v58; // [rsp+30h] [rbp-328h]
  int v59; // [rsp+34h] [rbp-324h]
  void *v60; // [rsp+38h] [rbp-320h]
  int v61; // [rsp+40h] [rbp-318h]
  int v62; // [rsp+44h] [rbp-314h]
  _DWORD *v63; // [rsp+50h] [rbp-308h]
  int v64; // [rsp+5Ch] [rbp-2FCh]
  char *s1; // [rsp+60h] [rbp-2F8h]
  int v66; // [rsp+68h] [rbp-2F0h]
  int v67; // [rsp+68h] [rbp-2F0h]
  int v68; // [rsp+68h] [rbp-2F0h]
  int v69; // [rsp+6Ch] [rbp-2ECh]
  unsigned int v70; // [rsp+6Ch] [rbp-2ECh]
  unsigned int v71; // [rsp+70h] [rbp-2E8h]
  unsigned int v72; // [rsp+74h] [rbp-2E4h] BYREF
  __int64 v73; // [rsp+78h] [rbp-2E0h] BYREF
  _DWORD *v74; // [rsp+80h] [rbp-2D8h] BYREF
  int v75; // [rsp+8Ch] [rbp-2CCh] BYREF
  _DWORD *v76; // [rsp+90h] [rbp-2C8h] BYREF
  int v77; // [rsp+98h] [rbp-2C0h] BYREF
  int v78; // [rsp+9Ch] [rbp-2BCh] BYREF
  _DWORD **v79; // [rsp+A0h] [rbp-2B8h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-2B0h] BYREF
  int v81; // [rsp+B4h] [rbp-2A4h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-2A0h] BYREF
  _BYTE v83[32]; // [rsp+C0h] [rbp-298h] BYREF
  _BYTE v84[28]; // [rsp+E0h] [rbp-278h] BYREF
  int v85; // [rsp+FCh] [rbp-25Ch]
  _BYTE *v86; // [rsp+100h] [rbp-258h]
  int v87; // [rsp+108h] [rbp-250h]
  int v88; // [rsp+10Ch] [rbp-24Ch]
  _BYTE src[488]; // [rsp+140h] [rbp-218h] BYREF

  v6 = *(_QWORD *)(a4 + 3264);
  v81 = 0;
  v9 = 1;
  v64 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(int *)(a2 + 28) <= 1 )
    return v9;
  v10 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v9 = 1;
  v11 = (int *)(v10 + 24);
  if ( *(_DWORD *)(v10 + 24) != 2 )
    return v9;
  s1 = *(char **)(v10 + 56);
  v71 = *(_DWORD *)(v10 + 64);
  if ( (unsigned int)sub_475E70(0, a3, &v82) || !v82 )
    return 1;
  sub_475F10(0, a3, &v81);
  sub_475E20(0, a3, &v80);
  if ( v80 )
  {
    v63 = nullptr;
    v13 = sub_46FD90(0, v80, &v78, &v79);
    v9 = 1;
    if ( v13 )
      return v9;
    LOBYTE(v9) = 0;
    v66 = 0;
    if ( (int)v9 >= v78 )
      return 1;
    do
    {
      v14 = (const void *)sub_47ACD0(v79[v66], &v77);
      if ( v77 == v71 && !memcmp(s1, v14, v71) )
      {
        v15 = v82;
        v16 = v79[v66];
        goto LABEL_19;
      }
      if ( (v81 & 2) != 0 && !strncmp(s1, (const char *)v14, v71) )
      {
        if ( v63 )
          return 1;
        v63 = v79[v66];
      }
      ++v66;
    }
    while ( v66 < v78 );
    if ( !v63 )
      return 1;
    v15 = v82;
    v16 = v63;
LABEL_19:
    if ( (unsigned int)sub_4406D0(0, v15, v16, &v76) )
      return 1;
    v17 = v76;
    if ( !v76 )
      return 1;
  }
  else
  {
    v35 = sub_496740(0, 0);
    v73 = v35;
    *(_DWORD *)v35 = 0;
    if ( v71 )
    {
      *(_QWORD *)(v35 + 8) = sub_40FB00(v71 + 1);
      memcpy(*(void **)(v73 + 8), s1, v71);
      *(_BYTE *)(*(_QWORD *)(v73 + 8) + (int)v71) = 0;
      v35 = v73;
      *(_DWORD *)(v73 + 16) = v71;
    }
    else
    {
      v36 = off_656088;
      *(_DWORD *)(v35 + 16) = 0;
      *(_QWORD *)(v35 + 8) = v36;
    }
    v37 = v82;
    *(_QWORD *)(v35 + 24) = 0;
    v38 = sub_4406D0(0, v37, v35, &v76);
    v39 = v73;
    v69 = v38;
    v40 = *(_DWORD *)v73 - 1;
    v24 = *(_DWORD *)v73 == 1;
    *(_DWORD *)v73 = v40;
    if ( v40 < 0 || v24 )
    {
      v42 = *(_QWORD *)(v39 + 24);
      if ( v42 && *(_QWORD *)(v42 + 8) )
      {
        sub_47B120(v39);
      }
      else
      {
        v43 = *(__int64 **)(v39 + 8);
        if ( v43 && v43 != off_656088 )
        {
          Tcl_Free((__int64)v43);
          v39 = v73;
        }
        *(_DWORD *)(v39 + 16) = -1;
        sub_496830(v39);
      }
    }
    if ( v69 || (v17 = v76) == nullptr )
    {
      v9 = 1;
      if ( (v81 & 2) == 0 )
        return v9;
      sub_440900(0, v82, v83, &v73, &v74, &v75);
      v62 = 0;
      while ( !v75 )
      {
        v41 = *(const char **)(v73 + 8);
        if ( !v41 )
          v41 = (const char *)sub_47B3B0(v73);
        if ( !strncmp(v41, s1, v71) )
        {
          if ( ++v62 != 1 )
            break;
          v76 = v74;
        }
        sub_440A10(v83, &v73, &v74, &v75);
      }
      sub_4409E0(v83);
      v9 = 1;
      if ( v62 != 1 )
        return v9;
      v17 = v76;
    }
  }
  v18 = sub_46FD90(0, v17, &v78, &v79);
  v9 = 1;
  if ( v18 )
    return v9;
  if ( v78 > 1 )
  {
    v19 = sub_458F10(a1, v17, 1);
    v9 = 1;
    if ( v19 )
      return v9;
  }
  v20 = *v79;
  ++*v20;
  v76 = v20;
  v21 = sub_47D100(a1, v20);
  v22 = v76;
  v23 = v21;
  LODWORD(v21) = *v76 - 1;
  v24 = *v76 == 1;
  *v76 = v21;
  if ( (int)v21 < 0 || v24 )
  {
    v44 = *((_QWORD *)v22 + 3);
    if ( v44 && *(_QWORD *)(v44 + 8) )
    {
      sub_47B120(v22);
    }
    else
    {
      v45 = *((__int64 **)v22 + 1);
      if ( v45 && v45 != off_656088 )
      {
        Tcl_Free((__int64)v45);
        v22 = v76;
      }
      v22[4] = -1;
      sub_496830(v22);
    }
  }
  if ( !v23 || !*(_QWORD *)(v23 + 24) || (*(_BYTE *)(v23 + 80) & 4) != 0 || (*(_BYTE *)(a1 + 424) & 0x20) != 0 )
    return 1;
  sub_47D7E0(a1, 0, 0, v84);
  v85 = v78 + *(_DWORD *)(a2 + 28) - 2;
  v61 = v87 + 2 * v78;
  if ( v61 > 178956970 )
    sub_47D740((unsigned int)"max # of tokens for a Tcl parse (%d) exceeded", 178956970, v87, v25, (_DWORD)v26, v27);
  if ( v88 < v61 )
  {
    v28 = 2 * v61;
    v29 = nullptr;
    if ( src != v86 )
      v29 = v86;
    if ( v28 >= 178956971 )
      v28 = 178956970;
    v60 = v29;
    v26 = (void *)sub_40FD00(v29);
    if ( !v26 )
    {
      v28 = v61 + 2 * v78 + 50;
      if ( v28 >= 178956971 )
        v28 = 178956970;
      v26 = (void *)sub_40FC10(v60, 24 * v28);
    }
    v88 = v28;
    if ( !v60 )
    {
      v55 = v26;
      memcpy(v26, src, 24LL * v87);
      v26 = v55;
    }
    v86 = v26;
  }
  v30 = v78;
  v67 = 0;
  v87 = 2 * v78;
  while ( v67 < v30 )
  {
    v31 = 48LL * v67;
    v32 = sub_47ACD0(v79[v67], &v72);
    v33 = v86;
    ++v67;
    *(_DWORD *)&v86[v31] = 2;
    v25 = v72;
    *(_QWORD *)&v33[v31 + 8] = v32;
    *(_DWORD *)&v33[v31 + 20] = 1;
    *(_DWORD *)&v33[v31 + 16] = v25;
    v34 = &v33[v31];
    *((_DWORD *)v34 + 6) = 4;
    *((_QWORD *)v34 + 4) = v32;
    *((_QWORD *)v34 + 5) = v25;
    v30 = v78;
  }
  v68 = v30;
  if ( v85 > v30 )
  {
    v46 = v87;
    do
    {
      v11 += 6 * v11[5] + 6;
      v51 = v11[5] + 1 + v46;
      v59 = v11[5] + 1;
      v58 = v51;
      if ( v51 > 178956970 )
        sub_47D740((unsigned int)"max # of tokens for a Tcl parse (%d) exceeded", 178956970, v51, v25, (_DWORD)v26, v27);
      if ( v88 < v58 )
      {
        v47 = 2 * v58;
        v48 = nullptr;
        if ( src != v86 )
          v48 = v86;
        if ( v47 >= 178956971 )
          v47 = 178956970;
        v57 = v48;
        v49 = (void *)sub_40FD00(v48);
        if ( !v49 )
        {
          v47 = v58 + v59 + 50;
          if ( v47 >= 178956971 )
            v47 = 178956970;
          v49 = (void *)sub_40FC10(v57, 24 * v47);
        }
        v88 = v47;
        if ( !v57 )
        {
          v56 = v49;
          memcpy(v49, src, 24LL * v87);
          v49 = v56;
        }
        v50 = v49;
        v86 = v49;
      }
      else
      {
        v50 = v86;
      }
      memcpy(&v50[24 * v87], v11, 24LL * v59);
      ++v68;
      v46 = v87 + v59;
      v87 += v59;
    }
    while ( v85 > v68 );
  }
  v52 = *(_QWORD *)(v6 + 16);
  v53 = 24LL * v64;
  *(_QWORD *)(v53 + v52 + 8) += 4LL;
  *(_QWORD *)(v53 + v52 + 16) += 8LL;
  v70 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64))(v23 + 24))(a1, v84, v23, a4);
  v54 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v53 + v54 + 8) -= 4LL;
  *(_QWORD *)(v53 + v54 + 16) -= 8LL;
  sub_47DCE0(v84);
  return v70;
}

