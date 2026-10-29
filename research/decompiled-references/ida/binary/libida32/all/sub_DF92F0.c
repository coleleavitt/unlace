__int64 __fastcall sub_DF92F0(_QWORD *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbp
  __int64 *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 **v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rbx
  __int64 *v73; // rbp
  __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-B0h]
  unsigned int v77; // [rsp+18h] [rbp-A0h]
  _BYTE v79[24]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v80; // [rsp+38h] [rbp-80h]
  __int64 v81; // [rsp+40h] [rbp-78h]
  unsigned int v82; // [rsp+48h] [rbp-70h]
  __int64 v83; // [rsp+50h] [rbp-68h] BYREF
  char v84; // [rsp+58h] [rbp-60h]

  v6 = *(_DWORD *)(a3 + 28) + a4;
  if ( (*(_BYTE *)(a3 + 504) & 8) != 0 )
    v6 -= sub_E05440(13);
  v11 = sub_DFDA20(a1[22], v6);
  v12 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v12 = 0;
  if ( (*(_BYTE *)(a3 + 504) & 2) == 0 )
    sub_DCAFF0((__int64)a1, a3, v7, v8, v9, v10);
  if ( (*(_BYTE *)(v12 + 82) & 8) == 0 )
  {
    sub_DFF4A0(v79, v11);
    v13 = v80;
    if ( !v80 )
    {
      v13 = v81;
      if ( v81 )
      {
        v14 = v82;
        if ( *(_DWORD *)(*(_QWORD *)(v81 + 32) + 24LL) != v82 )
        {
          while ( v82 )
          {
            v77 = v14;
            v15 = *(_QWORD *)sub_CDA220((__int64)v79);
            if ( (v15 & 2) != 0 || (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_BYTE *)(v13 + v77 + 28) & 4) == 0 )
              break;
            if ( v77 == -1 )
              sub_DFF4E0(&v83, v13, 0xFFFFFFFFLL, 0);
            else
              sub_DFF4E0(&v83, v13, v77 - *(_DWORD *)(v13 + v77 + 24), v77 - *(_DWORD *)(v13 + v77 + 24));
            v13 = (__int64)&v83;
            sub_DFF6C0(v79, &v83);
            sub_DFF560(&v83);
            if ( v80 )
              break;
            v13 = v81;
            if ( !v81 )
              break;
            v14 = v82;
            if ( *(_DWORD *)(*(_QWORD *)(v81 + 32) + 24LL) == v82 )
              break;
          }
        }
      }
    }
    v16 = *(_QWORD *)(sub_CDA510((__int64)v79, v13) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
      v17 = sub_F43FF0(v16);
    else
      v17 = sub_F3F530(v16);
    sub_DFF560(v79);
    v18 = *(_QWORD *)(a3 + 16);
    if ( (v18 & 4) == 0
      && (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL) != 0
      && (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 <= 3
      && ((v20 = *(_QWORD *)(sub_B68470(v19 + 72) + 16), (v20 & 4) == 0)
        ? (v21 = v20 & 0xFFFFFFFFFFFFFFF8LL)
        : (v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL)),
          v21) )
    {
      v22 = v21 - 64;
    }
    else
    {
      v22 = 0;
    }
    v23 = sub_CC3780(a1[23], v17, v22, v12);
    v75 = v23;
    if ( v12 == v23 )
    {
      if ( !(unsigned __int8)sub_DF8F60((__int64)a1, a2, a3, a4, v24, v25) )
        return 0;
    }
    else
    {
      if ( *(char *)(sub_E0E500(a1) + 1) >= 0 && sub_AC9870(v23) )
      {
        v72 = sub_DFB220(a1[50]);
        v73 = (__int64 *)sub_E0FF50(a1, v72, 2505, 0);
        v74 = sub_EC8B80(v72);
        if ( v73 )
        {
          v83 = v74;
          v84 = 1;
          sub_AC88D0(v73, &v83);
        }
      }
      v30 = sub_CC5910(a1[23], v75, v26, v27, v28, v29);
      v31 = (__int64 *)sub_CDA220(v11);
      v32 = sub_CCB860(v31);
      v33 = sub_F3F530(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL));
      v34 = sub_D9F200(v30);
      if ( (unsigned __int8)sub_B4C910(v34, v33) && !*(_DWORD *)(v11 + 24) )
      {
        do
        {
          if ( (unsigned __int8)sub_CDA840(v11) )
            break;
          v37 = *(_QWORD *)sub_CDA220(v11);
          if ( (v37 & 2) != 0 )
            break;
          if ( (v37 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            break;
          v38 = *(_QWORD *)(v11 + 32);
          v39 = *(unsigned int *)(v11 + 40);
          if ( (*(_BYTE *)(v38 + v39 + 28) & 4) == 0 )
            break;
          v40 = 0;
          if ( (_DWORD)v39 != -1 )
          {
            v39 = (unsigned int)(v39 - *(_DWORD *)(v38 + v39 + 24));
            v40 = (unsigned int)v39;
          }
          sub_DFF4E0(&v83, v38, v39, v40);
          sub_DFF6C0(v11, &v83);
          sub_DFF560(&v83);
        }
        while ( !*(_DWORD *)(v11 + 24) );
      }
      if ( !(unsigned __int8)sub_DF8F60((__int64)a1, a2, v30, a4, v35, v36) )
        return 0;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BF9750(v75, (__int64)a2, v41, v42)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 42) <= 2u
        && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BF9750(v12, (__int64)a2, v44, v45)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 42) <= 2u )
      {
        v49 = sub_BF9750(v75, (__int64)a2, v47, v48);
        v53 = sub_F44710(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), a2, v50, v51, v52);
        v56 = sub_BF9750(v12, (__int64)a2, v54, v55);
        v60 = sub_F44710(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL), a2, v57, v58, v59);
        v61 = a1[23];
        v62 = v60;
        v66 = sub_F3F500(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL), a2, v63, v64, v65);
        v70 = sub_F3F500(*(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL), a2, v67, v68, v69);
        v71 = sub_CC2930(v61, v70, v66);
        return sub_DA5680((__int64)a1, (__int64)a2, v71, 1);
      }
    }
    return 1;
  }
  v83 = sub_DFB160(a1[50], a2);
  v46 = (unsigned __int8 **)sub_E0FE60(a1, &v83, 2481, 1);
  if ( v46 )
    sub_AC60B0(v46, v12, 0xAu);
  sub_E10070(a1, *(unsigned int *)(v12 + 24), 103);
  return 0;
}

