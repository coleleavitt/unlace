__int64 __fastcall sub_9544E0(__int64 a1, __int64 a2, unsigned __int64 *a3, char *a4, unsigned int a5)
{
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int8 **v16; // r15
  unsigned __int8 **v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int8 **v19; // rax
  void *v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v23; // [rsp+18h] [rbp-50h] BYREF
  void *v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 < 0 )
  {
    v22 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v17 = (unsigned __int8 **)sub_A2E1B0(a1, &v22, 2242, 0);
    v18 = (unsigned __int8)*a4;
    v26 = 0;
    v23 = v17;
    v25 = 8;
    v24 = (void *)v18;
    if ( v17 )
    {
      sub_8DF340(&v23, (__int64)&v24);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
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
    if ( (*a3 & 0x8000000000000000LL) != 0LL )
    {
      v19 = (unsigned __int8 **)sub_A2E240(a1, v10, 2225, 0);
      v20 = (void *)*a3;
      v26 = 0;
      v23 = v19;
      v25 = 64;
      v24 = v20;
      if ( v19 )
      {
        sub_8DF340(&v23, (__int64)&v24);
        if ( v25 > 0x40 )
        {
          if ( v24 )
            operator delete[](v24);
        }
      }
    }
    else
    {
      v11 = 64;
      if ( *a3 )
      {
        _BitScanReverse64(&v12, *a3);
        v11 = v12 ^ 0x3F;
      }
      if ( v11 >= *a4 )
        return 1;
      sub_A2E240(a1, v10, 2224, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v26 = 0;
  v14 = v13;
  v15 = (unsigned __int8)*a4;
  v25 = 8;
  v24 = (void *)v15;
  v21 = *(_QWORD *)(v14 + 8);
  v23 = (unsigned __int8 **)sub_A2E240(a1, v14, 2220, 0);
  v16 = v23;
  if ( v23 )
  {
    sub_8DF340(&v23, (__int64)&v24);
    sub_8D69A0(v16, v21);
    sub_8D6E40(v16, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    goto LABEL_4;
  }
  if ( v25 <= 0x40 || !v24 )
    return 0;
  operator delete[](v24);
  return 0;
}

