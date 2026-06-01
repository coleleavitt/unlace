__int64 __fastcall sub_18F0D00(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // r15d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rax
  __int64 v78; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v79; // [rsp+10h] [rbp-E8h]
  __int64 v80; // [rsp+10h] [rbp-E8h]
  __int64 v81; // [rsp+18h] [rbp-E0h]
  __int64 v82; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+28h] [rbp-D0h] BYREF
  __int64 (__fastcall **v84)(); // [rsp+30h] [rbp-C8h] BYREF
  int v85; // [rsp+38h] [rbp-C0h]
  __int64 *v86; // [rsp+40h] [rbp-B8h]
  __int64 *v87; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v88; // [rsp+50h] [rbp-A8h] BYREF
  char v89; // [rsp+A8h] [rbp-50h]
  unsigned int v90; // [rsp+B0h] [rbp-48h]
  char v91; // [rsp+B4h] [rbp-44h]

  v6 = a2;
  v7 = *(_QWORD *)(a2 + 8);
  if ( a3 <= 4 || a3 == 6 )
  {
    v8 = sub_19A4790(a1, a2);
    if ( v8 == 1 )
      return 1;
    v6 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320)
      && (*(_DWORD *)v6 & 0x8000) == 0
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 6 )
    {
      a2 = *(_QWORD *)(a1 + 248);
      if ( (unsigned __int8)sub_C01160(v6, a2, 0, v9, v10) )
      {
        v71 = sub_C00A40(v6, a2, v11, v12, v13);
        a2 = a1 + 8;
        sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), v71, 0x1CC7u, 0);
        sub_15F7200(&v84);
      }
    }
    if ( a3 == 6 )
    {
      v45 = sub_EEC8C0(v6, a2, a4);
      v49 = sub_C00A40(v6, a2, v46, v47, v48);
      LOBYTE(v52) = sub_18D5550(a1, v7, v49, v45, v50, v51);
      return v52;
    }
  }
  if ( a3 == 8 )
  {
    v32 = sub_EEC8C0(v6, a2, a4);
    v36 = sub_C00A40(v6, a2, v33, v34, v35);
    return (unsigned int)sub_18D80C0(a1, v7, v36, v32);
  }
  v14 = sub_EEC8C0(v6, a2, a4);
  v18 = sub_C00A40(v6, a2, v15, v16, v17);
  v19 = sub_18ED4D0(a1, v7, v18, v14, a3);
  if ( !(_BYTE)v19 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 55) <= 1 )
  {
    LOBYTE(v20) = sub_F65F60(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    if ( (_BYTE)v20 )
    {
      v19 = v20;
      v63 = sub_C00A40(v6, v7, v21, v22, v23);
      sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), v63, 0x1564u, 0);
      v83 = sub_10CCE40(a3);
      sub_15AFC70((__int64)&v84, &v83);
      sub_15F7200(&v84);
      return v19;
    }
  }
  if ( a3 - 3 <= 1 )
  {
    v83 = sub_EEC8C0(v6, v7, a4);
    v38 = sub_10CCE40(a3);
    v39 = *(_QWORD *)(a1 + 248);
    v82 = v38;
    v40 = *(_QWORD *)(v6 + 8);
    v79 = sub_A71450(v39, v40);
    v44 = sub_C00A40(v6, v40, v41, v42, v43);
    v87 = &v82;
    v85 = 4986;
    v86 = &v83;
    v84 = off_2BC6F40;
    if ( (unsigned __int8)sub_1E63C20(a1, v44, v79, 0, &v84) )
      return 1;
  }
  else
  {
    v83 = sub_EEC8C0(v6, v7, a4);
    v82 = sub_10CCE40(a3);
    v87 = &v82;
    v85 = 4986;
    v86 = &v83;
    v84 = off_2BC6F40;
    if ( (unsigned __int8)sub_1E63D20(a1, v6, 0, &v84) )
      return 1;
  }
  v27 = *(_QWORD *)(v6 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    v81 = *(_QWORD *)(v6 + 8);
    v80 = sub_EEC8C0(v6, v27, a4);
    v56 = sub_C00A40(v6, v27, v53, v54, v55);
    if ( !(unsigned __int8)sub_18D5630(a1, v81, v56, v80, a3) )
    {
      if ( a3 == 2 )
      {
        v83 = *(_QWORD *)(sub_BFB9F0(v6) + 8);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) > 4u )
        {
          v75 = sub_C00A40(v6, v81, v72, v73, v74);
          sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), v75, 0xDDDu, 0);
          sub_1605D30((__int64)&v84, &v83);
          sub_15F7200(&v84);
          return v19;
        }
      }
      else if ( !a3 )
      {
        v57 = sub_BFB9F0(v6);
        if ( (*(_WORD *)v57 & 0x1FF) == 0x47 )
        {
          if ( (*(_QWORD *)v57 & 0x200000LL) != 0 )
            v58 = sub_18BBAF0((_QWORD *)v57);
          else
            v58 = *(_QWORD *)(v57 + 16);
          if ( (*(_BYTE *)(v58 + 28) & 0x7F) == 0x2B )
          {
            v59 = sub_B74600(v58);
            v82 = v59;
            v83 = *(_QWORD *)(v58 + 48);
            v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v62 + 16) == 42
              && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 2) <= 4u )
            {
              v76 = sub_C00A40(v6, v81, v62, v60, v61);
              sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), v76, 0x1CCAu, 0);
              v77 = sub_1605D30((__int64)&v84, &v83);
              sub_1605D30(v77, &v82);
              sub_15F7200(&v84);
              sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), *(_DWORD *)(v58 + 24), 0x67u, 0);
              sub_15F7200(&v84);
            }
          }
          v57 = sub_BFB9F0(v6);
        }
        if ( ((*(_WORD *)v57 + 394) & 0x1FFu) <= 1 )
        {
          v78 = v57;
          sub_18CF1D0(a1, *(_DWORD *)(v57 + 4), *(_QWORD *)(v57 + 8), *(_QWORD *)(v57 + 16), a4);
          sub_18CF1D0(a1, *(_DWORD *)(v78 + 4), *(_QWORD *)(v78 + 8), *(_QWORD *)(v78 + 24), a4);
        }
      }
      return 0;
    }
    return 1;
  }
  v28 = sub_C00A40(v6, v27, v24, v25, v26);
  v29 = a1 + 8;
  sub_168B9F0((__int64)&v84, (__int64 *)(a1 + 8), v28, 0x1379u, 0);
  v30 = sub_10CCE40(a3);
  v31 = v30;
  if ( v89 )
  {
    v29 = v30;
    sub_AE9DF0(&v88, v30, 1u);
  }
  else if ( v91 )
  {
    v68 = sub_168B9E0(&v84);
    v69 = (__int64)v86;
    if ( v86 )
      v69 = (*(__int64 (__fastcall **)(__int64 *))(*v86 + 32))(v86);
    v83 = v69;
    v70 = sub_1587BC0(v68, &v83, v64, v65, v66, v67);
    v29 = v31;
    sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v90 + 8), v31, 1u);
  }
  v83 = sub_EEC8C0(v6, v29, a4);
  sub_1587DB0((__int64)&v84, &v83);
  sub_15F7200(&v84);
  return v19;
}
