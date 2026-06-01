char __fastcall sub_1BCD630(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rsi
  int v9; // r10d
  __int64 v10; // r13
  int v11; // r12d
  bool v12; // r9
  bool v13; // r11
  __int64 v14; // rdi
  int v15; // r14d
  int v16; // esi
  unsigned int v17; // eax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned __int64 v22; // r13
  unsigned int v23; // eax
  unsigned __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  unsigned int v28; // r13d
  __int64 v29; // rax
  int v30; // esi
  __int64 v31; // rax
  int v32; // eax
  bool v33; // cf
  __int64 v35; // r8
  __int64 v36; // r11
  _DWORD *v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rdi
  unsigned int v40; // r13d
  unsigned __int8 *v41; // rdi
  int v42; // eax
  bool v43; // cf
  bool v44; // zf
  _DWORD *v45; // rdi
  unsigned __int8 *v46; // rdi
  int v47; // eax
  int v48; // r14d
  __int64 v49; // rcx
  unsigned int v50; // r14d
  int v51; // eax
  unsigned int v52; // eax
  bool v53; // sf
  bool v54; // of
  unsigned int v55; // ecx
  unsigned int v56; // eax
  int v57; // r10d
  __int64 v58; // r13
  int v59; // r12d
  bool v60; // r9
  __int64 v61; // rcx
  int v62; // esi
  int v63; // r8d
  unsigned int v64; // eax
  unsigned int v65; // ecx
  __int64 j; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 i; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // r12
  int v77; // r11d
  _DWORD *v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // r13d
  int v81; // eax
  __int64 v82; // rax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // [rsp+0h] [rbp-58h]
  __int64 v87; // [rsp+0h] [rbp-58h]
  _DWORD *v88; // [rsp+0h] [rbp-58h]
  unsigned int v89; // [rsp+0h] [rbp-58h]
  _DWORD *v90; // [rsp+0h] [rbp-58h]
  __int64 v91; // [rsp+8h] [rbp-50h]
  unsigned int v92; // [rsp+8h] [rbp-50h]
  int v93; // [rsp+8h] [rbp-50h]
  int v94; // [rsp+8h] [rbp-50h]
  unsigned int v95; // [rsp+10h] [rbp-48h]
  _DWORD *v96; // [rsp+10h] [rbp-48h]
  _DWORD *v97; // [rsp+10h] [rbp-48h]
  _DWORD *v98; // [rsp+10h] [rbp-48h]
  _DWORD *v99; // [rsp+18h] [rbp-40h]

  if ( a2 == a3 )
    return 0;
  v6 = *(unsigned __int8 *)(a3 + 104);
  v7 = *(_BYTE *)(a2 + 104);
  v8 = *(_BYTE *)(a3 + 104) & 1;
  if ( (v7 & 1) == 0 )
  {
    if ( (_BYTE)v8 )
      return 0;
    v17 = *(_DWORD *)(a2 + 104);
    if ( (v17 & 0x3F800) != 0 && *(_QWORD *)a2 )
    {
      v18 = a1[2];
      if ( v18 > (unsigned int)sub_B76070(*(_QWORD *)a2, v8, a3, v6) && !sub_B748A0(*(_QWORD *)a2, v8, v19, v20) )
      {
        v21 = 0;
LABEL_21:
        v23 = *(_DWORD *)(a3 + 104);
        if ( (v23 & 0x3F800) != 0 && *(_QWORD *)a3 )
        {
          v24 = a1[2];
          if ( v24 > (unsigned int)sub_B76070(*(_QWORD *)a3, v8, a3, v6) && !sub_B748A0(*(_QWORD *)a3, v8, v25, v26) )
          {
            if ( v21 > 1 )
              return 1;
            v28 = 0;
            goto LABEL_70;
          }
          v27 = a1[2];
          if ( v27 < (unsigned int)sub_B770E0(*(_QWORD *)a3, v8) )
          {
            if ( v21 > 1 )
              return 1;
            v28 = 1;
            goto LABEL_70;
          }
          v23 = *(_DWORD *)(a3 + 104);
        }
        v28 = (unsigned __int8)(v23 >> 10);
        if ( v21 > 1 )
        {
          if ( v28 <= 1 )
            return 1;
          if ( v21 != 2 )
          {
            if ( v28 == 2 )
              return 0;
            if ( v21 == 3 )
            {
              if ( v28 != 3 )
                return 1;
              if ( *(_BYTE *)(a2 + 112) != *(_BYTE *)(a3 + 112) )
              {
                sub_1BC6980((_BYTE *)(a2 + 112));
                v64 = sub_1BC6980((_BYTE *)(a3 + 112));
                v33 = v65 < v64;
                if ( v65 != v64 )
                  return v33;
              }
            }
            else if ( v28 == 3 )
            {
              return 0;
            }
            goto LABEL_32;
          }
          if ( v28 != 2 )
            return 1;
          v55 = *(_DWORD *)(a2 + 88);
          v56 = *(_DWORD *)(a3 + 88);
          if ( v55 )
          {
            if ( !v56 )
              v56 = -1;
          }
          else
          {
            if ( !v56 )
            {
LABEL_89:
              v57 = *(_QWORD *)(a2 + 56);
              if ( !v57 )
                goto LABEL_32;
              v58 = 0;
              v59 = 0;
              v60 = (*(_BYTE *)(a2 + 104) & 8) != 0;
              if ( (*(_BYTE *)(a3 + 104) & 8) != 0 )
              {
                while ( 1 )
                {
                  v13 = v60 && v59 == 0;
                  if ( !v13 )
                  {
                    v61 = v58 + *(_QWORD *)(a2 + 48);
                    if ( (*(_DWORD *)v61 & 0x7FFFFFFF) != 0 )
                    {
                      if ( (*(_DWORD *)v61 & 0x7FFFFFFF) != 2 )
                      {
                        if ( dword_265F660[*(_DWORD *)v61 & 0x7FFFFFFF] )
                          return v13;
                        goto LABEL_140;
                      }
                      v62 = dword_265F660[*(_DWORD *)v61 & 0x7FFFFFFF];
                      v63 = sub_1BCD550((unsigned __int8 *)(v61 + 80));
                    }
                    else
                    {
                      v62 = dword_265F660[*(_DWORD *)v61 & 0x7FFFFFFF];
                      v63 = sub_1BCD550((unsigned __int8 *)(v61 + 16));
                    }
                    if ( v62 )
                      return v13;
                    if ( v63 )
                      goto LABEL_96;
                  }
LABEL_140:
                  ++v59;
                  v58 += 152;
                  if ( v57 == v59 )
                    goto LABEL_32;
                }
              }
              v75 = *(_QWORD *)(a3 + 48);
              v76 = 0;
              v77 = 0;
              v78 = dword_265F660;
              while ( 1 )
              {
                if ( !v77 && v60 )
                {
                  v63 = 0;
                  v80 = 0;
                }
                else
                {
                  v79 = v76 + *(_QWORD *)(a2 + 48);
                  v80 = v78[*(_DWORD *)v79 & 0x7FFFFFFF];
                  if ( (*(_DWORD *)v79 & 0x7FFFFFFF) != 0 )
                  {
                    v63 = 0;
                    if ( (*(_DWORD *)v79 & 0x7FFFFFFF) == 2 )
                    {
                      v88 = v78;
                      v81 = sub_1BCD550((unsigned __int8 *)(v79 + 80));
                      v78 = v88;
                      v63 = v81;
                    }
                  }
                  else
                  {
                    v90 = v78;
                    v84 = sub_1BCD550((unsigned __int8 *)(v79 + 16));
                    v78 = v90;
                    v63 = v84;
                  }
                }
                v82 = v75 + v76;
                v89 = v78[*(_DWORD *)(v75 + v76) & 0x7FFFFFFF];
                if ( (*(_DWORD *)(v75 + v76) & 0x7FFFFFFF) != 0 )
                {
                  v62 = 0;
                  if ( (*(_DWORD *)(v75 + v76) & 0x7FFFFFFF) == 2 )
                  {
                    v98 = v78;
                    v94 = v63;
                    v85 = sub_1BCD550((unsigned __int8 *)(v82 + 80));
                    v63 = v94;
                    v78 = v98;
                    v62 = v85;
                  }
                }
                else
                {
                  v97 = v78;
                  v93 = v63;
                  v83 = sub_1BCD550((unsigned __int8 *)(v82 + 16));
                  v63 = v93;
                  v78 = v97;
                  v62 = v83;
                }
                v43 = v89 < v80;
                v44 = v89 == v80;
                if ( v89 != v80 )
                  return !v43 && !v44;
                if ( v62 != v63 )
                {
LABEL_96:
                  v54 = __OFSUB__(v63, v62);
                  v53 = v63 - v62 < 0;
                  return v53 ^ v54;
                }
                ++v77;
                v76 += 152;
                if ( v57 == v77 )
                  goto LABEL_32;
              }
            }
            v55 = -1;
          }
          v43 = v56 < v55;
          v44 = v56 == v55;
          if ( v56 != v55 )
            return !v43 && !v44;
          goto LABEL_89;
        }
        if ( v28 > 1 )
          return 0;
LABEL_70:
        if ( (*(_BYTE *)(a2 + 104) & 4) != 0 )
        {
          for ( i = sub_AED600(*(_QWORD *)(a2 + 40), v8, a3, v6); ; i = sub_F68450(v74, v8, a3, v72, v73) )
          {
            v74 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) > 2u )
              break;
          }
          if ( *(_BYTE *)(v74 + 16) != 26 )
            v74 = sub_F63050(v74, v8, a3, v72);
          v48 = *(unsigned __int16 *)(v74 + 22);
        }
        else if ( *(_QWORD *)a2 )
        {
          v48 = sub_B76070(*(_QWORD *)a2, v8, a3, v6);
        }
        else
        {
          v48 = *(_DWORD *)(a2 + 108);
        }
        v49 = (unsigned int)a1[2];
        v50 = abs32(v48 - a1[2]);
        if ( (*(_BYTE *)(a3 + 104) & 4) != 0 )
        {
          for ( j = sub_AED600(*(_QWORD *)(a3 + 40), v8, a3, v49); ; j = sub_F68450(v70, v8, v67, v68, v69) )
          {
            v70 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) > 2u )
              break;
          }
          if ( *(_BYTE *)(v70 + 16) != 26 )
            v70 = sub_F63050(v70, v8, v67, v68);
          v51 = *(unsigned __int16 *)(v70 + 22);
          LODWORD(v49) = *((_DWORD *)a1 + 4);
        }
        else if ( *(_QWORD *)a3 )
        {
          v51 = sub_B76070(*(_QWORD *)a3, v8, a3, v49);
          LODWORD(v49) = *((_DWORD *)a1 + 4);
        }
        else
        {
          v51 = *(_DWORD *)(a3 + 108);
        }
        v52 = abs32(v51 - v49);
        v54 = __OFSUB__(v50, v52);
        v53 = (int)(v50 - v52) < 0;
        if ( v50 != v52 )
          return v53 ^ v54;
        v13 = v21 == 0;
        if ( v21 != v28 )
          return v13;
        return (*(_BYTE *)(a2 + 104) & 4) == 0 && (*(_BYTE *)(a3 + 104) & 4) != 0;
      }
      v22 = a1[2];
      v21 = 1;
      if ( v22 < (unsigned int)sub_B770E0(*(_QWORD *)a2, v8) )
        goto LABEL_21;
      v17 = *(_DWORD *)(a2 + 104);
    }
    v21 = (unsigned __int8)(v17 >> 10);
    goto LABEL_21;
  }
  if ( !(_BYTE)v8 )
    return 1;
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    v10 = 0;
    v11 = 0;
    v12 = (v7 & 8) != 0;
    if ( (v6 & 8) != 0 )
    {
      while ( 1 )
      {
        v13 = v12 && v11 == 0;
        if ( !v13 )
        {
          v14 = v10 + *(_QWORD *)(a2 + 48);
          v15 = dword_265F660[*(_DWORD *)v14 & 0x7FFFFFFF];
          if ( (*(_DWORD *)v14 & 0x7FFFFFFF) != 0 )
          {
            if ( (*(_DWORD *)v14 & 0x7FFFFFFF) != 2 )
            {
              if ( v15 )
                return v13;
              goto LABEL_64;
            }
            v16 = sub_1BCD550((unsigned __int8 *)(v14 + 80));
          }
          else
          {
            v16 = sub_1BCD550((unsigned __int8 *)(v14 + 16));
          }
          if ( v15 )
            return v13;
          if ( v16 )
            return v16 < v15;
        }
LABEL_64:
        ++v11;
        v10 += 152;
        if ( v9 == v11 )
          goto LABEL_32;
      }
    }
    v35 = *(_QWORD *)(a3 + 48);
    v36 = 0;
    v37 = dword_265F660;
    do
    {
      if ( !v11 && v12 )
      {
        v16 = 0;
        v38 = 0;
        goto LABEL_53;
      }
      v45 = (_DWORD *)(v36 + *(_QWORD *)(a2 + 48));
      v38 = v37[*v45 & 0x7FFFFFFF];
      if ( (*v45 & 0x7FFFFFFF) != 0 )
      {
        v16 = 0;
        if ( (*v45 & 0x7FFFFFFF) != 2 )
          goto LABEL_53;
        v96 = v37;
        v46 = (unsigned __int8 *)(v45 + 20);
        v92 = v38;
        v87 = v35;
      }
      else
      {
        v96 = v37;
        v46 = (unsigned __int8 *)(v45 + 4);
        v92 = v38;
        v87 = v35;
      }
      v47 = sub_1BCD550(v46);
      v35 = v87;
      v38 = v92;
      v16 = v47;
      v37 = v96;
LABEL_53:
      v39 = v35 + v36;
      v40 = v37[*(_DWORD *)(v35 + v36) & 0x7FFFFFFF];
      if ( (*(_DWORD *)(v35 + v36) & 0x7FFFFFFF) == 0 )
      {
        v99 = v37;
        v41 = (unsigned __int8 *)(v39 + 16);
        v95 = v38;
        v91 = v35;
        v86 = v16;
LABEL_55:
        v42 = sub_1BCD550(v41);
        v16 = v86;
        v35 = v91;
        v38 = v95;
        v37 = v99;
        v15 = v42;
        goto LABEL_56;
      }
      v15 = 0;
      if ( (*(_DWORD *)(v35 + v36) & 0x7FFFFFFF) == 2 )
      {
        v99 = v37;
        v41 = (unsigned __int8 *)(v39 + 80);
        v95 = v38;
        v91 = v35;
        v86 = v16;
        goto LABEL_55;
      }
LABEL_56:
      v43 = v40 < v38;
      v44 = v40 == v38;
      if ( v40 != v38 )
        return !v43 && !v44;
      if ( v15 != v16 )
        return v16 < v15;
      ++v11;
      v36 += 152;
    }
    while ( v9 != v11 );
  }
LABEL_32:
  v29 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v30 = 0;
    if ( (*(_BYTE *)(a2 + 104) & 4) == 0 )
      goto LABEL_34;
    v29 = *(_QWORD *)(a2 + 40);
  }
  v30 = *(_DWORD *)(v29 + 24);
LABEL_34:
  v31 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 )
  {
    if ( (*(_BYTE *)(a3 + 104) & 4) == 0 )
    {
      if ( !v30 )
        return a2 < a3;
      return 1;
    }
    v31 = *(_QWORD *)(a3 + 40);
  }
  v32 = *(_DWORD *)(v31 + 24);
  if ( !v30 )
  {
    if ( !v32 )
      return a2 < a3;
    return 0;
  }
  if ( !v32 )
    return 1;
  return sub_10246C0(*(_QWORD *)(*a1 + 272LL), v30, v32);
}
