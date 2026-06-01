void __fastcall sub_1CB7400(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // al
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *i; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  char v58; // al
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rdi
  int v66; // eax
  unsigned __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // rax
  char v73; // al
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdi
  __int64 v91; // r9
  char v92; // al
  int v93; // eax
  unsigned __int64 v94; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v4 - 34 > 5 )
  {
    if ( (unsigned int)v4 - 59 <= 2 )
    {
      if ( (unsigned int)sub_B97260(a2) != 2 )
      {
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 > 1 )
          return;
        v29 = *(_QWORD *)(a2 + 152);
        if ( !v29 )
          return;
        v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v29 & 4) != 0 )
        {
          if ( !v30 )
            return;
          v31 = *v30 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v31 )
            return;
          v32 = *(_QWORD *)a1;
          v33 = *(_QWORD *)(v31 + 8) & 6LL;
          if ( *(_DWORD *)(a1 + 96) )
          {
            if ( !v33 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v31 + 104) + 192LL) & 4) == 0 )
                return;
              goto LABEL_95;
            }
            if ( sub_1A427C0(*(_QWORD *)a1, v31, 1u, v26, v27, v28)
              || (unsigned __int8)sub_1A42930(v32, v31, 0, v26, v27, v28) )
            {
LABEL_104:
              if ( (*(_BYTE *)(*(_QWORD *)(v31 + 104) + 192LL) & 4) == 0 )
                return;
              v32 = *(_QWORD *)a1;
              if ( !*(_DWORD *)(a1 + 96) )
                goto LABEL_25;
LABEL_95:
              v34 = sub_1A42AC0(v32, v31, 0, v26, v27, v28);
              goto LABEL_26;
            }
          }
          else
          {
            if ( !v33 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v31 + 104) + 192LL) & 4) == 0 )
                return;
LABEL_25:
              v34 = sub_1A42AB0(v32, v31, 0, v26, v27, v28);
LABEL_26:
              if ( v34 )
                return;
              for ( i = sub_7052B0(
                          (__int64 *)(*(_QWORD *)(v31 + 104) + 96LL),
                          *(_QWORD *)(v31 + 104),
                          v35,
                          v36,
                          v37,
                          v38); sub_B97450((__int64)i); i = nullptr )
              {
                while ( (i[12] & 3) == 0 )
                {
                  i = sub_7052B0(i + 12, (__int64)i, v40, v41, v42, v43);
                  if ( !sub_B97450((__int64)i) )
                    goto LABEL_31;
                }
              }
LABEL_31:
              v44 = (__int64)i;
LABEL_46:
              sub_1CAF880(a1, v44, 0);
              return;
            }
            if ( sub_1A427C0(*(_QWORD *)a1, v31, 0, v26, v27, v28) || (unsigned __int8)sub_1A42940(v32, v31) )
              goto LABEL_104;
          }
          sub_1CAF880(a1, v31, 1);
          goto LABEL_104;
        }
        goto LABEL_71;
      }
      v53 = sub_B97210(a2);
      v57 = *(_QWORD *)a1;
      if ( v53 )
      {
        if ( !*(_DWORD *)(a1 + 96) )
        {
LABEL_42:
          v58 = sub_1A42AB0(v57, a2, 0, v54, v55, v56);
LABEL_43:
          if ( v58 == 1 )
            return;
          v63 = (unsigned __int64)sub_7052B0(
                                    (__int64 *)(*(_QWORD *)(a2 + 104) + 96LL),
                                    *(_QWORD *)(a2 + 104),
                                    v59,
                                    v60,
                                    v61,
                                    v62);
          goto LABEL_45;
        }
LABEL_88:
        v58 = sub_1A42AC0(v57, a2, 0, v54, v55, v56);
        goto LABEL_43;
      }
      if ( !*(_DWORD *)(a1 + 96) )
        goto LABEL_78;
      goto LABEL_91;
    }
    if ( (unsigned int)v4 - 40 > 6 )
    {
      if ( v4 != 62 || (unsigned int)sub_B787D0(a2) != 2 )
        return;
      v93 = *(_DWORD *)(a1 + 96);
      v57 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a2 + 144) )
      {
        if ( !v93 )
          goto LABEL_42;
        goto LABEL_88;
      }
      if ( !v93 )
      {
LABEL_78:
        v58 = sub_1A42CA0(v57, a2, 0);
        goto LABEL_43;
      }
LABEL_91:
      v58 = sub_1A42CB0(v57, a2, 0);
      goto LABEL_43;
    }
    if ( (unsigned int)sub_B740B0(a2) == 2 )
    {
      v87 = sub_B73ED0(a2);
      v90 = *(_QWORD *)a1;
      if ( v87 )
      {
        v91 = *(unsigned int *)(a1 + 96);
        if ( (_DWORD)v91 )
          v92 = sub_1A42AC0(v90, a2, 0, v88, v89, v91);
        else
          v92 = sub_1A42AB0(v90, a2, 0, v88, v89, v91);
      }
      else if ( *(_DWORD *)(a1 + 96) )
      {
        v92 = sub_1A42CB0(v90, a2, 0);
      }
      else
      {
        v92 = sub_1A42CA0(v90, a2, 0);
      }
      if ( v92 == 1 )
        return;
      goto LABEL_67;
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 41 > 1 )
      return;
    v70 = *(_QWORD *)(a2 + 112);
    if ( !v70 )
      return;
    v30 = (_QWORD *)(v70 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v70 & 4) == 0 )
    {
LABEL_71:
      if ( !v30 || (*(_BYTE *)sub_BC3640(v30) & 4) == 0 )
        return;
      v80 = *(unsigned int *)(a1 + 96);
      v81 = *(_QWORD *)a1;
      if ( (_DWORD)v80
         ? sub_1A42AC0(v81, (__int64)v30, 0, v80, v78, v79)
         : (unsigned __int8)sub_1A42AB0(v81, (__int64)v30, 0, v80, v78, v79) )
      {
        return;
      }
      v63 = sub_AEA770((__int64 *)(v30[9] + 64LL), v30[9], v83, v84, v85, v86);
      goto LABEL_45;
    }
    if ( !v30 )
      return;
    v3 = *v30 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v3 )
      return;
    v71 = *(_QWORD *)a1;
    v72 = *(_QWORD *)(v3 + 8) & 6LL;
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( !v72 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 80) + 152LL) & 4) == 0 )
          return;
        goto LABEL_112;
      }
      if ( sub_1A427C0(*(_QWORD *)a1, v3, 1u, v67, v68, v69) || (unsigned __int8)sub_1A42930(v71, v3, 0, v67, v68, v69) )
      {
LABEL_116:
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 80) + 152LL) & 4) == 0 )
          return;
        v71 = *(_QWORD *)a1;
        if ( !*(_DWORD *)(a1 + 96) )
          goto LABEL_65;
