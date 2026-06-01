__int64 __fastcall sub_D817A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v16; // [rsp+18h] [rbp-50h] BYREF
  void *v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-40h]

  if ( a5 <= 1 || !(unsigned __int8)sub_D71A50(a4, a5) )
    goto LABEL_3;
  v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  sub_D47D10((__int64)&v17, a4, 0);
  v10 = v14;
  v15 = *(_QWORD *)(v14 + 8);
  v16 = (unsigned __int8 **)sub_E33C90(a1, v10, 2422, 0);
  if ( v16 )
  {
    sub_CF8A40(&v16, (__int64)&v17);
    if ( v16 )
    {
      sub_AE9DF0(v16, v15, 8u);
      if ( v16 )
        sub_AE9DF0(v16, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
LABEL_3:
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return 1;
    if ( (unsigned __int8)sub_D55480((__int64 *)a3) )
    {
      v9 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v16 = (unsigned __int8 **)sub_E33C90(a1, v9, 2427, 0);
      sub_D4B780((__int64)&v17, a3, 0);
      if ( v16 )
        sub_CF8A40(&v16, (__int64)&v17);
      if ( v18 > 0x40 )
      {
        if ( v17 )
          operator delete[](v17);
      }
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 8);
      v17 = *(void **)a3;
      v18 = v11;
      v12 = sub_D7C120((__int64)&v17);
      if ( v12 >= (unsigned int)sub_D59510(a4) )
        return 1;
      v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v13, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    return 0;
  }
  return result;
}
