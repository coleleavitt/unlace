__int64 __fastcall sub_7B1C80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(_QWORD); // rax
  int v10; // eax
  unsigned int i; // ebp
  __int64 v12; // rbp
  __int64 (*v13)(void); // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(); // rax
  __int64 v17; // rax
  char v18; // al
  __int64 v20; // r12
  __int64 (__fastcall *v21)(_QWORD); // r10
  unsigned int *v22; // r11
  unsigned int v23; // r14d
  __int64 (__fastcall *v24)(_QWORD); // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 (__fastcall *v27)(); // rax
  __int64 v28; // r12
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned int j; // eax
  __int64 (__fastcall *v34)(_QWORD); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 (__fastcall *v38)(); // rax
  __int64 v39; // r12
  int v40; // eax
  __int64 (__fastcall *v41)(_QWORD *); // rax
  unsigned int *v43; // rbp
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 (__fastcall *v46)(_QWORD *); // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 (__fastcall *v50)(); // rax
  __int64 v51; // rax
  unsigned int v52; // [rsp+0h] [rbp-78h]
  unsigned int v53; // [rsp+0h] [rbp-78h]
  __int64 (__fastcall *v54)(_QWORD); // [rsp+0h] [rbp-78h]
  unsigned int v55; // [rsp+0h] [rbp-78h]
  unsigned int v56; // [rsp+8h] [rbp-70h]
  unsigned int v57; // [rsp+8h] [rbp-70h]
  unsigned int *v58; // [rsp+10h] [rbp-68h]
  unsigned int v59; // [rsp+1Ch] [rbp-5Ch]
  __int64 (__fastcall *v60)(_QWORD); // [rsp+20h] [rbp-58h]
  __int64 v61; // [rsp+28h] [rbp-50h]
  int v62[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v4 = a3;
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 60);
  v8 = *(unsigned int *)(a2 + 16);
  if ( v6 == v7 )
  {
    v12 = *a1;
    if ( (_DWORD)v8 != -2 )
    {
      v13 = *(__int64 (**)(void))(v12 + 536);
      v53 = a3;
      if ( (char *)v13 == (char *)sub_7C55E0 )
      {
        v14 = sub_7C55E0(a1);
      }
      else
      {
        v14 = v13();
        v12 = *a1;
      }
      v4 = v53;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _QWORD))(v12 + 520))(
          a1,
          a2,
          *(_DWORD *)(a2 + 16) ^ 1u,
          v15,
          v53);
        goto LABEL_17;
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v12 + 512))(a1, a2, v4);
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)v8 != -2 )
  {
    v56 = a3;
    v52 = v6;
    v9 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v9 == sub_7C55E0 )
    {
      v10 = sub_7C55E0(a1);
      v6 = v52;
      v4 = v56;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, _QWORD))v9)(a1, v8, a3, a4, (unsigned int)a3);
      v4 = v56;
      v6 = v52;
    }
    if ( v10 == -1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1930);
    }
  }
  for ( i = 0; *(_DWORD *)(a2 + 4LL * i + 64) != v4; ++i )
  {
    if ( v7 < i + 1 )
    {
      if ( i == v7 )
        return 0;
      goto LABEL_11;
    }
  }
  v20 = v7 + 1;
  if ( (_DWORD)v20 == i )
    return 0;
  if ( v7 < i )
  {
LABEL_11:
    sub_1872CE0("");
    sub_1873130(114, 1941);
  }
  v61 = a2 + 4LL * i;
  if ( *(_DWORD *)(v61 + 64) != v4 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1942);
  }
  v21 = sub_7C55E0;
  v22 = (unsigned int *)(a2 + 4LL * (unsigned int)v20 + 64);
  if ( (unsigned int)v20 >= v6 )
  {
LABEL_49:
    if ( v7 == i )
      goto LABEL_55;
    v55 = v4;
    v34 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v34 == sub_7C55E0 )
      v35 = sub_7C55E0(a1);
    else
      v35 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v34)(a1, *(unsigned int *)(a2 + 4LL * v7 + 64));
    LODWORD(v37) = v55;
    if ( v35 != -1 )
    {
      v38 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 80LL);
      if ( v38 == sub_7C5540 )
      {
        v39 = v7 + 16LL;
        v40 = *(_DWORD *)(v61 + 64);
        *(_DWORD *)(v61 + 64) = *(_DWORD *)(a2 + 4 * v39);
        *(_DWORD *)(a2 + 4 * v39) = v40;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD))v38)(a2, i, v7, v36, v55);
      }
