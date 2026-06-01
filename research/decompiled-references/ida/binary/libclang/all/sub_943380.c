__int64 __fastcall sub_943380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned __int64 v20; // rdx
  unsigned int v21; // r15d
  unsigned __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r13
  void *v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  void *v33; // r13
  __int64 v34; // rbp
  unsigned __int64 v35; // rbp
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // r13
  int v41; // [rsp+0h] [rbp-108h]
  unsigned __int64 v42; // [rsp+8h] [rbp-100h]
  unsigned __int64 v43; // [rsp+8h] [rbp-100h]
  unsigned __int64 v44; // [rsp+10h] [rbp-F8h]
  __int64 v45; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v46; // [rsp+20h] [rbp-E8h]
  __int64 v47; // [rsp+28h] [rbp-E0h] BYREF
  char v48; // [rsp+3Fh] [rbp-C9h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51[8]; // [rsp+50h] [rbp-B8h] BYREF
  void *v52; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v53; // [rsp+98h] [rbp-70h]

  v9 = *(_DWORD *)(a3 + 8);
  v47 = a2;
  if ( v9 > 0x40 )
  {
    LOBYTE(v9) = (unsigned int)sub_2587400(a3) == v9;
    if ( !(_BYTE)v9 )
      goto LABEL_3;
LABEL_20:
    v17 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v17, a4);
    return 1;
  }
  LOBYTE(v9) = *(_QWORD *)a3 == 0;
  if ( !*(_QWORD *)a3 )
    goto LABEL_20;
LABEL_3:
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, v47, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v47, a4) )
  {
    return v9;
  }
  v10 = *(_DWORD *)(a4 + 48);
  if ( v10 == 1 )
  {
    v28 = sub_8E55C0((__int64 *)a4);
    v29 = sub_930AB0(a3);
    v30 = (_QWORD)v29 * sub_8E9110(a4) + v28;
    v31 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v32 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v31 = 0;
    *(_DWORD *)(v31 + 48) = 1;
    *(_QWORD *)(v31 + 32) = v30;
    *(_QWORD *)(v31 + 24) = v32;
    *(_OWORD *)(v31 + 8) = 0;
    return 1;
  }
  if ( v10 == 2 )
  {
    v33 = sub_930AB0(a3);
    if ( *(_DWORD *)(a4 + 48) == 1 )
    {
      v34 = *(_QWORD *)(a4 + 32) + *(_QWORD *)a4;
    }
    else
    {
      v34 = 0xFFFFFFFFLL;
      if ( !(unsigned __int8)sub_8E9400(a4) )
        v34 = *(_QWORD *)a4;
    }
    v35 = (unsigned __int64)v33 + v34;
    v51[0] = v35;
    if ( v35 > 1 )
    {
      v52 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), v47);
      v39 = (unsigned __int8 **)sub_A2E1B0(a1, &v52, 2179, 0);
      v40 = v39;
      if ( v39 )
      {
        sub_8D6E40(v39, v35);
        sub_8D6BF0(v40, 1);
        sub_8D6BF0(v40, 0);
      }
    }
    v36 = *(_QWORD *)(a1 + 184);
    v52 = *(void **)(a4 + 24);
    sub_92DE40(v36, (__int64 *)&v52, v51);
    return 1;
  }
  v11 = (unsigned int)sub_8E9270(a4);
  v49 = v11;
  if ( !(unsigned __int8)sub_8E9400(a4) )
    v11 = sub_8E92E0(a4);
  v50 = v11;
  v51[1] = (__int64)&v50;
  v51[3] = (__int64)&v47;
  v51[5] = (__int64)&v49;
  v48 = 0;
  v51[0] = a3;
  v51[2] = a1;
  v51[4] = a4;
  v51[6] = (__int64)&v48;
  if ( v10 )
  {
LABEL_11:
    if ( *(_DWORD *)(a3 + 8) <= 0x40u )
    {
      sub_2587BE0(&v52, a3, 64);
      v12 = v53;
      v13 = v52;
      if ( v53 > 0x40 )
      {
        v11 += *(_QWORD *)v52;
        if ( !v52 )
        {
LABEL_15:
          v14 = *(_QWORD *)(a1 + 184);
          if ( v11 || !(unsigned __int8)sub_8E9400(a4) )
          {
            sub_8E61F0((__int64)&v52, a4, v11);
            v15 = sub_A1A4E0(v14, 56);
            sub_A1C070(v15, &v52);
            v9 = 1;
            sub_A1C0C0(&v52);
            return v9;
          }
          v38 = sub_A1A4E0(v14, 56);
          sub_A1BFA0(v38, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
          return 1;
        }
LABEL_14:
        operator delete[](v13);
        goto LABEL_15;
      }
    }
    else
    {
      sub_25877E0(&v52, a3, 64);
      v12 = v53;
      v13 = v52;
      if ( v53 > 0x40 )
      {
        v11 += *(_QWORD *)v52;
        goto LABEL_14;
      }
    }
    if ( v12 )
      v11 += (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
    goto LABEL_15;
  }
  v18 = (__int64)sub_930AB0(a3);
  v19 = *(_DWORD *)(a3 + 8);
  v20 = v18;
  v21 = v19 - 1;
  v22 = v49 - v50;
  v23 = 1LL << ((unsigned __int8)v19 - 1);
  v24 = *(_QWORD *)a3;
  if ( v19 > 0x40 )
  {
    v41 = *(_DWORD *)(a3 + 8);
    v46 = v50;
    v45 = *(_QWORD *)a3;
    v25 = *(_QWORD *)(v24 + 8LL * (v21 >> 6)) & v23;
    if ( !v25 )
      goto LABEL_32;
    v44 = v20;
    v42 = v49 - v50;
    v26 = sub_2587400(a3);
    v22 = v42;
    v20 = v44;
    if ( v41 != v26 )
    {
      v27 = v45;
      if ( v46 >= -(__int64)v44 )
        goto LABEL_41;
    }
    goto LABEL_49;
  }
  if ( (v23 & v24) != 0 && v50 < -v18 )
  {
LABEL_49:
    v43 = v20;
    sub_943110(v51);
    v37 = *(_DWORD *)(a3 + 8);
    v20 = v43;
    v21 = v37 - 1;
    v23 = 1LL << ((unsigned __int8)v37 - 1);
    if ( v37 > 0x40 )
    {
      v27 = *(_QWORD *)a3;
LABEL_41:
      v25 = v23 & *(_QWORD *)(v27 + 8LL * (v21 >> 6));
      goto LABEL_32;
    }
  }
  v25 = v23 & *(_QWORD *)a3;
LABEL_32:
  if ( v22 < v20 && !v25 )
    sub_943110(v51);
  if ( !v48 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v11 = v50;
    goto LABEL_11;
  }
  return v9;
}

