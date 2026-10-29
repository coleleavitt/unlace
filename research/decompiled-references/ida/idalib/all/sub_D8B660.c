__int64 __fastcall sub_D8B660(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r13d
  unsigned __int8 **v9; // rbx
  unsigned __int8 v10; // al
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // edx
  __int64 v20; // rax
  void *v21; // rax
  void *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ebp
  unsigned __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rax
  unsigned int v30; // ebp
  void *v31; // rbp
  unsigned __int8 **v32; // rax
  void *v33; // rsi
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // ebp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  void *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int8 **v58; // rax
  unsigned __int8 **v59; // rbx
  void *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // [rsp+8h] [rbp-140h]
  __int64 v65; // [rsp+8h] [rbp-140h]
  __int64 v66; // [rsp+8h] [rbp-140h]
  __int64 v68; // [rsp+18h] [rbp-130h]
  __int64 v69; // [rsp+28h] [rbp-120h]
  unsigned int v70; // [rsp+34h] [rbp-114h]
  void *v71; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v72; // [rsp+48h] [rbp-100h]
  void *v73; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-F0h]
  void *v75; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v76; // [rsp+68h] [rbp-E0h]
  void *v77; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v78; // [rsp+78h] [rbp-D0h]
  unsigned __int8 **v79[6]; // [rsp+80h] [rbp-C8h] BYREF
  void *v80; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+B8h] [rbp-90h]
  void *v82; // [rsp+E0h] [rbp-68h] BYREF
  unsigned int v83; // [rsp+E8h] [rbp-60h]
  char v84; // [rsp+ECh] [rbp-5Ch]

  v68 = sub_E21DE0(a1, "allocate", 8);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v8 = 0;
    v25 = sub_E32240(a1);
    sub_E33C10(a1, a3, ((*(char *)(v25 + 1) >> 31) & 9u) + 2445, 0);
    return v8;
  }
  v7 = v5;
  v8 = sub_F62670(*v6, 0);
  if ( (_BYTE)v8
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
  {
    v8 = 0;
    v9 = (unsigned __int8 **)sub_E33C10(a1, a3, 2450, 0);
    v10 = sub_F62670(*v6, 0);
    if ( v9 )
    {
      sub_AE9DF0(v9, v10 ^ 1u, 2u);
      sub_AE9DF0(v9, v7, 8u);
    }
    return v8;
  }
  sub_F632A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3
                                               + 8
                                               * (((*(_BYTE *)(a3 + 2) & 8) != 0)
                                                + (unsigned __int64)(unsigned int)(*(_DWORD *)(a3 + 16) - 1)
                                                + 1)
                                               + 32)
                                   + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL));
  v13 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
  v14 = a3 + v13 + 40;
  v15 = v14 + 8LL * *(unsigned int *)(a3 + 16) - 8;
  v16 = v14;
  v64 = v15;
  if ( v14 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)v16;
        if ( (*(_BYTE *)(*(_QWORD *)v16 + 1LL) & 6) == 0 )
          break;
        v16 += 8;
        sub_D8A680(*(_QWORD *)(a1 + 176), 13);
        if ( v64 == v16 )
          goto LABEL_10;
      }
      v16 += 8;
      v24 = sub_CE6180(*(_QWORD *)(a1 + 184), *(_QWORD *)(v17 + 8), v14, v15, v12);
      sub_D8A680(*(_QWORD *)(a1 + 176), v24);
    }
    while ( v64 != v16 );
