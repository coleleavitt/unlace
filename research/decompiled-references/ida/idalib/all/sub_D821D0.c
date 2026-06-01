__int64 __fastcall sub_D821D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v17; // [rsp+18h] [rbp-50h] BYREF
  void *v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-40h]

  if ( !(unsigned __int8)sub_D55480(a4) )
    goto LABEL_36;
  v16 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v17 = (unsigned __int8 **)sub_E33D20(a1, &v16, 2444, 0);
  sub_D4B780((__int64)&v18, (__int64)a4, 0);
  if ( v17 )
    sub_CF8A40(&v17, (__int64)&v18);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_36:
    if ( a5 > 1 && (unsigned __int8)sub_D76790(a4, a5) )
    {
      v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_D4B780((__int64)&v18, (__int64)a4, 0);
      v10 = v14;
      v15 = *(_QWORD *)(v14 + 8);
      v17 = (unsigned __int8 **)sub_E33C90(a1, v10, 2422, 0);
      if ( v17 )
      {
        sub_CF8A40(&v17, (__int64)&v18);
        if ( v17 )
        {
          sub_AE9DF0(v17, v15, 8u);
          if ( v17 )
            sub_AE9DF0(v17, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v19 > 0x40 && v18 )
        {
          operator delete[](v18);
          return 0;
        }
        return result;
      }
      if ( v19 > 0x40 && v18 )
        operator delete[](v18);
    }
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return 1;
    if ( (unsigned __int8)sub_D55480((__int64 *)a3) )
    {
      v9 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v17 = (unsigned __int8 **)sub_E33C90(a1, v9, 2427, 0);
      sub_D4B780((__int64)&v18, a3, 0);
      if ( v17 )
        sub_CF8A40(&v17, (__int64)&v18);
      if ( v19 > 0x40 )
      {
        if ( v18 )
          operator delete[](v18);
      }
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 8);
      v18 = *(void **)a3;
      v19 = v11;
      v12 = sub_D7C120((__int64)&v18);
      if ( v12 >= (unsigned int)sub_D595F0((__int64)a4) )
        return 1;
      v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v13, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  return result;
}
