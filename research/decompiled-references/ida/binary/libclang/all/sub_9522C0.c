__int64 __fastcall sub_9522C0(__int64 a1, __int64 a2, char *a3, __int64 *a4, unsigned int a5)
{
  __int64 *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // r13d
  void *v16; // rdi
  __int64 v17; // rsi
  void *v18; // rdi
  unsigned __int8 **v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax
  void *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int8 **v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 **v29; // [rsp+18h] [rbp-60h] BYREF
  void *v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+2Ch] [rbp-4Ch]
  void *v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+3Ch] [rbp-3Ch]

  v9 = a4;
  v10 = *((_DWORD *)a4 + 2);
  v11 = *a4;
  if ( v10 > 0x40 )
    v11 = *(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6));
  if ( (v11 & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
  {
    v28 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v19 = (unsigned __int8 **)sub_A2E1B0(a1, &v28, 2242, 0);
    v20 = *((unsigned int *)v9 + 2);
    v29 = v19;
    sub_2587BE0(&v33, v9, v20);
    v21 = v34;
    v32 = 0;
    v31 = v34;
    v30 = v33;
    if ( v29 )
    {
      sub_8DF340(&v29, (__int64)&v30);
      v21 = v31;
    }
    if ( v21 > 0x40 && v30 )
      operator delete[](v30);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 )
  {
LABEL_5:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v14 = *a3;
    if ( *a3 < 0 )
    {
      v23 = (void *)sub_A2E240(a1, v13, 2225, 0);
      v24 = (unsigned __int8)*a3;
      v35 = 0;
      v30 = v23;
      v34 = 8;
      v33 = (void *)v24;
      if ( v23 )
      {
        sub_8DF340((unsigned __int8 ***)&v30, (__int64)&v33);
        if ( v34 > 0x40 )
        {
          if ( v33 )
            operator delete[](v33);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v15 = 8;
    if ( *a3 )
    {
      if ( v14 >> 4 )
      {
        v15 = 1;
        if ( (unsigned int)v14 >> 6 )
          goto LABEL_11;
        v15 = 2;
        v22 = v14 >> 4;
      }
      else
      {
        v22 = v14 >> 2;
        v15 = 4;
        if ( !v22 )
        {
          v15 = 6;
          v22 = *a3;
        }
      }
      if ( !(v22 >> 1) )
        v15 |= 1u;
    }
LABEL_11:
    if ( *((_DWORD *)v9 + 2) <= 0x20u )
    {
      sub_2587BE0(&v33, v9, 32);
      v16 = v33;
      LODWORD(v9) = (_DWORD)v33;
      if ( v34 <= 0x40 )
        goto LABEL_15;
      v9 = *(__int64 **)v33;
      if ( !v33 )
        goto LABEL_15;
    }
    else
    {
      sub_25877E0(&v33, v9, 32);
      v16 = v33;
      LODWORD(v9) = (_DWORD)v33;
      if ( v34 <= 0x40 )
      {
LABEL_15:
        if ( v15 >= (unsigned int)v9 )
          return 1;
        sub_A2E240(a1, v13, 2224, 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      }
      LODWORD(v9) = *(_DWORD *)v33;
    }
    operator delete[](v16);
    goto LABEL_15;
  }
  sub_92DD40((__int64)&v33, a5, *((_DWORD *)v9 + 2));
  if ( (int)sub_25867A0(v9, &v33) < 0 )
  {
    if ( v34 <= 0x40 )
      goto LABEL_5;
    v18 = v33;
    if ( !v33 )
      goto LABEL_5;
LABEL_25:
    operator delete[](v18);
    goto LABEL_5;
  }
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v25 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v33, v9, *((unsigned int *)v9 + 2));
  v32 = 0;
  v31 = v34;
  v17 = v25;
  v30 = v33;
  v26 = *(_QWORD *)(v25 + 8);
  v33 = (void *)sub_A2E240(a1, v17, 2220, 0);
  v27 = (unsigned __int8 **)v33;
  if ( v33 )
  {
    sub_8DF340((unsigned __int8 ***)&v33, (__int64)&v30);
    sub_8D69A0(v27, v26);
    sub_8D6E40(v27, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v31 <= 0x40 )
      goto LABEL_5;
    v18 = v30;
    if ( !v30 )
      goto LABEL_5;
    goto LABEL_25;
  }
  if ( v31 <= 0x40 || !v30 )
    return 0;
  operator delete[](v30);
  return 0;
}

