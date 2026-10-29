__int64 __fastcall sub_19D8F00(__int64 *a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6, int a7)
{
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  unsigned __int64 v32; // rbp
  _QWORD *v33; // rcx
  __int64 v34; // r15
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r15
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r15
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v68; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v71[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v73[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v74; // [rsp+98h] [rbp-50h]
  unsigned int v75; // [rsp+A0h] [rbp-48h]
  char v76; // [rsp+A4h] [rbp-44h]

  v9 = (_QWORD *)sub_168B6C0((__int64)a1);
  v10 = sub_1A86640(a1, a2, a6, 0);
  if ( v10 )
  {
    v15 = v10;
    if ( sub_BA8D30(v10, a2, v11, v12, v13, v14) )
    {
      sub_168B9F0((__int64)v71, a1, a4, 0x1110u, 0);
      if ( v74 )
      {
        sub_AE9DF0(v73, v15, 0xAu);
      }
      else if ( v76 )
      {
        v64 = sub_168B9E0(v71);
        v65 = v72;
        if ( v72 )
          v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
        v70 = v65;
        v66 = sub_1587BC0(v64, &v70, v60, v61, v62, v63);
        sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * v75 + 8), v15, 0xAu);
      }
      sub_15F7200(v71);
      v18 = *(_QWORD *)(v15 + 104);
      if ( v18 )
      {
LABEL_4:
        v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v19 )
        {
LABEL_5:
          sub_168B9F0((__int64)v71, a1, a4, 0xC45u, 0);
          if ( v74 )
          {
            sub_AE9DF0(v73, v15, 0xAu);
          }
          else if ( v76 )
          {
            v50 = sub_168B9E0(v71);
            v51 = v72;
            if ( v72 )
              v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
            v70 = v51;
            v52 = sub_1587BC0(v50, &v70, v46, v47, v48, v49);
            sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v75 + 8), v15, 0xAu);
          }
          sub_15F7200(v71);
          sub_168B9F0((__int64)v71, a1, *(_DWORD *)(v15 + 24), 0x172Eu, 0);
          if ( v74 )
          {
            sub_AE9DF0(v73, v15, 0xAu);
            sub_15F7200(v71);
          }
          else
          {
            if ( v76 )
            {
              v41 = sub_168B9E0(v71);
              v44 = v72;
              if ( v72 )
                v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
              v70 = v44;
              v45 = sub_1587BC0(v41, &v70, v39, v40, v42, v43);
              sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v75 + 8), v15, 0xAu);
            }
            sub_15F7200(v71);
          }
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    else
    {
      v18 = *(_QWORD *)(v15 + 104);
      if ( v18 )
        goto LABEL_4;
    }
    v26 = *(_QWORD *)(v15 + 96);
    v27 = *(_QWORD *)(v26 + 88);
    v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v27 & 1) == 0 )
    {
      v33 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v27 & 2) == 0 )
          goto LABEL_5;
        v34 = v33[2295];
        v35 = v26 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v34 )
        {
          v36 = v33[294];
          v33[304] += 24LL;
          v37 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v33[295] >= v37 + 24 && v36 )
          {
            v33[294] = v37 + 24;
            v38 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v38 = sub_986170((__int64)(v33 + 294), 24, 24, 3, v16, v17);
            v37 = v38 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v38 = v34;
          v35 = v37 | 4;
          *(_DWORD *)(v38 + 8) = 0;
          *(_QWORD *)(v38 + 16) = v26;
        }
        v28 = v35 & 0xFFFFFFFFFFFFFFFELL;
        v27 = v28 | 1;
        *(_QWORD *)(v26 + 88) = v28 | 1;
      }
    }
    if ( v28 )
    {
      if ( (v28 & 4) != 0 )
      {
        v29 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v29 )
        {
          v30 = *(_QWORD *)v29;
          v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
          if ( v29[2] != v31 )
          {
            v29[2] = v31;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v26);
          }
        }
      }
    }
    v19 = (__int64 *)(*(_QWORD *)(v15 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v19 )
      goto LABEL_5;
LABEL_10:
    v15 = *v19;
LABEL_11:
    v20 = sub_A89FE0(v9);
    v24 = sub_A82070((__int64)v9, v20, 0, v21, v22, v23);
    if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
    v32 = sub_A74EC0((__int64)v9, v24);
    result = sub_EEE9A0(40, v9, 8u);
    *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x1F;
    if ( unk_2CD7484 )
    {
      v68 = result;
      sub_EE9B50(31);
      result = v68;
    }
    *(_QWORD *)(result + 8) = v32;
    *(_WORD *)(result + 1) &= 0xF801u;
    *(_QWORD *)(result + 16) = v15;
    *(_DWORD *)(result + 24) = a3;
    *(_DWORD *)(result + 28) = a6;
    *(_DWORD *)(result + 32) = a7;
    return result;
  }
  sub_168B9F0((__int64)v71, a1, a4, 0x14E2u, 0);
  if ( v74 )
  {
    sub_AE9DF0(v73, a2, 5u);
  }
  else if ( v76 )
  {
    v55 = sub_168B9E0(v71);
    v58 = v72;
    if ( v72 )
      v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
    v70 = v58;
    v59 = sub_1587BC0(v55, &v70, v53, v54, v56, v57);
    sub_AE9DF0((unsigned __int8 **)(*v59 + 32LL * v75 + 8), a2, 5u);
  }
  sub_15F7200(v71);
  return 1;
}