LABEL_112:
        v73 = sub_1A42AC0(v71, v3, 0, v67, v68, v69);
LABEL_66:
        if ( v73 )
          return;
LABEL_67:
        v63 = (unsigned __int64)sub_705340(
                                  (__int64 *)(*(_QWORD *)(v3 + 80) + 72LL),
                                  *(_QWORD *)(v3 + 80),
                                  v74,
                                  v75,
                                  v76,
                                  v77);
LABEL_45:
        v44 = v63;
        goto LABEL_46;
      }
    }
    else
    {
      if ( !v72 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 80) + 152LL) & 4) == 0 )
          return;
LABEL_65:
        v73 = sub_1A42AB0(v71, v3, 0, v67, v68, v69);
        goto LABEL_66;
      }
      if ( sub_1A427C0(*(_QWORD *)a1, v3, 0, v67, v68, v69) || (unsigned __int8)sub_1A42940(v71, v3) )
        goto LABEL_116;
    }
    sub_1CAF880(a1, v3, 1);
    goto LABEL_116;
  }
  sub_B77D20(a2);
  if ( (unsigned int)sub_B77DB0(a2) != 2 )
  {
    v5 = (_QWORD *)sub_B77AF0(a2);
    v6 = (__int64)v5;
    if ( v5 && (*(_BYTE *)sub_BC3640(v5) & 4) != 0 )
    {
      v45 = *(unsigned int *)(a1 + 96);
      v46 = *(_QWORD *)a1;
      if ( !((_DWORD)v45 ? sub_1A42AC0(v46, v6, 0, v7, v45, v8) : (unsigned __int8)sub_1A42AB0(v46, v6, 0, v7, v45, v8)) )
      {
        v52 = sub_AEA770((__int64 *)(*(_QWORD *)(v6 + 72) + 64LL), *(_QWORD *)(v6 + 72), v48, v49, v50, v51);
        v23 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v23 )
        {
          v25 = *(unsigned int *)(a1 + 8);
          v24 = *(_QWORD *)a1;
          v22 = v52;
          goto LABEL_37;
        }
        sub_1A5E3E0(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), v52, *(_DWORD *)(v52 + 24), *(_DWORD **)(a1 + 16), v23, 3, 1);
      }
    }
    return;
  }
  v9 = sub_B77930(a2);
  v13 = *(_QWORD *)a1;
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 96) )
      v14 = sub_1A42AC0(v13, a2, 0, v10, v11, v12);
    else
      v14 = sub_1A42AB0(v13, a2, 0, v10, v11, v12);
  }
  else if ( *(_DWORD *)(a1 + 96) )
  {
    v14 = sub_1A42CB0(v13, a2, 0);
  }
  else
  {
    v14 = sub_1A42CA0(v13, a2, 0);
  }
  if ( v14 == 1 )
    return;
  v17 = *(_QWORD *)(a2 + 112);
  v18 = *(_QWORD *)(v17 + 104);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) != 0 )
    goto LABEL_48;
  v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_48;
  v21 = v18 & 2;
  v22 = (__int64)v20;
  if ( (_DWORD)v21 )
  {
    v19 = sub_6E2500(v20, v17, (__int64)v20, v21, v15, v16) & 0xFFFFFFFFFFFFFFFELL;
    v18 = v19 | 1;
    *(_QWORD *)(v17 + 104) = v19 | 1;
LABEL_48:
    v64 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    v22 = v64;
    if ( v19 )
    {
      if ( (v19 & 4) != 0 )
      {
        v22 = 0;
        if ( v64 )
        {
          v65 = *(_QWORD *)v64;
          v66 = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
          if ( *(_DWORD *)(v64 + 8) != v66 )
          {
            *(_DWORD *)(v64 + 8) = v66;
            v94 = v64;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v65 + 152LL))(v65, v17, 0);
            v64 = v94;
          }
          v22 = *(_QWORD *)(v64 + 16);
        }
      }
    }
  }
  v23 = *(unsigned int *)(a1 + 24);
  v24 = *(_QWORD *)a1;
  if ( !(_DWORD)v23 )
  {
    v25 = *(unsigned int *)(a1 + 8);
LABEL_37:
    sub_1A5FAE0(v24, v25, v22, 3, 1, v23);
    return;
  }
  sub_1A5E3E0(v24, *(_DWORD *)(a1 + 8), v22, *(_DWORD *)(v22 + 24), *(_DWORD **)(a1 + 16), v23, 3, 1);
}