LABEL_10:
    v13 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
  }
  v18 = *(_QWORD *)(a3 + v13 + 32);
  v19 = 13;
  if ( (*(_BYTE *)(v18 + 1) & 6) == 0 )
    v19 = sub_D8A760(*(_QWORD *)(a1 + 184), v18, 13, v15, v12);
  sub_D8B1A0((__int64)&v71, *(_QWORD *)(a1 + 176), v19);
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v21 = (void *)sub_AAE980(v20, v7);
  v74 = 1;
  v69 = (__int64)v21;
  v73 = nullptr;
  v76 = 1;
  v75 = nullptr;
  v78 = v72;
  if ( v72 > 0x40 )
    sub_2205470(&v77, v21, 0);
  else
    v77 = v21;
  sub_2208490(&v71, &v77, &v73, &v75);
  v70 = v76;
  if ( v76 <= 0x40 )
  {
    v22 = v75;
    goto LABEL_17;
  }
  if ( v70 - (unsigned int)sub_2206780(&v75) <= 0x40 )
  {
    v22 = *(void **)v75;
LABEL_17:
    if ( v22 )
      goto LABEL_18;
    v26 = v74;
    if ( v74 > 0x40 )
    {
      v28 = v26 - sub_2206780(&v73);
    }
    else
    {
      if ( !v73 )
      {
        v57 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_F56FC0(v57);
        goto LABEL_51;
      }
      _BitScanReverse64(&v27, (unsigned __int64)v73);
      v28 = 64 - (v27 ^ 0x3F);
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    if ( v28 > (unsigned int)sub_F56FC0(v29) )
    {
LABEL_53:
      v82 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v32 = (unsigned __int8 **)sub_E33BA0(a1, &v82, 2452, 0);
      v33 = v73;
      if ( v74 > 0x40 )
        v33 = *(void **)v73;
      if ( v32 )
        sub_AE9DF0(v32, (__int64)v33, 3u);
      goto LABEL_31;
    }
LABEL_51:
    v30 = v74;
    if ( v74 > 0x40 )
    {
      if ( v30 - (unsigned int)sub_2206780(&v73) > 0x40 )
        goto LABEL_53;
      v31 = *(void **)v73;
      if ( (unsigned __int64)(4294967247LL / v69) < *(_QWORD *)v73 )
        goto LABEL_53;
    }
    else
    {
      v31 = v73;
      if ( 4294967247LL / v69 < (unsigned __int64)v73 )
        goto LABEL_53;
    }
    v34 = sub_E32240(a1);
    if ( (unsigned __int64)v31 > *(unsigned int *)(v34 + 136) )
    {
      v66 = *(unsigned int *)(v34 + 136);
      v82 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v58 = (unsigned __int8 **)sub_E33BA0(a1, &v82, 2447, 0);
      v59 = v58;
      if ( v58 )
      {
        sub_AE9DF0(v58, (__int64)v31, 3u);
        sub_AE9DF0(v59, v66, 3u);
      }
    }
    else
    {
      LOBYTE(v35) = sub_9EC640((__int64)&v73, 1u);
      v36 = v35;
      v40 = sub_CE6180(*(_QWORD *)(a1 + 184), v7, v37, v38, v39);
      v8 = HIDWORD(v40);
      if ( BYTE4(v40) )
      {
        v60 = v73;
        if ( v74 > 0x40 )
          v60 = *(void **)v73;
        v61 = sub_DB0370(a1 + 48, v68, (unsigned int)v40, v60, *(unsigned int *)(*(_QWORD *)(a1 + 184) + 32LL), 2);
        v62 = *(_QWORD *)(a1 + 176);
        sub_E23170(&v80, v61);
        sub_CFE430((__int64)&v82, (__int64)&v80, 0);
        v63 = sub_E216C0(v62, 48);
        sub_E23260(v63);
        sub_E232A0(&v82);
        sub_E232A0(&v80);
      }
      else
      {
        v65 = a1 + 48;
        if ( (_BYTE)v36 )
        {
          v50 = *v6;
          v82 = (void *)(v68 | 2);
          v51 = sub_E2B9B0(*(_QWORD *)(a1 + 168), (unsigned int)&v82, v50, 0, 0, 0, 0, 0, 0);
          v52 = v73;
          if ( v74 > 0x40 )
            v52 = *(void **)v73;
          v53 = sub_DB0430(v65, v51, v52, *(unsigned int *)(*(_QWORD *)(a1 + 184) + 32LL), 2);
          v54 = *(_QWORD *)(a1 + 176);
          sub_E23170(&v80, v53);
          sub_CFE430((__int64)&v82, (__int64)&v80, 0);
          v55 = v54;
          v8 = v36;
          v56 = sub_E216C0(v55, 48);
          sub_E23260(v56);
          sub_E232A0(&v82);
          sub_E232A0(&v80);
        }
        else
        {
          v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          v42 = sub_A70F70(v41, v7, (__int64)&v73, nullptr, 0, 0);
          v43 = *(_QWORD *)(a1 + 168);
          v44 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
          v82 = (void *)(v68 | 2);
          v45 = sub_E2B9B0(v43, (unsigned int)&v82, v44, 16, 0, 0, 0, 0, 0);
          v46 = sub_DAF690(v65, v45, *(unsigned int *)(*(_QWORD *)(a1 + 184) + 32LL), 2);
          v47 = *(_QWORD *)(a1 + 176);
          sub_E23170(v79, v46);
          sub_CFE430((__int64)&v80, (__int64)v79, 0);
          sub_CFE7A0((__int64)&v82, &v80);
          v48 = v47;
          v8 = 1;
          v49 = sub_E216C0(v48, 48);
          sub_E23260(v49);
          sub_E232A0(&v82);
          sub_E232A0(&v80);
          sub_E232A0(v79);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_18:
  v79[0] = (unsigned __int8 **)sub_E33C10(a1, a3, 2463, 0);
  if ( v79[0] )
    sub_D8AE80(v79, (__int64)&v71);
  v81 = v78;
  if ( v78 > 0x40 )
  {
    sub_2205510(&v80);
    v23 = v81;
    v81 = 0;
    v84 = 1;
    v83 = v23;
    v82 = v80;
    if ( !v79[0] )
    {
LABEL_25:
      if ( v23 > 0x40 && v82 )
        operator delete[](v82);
      goto LABEL_28;
    }
LABEL_22:
    sub_D8AE80(v79, (__int64)&v82);
    if ( v79[0] )
      sub_AE9DF0(v79[0], v7, 8u);
    v23 = v83;
    goto LABEL_25;
  }
  v83 = v78;
  v81 = 0;
  v80 = v77;
  v82 = v77;
  v84 = 1;
  if ( v79[0] )
    goto LABEL_22;
LABEL_28:
  if ( v81 > 0x40 && v80 )
    operator delete[](v80);
LABEL_31:
  if ( v78 > 0x40 && v77 )
    operator delete[](v77);
  if ( v76 > 0x40 && v75 )
    operator delete[](v75);
  if ( v74 > 0x40 && v73 )
    operator delete[](v73);
  if ( v72 > 0x40 && v71 )
    operator delete[](v71);
  return v8;
}
