_QWORD *__fastcall sub_96C170(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  __int64 v7; // r13
  __int32 v8; // r15d
  _QWORD *v9; // rax
  unsigned int v10; // ecx
  char *v11; // rbx
  _DWORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  _DWORD *v17; // rax
  int v18; // ecx
  __int32 *v19; // rcx
  char *v20; // rdi
  __int32 *v21; // rax
  __int32 v22; // edx
  __int64 v23; // r12
  __int64 v24; // r13
  __m128 v25; // kr00_16
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  unsigned int v31; // r14d
  char *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  char *v35; // r12
  _QWORD *v36; // rax
  char *v37; // r8
  char *v38; // r15
  char *i; // rcx
  __int64 v40; // rax
  char *v41; // rdx
  char *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // ecx
  _QWORD *v46; // r10
  unsigned int v47; // edx
  __int64 v48; // r8
  __int64 v49; // rdx
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  _DWORD *v52; // rax
  int v53; // r9d
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  __int64 v56; // r13
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  int v61; // r10d
  __int64 v62; // r12
  int v63; // eax
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // rax
  __int32 *v67; // rax
  __int32 v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // r13
  _QWORD *v74; // rax
  _QWORD *v75; // r10
  unsigned int v76; // r11d
  __int64 v77; // r9
  char v78; // al
  int v79; // [rsp+0h] [rbp-E8h]
  int v81; // [rsp+8h] [rbp-E0h]
  __int64 v82; // [rsp+8h] [rbp-E0h]
  __int64 v83; // [rsp+8h] [rbp-E0h]
  __int64 v84; // [rsp+10h] [rbp-D8h]
  __int64 v85; // [rsp+18h] [rbp-D0h]
  _QWORD *v86; // [rsp+20h] [rbp-C8h]
  __int64 v87; // [rsp+30h] [rbp-B8h]
  int v88; // [rsp+38h] [rbp-B0h]
  int v89; // [rsp+40h] [rbp-A8h]
  void *v90; // [rsp+48h] [rbp-A0h]
  _BYTE v91[32]; // [rsp+50h] [rbp-98h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v93; // [rsp+78h] [rbp-70h]
  int v94; // [rsp+80h] [rbp-68h]
  __m128 v95; // [rsp+90h] [rbp-58h] BYREF
  int v96; // [rsp+A0h] [rbp-48h]
  int v97; // [rsp+A4h] [rbp-44h]
  int v98; // [rsp+A8h] [rbp-40h]

  v85 = a4;
  sub_15F01E0(v91, *(_QWORD *)(a1 + 104));
  result = *(_QWORD **)(a1 + 104);
  v86 = result;
  if ( a2 == dword_1C7EC8C )
    return result;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (a2 >> 1));
  v8 = a2 >> 1;
  v9 = (_QWORD *)sub_186B270(0x60u);
  v10 = *(_DWORD *)(a3 + 8);
  *v9 = 0;
  v11 = (char *)v9;
  *(_QWORD *)((char *)v9 + 12) = 0;
  v12 = *(_DWORD **)a3;
  v9[3] = 0;
  *(_QWORD *)((char *)v9 + 36) = 0;
  v9[6] = 0;
  *(_QWORD *)((char *)v9 + 60) = 0;
  v9[9] = 0;
  *(_QWORD *)((char *)v9 + 84) = 0;
  v94 = 0;
  v13 = 12LL * ((a2 >> 1) & (v10 - 1));
  v14 = 12LL * v10;
  v15 = &v12[(unsigned __int64)v13 / 4];
  v16 = &v12[(unsigned __int64)v14 / 4];
  if ( v13 != v14 )
  {
    v17 = &v12[(unsigned __int64)v13 / 4];
    do
    {
      v18 = v17[1];
      if ( v18 == 2 )
      {
        if ( v8 == *v17 && v8 == v17[2] )
        {
LABEL_9:
          v19 = nullptr;
          v20 = &v11[12 * (v8 & 7)];
          v21 = (__int32 *)v20;
          while ( 1 )
          {
            v22 = v21[1];
            if ( v22 == 2 )
            {
              if ( v8 == *v21 && v8 == v21[2] )
              {
                v21[2] = v8;
                v21[1] = 2;
                v95.m128_i32[0] = v8;
                v84 = a1 + 10448;
                v96 = 8;
                v70 = sub_186B270(0x60u);
LABEL_117:
                v35 = (char *)v70;
                v88 = 0;
                v31 = 8;
                v34 = 96;
                goto LABEL_43;
              }
            }
            else
            {
              if ( !v22 )
              {
                if ( v19 )
                  v94 = -1;
                else
                  v19 = v21;
LABEL_113:
                v19[2] = v8;
                v19[1] = 2;
                *v19 = v8;
                v84 = a1 + 10448;
                v95.m128_i32[0] = v8;
                v96 = 8;
                v35 = (char *)sub_186B270(0x60u);
                v88 = 1;
                v31 = 8;
                v34 = 96;
LABEL_43:
                v36 = v35;
                v33 = (unsigned __int64)&v35[24 * (v31 >> 1)];
                do
                {
                  *v36 = 0;
                  v36 += 3;
                  *(_QWORD *)((char *)v36 - 12) = 0;
                }
                while ( (_QWORD *)v33 != v36 );
                if ( (v31 & 1) != 0 )
                {
                  v32 = &v35[12 * (v31 & 0xFFFFFFFE)];
                  goto LABEL_47;
                }
                goto LABEL_48;
              }
              v19 = v21;
            }
            v21 += 3;
            if ( v11 + 96 == (char *)v21 )
            {
              if ( v11 == v20 )
              {
LABEL_116:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v67 = (__int32 *)v11;
              while ( 1 )
              {
                v68 = v67[1];
                if ( v68 == 2 )
                {
                  if ( v8 == *v67 && v8 == v67[2] )
                  {
                    v67[2] = v8;
                    v67[1] = 2;
                    v84 = a1 + 10448;
                    v95.m128_i32[0] = v8;
                    v96 = 8;
                    v70 = sub_186B270(0x60u);
                    goto LABEL_117;
                  }
                }
                else
                {
                  if ( !v68 )
                  {
                    if ( v19 )
                      v94 = -1;
                    else
                      v19 = v67;
                    goto LABEL_113;
                  }
                  v19 = v67;
                }
                v67 += 3;
                if ( v20 == (char *)v67 )
                  goto LABEL_116;
              }
            }
          }
        }
      }
      else if ( !v18 )
      {
        goto LABEL_41;
      }
      v17 += 3;
    }
    while ( v16 != v17 );
  }
  if ( v12 != v15 )
  {
    while ( 1 )
    {
      v30 = v12[1];
      if ( v30 != 2 )
        break;
      if ( v8 == *v12 )
      {
        if ( v8 == v12[2] )
          goto LABEL_9;
        v12 += 3;
        if ( v15 == v12 )
          goto LABEL_41;
      }
      else
      {
LABEL_36:
        v12 += 3;
        if ( v15 == v12 )
          goto LABEL_41;
      }
    }
    if ( !v30 )
      goto LABEL_41;
    goto LABEL_36;
  }
LABEL_41:
  ptr = v11;
  v93 = 8;
  sub_969AA0(a1, a2, &ptr);
  v31 = v93;
  v95.m128_i32[0] = v8;
  v11 = (char *)ptr;
  v88 = HIDWORD(v93);
  v96 = v93;
  v84 = a1 + 10448;
  v87 = 12LL * (unsigned int)v93;
  v32 = (char *)sub_186B270(v87);
  v34 = v87;
  v35 = v32;
  if ( v31 )
  {
    if ( v31 != 1 )
      goto LABEL_43;
LABEL_47:
    *(_QWORD *)v32 = 0;
  }
  else
  {
    v34 = 0;
  }
LABEL_48:
  v37 = &v11[v34];
  v95.m128_u64[1] = (unsigned __int64)v35;
  v38 = v11;
  for ( i = &v35[v34]; v37 != v38; *((_DWORD *)v42 + 2) = v33 )
  {
    while ( *((_DWORD *)v38 + 1) != 2 )
    {
      v38 += 12;
      if ( v37 == v38 )
        goto LABEL_57;
    }
    v40 = 12LL * (*(_DWORD *)v38 & (v31 - 1));
    v41 = &v35[v40];
    if ( v34 == v40 )
    {
LABEL_96:
      if ( v35 == v41 )
      {
LABEL_110:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v42 = v35;
      while ( *((_DWORD *)v42 + 1) )
      {
        v42 += 12;
        if ( v41 == v42 )
          goto LABEL_110;
      }
    }
    else
    {
      v42 = &v35[v40];
      while ( *((_DWORD *)v42 + 1) )
      {
        v42 += 12;
        if ( i == v42 )
          goto LABEL_96;
      }
    }
    v43 = *(_QWORD *)v38;
    v38 += 12;
    *(_QWORD *)v42 = v43;
    v33 = *((unsigned int *)v38 - 1);
  }
LABEL_57:
  v98 = 0;
  v97 = v88;
  sub_9768E0(v84, &v95, v33, i);
  sub_186B220(v35);
  v44 = *(unsigned int *)(a1 + 10528);
  v45 = *(_DWORD *)(v7 + 12);
  v46 = *(_QWORD **)(a1 + 10520);
  v47 = v44 - 1;
  v48 = 16 * v44;
  v49 = 16LL * (v45 & v47);
  v50 = &v46[(unsigned __int64)v49 / 8];
  result = &v46[(unsigned __int64)v49 / 8];
  if ( v49 != v48 )
  {
    do
    {
      v51 = *result;
      if ( *result > 1u )
      {
        if ( *(_DWORD *)(v51 + 12) == v45 && v7 == v51 )
        {
LABEL_17:
          sub_968DF0(a1 + 10520, v7);
          v23 = sub_968D50(*(_QWORD **)(a1 + 10472), *(_DWORD *)(a1 + 10480), v7)[1];
          if ( (a2 & 1) != 0 )
          {
            v71 = sub_15E1A70(*(_QWORD *)(a1 + 104));
            goto LABEL_119;
          }
          goto LABEL_18;
        }
      }
      else if ( !v51 )
      {
        goto LABEL_64;
      }
      result += 2;
    }
    while ( &v46[(unsigned __int64)v48 / 8] != result );
  }
  if ( v46 == v50 )
  {
LABEL_64:
    if ( (a2 & 1) == 0 )
      goto LABEL_65;
    goto LABEL_94;
  }
  result = *(_QWORD **)(a1 + 10520);
  while ( 1 )
  {
    v69 = *result;
    if ( *result <= 1u )
      break;
    if ( *(_DWORD *)(v69 + 12) == v45 && v7 == v69 )
      goto LABEL_17;
LABEL_105:
    result += 2;
    if ( v50 == result )
      goto LABEL_64;
  }
  if ( v69 )
    goto LABEL_105;
  if ( (a2 & 1) != 0 )
  {
LABEL_94:
    if ( v11 )
      return (_QWORD *)sub_186B220(v11);
    return result;
  }
LABEL_65:
  if ( *(_WORD *)(v7 + 4) )
    goto LABEL_94;
  v52 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
  if ( !v52 || *v52 || v52[1] != 2 || *(_DWORD *)(v7 + 24) != 2 )
  {
    result = (_QWORD *)sub_15F0200(v91);
    v53 = a1 + 10520;
    if ( !*(_WORD *)(v7 + 4)
      && (v54 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) != nullptr
      && (_DWORD)result == *v54
      && v54[1] == 1
      || (result = (_QWORD *)sub_15F0200(v91), !*(_WORD *)(v7 + 4))
      && (v53 = a1 + 10520, (v55 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) != nullptr)
      && (_DWORD)result == *v55
      && v55[1] == 2 )
    {
      if ( *(_DWORD *)(v7 + 24) == 1 )
      {
        v56 = *(_QWORD *)(v7 + 32);
        v81 = v53;
        result = sub_968D50(*(_QWORD **)(a1 + 10520), *(_DWORD *)(a1 + 10528), v56);
        if ( result )
        {
          v62 = *(_QWORD *)(a1 + 104);
          v63 = sub_15F0BB0((unsigned int)v91, v61, v57, v58, v59, v60);
          sub_15DC610(v62, v63, 0, 0, v64, v65, v79, v81, v84, v85, (int)v86, (char)v91, v87, v88, v89, v90);
          v66 = sub_15E1B70(v62);
          v23 = v66;
          if ( v66 )
            ++*(_DWORD *)(v66 + 8);
          sub_968DF0(v82, v56);
          goto LABEL_20;
        }
      }
    }
    goto LABEL_94;
  }
  v72 = *(_QWORD *)(v7 + 32);
  v73 = *(_QWORD *)(v7 + 40);
  v74 = sub_968D50(*(_QWORD **)(a1 + 10520), *(_DWORD *)(a1 + 10528), v73);
  v77 = a1 + 10520;
  if ( !v74 )
  {
LABEL_130:
    v83 = v77;
    result = sub_968D50(v75, v76, v72);
    if ( result )
    {
      result = (_QWORD *)sub_15D26C0(*(_QWORD *)(a1 + 104), v73);
      if ( (_BYTE)result )
      {
        sub_968DF0(v83, v72);
        sub_968D50(*(_QWORD **)(a1 + 10472), *(_DWORD *)(a1 + 10480), v72);
        v71 = sub_15E1B70(*(_QWORD *)(a1 + 104));
        goto LABEL_119;
      }
    }
    goto LABEL_94;
  }
  v78 = sub_15D26C0(*(_QWORD *)(a1 + 104), v72);
  v77 = a1 + 10520;
  if ( !v78 )
  {
    v75 = *(_QWORD **)(a1 + 10520);
    v76 = *(_DWORD *)(a1 + 10528);
    goto LABEL_130;
  }
  sub_968DF0(a1 + 10520, v73);
  sub_968D50(*(_QWORD **)(a1 + 10472), *(_DWORD *)(a1 + 10480), v73);
  v71 = sub_15E1B70(*(_QWORD *)(a1 + 104));
LABEL_119:
  v23 = v71;
LABEL_18:
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
LABEL_20:
  ptr = v11;
  v24 = *(_QWORD *)(a1 + 104);
  v93 = __PAIR64__(v88, v31);
  sub_96A7D0(&v95, a1, (__int64 *)&ptr);
  v25 = v95;
  v26 = sub_15E1B70(v24);
  v27 = v26;
  if ( !v26 )
  {
    if ( v23 )
    {
LABEL_22:
      v29 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v86, v23);
      if ( v25.m128_u64[0] )
      {
        v29 = (*(_DWORD *)(v25.m128_u64[0] + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v25.m128_u64[1], v25.m128_u64[0]);
      }
      v95.m128_u64[0] = v27;
      if ( v27 )
        goto LABEL_28;
    }
    else if ( v25.m128_u64[0] && (v29 = *(_DWORD *)(v25.m128_u64[0] + 8) == 1, --*(_DWORD *)(v25.m128_u64[0] + 8), v29) )
    {
      sub_15D7BC0(v25.m128_u64[1], v25.m128_u64[0]);
      v95.m128_u64[0] = 0;
    }
    else
    {
      v95.m128_u64[0] = 0;
    }
    result = (_QWORD *)sub_96A710((_QWORD *)(v85 + 8), &v95);
    goto LABEL_94;
  }
  v28 = *(_DWORD *)(v26 + 8) + 1;
  *(_DWORD *)(v27 + 8) = v28;
  if ( v23 )
    goto LABEL_22;
  if ( v25.m128_u64[0] )
  {
    v29 = (*(_DWORD *)(v25.m128_u64[0] + 8))-- == 1;
    if ( !v29 )
    {
      v95.m128_u64[0] = v27;
      v28 = *(_DWORD *)(v27 + 8);
      goto LABEL_29;
    }
    sub_15D7BC0(v25.m128_u64[1], v25.m128_u64[0]);
    v95.m128_u64[0] = v27;
LABEL_28:
    v28 = *(_DWORD *)(v27 + 8);
    goto LABEL_29;
  }
  v95.m128_u64[0] = v27;
LABEL_29:
  *(_DWORD *)(v27 + 8) = v28 + 1;
  result = (_QWORD *)sub_96A710((_QWORD *)(v85 + 8), &v95);
  if ( v11 )
    result = (_QWORD *)sub_186B220(v11);
  v29 = (*(_DWORD *)(v27 + 8))-- == 1;
  if ( v29 )
    return (_QWORD *)sub_15D7BC0(v86, v27);
  return result;
}

