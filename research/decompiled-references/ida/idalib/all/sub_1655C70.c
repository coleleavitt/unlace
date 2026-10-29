__int64 __fastcall sub_1655C70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  _QWORD *v8; // r12
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r15
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  _DWORD *v39; // rdx
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rbp
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 (__fastcall *v46)(_QWORD *); // rdx
  __int64 result; // rax
  unsigned __int8 v48; // al
  __int64 v49; // rdx
  unsigned int v50; // r12d
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  char v53; // al
  __int64 v54; // r14
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  _DWORD *v59; // rax
  __int64 v60; // rdi
  int v61; // edx
  __int64 v62; // r15
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  _DWORD *v67; // rcx
  __int64 v68; // rdi
  int v69; // eax
  int v70; // ebp
  int v71; // eax
  __int64 v72; // rdi
  __int64 v73; // rdi
  _QWORD *v74; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v8 = *(_QWORD **)(a1 + 16);
  if ( v8 != a2 )
  {
    v9 = a2;
    if ( *(_BYTE *)(a1 + 24) && a2[5] == v8[5] )
    {
      v10 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (a2[2] & 4) != 0 )
        v10 = (_QWORD *)*v10;
      v11 = sub_B91570((__int64)v10, (__int64)a2, a3, a4, a5, a6);
      v16 = v8[2];
      v17 = v11;
      if ( (v16 & 4) != 0 )
        v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = sub_B91570(v18, (__int64)a2, v12, v13, v14, v15);
      if ( v17 == v19
        || (*(_BYTE *)(v17 + 8) & 0x7F) != 0
        && (*(_BYTE *)(v17 + 8) & 0x7F) != 0x18
        && (v20 = *(_BYTE *)(v19 + 8) & 0x7F, v20 != 24)
        && v20 )
      {
        *(_BYTE *)(a1 + 25) = 1;
      }
    }
    v21 = a2[13];
    v22 = *(_QWORD *)(v21 + 96);
    v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v22 & 1) == 0 )
    {
      v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v22 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v22 & 2) == 0 )
          goto LABEL_16;
        v54 = v24[2295];
        v55 = v21 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v54 )
        {
          v56 = v24[294];
          v24[304] += 24LL;
          v57 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a2 = (_QWORD *)(v57 + 24);
          if ( v24[295] >= v57 + 24 && v56 )
          {
            v24[294] = a2;
            v58 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            a2 = &qword_18;
            v58 = sub_986170((__int64)(v24 + 294), 24, 24, 3, a5, a6);
            v57 = v58 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v58 = v54;
          v55 = v57 | 4;
          *(_DWORD *)(v58 + 8) = 0;
          *(_QWORD *)(v58 + 16) = v21;
        }
        v23 = v55 & 0xFFFFFFFFFFFFFFFELL;
        v22 = v23 | 1;
        *(_QWORD *)(v21 + 96) = v23 | 1;
      }
    }
    if ( v23 )
    {
      if ( (v23 & 4) != 0 )
      {
        v59 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v59 )
        {
          v60 = *(_QWORD *)v59;
          v61 = *(_DWORD *)(*(_QWORD *)v59 + 12LL);
          if ( v59[2] != v61 )
          {
            v59[2] = v61;
            a2 = (_QWORD *)v21;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v60 + 152LL))(v60, v21);
          }
        }
      }
    }
