__int64 __fastcall sub_955F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rsi
  void *v22; // rdi
  unsigned __int8 **v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned __int8 **v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+0h] [rbp-78h]
  unsigned __int8 **v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 **v33; // [rsp+18h] [rbp-60h] BYREF
  void *v34; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-50h]
  char v36; // [rsp+2Ch] [rbp-4Ch]
  void *v37; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-40h]

  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_QWORD *)a4;
  if ( v10 > 0x40 )
    v11 = *(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6));
  if ( (v11 & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
  {
    v32 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v23 = (unsigned __int8 **)sub_A2E1B0(a1, &v32, 2242, 0);
    v24 = *(unsigned int *)(a4 + 8);
    v33 = v23;
    sub_2587BE0(&v37, a4, v24);
    v25 = v38;
    v36 = 0;
    v35 = v38;
    v34 = v37;
    if ( v33 )
    {
      sub_8DF340(&v33, (__int64)&v34);
      v25 = v35;
    }
    if ( v25 > 0x40 && v34 )
      operator delete[](v34);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 )
  {
LABEL_5:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v14 = *(_DWORD *)(a3 + 8);
    v15 = *(_QWORD *)a3;
    v16 = v13;
    v17 = 1LL << ((unsigned __int8)v14 - 1);
    if ( v14 > 0x40 )
    {
      if ( (*(_QWORD *)(v15 + 8LL * ((v14 - 1) >> 6)) & v17) == 0 )
        goto LABEL_9;
    }
    else if ( (v15 & v17) == 0 )
    {
LABEL_9:
      sub_93CCE0((__int64)&v37, (__int64 *)a3);
      v18 = v38;
      if ( v38 > 0x40 )
      {
        v18 = sub_2587400(&v37);
      }
      else if ( v37 )
      {
        _BitScanReverse64(&v19, (unsigned __int64)v37);
        v18 = v38 + (v19 ^ 0x3F) - 64;
      }
      v20 = sub_93CC70(a4);
      if ( v38 > 0x40 )
      {
        if ( v37 )
          operator delete[](v37);
      }
      if ( v18 >= v20 )
        return 1;
      sub_A2E240(a1, v16, 2224, 0);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v26 = (unsigned __int8 **)sub_A2E240(a1, v16, 2225, 0);
    v27 = *(unsigned int *)(a3 + 8);
    v33 = v26;
    sub_2587BE0(&v37, a3, v27);
    v28 = v38;
    v36 = 0;
    v35 = v38;
    v34 = v37;
    if ( v33 )
    {
      sub_8DF340(&v33, (__int64)&v34);
      v28 = v35;
    }
    if ( v28 > 0x40 && v34 )
      operator delete[](v34);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  sub_92DD40((__int64)&v37, a5, *(_DWORD *)(a4 + 8));
  if ( (int)sub_25867A0(a4, &v37) < 0 )
  {
    if ( v38 <= 0x40 )
      goto LABEL_5;
    v22 = v37;
    if ( !v37 )
      goto LABEL_5;
LABEL_25:
    operator delete[](v22);
    goto LABEL_5;
  }
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  v29 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v37, a4, *(unsigned int *)(a4 + 8));
  v36 = 0;
  v35 = v38;
  v21 = v29;
  v34 = v37;
  v30 = *(_QWORD *)(v29 + 8);
  v37 = (void *)sub_A2E240(a1, v21, 2220, 0);
  v31 = (unsigned __int8 **)v37;
  if ( v37 )
  {
    sub_8DF340((unsigned __int8 ***)&v37, (__int64)&v34);
    sub_8D69A0(v31, v30);
    sub_8D6E40(v31, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v35 <= 0x40 )
      goto LABEL_5;
    v22 = v34;
    if ( !v34 )
      goto LABEL_5;
    goto LABEL_25;
  }
  if ( v35 <= 0x40 || !v34 )
    return 0;
  operator delete[](v34);
  return 0;
}

