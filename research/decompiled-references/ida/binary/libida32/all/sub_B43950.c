__int64 __fastcall sub_B43950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  unsigned __int8 (__fastcall *v7)(__int64, __int64); // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rdi
  unsigned int v34; // ebx
  __int64 v36; // r12
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  _DWORD *v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  _DWORD *v47; // rsi
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned __int64 v56; // [rsp+10h] [rbp-A8h]
  __int64 v57; // [rsp+10h] [rbp-A8h]
  __int64 v58; // [rsp+10h] [rbp-A8h]
  __int64 v59; // [rsp+20h] [rbp-98h]
  unsigned __int64 v60; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v62; // [rsp+38h] [rbp-80h]
  _BYTE v63[120]; // [rsp+40h] [rbp-78h] BYREF

  v6 = 0x800000000LL;
  v7 = (unsigned __int8 (__fastcall *)(__int64, __int64))a2;
  v62 = 0x800000000LL;
  ptr = v63;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 104);
    v10 = *(_QWORD *)(v9 + 96);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) == 0 )
    {
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v10 & 2) == 0 )
          goto LABEL_5;
        v36 = v12[2295];
        v37 = v9 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v36 )
        {
          v38 = v12[294];
          v12[304] += 24LL;
          v39 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v6 = v39 + 24;
          if ( v12[295] >= v39 + 24 && v38 )
          {
            v12[294] = v6;
            v40 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            a2 = 24;
            v40 = sub_962430((__int64)(v12 + 294), 24, 24, 3, a5, a6);
            v39 = v40 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v40 = v36;
          v37 = v39 | 4;
          *(_DWORD *)(v40 + 8) = 0;
          *(_QWORD *)(v40 + 16) = v9;
        }
        v11 = v37 & 0xFFFFFFFFFFFFFFFELL;
        v10 = v11 | 1;
        *(_QWORD *)(v9 + 96) = v11 | 1;
      }
    }
    if ( !v11
      || (v11 &= 4u, !(_DWORD)v11)
      || (v41 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
      || (v42 = *(_QWORD *)v41, v11 = *(unsigned int *)(*(_QWORD *)v41 + 12LL), v41[2] == (_DWORD)v11) )
    {
LABEL_5:
      v13 = *(_QWORD *)(a1 + 128);
      if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
        goto LABEL_45;
      goto LABEL_6;
    }
    v41[2] = v11;
    a2 = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 152LL))(v42, v9);
    v13 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    {
LABEL_45:
      v14 = sub_B72C40(v13, a2, v11);
      goto LABEL_7;
    }
LABEL_6:
    v14 = *(_QWORD *)(v13 + 24);
