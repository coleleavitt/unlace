void __fastcall sub_18D51B0(_QWORD *a1, unsigned int a2, __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r15
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r10
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-100h]
  unsigned __int64 v37; // [rsp+0h] [rbp-100h]
  __int64 v38; // [rsp+0h] [rbp-100h]
  __int64 v39; // [rsp+8h] [rbp-F8h]
  int v40; // [rsp+8h] [rbp-F8h]
  int v41; // [rsp+8h] [rbp-F8h]
  __int64 v42; // [rsp+8h] [rbp-F8h]
  __int64 v43; // [rsp+10h] [rbp-F0h]
  __int64 v44; // [rsp+10h] [rbp-F0h]
  unsigned int v45; // [rsp+1Ch] [rbp-E4h] BYREF
  unsigned int v46; // [rsp+20h] [rbp-E0h] BYREF
  int v47; // [rsp+24h] [rbp-DCh] BYREF
  void *v48; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v49; // [rsp+30h] [rbp-D0h]
  void *v50; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-C0h]

  if ( !a3 )
    return;
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
    return;
  v8 = sub_B74600(a3);
  v9 = sub_A72040((_QWORD *)a1[31], v8);
  v10 = v9;
  if ( !v9 || ((*(_WORD *)(v9 + 18) >> 6) & 7) != 1 )
    return;
  if ( (unsigned int)sub_BFE6E0(a4, a1[31], 0, a5) )
  {
    sub_168B9F0((__int64)&v50, a1 + 1, a2, 0x1BFBu, 0);
    v48 = (void *)sub_EEC8C0(a4, (__int64)(a1 + 1), a5);
    sub_1587DB0((__int64)&v50, (__int64 *)&v48);
    goto LABEL_21;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 2 > 1 )
    return;
  v11 = (_QWORD *)a1[31];
  v12 = sub_BFD550(a4);
  v13 = sub_A72040(v11, *(_QWORD *)(v12 + 8));
  if ( !v13 || (unsigned int)*(unsigned __int8 *)(v13 + 16) - 2 > 1 )
    return;
  v36 = v13;
  v39 = a1[31];
  v18 = sub_18BBB30(*(_QWORD *)(v10 + 32), *(_QWORD *)(v13 + 32));
  if ( v18 )
  {
    sub_A5DAD0((__int64)&v48, v36);
    sub_A5DAD0((__int64)&v50, v10);
    v30 = sub_2205DB0(&v48, &v50);
    v31 = v36;
    if ( v51 > 0x40 && v50 )
    {
      v40 = v30;
      operator delete[](v50);
      v31 = v36;
      v30 = v40;
    }
    if ( v49 > 0x40 && v48 )
    {
      v44 = v31;
      v41 = v30;
      operator delete[](v48);
      v31 = v44;
      v30 = v41;
    }
    if ( v30 < 0 )
    {
      v42 = v31;
      sub_168B9F0((__int64)&v50, a1 + 1, a2, 0x1CD4u, 0);
      v48 = (void *)sub_EEC8C0(a4, (__int64)(a1 + 1), a5);
      v32 = sub_1587DB0((__int64)&v50, (__int64 *)&v48);
      v33 = *(_QWORD **)(v42 + 40);
      if ( (*(_BYTE *)(v42 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v33 + 2) <= 0x40u )
          v33 = (_QWORD *)*v33;
        else
          v33 = *(_QWORD **)*v33;
      }
      v45 = (unsigned int)v33;
      v34 = sub_16CF160(v32, &v45);
      v35 = *(_QWORD **)(v10 + 40);
      if ( (*(_BYTE *)(v10 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v35 + 2) <= 0x40u )
          v35 = (_QWORD *)*v35;
        else
          v35 = *(_QWORD **)*v35;
      }
      v46 = (unsigned int)v35;
      v29 = sub_16CF160(v34, &v46);
      v47 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !sub_F62670(v19, nullptr, v14, v15, v16, v17) )
    {
      v18 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)v37 + 17LL) & 4) == 0 )
      {
        v18 = 1;
        v43 = sub_AAE980(v39, v37);
      }
    }
    v24 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = a1[31];
    if ( !sub_F62670(*v24, nullptr, v20, v21, v22, v23) && (*(_BYTE *)(*v24 + 17) & 4) == 0 )
    {
      v25 = sub_AAE980(v38, (__int64)v24);
      v26 = v25;
      if ( v18 && v43 < v25 )
      {
        sub_168B9F0((__int64)&v50, a1 + 1, a2, 0x1CD4u, 0);
        v48 = (void *)sub_EEC8C0(a4, (__int64)(a1 + 1), a5);
        v27 = sub_1587DB0((__int64)&v50, (__int64 *)&v48);
        v45 = v43;
        v28 = sub_16CF160(v27, &v45);
        v46 = v26;
        v29 = sub_16CF160(v28, &v46);
        v47 = 1;
LABEL_20:
        sub_1587D10(v29, &v47);
LABEL_21:
        sub_15F7200(&v50);
        sub_18CF280((__int64)a1, a3);
      }
    }
  }
}