LABEL_16:
    v25 = v9[16];
    if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
      v26 = sub_B96980(v25);
    else
      v26 = *(_QWORD *)(v25 + 24);
    v27 = v9[13];
    v28 = *(_QWORD *)(v27 + 96);
    v29 = v28;
    v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v28 & 1) == 0 )
    {
      a2 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v28 & 2) == 0 )
        {
          v31 = v9[16];
          v32 = v26 + 24LL * *(unsigned int *)(v31 + 16);
          goto LABEL_22;
        }
        v62 = a2[2295];
        v63 = v27 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v62 )
        {
          v64 = a2[294];
          a2[304] += 24LL;
          v65 = (v64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( a2[295] >= v65 + 24 && v64 )
          {
            a2[294] = v65 + 24;
            v66 = (v64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v73 = (__int64)(a2 + 294);
            a2 = &qword_18;
            v66 = sub_986170(v73, 24, 24, 3, a5, a6);
            v65 = v66 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v66 = v62;
          v63 = v65 | 4;
          *(_DWORD *)(v66 + 8) = 0;
          *(_QWORD *)(v66 + 16) = v27;
        }
        v30 = v63 & 0xFFFFFFFFFFFFFFFELL;
        v29 = v30 | 1;
        *(_QWORD *)(v27 + 96) = v30 | 1;
      }
    }
    if ( v30 )
    {
      if ( (v30 & 4) != 0 )
      {
        v67 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v67 )
        {
          v68 = *(_QWORD *)v67;
          v69 = *(_DWORD *)(*(_QWORD *)v67 + 12LL);
          if ( v67[2] != v69 )
          {
            v67[2] = v69;
            a2 = (_QWORD *)v27;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v68 + 152LL))(v68, v27);
          }
        }
      }
    }
    v31 = v9[16];
    v27 = v9[13];
    v38 = *(_QWORD *)(v27 + 96);
    v32 = v26 + 24LL * *(unsigned int *)(v31 + 16);
    v29 = v38 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v28) = v38;
    if ( (v38 & 1) != 0 || (a2 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL), (v38 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
    {
      if ( v29 )
      {
LABEL_29:
        v29 &= 4u;
        if ( (_DWORD)v29 )
        {
          v39 = (_DWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v39 )
          {
            v40 = *(_QWORD *)v39;
            v41 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
            if ( v39[2] != v41 )
            {
              v39[2] = v41;
              a2 = (_QWORD *)v27;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v40 + 152LL))(v40, v27);
            }
          }
        }
      }
LABEL_33:
      v31 = v9[16];
LABEL_34:
      if ( (*(_BYTE *)(v31 + 24) & 1) != 0 )
        v42 = sub_B96980(v31);
      else
        v42 = *(_QWORD *)(v31 + 24);
      if ( v42 == v32 )
        return 0;
      while ( 1 )
      {
        v48 = *(_BYTE *)(v42 + 12);
        v49 = v48 & 0xC;
        if ( (_BYTE)v49 == 12 )
        {
          v50 = v6;
          if ( (v48 & 2) == 0 )
            goto LABEL_46;
        }
        else
        {
          v50 = v6;
          if ( ((v48 >> 2) & 3) != 2 )
            goto LABEL_46;
        }
        v50 = *(_DWORD *)(a1 + 40) - 1;
LABEL_46:
        v51 = *(_QWORD *)(**(_QWORD **)(v42 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v51 + 8) & 0xF) != 0 )
          v51 = sub_F64F00(**(_QWORD **)(v42 + 16), (__int64)a2, v49, v29, a5);
        v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v53 = *(_BYTE *)(v52 + 16);
        if ( v53 == 48 )
        {
          v43 = sub_F60F10(v52, (__int64)a2, v49, v29, a5, a6);
          v44 = *(unsigned int *)(a1 + 40);
          v45 = v44 + 1;
          if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
            goto LABEL_51;
        }
        else
        {
          if ( v53 != 29 )
          {
            *(_BYTE *)(a1 + 25) = 1;
            goto LABEL_43;
          }
          v43 = sub_F61460(v52, (__int64)a2, v49, v29, a5, a6);
          v44 = *(unsigned int *)(a1 + 40);
          v45 = v44 + 1;
          if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          {
LABEL_51:
            v74 = v43;
            sub_2237220(a1 + 32, a1 + 48, v45, 8);
            v44 = *(unsigned int *)(a1 + 40);
            v43 = v74;
          }
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v44) = v43;
        ++*(_DWORD *)(a1 + 40);
        v46 = *(__int64 (__fastcall **)(_QWORD *))(*v43 + 32LL);
        if ( (char *)v46 == (char *)sub_A01140 )
          a2 = (_QWORD *)sub_B70A60((__int64)v43);
        else
          a2 = (_QWORD *)v46(v43);
        result = sub_1655C70(a1, a2, v50);
        if ( (_BYTE)result )
          return result;
        --*(_DWORD *)(a1 + 40);
LABEL_43:
        v42 += 24;
        if ( v32 == v42 )
          return 0;
      }
    }
LABEL_22:
    if ( (v28 & 2) == 0 )
      goto LABEL_34;
    v33 = a2[2295];
    v34 = v27 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v33 )
    {
      v35 = a2[294];
      a2[304] += 24LL;
      v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[295] >= v36 + 24 && v35 )
      {
        a2[294] = v36 + 24;
        v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v72 = (__int64)(a2 + 294);
        a2 = &qword_18;
        v37 = sub_986170(v72, 24, 24, 3, a5, a6);
        v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v37 = v33;
      v34 = v36 | 4;
      *(_DWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = v27;
    }
    v29 = v34 & 0xFFFFFFFFFFFFFFFELL;
    v38 = v29 | 1;
    *(_QWORD *)(v27 + 96) = v29 | 1;
    if ( v29 )
      goto LABEL_29;
    goto LABEL_33;
  }
  v70 = *(_DWORD *)(a1 + 40);
  if ( (_DWORD)a3 == v70 )
    return 0;
  while ( 1 )
  {
    v71 = sub_16558B0(*(_QWORD *)(a1 + 8), *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 8LL * v6));
    if ( !v71 )
      break;
    if ( v71 == 2 )
      *(_BYTE *)(a1 + 25) = 1;
    if ( v70 == ++v6 )
      return 0;
  }
  return 1;
}
