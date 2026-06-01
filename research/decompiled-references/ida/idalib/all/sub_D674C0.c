__int64 __fastcall sub_D674C0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // r15
  unsigned __int8 **v15; // rax
  void *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int8 **v19; // rax
  void *v20; // rdx
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v22; // [rsp+18h] [rbp-50h] BYREF
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 >= 0 )
    goto LABEL_3;
  v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v15 = (unsigned __int8 **)sub_E33D20(a1, &v21, 2444, 0);
  v16 = (void *)*a4;
  v25 = 0;
  v22 = v15;
  v24 = 64;
  v23 = v16;
  if ( v15 )
  {
    sub_CF8A40(&v22, (__int64)&v23);
    if ( v24 > 0x40 )
    {
      if ( v23 )
        operator delete[](v23);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_3:
    if ( a5 > 1 && a5 <= *(_DWORD *)a4 )
    {
      v12 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v13 = (void *)*a4;
      v24 = 64;
      v23 = v13;
      v25 = 0;
      v14 = *(_QWORD *)(v12 + 8);
      v22 = (unsigned __int8 **)sub_E33C90(a1, v12, 2422, 0);
      if ( v22 )
      {
        sub_CF8A40(&v22, (__int64)&v23);
        if ( v22 )
        {
          sub_AE9DF0(v22, v14, 8u);
          if ( v22 )
            sub_AE9DF0(v22, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v24 > 0x40 && v23 )
        {
          operator delete[](v23);
          return 0;
        }
        return result;
      }
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
    }
    v8 = sub_E32240(a1);
    result = 1;
    if ( *(char *)(v8 + 1) < 0 )
      return result;
    if ( (*a3 & 0x8000000000000000LL) != 0LL )
    {
      v18 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v19 = (unsigned __int8 **)sub_E33C90(a1, v18, 2427, 0);
      v20 = (void *)*a3;
      v25 = 0;
      v22 = v19;
      v24 = 64;
      v23 = v20;
      if ( v19 )
      {
        sub_CF8A40(&v22, (__int64)&v23);
        if ( v24 > 0x40 )
        {
          if ( v23 )
            operator delete[](v23);
        }
      }
    }
    else
    {
      v10 = 64;
      if ( *a3 )
      {
        _BitScanReverse64(&v11, *a3);
        v10 = v11 ^ 0x3F;
      }
      result = 1;
      if ( v10 >= *(_DWORD *)a4 )
        return result;
      v17 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v17, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  return result;
}
