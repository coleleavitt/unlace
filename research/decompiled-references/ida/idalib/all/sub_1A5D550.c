__int64 __fastcall sub_1A5D550(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  char v12; // al
  unsigned __int8 v13; // al
  void *v14; // rdi
  _QWORD *v15; // rbp
  _QWORD *i; // r12
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbp
  _QWORD *v34; // r12
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // [rsp-10h] [rbp-A8h]
  char v40; // [rsp+0h] [rbp-98h]
  unsigned __int8 v41; // [rsp+0h] [rbp-98h]
  __int64 v42; // [rsp+0h] [rbp-98h]
  __int64 v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+18h] [rbp-80h]
  char v46; // [rsp+26h] [rbp-72h]
  unsigned __int8 v47; // [rsp+27h] [rbp-71h]
  __int64 *v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  unsigned __int64 v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h]
  __int64 v52[8]; // [rsp+58h] [rbp-40h] BYREF

  if ( (*(_QWORD *)a2 & 7) != 0 )
  {
    v50 = 0;
    v45 = 0;
  }
  else
  {
    v50 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL;
    v45 = v50;
  }
  v10 = *(_QWORD *)(a1 + 480);
  v43 = *(_QWORD *)(a1 + 464);
  v49 = a1 + 488;
LABEL_4:
  v40 = 0;
  if ( *(_QWORD *)(a1 + 8) == v45 )
    goto LABEL_33;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 576);
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 14LL);
    *(_WORD *)(a1 + 651) = 0;
    *(_DWORD *)(a1 + 488) = 0;
    v46 = v12;
    v13 = *(_BYTE *)(a1 + 1080);
    *(_DWORD *)(a1 + 504) = 0;
    v47 = v13;
    v48 = *(__int64 **)(a1 + 456);
    v44 = *(_QWORD *)(a1 + 448);
    if ( v11 )
    {
      v14 = *(void **)(v11 + 232);
      if ( v14 != (void *)(v11 + 248) )
        free(v14);
      if ( !*(_BYTE *)(v11 + 188) )
        free(*(void **)(v11 + 168));
      if ( (*(_BYTE *)(v11 + 32) & 1) == 0 )
        operator delete(*(_QWORD *)(v11 + 40), 16LL * *(unsigned int *)(v11 + 48), 8);
      v15 = (_QWORD *)(v11 + 8);
      if ( v11 + 8 != *(_QWORD *)(v11 + 8) )
      {
        v51 = v11;
        for ( i = *(_QWORD **)(v11 + 8); ; i = v18 )
        {
          v17 = (_QWORD *)i[2];
          v18 = (_QWORD *)*i;
          if ( v17 == i + 4 )
          {
            operator delete(i);
            if ( v15 == v18 )
            {
LABEL_18:
              v11 = v51;
              break;
            }
          }
          else
          {
            free(v17);
            operator delete(i);
            if ( v15 == v18 )
              goto LABEL_18;
          }
        }
      }
      operator delete((void *)v11, 0x170u);
    }
    *(_BYTE *)(a1 + 654) = 0;
    *(_OWORD *)(a1 + 576) = 0;
    *(_QWORD *)(a1 + 608) = v50;
    *(_BYTE *)(a1 + 653) = v40;
    if ( !v10 )
    {
      sub_1A5D3E0(v44, v49, v48, v43, 0, 0, 0.0, a4, v47);
      v26 = sub_15F1670(v44);
      v24 = v39;
      v27 = v26;
      if ( v26 && (*(_BYTE *)(v26 + 58) & 2) != 0 && sub_BA85D0(v26) )
      {
        if ( !*(_DWORD *)(a1 + 504) )
          goto LABEL_45;
        a6 = *(unsigned int *)(a1 + 488);
        if ( (_DWORD)a6 != 2 )
          goto LABEL_29;
        v28 = sub_16C47B0(**(_QWORD **)(a1 + 496) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !sub_B8C200(v28, 0) )
        {
LABEL_45:
          v29 = sub_BA85D0(v27);
          v19 = sub_BAE3D0(v29, v45, v52, v30, v31, v32);
          if ( v19 )
          {
LABEL_46:
            v52[0] = v19 | (*(_BYTE *)(v19 + 29) >> 5) & 3;
            sub_1743080(a1 + 496, v52[0]);
            *(_DWORD *)(a1 + 488) = 2;
            sub_1A43500(v49);
          }
        }
      }
      a6 = *(unsigned int *)(a1 + 488);
      goto LABEL_29;
    }
    if ( (*(_BYTE *)(v10 + 8) & 0x7F) == 0x14 && v10 != 48 )
    {
      if ( v46 )
      {
        v19 = sub_BAE3D0(v10 - 48, v45, v52, a6, a7, a8);
        if ( v19 )
          goto LABEL_46;
      }
      v20 = sub_BAD2F0(v10 - 48, v45, 1, a6, a7, a8);
      if ( v20 )
      {
        v21 = *(unsigned int *)(a1 + 504);
        v22 = *(unsigned int *)(a1 + 508);
        v23 = (*(_BYTE *)(v20 + 29) >> 5) & 3 | (unsigned __int64)v20;
        v52[0] = v23;
        if ( v21 + 1 > v22 )
        {
          v42 = v23;
          sub_2237220(a1 + 496, a1 + 512, v21 + 1, 8);
          v21 = *(unsigned int *)(a1 + 504);
          v23 = v42;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8 * v21) = v23;
        ++*(_DWORD *)(a1 + 504);
        *(_DWORD *)(a1 + 488) = 2;
        sub_1A43500(v49);
        a6 = *(unsigned int *)(a1 + 488);
LABEL_29:
        if ( (unsigned int)a6 > 4 )
          return 0;
        goto LABEL_30;
      }
    }
    sub_1A5C990(v44, v49, v10, a6, 0.0, a4, a7, a8);
    a6 = *(unsigned int *)(a1 + 488);
    if ( (unsigned int)a6 > 4 )
      return 0;
