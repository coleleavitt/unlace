__int64 __fastcall sub_D72730(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int8 **v14; // rax
  void *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v19; // [rsp+18h] [rbp-50h] BYREF
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || !(unsigned __int8)sub_D71A50(a4, a5) )
    goto LABEL_3;
  v17 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  sub_D47D10((__int64)&v20, a4, 0);
  v12 = v17;
  v18 = *(_QWORD *)(v17 + 8);
  v19 = (unsigned __int8 **)sub_E33C90(a1, v12, 2422, 0);
  if ( v19 )
  {
    sub_CF8A40(&v19, (__int64)&v20);
    if ( v19 )
    {
      sub_AE9DF0(v19, v18, 8u);
      if ( v19 )
        sub_AE9DF0(v19, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
LABEL_3:
    if ( *(char *)(sub_E32240(a1) + 1) >= 0 )
    {
      v8 = *a3;
      if ( (*a3 & 0x80000000) != 0 )
      {
        v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        v14 = (unsigned __int8 **)sub_E33C90(a1, v13, 2427, 0);
        v15 = (void *)*a3;
        v22 = 0;
        v19 = v14;
        v21 = 32;
        v20 = v15;
        if ( v14 )
        {
          sub_CF8A40(&v19, (__int64)&v20);
          if ( v21 > 0x40 )
          {
            if ( v20 )
              operator delete[](v20);
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
        if ( (unsigned int)sub_D59510(a4) <= v9 )
          return 1;
        v16 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        sub_E33C90(a1, v16, 2426, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    return 1;
  }
  if ( v21 > 0x40 && v20 )
  {
    operator delete[](v20);
    return 0;
  }
  return result;
}
