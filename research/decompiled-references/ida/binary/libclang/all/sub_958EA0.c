__int64 __fastcall sub_958EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // r14d
  int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rax
  void *v18; // rax
  unsigned int v19; // r14d
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r13
  void *v28; // rbp
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  void *v32; // r13
  __int64 v33; // rbp
  unsigned __int64 v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned __int8 **v37; // rax
  unsigned __int8 **v38; // r13
  unsigned __int64 v39; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-E8h]
  __int64 v41; // [rsp+8h] [rbp-E0h] BYREF
  char v42; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v43; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v45[8]; // [rsp+30h] [rbp-B8h] BYREF
  void *v46; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-70h]

  v9 = *(_DWORD *)(a3 + 8);
  v41 = a2;
  if ( v9 <= 0x40 )
  {
    if ( *(_QWORD *)a3 )
      goto LABEL_3;
LABEL_21:
    v17 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v17, a4);
    return 1;
  }
  if ( (unsigned int)sub_2587400(a3) == v9 )
    goto LABEL_21;
LABEL_3:
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, v41, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v41, a4) )
  {
    return 0;
  }
  v10 = *(_DWORD *)(a4 + 48);
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      v32 = sub_930AB0(a3);
      if ( *(_DWORD *)(a4 + 48) == 1 )
      {
        v33 = *(_QWORD *)(a4 + 32) + *(_QWORD *)a4;
      }
      else
      {
        v33 = 0xFFFFFFFFLL;
        if ( !(unsigned __int8)sub_8E9400(a4) )
          v33 = *(_QWORD *)a4;
      }
      v34 = v33 - (_QWORD)v32;
      v45[0] = v34;
      if ( v34 > 1 )
      {
        v46 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), v41);
        v37 = (unsigned __int8 **)sub_A2E1B0(a1, &v46, 2179, 0);
        v38 = v37;
        if ( v37 )
        {
          sub_8D6E40(v37, v34);
          sub_8D6BF0(v38, 1);
          sub_8D6BF0(v38, 0);
        }
      }
      v35 = *(_QWORD *)(a1 + 184);
      v46 = *(void **)(a4 + 24);
      sub_92DE40(v35, (__int64 *)&v46, v45);
      return 1;
    }
    v11 = (unsigned int)sub_8E9270(a4);
    v43 = v11;
    if ( !(unsigned __int8)sub_8E9400(a4) )
      v11 = sub_8E92E0(a4);
    v44 = v11;
    v45[1] = (__int64)&v44;
    v45[3] = (__int64)&v41;
    v45[5] = (__int64)&v43;
    v42 = 0;
    v45[0] = a3;
    v45[2] = a1;
    v45[4] = a4;
    v45[6] = (__int64)&v42;
    if ( v10 )
    {
LABEL_11:
      if ( *(_DWORD *)(a3 + 8) > 0x40u )
        goto LABEL_12;
LABEL_29:
      sub_2587BE0(&v46, a3, 64);
      v12 = v47;
      v13 = v46;
      if ( v47 > 0x40 )
      {
        v11 -= *(_QWORD *)v46;
        if ( !v46 )
          goto LABEL_15;
        goto LABEL_14;
      }
LABEL_32:
      if ( v12 )
        v11 -= (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
      goto LABEL_15;
    }
    v18 = sub_930AB0(a3);
    v19 = *(_DWORD *)(a3 + 8);
    v20 = v44;
    v21 = (unsigned __int64)v18;
    v22 = v43;
    v23 = *(_QWORD *)a3;
    v24 = 1LL << ((unsigned __int8)v19 - 1);
    if ( v19 > 0x40 )
    {
      v25 = 8LL * ((v19 - 1) >> 6);
      if ( (*(_QWORD *)(v23 + v25) & v24) != 0 || v44 >= v21 )
        goto LABEL_42;
    }
    else if ( (v24 & v23) != 0 || v44 >= v21 )
    {
LABEL_26:
      if ( (*(_QWORD *)a3 & v24) == 0 )
      {
        if ( !v42 )
        {
          v11 = v44;
          goto LABEL_29;
        }
LABEL_36:
        if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
          goto LABEL_37;
        return 0;
      }
      goto LABEL_34;
    }
    v39 = v43;
    sub_958C30(v45);
    v19 = *(_DWORD *)(a3 + 8);
    v22 = v39;
    v24 = 1LL << ((unsigned __int8)v19 - 1);
    if ( v19 <= 0x40 )
      goto LABEL_26;
    v23 = *(_QWORD *)a3;
    v25 = 8LL * ((v19 - 1) >> 6);
LABEL_42:
    v40 = v22;
    if ( (*(_QWORD *)(v23 + v25) & v24) == 0 )
    {
      if ( !v42 )
      {
        v11 = v44;
LABEL_12:
        sub_25877E0(&v46, a3, 64);
        v12 = v47;
        v13 = v46;
        if ( v47 > 0x40 )
        {
          v11 -= *(_QWORD *)v46;
LABEL_14:
          operator delete[](v13);
LABEL_15:
          v14 = *(_QWORD *)(a1 + 184);
          if ( !v11 && (unsigned __int8)sub_8E9400(a4) )
          {
            v36 = sub_A1A4E0(v14, 56);
            sub_A1BFA0(v36, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
          }
          else
          {
            sub_8E61F0((__int64)&v46, a4, v11);
            v15 = sub_A1A4E0(v14, 56);
            sub_A1C070(v15, &v46);
            sub_A1C0C0(&v46);
          }
          return 1;
        }
        goto LABEL_32;
      }
      goto LABEL_36;
    }
    v26 = sub_2587400(a3);
    v22 = v40;
    if ( v26 == v19 )
    {
LABEL_44:
      sub_958C30(v45);
LABEL_35:
      if ( !v42 )
      {
LABEL_37:
        v11 = v44;
        goto LABEL_11;
      }
      goto LABEL_36;
    }
LABEL_34:
    if ( v22 - v20 >= -(__int64)v21 )
      goto LABEL_35;
    goto LABEL_44;
  }
  v27 = sub_8E55C0((__int64 *)a4);
  v28 = sub_930AB0(a3);
  v29 = v27 - (_QWORD)v28 * sub_8E9110(a4);
  v30 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  v31 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)v30 = 0;
  *(_DWORD *)(v30 + 48) = 1;
  *(_QWORD *)(v30 + 32) = v29;
  *(_QWORD *)(v30 + 24) = v31;
  *(_OWORD *)(v30 + 8) = 0;
  return 1;
}