LABEL_7:
    v15 = *(_QWORD *)(a1 + 104);
    v16 = *(_QWORD *)(v15 + 96);
    a2 = v16;
    v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v16 & 1) == 0 )
    {
      v6 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v16 & 2) == 0 )
        {
          v18 = *(_QWORD *)(a1 + 128);
          v19 = 3LL * *(unsigned int *)(v18 + 16);
          v20 = v14 + 24LL * *(unsigned int *)(v18 + 16);
          goto LABEL_11;
        }
        a5 = *(_QWORD *)(v6 + 18360);
        v43 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        if ( a5 )
        {
          v44 = *(_QWORD *)(v6 + 2352);
          *(_QWORD *)(v6 + 2432) += 24LL;
          v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v6 + 2360) >= v45 + 24 && v44 )
          {
            *(_QWORD *)(v6 + 2352) = v45 + 24;
            v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v57 = a5;
            v46 = sub_962430(v6 + 2352, 24, 24, 3, a5, a6);
            a5 = v57;
            v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v46 = a5;
          v43 = v45 | 4;
          *(_DWORD *)(v46 + 8) = 0;
          *(_QWORD *)(v46 + 16) = v15;
        }
        v17 = v43 & 0xFFFFFFFFFFFFFFFELL;
        a2 = v17 | 1;
        *(_QWORD *)(v15 + 96) = v17 | 1;
      }
    }
    if ( v17 )
    {
      if ( (v17 & 4) != 0 )
      {
        v47 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v47 )
        {
          v48 = *(_QWORD *)v47;
          v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
          if ( v47[2] != v49 )
          {
            v47[2] = v49;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 152LL))(v48, v15);
          }
        }
      }
    }
    v18 = *(_QWORD *)(a1 + 128);
    v15 = *(_QWORD *)(a1 + 104);
    v19 = *(_QWORD *)(v15 + 96);
    v20 = v14 + 24LL * *(unsigned int *)(v18 + 16);
    a2 = v19 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v16) = v19;
    if ( (v19 & 1) != 0 || (v6 = v19 & 0xFFFFFFFFFFFFFFFCLL, (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
    {
      if ( a2 )
        goto LABEL_59;
      goto LABEL_18;
    }
LABEL_11:
    if ( (v16 & 2) == 0 )
      goto LABEL_19;
    a5 = *(_QWORD *)(v6 + 18360);
    v21 = v15 & 0xFFFFFFFFFFFFFFFBLL;
    if ( a5 )
    {
      v22 = *(_QWORD *)(v6 + 2352);
      *(_QWORD *)(v6 + 2432) += 24LL;
      v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v6 + 2360) >= v23 + 24 && v22 )
      {
        *(_QWORD *)(v6 + 2352) = v23 + 24;
        v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v58 = a5;
        v24 = sub_962430(v6 + 2352, 24, 24, 3, a5, a6);
        a5 = v58;
        v23 = v24 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v24 = a5;
      v21 = v23 | 4;
      *(_DWORD *)(v24 + 8) = 0;
      *(_QWORD *)(v24 + 16) = v15;
    }
    a2 = v21 & 0xFFFFFFFFFFFFFFFELL;
    v19 = a2 | 1;
    *(_QWORD *)(v15 + 96) = a2 | 1;
    if ( a2 )
    {
LABEL_59:
      a2 &= 4u;
      if ( (_DWORD)a2 )
      {
        v19 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v19 )
        {
          v50 = *(_QWORD *)v19;
          v51 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
          if ( *(_DWORD *)(v19 + 8) != v51 )
          {
            *(_DWORD *)(v19 + 8) = v51;
            a2 = v15;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 152LL))(v50, v15);
          }
        }
      }
    }
LABEL_18:
    v18 = *(_QWORD *)(a1 + 128);
LABEL_19:
    v25 = (*(_BYTE *)(v18 + 24) & 1) != 0 ? sub_B72C40(v18, a2, v19) : *(_QWORD *)(v18 + 24);
    v56 = a1 + 64;
    if ( v25 != v20 )
      break;
LABEL_68:
    v33 = ptr;
    if ( !(_DWORD)v62 )
    {
      v34 = 1;
      goto LABEL_31;
    }
    a1 = *((_QWORD *)ptr + (unsigned int)v62 - 1);
    LODWORD(v62) = v62 - 1;
  }
  while ( 1 )
  {
    v26 = *(_QWORD *)(**(_QWORD **)(v25 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v26 + 8) & 0xF) != 0 )
      v26 = sub_F411C0(**(_QWORD **)(v25 + 16));
    v27 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v27 + 16LL) != 48 )
      break;
    v28 = sub_F3D1D0(*v27, a2, v19, v6, a5);
    v29 = sub_B5AB30(v28);
    v30 = v29;
    if ( !v29 )
      break;
    v31 = v29 + 64;
    if ( (unsigned __int8)sub_B6A440(v29 + 64) )
    {
      v32 = v56;
      while ( (*(_BYTE *)(v32 + 8) & 0x7F) != 0 && (*(_BYTE *)(v32 + 8) & 0x7F) != 0x18 )
      {
        v60 = v32;
        v59 = sub_B6D830(v32);
        if ( v59 == sub_B6D830(v31) )
          goto LABEL_64;
        v54 = *(_QWORD *)(sub_B68470(v60) + 16);
        if ( (v54 & 4) != 0 )
          v32 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v32 = v54 & 0xFFFFFFFFFFFFFFF8LL;
      }
      break;
    }
LABEL_64:
    v52 = (unsigned int)v62;
    v53 = (unsigned int)v62 + 1LL;
    if ( v53 > HIDWORD(v62) )
    {
      sub_22134E0(&ptr, v63, v53, 8);
      v52 = (unsigned int)v62;
    }
    a2 = v30;
    *((_QWORD *)ptr + v52) = v30;
    LODWORD(v62) = v62 + 1;
    if ( !v7(a3, v30) )
      break;
    v25 += 24;
    if ( v25 == v20 )
      goto LABEL_68;
  }
  v33 = ptr;
  v34 = 0;
LABEL_31:
  if ( v33 != v63 )
    free(v33);
  return v34;
}

