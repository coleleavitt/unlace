__int64 __fastcall sub_958680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // r15d
  int v10; // r14d
  unsigned __int64 v11; // r15
  unsigned int v12; // eax
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // edx
  void *v17; // rax
  __int64 v18; // rdi
  unsigned __int8 **v19; // r13
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // r13
  void *v24; // rbp
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // r14
  __int64 v29; // rbp
  void *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // r13
  __int64 v35; // [rsp+8h] [rbp-D0h]
  int v36; // [rsp+10h] [rbp-C8h]
  __int64 v37; // [rsp+28h] [rbp-B0h] BYREF
  void *v38; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-A0h]
  char v40; // [rsp+3Ch] [rbp-9Ch]
  void *v41; // [rsp+40h] [rbp-98h]
  unsigned int v42; // [rsp+48h] [rbp-90h]
  char v43; // [rsp+4Ch] [rbp-8Ch]
  void *v44; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-80h]
  char v46; // [rsp+5Ch] [rbp-7Ch]
  void *v47; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-70h]

  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 <= 0x40 )
  {
    if ( *(_QWORD *)a3 )
      goto LABEL_3;
LABEL_43:
    v22 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v22, a4);
    return 1;
  }
  if ( (unsigned int)sub_2587400(a3) == v9 )
    goto LABEL_43;
LABEL_3:
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, a2, a4) )
  {
    return 0;
  }
  v10 = *(_DWORD *)(a4 + 48);
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      v28 = sub_9301F0(a3);
      if ( *(_DWORD *)(a4 + 48) == 1 )
      {
        v29 = *(_QWORD *)(a4 + 32) + *(_QWORD *)a4;
      }
      else
      {
        v29 = 0xFFFFFFFFLL;
        if ( !(unsigned __int8)sub_8E9400(a4) )
          v29 = *(_QWORD *)a4;
      }
      v30 = (void *)(v29 - (_QWORD)v28);
      v44 = v30;
      if ( (unsigned __int64)v30 > 1 )
      {
        v47 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
        v33 = (unsigned __int8 **)sub_A2E1B0(a1, &v47, 2179, 0);
        v34 = v33;
        if ( v33 )
        {
          sub_8D6E40(v33, (__int64)v30);
          sub_8D6BF0(v34, 1);
          sub_8D6BF0(v34, 0);
        }
      }
      v31 = *(_QWORD *)(a1 + 184);
      v47 = *(void **)(a4 + 24);
      sub_92DE40(v31, (__int64 *)&v47, (__int64 *)&v44);
      return 1;
    }
    v35 = (unsigned int)sub_8E9270(a4);
    v11 = v35;
    if ( !(unsigned __int8)sub_8E9400(a4) )
      v11 = sub_8E92E0(a4);
    if ( v10 || v11 >= (unsigned __int64)sub_9301F0(a3) )
    {
LABEL_11:
      if ( *(_DWORD *)(a3 + 8) > 0x40u )
      {
        sub_25877E0(&v47, a3, 64);
        v12 = v48;
        v13 = v47;
        if ( v48 <= 0x40 )
        {
LABEL_13:
          if ( v12 )
            v11 -= (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
          goto LABEL_15;
        }
        v11 -= *(_QWORD *)v47;
      }
      else
      {
        sub_2587D60(&v47, a3);
        v12 = v48;
        v13 = v47;
        if ( v48 <= 0x40 )
          goto LABEL_13;
        v11 -= *(_QWORD *)v47;
        if ( !v47 )
        {
LABEL_15:
          v14 = *(_QWORD *)(a1 + 184);
          if ( !v11 && (unsigned __int8)sub_8E9400(a4) )
          {
            v32 = sub_A1A4E0(v14, 56);
            sub_A1BFA0(v32, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
          }
          else
          {
            sub_8E61F0((__int64)&v47, a4, v11);
            v15 = sub_A1A4E0(v14, 56);
            sub_A1C070(v15, &v47);
            sub_A1C0C0(&v47);
          }
          return 1;
        }
      }
      operator delete[](v13);
      goto LABEL_15;
    }
    v36 = *(_DWORD *)(a3 + 8);
    sub_2587D60(&v47, a3);
    v46 = 1;
    v45 = v48;
    v44 = v47;
    sub_2587D60(&v47, &v44);
    v40 = 0;
    v16 = v36 + 2;
    v39 = v48;
    v38 = v47;
    if ( v45 > 0x40 && v44 )
    {
      operator delete[](v44);
      v16 = v36 + 2;
    }
    v48 = v16;
    if ( v16 > 0x40 )
    {
      sub_2585A50(&v47, v11, 1);
      v17 = v47;
      v43 = 0;
      v42 = v48;
      v41 = v47;
      if ( v48 > 0x40 )
      {
        sub_2585B30(&v47);
LABEL_27:
        sub_25863C0(&v47, &v38);
        v18 = *(_QWORD *)(a1 + 200);
        v46 = 0;
        v45 = v48;
        v44 = v47;
        v37 = sub_A16CE0(v18, a2);
        v47 = (void *)sub_A2E1B0(a1, &v37, 2179, 0);
        v19 = (unsigned __int8 **)v47;
        if ( v47 )
        {
          sub_8DF340((unsigned __int8 ***)&v47, (__int64)&v44);
          if ( *(_DWORD *)(a4 + 48) )
            v20 = 1;
          else
            v20 = *(_BYTE *)(sub_8E5480(a4) + 51) ^ 1u;
          sub_8D6BF0(v19, v20);
          sub_8D6E40(v19, v35);
        }
        if ( v45 > 0x40 && v44 )
          operator delete[](v44);
        if ( v42 > 0x40 && v41 )
          operator delete[](v41);
        if ( v39 > 0x40 && v38 )
          operator delete[](v38);
        if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
          return 0;
        goto LABEL_11;
      }
    }
    else
    {
      v42 = v16;
      v43 = 0;
      v17 = (void *)(v11 & (0xFFFFFFFFFFFFFFFFLL >> (-2 - (unsigned __int8)v36)));
      if ( !v16 )
        v17 = nullptr;
      v41 = v17;
    }
    v47 = v17;
    goto LABEL_27;
  }
  v23 = sub_8E55C0((__int64 *)a4);
  v24 = sub_9301F0(a3);
  v25 = v23 - (_QWORD)v24 * sub_8E9110(a4);
  v26 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  v27 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)v26 = 0;
  *(_DWORD *)(v26 + 48) = 1;
  *(_QWORD *)(v26 + 32) = v25;
  *(_QWORD *)(v26 + 24) = v27;
  *(_OWORD *)(v26 + 8) = 0;
  return 1;
}

