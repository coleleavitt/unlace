__int64 __fastcall sub_D7CCE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  void *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned __int8 **v15; // [rsp+18h] [rbp-50h] BYREF
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < a5 )
    goto LABEL_3;
  v9 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v10 = (void *)*a4;
  v17 = 8;
  v16 = v10;
  v18 = 1;
  v11 = *(_QWORD *)(v9 + 8);
  v15 = (unsigned __int8 **)sub_E33C90(a1, v9, 2422, 0);
  if ( v15 )
  {
    sub_CF8A40(&v15, (__int64)&v16);
    if ( v15 )
    {
      sub_AE9DF0(v15, v11, 8u);
      if ( v15 )
        sub_AE9DF0(v15, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
LABEL_3:
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return 1;
    if ( (unsigned __int8)sub_D55480((__int64 *)a3) )
    {
      v12 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v15 = (unsigned __int8 **)sub_E33C90(a1, v12, 2427, 0);
      sub_D4B780((__int64)&v16, a3, 0);
      if ( v15 )
        sub_CF8A40(&v15, (__int64)&v16);
      if ( v17 > 0x40 )
      {
        if ( v16 )
          operator delete[](v16);
      }
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 8);
      v16 = *(void **)a3;
      v17 = v13;
      if ( (unsigned int)sub_D7C120((__int64)&v16) >= *a4 )
        return 1;
      v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v14, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v17 > 0x40 && v16 )
  {
    operator delete[](v16);
    return 0;
  }
  return result;
}
