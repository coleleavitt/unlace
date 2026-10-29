__int64 __fastcall sub_9552A0(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5)
{
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // r13d
  void *v16; // r14
  unsigned int v17; // ebp
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int8 **v22; // r15
  void *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int8 **v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v29; // [rsp+18h] [rbp-60h] BYREF
  void *v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+2Ch] [rbp-4Ch]
  void *v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+3Ch] [rbp-3Ch]

  if ( *a4 < 0 )
  {
    v29 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v23 = (void *)sub_A2E1B0(a1, &v29, 2242, 0);
    v24 = (unsigned __int8)*a4;
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
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 || *a4 < (char)a5 )
  {
LABEL_4:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *(_DWORD *)(a3 + 8);
    v12 = *(_QWORD *)a3;
    v13 = v10;
    v14 = 1LL << ((unsigned __int8)v11 - 1);
    if ( v11 > 0x40 )
    {
      if ( (*(_QWORD *)(v12 + 8LL * ((v11 - 1) >> 6)) & v14) == 0 )
        goto LABEL_8;
    }
    else if ( (v12 & v14) == 0 )
    {
LABEL_8:
      sub_93CCE0((__int64)&v33, (__int64 *)a3);
      v15 = v34;
      v16 = v33;
      v17 = *a4;
      if ( v34 > 0x40 )
      {
        v15 = sub_2587400(&v33);
        if ( v16 )
          operator delete[](v16);
      }
      else if ( v33 )
      {
        _BitScanReverse64(&v18, (unsigned __int64)v33);
        v15 = v34 + (v18 ^ 0x3F) - 64;
      }
      if ( v15 >= v17 )
        return 1;
      sub_A2E240(a1, v13, 2224, 0);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v25 = (unsigned __int8 **)sub_A2E240(a1, v13, 2225, 0);
    v26 = *(unsigned int *)(a3 + 8);
    v29 = v25;
    sub_2587BE0(&v33, a3, v26);
    v27 = v34;
    v32 = 0;
    v31 = v34;
    v30 = v33;
    if ( v29 )
    {
      sub_8DF340(&v29, (__int64)&v30);
      v27 = v31;
    }
    if ( v27 > 0x40 && v30 )
      operator delete[](v30);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  v19 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v35 = 0;
  v20 = v19;
  v21 = (unsigned __int8)*a4;
  v34 = 8;
  v33 = (void *)v21;
  v28 = *(_QWORD *)(v20 + 8);
  v30 = (void *)sub_A2E240(a1, v20, 2220, 0);
  v22 = (unsigned __int8 **)v30;
  if ( v30 )
  {
    sub_8DF340((unsigned __int8 ***)&v30, (__int64)&v33);
    sub_8D69A0(v22, v28);
    sub_8D6E40(v22, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    goto LABEL_4;
  }
  if ( v34 <= 0x40 || !v33 )
    return 0;
  operator delete[](v33);
  return 0;
}

