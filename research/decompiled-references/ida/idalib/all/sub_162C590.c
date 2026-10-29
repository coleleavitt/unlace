__int64 __fastcall sub_162C590(__int64 a1, __int64 a2, _DWORD *a3, unsigned __int8 a4, double a5)
{
  unsigned int v5; // r15d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r10
  int v17; // eax
  char v18; // dl
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // [rsp+Ch] [rbp-ECh]
  __int64 v37; // [rsp+10h] [rbp-E8h]
  char v38; // [rsp+18h] [rbp-E0h]
  int v39; // [rsp+18h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v41; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-C0h]
  char v43; // [rsp+3Ch] [rbp-BCh]
  __int64 v44; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v45[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v46; // [rsp+A8h] [rbp-50h]
  unsigned int v47; // [rsp+B0h] [rbp-48h]
  char v48; // [rsp+B4h] [rbp-44h]

  v5 = 0;
  v10 = sub_168B6C0(a1);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 4616LL)
                                + 640LL * *(unsigned int *)(*(_QWORD *)a1 + 4624LL)
                                - 640)
                    - 4) <= 1 )
    return v5;
  v5 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2440LL);
  if ( (_BYTE)v5 )
    return 0;
  if ( ((*a3 >> 14) & 0xC) != 0 )
    return v5;
  sub_C3EB00((__int64)&v41, (unsigned __int64)a3, v10, nullptr, v11, v12);
  v14 = v42;
  v15 = (__int64)v41;
  v42 = 0;
  v36 = v14;
  v37 = (__int64)v41;
  v38 = v43;
  sub_98E4B0((__int64)&v41);
  if ( v38 )
  {
    v16 = v37;
    if ( v36 > 0x40 )
      v16 = *(_QWORD *)v37;
    v17 = (unsigned __int8)(*(_DWORD *)(a2 + 392) >> 13);
  }
  else
  {
    v17 = (unsigned __int8)(*(_DWORD *)(a2 + 392) >> 13);
    if ( v36 > 0x40 )
    {
      v16 = *(_QWORD *)v37;
    }
    else
    {
      if ( !v36 )
      {
        v21 = 1;
        LODWORD(v16) = 0;
        goto LABEL_22;
      }
      v16 = v37 << (64 - (unsigned __int8)v36) >> (64 - (unsigned __int8)v36);
    }
  }
  v18 = 0;
  if ( v16 > 7 )
    goto LABEL_11;
  v21 = 1 << v16;
LABEL_22:
  v18 = (v21 & v17) != 0;
LABEL_11:
  v39 = v16;
  if ( v18 != a4 )
  {
    v19 = sub_EEB7E0((unsigned __int64)a3, v15, a5);
    v20 = a1;
    sub_168B9F0(&v41, a1, v19, 3063, 0);
    if ( v46 )
    {
      v20 = v39;
      sub_AE9DF0(v45, v39, 2u);
    }
    else
    {
      if ( !v48 )
      {
LABEL_14:
        v40 = sub_EEC8C0((unsigned __int64)a3, v20, a5);
        v5 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v41, &v40) + 120);
        sub_15F7200(&v41);
        goto LABEL_15;
      }
      v26 = sub_168B9E0(&v41);
      v27 = v44;
      if ( v44 )
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
      v40 = v27;
      v28 = sub_1587BC0(v26, &v40, v22, v23, v24, v25);
      v20 = v39;
      sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v47 + 8), v39, 2u);
    }
    if ( v46 )
    {
      v20 = a4;
      sub_AE9DF0(v45, a4, 2u);
    }
    else if ( v48 )
    {
      v33 = sub_168B9E0(&v41);
      v34 = v44;
      if ( v44 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
      v40 = v34;
      v35 = sub_1587BC0(v33, &v40, v29, v30, v31, v32);
      v20 = a4;
      sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v47 + 8), a4, 2u);
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( v36 > 0x40 && v37 )
    operator delete[]((void *)v37);
  return v5;
}
