__int64 __fastcall sub_C8BFE0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 *v17; // rdx
  __int64 v18; // rax
  int v19; // edi
  unsigned int v20; // ecx
  __int64 v21; // rsi
  __int64 *v22; // rcx
  __int64 v23; // rsi
  __int64 *v24; // r9
  __int64 *i; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 *v28; // rcx
  unsigned int v29; // edx
  __int64 *v30; // r9
  __int64 v31; // rdx
  __int64 *v32; // r10
  __int64 *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int j; // ebx
  bool v42; // r14
  __int64 v43; // r15
  __int64 v44; // rsi
  _DWORD *v45; // rax
  int v46; // edi
  __int64 v47; // rax
  int v48; // eax
  _DWORD *v49; // rbx
  int v51; // eax
  void *v52; // rbx
  __int64 v54; // rax
  __int64 v55; // [rsp+10h] [rbp-B8h]
  __int64 v56; // [rsp+18h] [rbp-B0h]
  char v57; // [rsp+3Ch] [rbp-8Ch] BYREF
  _BYTE v58[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v59; // [rsp+48h] [rbp-80h]
  _BYTE v60[32]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v61[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v62[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(*a2 + 8LL);
  sub_16744A0(v60, v4);
  sub_16669D0(v58, v4);
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v62[1] = 0;
  v5 = (_DWORD *)sub_186B270(0xA0u);
  sub_1373200(v5, v4);
  ++v5[4];
  sub_13734A0(v5, *a2, v6, v7, v8, v9);
  sub_13775E0(v5, *a2);
  v13 = *a2;
  v14 = *(_QWORD *)(*a2 + 80LL);
  if ( !v14 )
    goto LABEL_27;
  v10 = *(unsigned int *)(v14 - 4);
  if ( !(_DWORD)v10 )
    goto LABEL_27;
  v15 = 0;
  v55 = 8 * v10;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v14 + v15);
    v17 = *(__int64 **)(v13 + 24);
    v18 = *(unsigned int *)(v13 + 32);
    v19 = *(_DWORD *)(v16 + 12);
    v20 = v18 - 1;
    v18 *= 24;
    v21 = 3LL * (v19 & v20);
    v22 = (__int64 *)((char *)v17 + v18);
    v23 = 8 * v21;
    v24 = &v17[(unsigned __int64)v23 / 8];
    if ( v23 != v18 )
    {
      for ( i = &v17[(unsigned __int64)v23 / 8]; v22 != i; i += 3 )
      {
        v26 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v26 + 12) == v19 && v16 == v26 )
            goto LABEL_21;
        }
        else if ( !v26 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v17 == v24 )
    {
LABEL_56:
      v26 = 0;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
            break;
          if ( !v26 )
            goto LABEL_11;
          v17 += 3;
          if ( v24 == v17 )
            goto LABEL_56;
        }
        if ( *(_DWORD *)(v26 + 12) == v19 && v16 == v26 )
          break;
        v17 += 3;
        if ( v24 == v17 )
          goto LABEL_56;
      }
      i = v17;
LABEL_21:
      v26 = i[2];
    }
LABEL_11:
    v27 = *(unsigned int *)(a1 + 40);
    v28 = *(__int64 **)(a1 + 32);
    v29 = v27 - 1;
    v27 *= 16;
    v30 = (__int64 *)((char *)v28 + v27);
    v31 = 16LL * (v19 & v29);
    v32 = &v28[(unsigned __int64)v31 / 8];
    if ( v31 != v27 )
      break;
LABEL_40:
    while ( v32 != v28 )
    {
      v54 = *v28;
      if ( (unsigned __int64)*v28 > 1 )
      {
        if ( *(_DWORD *)(v54 + 12) == v19 && v16 == v54 )
        {
          v33 = v28;
          goto LABEL_23;
        }
      }
      else if ( !v54 )
      {
        break;
      }
      v28 += 2;
    }
LABEL_18:
    sub_135F9B0(v5, v16, v26);
    v15 += 8;
    if ( v15 == v55 )
      goto LABEL_27;
LABEL_19:
    v13 = *a2;
    v14 = *(_QWORD *)(*a2 + 80LL);
  }
  v33 = &v28[(unsigned __int64)v31 / 8];
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned __int64)*v33 > 1 )
      break;
    if ( !v34 )
      goto LABEL_18;
LABEL_15:
    v33 += 2;
    if ( v30 == v33 )
      goto LABEL_40;
  }
  if ( *(_DWORD *)(v34 + 12) != v19 || v16 != v34 )
    goto LABEL_15;
LABEL_23:
  v56 = v33[1];
  if ( !(unsigned __int8)sub_1673B50((unsigned int)v60, v26, (unsigned int)v61, (unsigned int)&v57, v11, (_DWORD)v30) )
    goto LABEL_18;
  v38 = v59;
  if ( !v59 )
  {
    sub_16669E0(v58);
    v38 = v59;
  }
  v39 = sub_166A700(v38, (unsigned int)v61, 1, v35, v36, v37);
  sub_135F9B0(v5, v56, v39);
  v15 += 8;
  if ( v15 != v55 )
    goto LABEL_19;
LABEL_27:
  v40 = *(_QWORD *)(a1 + 64);
  for ( j = 0; v40; ++j )
  {
    if ( j >= *(_DWORD *)(v40 - 4) )
      break;
    v42 = 0;
    v43 = *(_QWORD *)(v40 + 8LL * j);
    v44 = *(_QWORD *)(a1 + 72) + 32LL * j;
    v45 = *(_DWORD **)(*(_QWORD *)(v43 + 40) + 24LL);
    if ( v45 && *v45 == 5 )
      v42 = v45[1] == 1;
    v46 = v59;
    if ( !v59 )
    {
      sub_16669E0(v58);
      v46 = v59;
    }
    v47 = sub_166A700(v46, v44, v42, v10, v11, v12);
    sub_135F9B0(v5, v43, v47);
    v40 = *(_QWORD *)(a1 + 64);
  }
  v48 = v5[4];
  v49 = (_DWORD *)*a2;
  v5[4] = v48 + 1;
  if ( !v49 )
  {
    *a2 = v5;
    v5[4] = v48;
    if ( v48 )
      goto LABEL_39;
LABEL_58:
    (**(void (__fastcall ***)(_DWORD *))v5)(v5);
    sub_186B220(v5);
    goto LABEL_39;
  }
  if ( v49[4]-- == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v49)(v49);
    sub_186B220(v49);
  }
  v51 = v5[4];
  *a2 = v5;
  v5[4] = --v51;
  if ( !v51 )
    goto LABEL_58;
LABEL_39:
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v61);
  return sub_182CBA0(v52, v62);
}