LABEL_55:
      if ( *(_DWORD *)(a2 + 16) != -2 )
      {
        v41 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 536LL);
        if ( !((char *)v41 == (char *)sub_7C55E0 ? sub_7C55E0(a1) : (unsigned int)v41(a1)) )
          return 1;
      }
      if ( v7 )
      {
        v43 = (unsigned int *)(a2 + 64);
        do
        {
          v44 = *v43++;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 520LL))(a1, a2, v44);
        }
        while ( (unsigned int *)(a2 + 64 + 4LL * v7) != v43 );
      }
      if ( *(_BYTE *)(a2 + 48) )
      {
        v45 = *(_DWORD *)(a2 + 24);
        if ( v45 > 2 )
        {
          if ( (unsigned __int8)sub_11BE8B0(a1[3], *(unsigned int *)(a2 + 32), a2 + 64, v45 - 1, v62) )
            *(_DWORD *)(a2 + 24) = v62[0];
        }
      }
LABEL_17:
      v16 = *(__int64 (__fastcall **)())(*a1 + 568LL);
      if ( v16 == sub_7C5740 )
      {
        v17 = a1[20];
        if ( v17 )
          v18 = *(_BYTE *)(v17 + 832);
        else
          v18 = *(_BYTE *)(a1[3] + 3184LL);
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(_QWORD *))v16)(a1);
      }
      if ( v18 )
        return 0xFFFFFFFFLL;
      return 1;
    }
    if ( *(_DWORD *)(a2 + 16) != -2 )
    {
      v46 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 536LL);
      v47 = (char *)v46 == (char *)sub_7C55E0 ? sub_7C55E0(a1) : v46(a1);
      v37 = v55;
      if ( !v47 )
      {
        if ( i + 1 < v7 )
        {
          v49 = v7 - 1;
          v50 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 80LL);
          if ( v50 == sub_7C5540 )
          {
            v51 = (unsigned int)v49 + 16LL;
            v48 = *(unsigned int *)(v61 + 64);
            *(_DWORD *)(v61 + 64) = *(_DWORD *)(a2 + 4 * v51);
            *(_DWORD *)(a2 + 4 * v51) = v48;
          }
          else
          {
            ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(), _QWORD))v50)(
              a2,
              i,
              v49,
              sub_7C5540,
              v55);
          }
        }
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64))(*a1 + 520LL))(
          a1,
          a2,
          *(_DWORD *)(a2 + 16) ^ 1u,
          v48,
          v37);
        goto LABEL_17;
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 512LL))(a1, a2, (unsigned int)v37);
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v23 = *v22;
    v24 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v24 == v21 )
      break;
    v60 = v21;
    v59 = v4;
    v58 = v22;
    v57 = v6;
    v54 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    v30 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v24)(a1, v23);
    v21 = v60;
    v4 = v59;
    v22 = v58;
    v6 = v57;
    v24 = v54;
LABEL_36:
    if ( v30 != -1 )
      goto LABEL_31;
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v6 )
      goto LABEL_49;
    ++v22;
    if ( v24 == v21 )
      goto LABEL_39;
  }
  v25 = a1[20];
  if ( !v25 )
  {
    v30 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v23);
    goto LABEL_36;
  }
  v26 = *(_DWORD *)(*(_QWORD *)(v25 + 880) + 4LL * (v23 >> 1));
  if ( v26 < *(_DWORD *)(v25 + 888) || (((unsigned __int8)v23 ^ (unsigned __int8)v26) & 1) == 0 )
    goto LABEL_31;
  v20 = (unsigned int)(v20 + 1);
  if ( (unsigned int)v20 >= v6 )
    goto LABEL_49;
LABEL_39:
  v31 = a1[20];
  v23 = *(_DWORD *)(a2 + 4LL * (unsigned int)v20 + 64);
  if ( v31 )
  {
    v32 = *(_QWORD *)(v31 + 880);
    for ( j = *(_DWORD *)(v32 + 4LL * (v23 >> 1)); j >= *(_DWORD *)(v31 + 888); j = *(_DWORD *)(v32 + 4LL * (v23 >> 1)) )
    {
      if ( (((unsigned __int8)v23 ^ (unsigned __int8)j) & 1) == 0 )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v6 )
        goto LABEL_49;
      v23 = *(_DWORD *)(a2 + 4LL * (unsigned int)v20 + 64);
    }
  }
  else
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v23) == -1 )
    {
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v6 )
        goto LABEL_49;
      v23 = *(_DWORD *)(a2 + 4LL * (unsigned int)v20 + 64);
    }
  }
LABEL_31:
  v27 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 80LL);
  if ( v27 == sub_7C5540 )
  {
    v28 = v20 + 16;
    v29 = *(_DWORD *)(v61 + 64);
    *(_DWORD *)(v61 + 64) = *(_DWORD *)(a2 + 4 * v28);
    *(_DWORD *)(a2 + 4 * v28) = v29;
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))v27)(a2, i, (unsigned int)v20);
  }
  sub_7E4540(a2, a1 + 10, v23);
  return 0;
}

