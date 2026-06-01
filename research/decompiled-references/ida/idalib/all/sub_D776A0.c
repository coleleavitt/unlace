__int64 __fastcall sub_D776A0(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // r12d
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int8 **v15; // rax
  void *v16; // rcx
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v20; // [rsp+18h] [rbp-50h] BYREF
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]

  if ( !(unsigned __int8)sub_D55480(a4) )
    goto LABEL_37;
  v19 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v20 = (unsigned __int8 **)sub_E33D20(a1, &v19, 2444, 0);
  sub_D4B780((__int64)&v21, (__int64)a4, 0);
  if ( v20 )
    sub_CF8A40(&v20, (__int64)&v21);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_37:
    if ( a5 > 1 && (unsigned __int8)sub_D76790(a4, a5) )
    {
      v17 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_D4B780((__int64)&v21, (__int64)a4, 0);
      v12 = v17;
      v18 = *(_QWORD *)(v17 + 8);
      v20 = (unsigned __int8 **)sub_E33C90(a1, v12, 2422, 0);
      if ( v20 )
      {
        sub_CF8A40(&v20, (__int64)&v21);
        if ( v20 )
        {
          sub_AE9DF0(v20, v18, 8u);
          if ( v20 )
            sub_AE9DF0(v20, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v22 > 0x40 && v21 )
        {
          operator delete[](v21);
          return 0;
        }
        return result;
      }
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
    }
    if ( *(char *)(sub_E32240(a1) + 1) >= 0 )
    {
      v8 = *a3;
      if ( (*a3 & 0x80000000) != 0 )
      {
        v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        v15 = (unsigned __int8 **)sub_E33C90(a1, v14, 2427, 0);
        v16 = (void *)*a3;
        v23 = 0;
        v20 = v15;
        v22 = 32;
        v21 = v16;
        if ( v15 )
        {
          sub_CF8A40(&v20, (__int64)&v21);
          if ( v22 > 0x40 )
          {
            if ( v21 )
              operator delete[](v21);
          }
        }
      }
      else
      {
        v9 = 32;
        if ( v8 )
        {
          _BitScanReverse(&v10, v8);
          v9 = v10 ^ 0x1F;
        }
        if ( (unsigned int)sub_D595F0((__int64)a4) <= v9 )
          return 1;
        v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        sub_E33C90(a1, v13, 2426, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    return 1;
  }
  return result;
}
