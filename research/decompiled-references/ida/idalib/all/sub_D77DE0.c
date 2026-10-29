__int64 __fastcall sub_D77DE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int8 v10; // [rsp+Fh] [rbp-49h]
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v12; // [rsp+18h] [rbp-40h] BYREF
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-30h]

  if ( !(unsigned __int8)sub_D55480(a4) )
    goto LABEL_21;
  v11 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v12 = (unsigned __int8 **)sub_E33D20(a1, &v11, 2444, 0);
  sub_D4B780((__int64)&v13, (__int64)a4, 0);
  if ( v12 )
    sub_CF8A40(&v12, (__int64)&v13);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_21:
    if ( a5 > 1 && (unsigned __int8)sub_D76790(a4, a5) )
    {
      v8 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_D4B780((__int64)&v13, (__int64)a4, 0);
      v9 = *(_QWORD *)(v8 + 8);
      v12 = (unsigned __int8 **)sub_E33C90(a1, v8, 2422, 0);
      if ( v12 )
      {
        sub_CF8A40(&v12, (__int64)&v13);
        if ( v12 )
        {
          sub_AE9DF0(v12, v9, 8u);
          if ( v12 )
            sub_AE9DF0(v12, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( v14 > 0x40 )
      {
        if ( v13 )
        {
          v10 = result;
          operator delete[](v13);
          return v10;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
