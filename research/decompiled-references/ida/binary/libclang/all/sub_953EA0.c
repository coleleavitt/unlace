__int64 __fastcall sub_953EA0(__int64 a1, __int64 a2, unsigned int *a3, void **a4, unsigned int a5)
{
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  void *v16; // rax
  unsigned __int8 **v17; // r15
  unsigned __int8 **v18; // rax
  void *v19; // rdx
  unsigned __int8 **v20; // rax
  void *v21; // rbx
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v24; // [rsp+18h] [rbp-50h] BYREF
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+2Ch] [rbp-3Ch]

  v8 = a5;
  if ( (__int64)*a4 < 0 )
  {
    v23 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v18 = (unsigned __int8 **)sub_A2E1B0(a1, &v23, 2242, 0);
    v19 = *a4;
    v27 = 0;
    v24 = v18;
    v26 = 64;
    v25 = v19;
    if ( v18 )
    {
      sub_8DF340(&v24, (__int64)&v25);
      if ( v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( (unsigned int)v8 <= 1 || (__int64)*a4 < v8 )
  {
LABEL_4:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *a3;
    if ( (*a3 & 0x80000000) != 0 )
    {
      v20 = (unsigned __int8 **)sub_A2E240(a1, v10, 2225, 0);
      v21 = (void *)*a3;
      v27 = 0;
      v24 = v20;
      v26 = 32;
      v25 = v21;
      if ( v20 )
      {
        sub_8DF340(&v24, (__int64)&v25);
        if ( v26 > 0x40 )
        {
          if ( v25 )
            operator delete[](v25);
        }
      }
    }
    else
    {
      v12 = 32;
      if ( v11 )
      {
        _BitScanReverse(&v13, v11);
        v12 = v13 ^ 0x1F;
      }
      if ( v12 >= *(_DWORD *)a4 )
        return 1;
      sub_A2E240(a1, v10, 2224, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v27 = 0;
  v15 = v14;
  v16 = *a4;
  v26 = 64;
  v25 = v16;
  v22 = *(_QWORD *)(v15 + 8);
  v24 = (unsigned __int8 **)sub_A2E240(a1, v15, 2220, 0);
  v17 = v24;
  if ( v24 )
  {
    sub_8DF340(&v24, (__int64)&v25);
    sub_8D69A0(v17, v22);
    sub_8D6E40(v17, v8);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    goto LABEL_4;
  }
  if ( v26 <= 0x40 || !v25 )
    return 0;
  operator delete[](v25);
  return 0;
}