LABEL_30:
    if ( ((1LL << a6) & 0x13) == 0 )
      break;
    if ( !v43 )
    {
      if ( !v10 )
        goto LABEL_50;
      v10 = 0;
      v43 = *(_QWORD *)(a1 + 464);
      goto LABEL_4;
    }
    *(_BYTE *)(a2 + 60) = 1;
    v43 = 0;
    v40 = 0;
    if ( *(_QWORD *)(a1 + 8) == v45 )
LABEL_33:
      v40 = *(_BYTE *)(a2 + 60) ^ 1;
  }
  if ( ((1LL << a6) & 0xC) == 0 )
    return 0;
  v33 = *(_QWORD **)(a1 + 496);
  v34 = &v33[*(unsigned int *)(a1 + 504)];
  if ( v34 != v33 )
  {
    while ( 1 )
    {
      v37 = *v33 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v37 )
        break;
LABEL_57:
      if ( v34 == ++v33 )
        goto LABEL_49;
    }
    v38 = *(unsigned int *)(a2 + 24);
    if ( (_DWORD)v38 )
    {
      if ( **(_QWORD **)(a2 + 16) )
      {
        v36 = v38 + 1;
      }
      else
      {
        *(_DWORD *)(a2 + 24) = 0;
        v38 = 0;
        v36 = 1;
      }
      a6 = *(unsigned int *)(a2 + 28);
      if ( a6 >= v36 )
        goto LABEL_55;
    }
    else
    {
      a6 = *(unsigned int *)(a2 + 28);
      v36 = 1;
      v38 = 0;
      if ( *(_DWORD *)(a2 + 28) )
        goto LABEL_55;
    }
    sub_2237220(a2 + 16, a2 + 32, v36, 8);
    v38 = *(unsigned int *)(a2 + 24);
LABEL_55:
    v24 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v24 + 8 * v38) = v37;
    ++*(_DWORD *)(a2 + 24);
    if ( !*(_QWORD *)a2 )
      *(_QWORD *)a2 = *(_QWORD *)(v37 + 40);
    goto LABEL_57;
  }
LABEL_49:
  sub_1A462F0(*(_QWORD *)(a1 + 448), a2, v24, a6, a7, a8);
  v35 = sub_1A38930(*(_QWORD **)(a1 + 472), a2);
  if ( v35 )
  {
    v41 = v35;
    sub_1A39530(a2, *(unsigned int **)(a1 + 464), a1 + 608);
    return v41;
  }
  else
  {
LABEL_50:
    if ( *(_BYTE *)(a1 + 1081) )
      sub_1A3BC70(a1 + 888, a2);
    return 0;
  }
}
