__int64 __fastcall sub_D76D00(__int64 a1, __int64 a2, _WORD *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r13d
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  unsigned __int8 **v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v22; // [rsp+18h] [rbp-50h] BYREF
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]

  if ( !(unsigned __int8)sub_D55480(a4) )
    goto LABEL_45;
  v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v22 = (unsigned __int8 **)sub_E33D20(a1, &v21, 2444, 0);
  sub_D4B780((__int64)&v23, (__int64)a4, 0);
  if ( v22 )
    sub_CF8A40(&v22, (__int64)&v23);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_45:
    if ( a5 > 1 && (unsigned __int8)sub_D76790(a4, a5) )
    {
      v19 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_D4B780((__int64)&v23, (__int64)a4, 0);
      v14 = v19;
      v20 = *(_QWORD *)(v19 + 8);
      v22 = (unsigned __int8 **)sub_E33C90(a1, v14, 2422, 0);
      if ( v22 )
      {
        sub_CF8A40(&v22, (__int64)&v23);
        if ( v22 )
        {
          sub_AE9DF0(v22, v20, 8u);
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
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return 1;
    LOWORD(v8) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v16 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v17 = (unsigned __int8 **)sub_E33C90(a1, v16, 2427, 0);
      v18 = (unsigned __int16)*a3;
      v25 = 0;
      v22 = v17;
      v24 = 16;
      v23 = (void *)v18;
      if ( v17 )
      {
        sub_CF8A40(&v22, (__int64)&v23);
        if ( v24 > 0x40 )
        {
          if ( v23 )
            operator delete[](v23);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v9 = 16;
    if ( !(_WORD)v8 )
    {
LABEL_14:
      if ( (unsigned int)sub_D595F0((__int64)a4) <= v9 )
        return 1;
      v15 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v15, 2426, 0);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v10 = BYTE1(v8);
    if ( BYTE1(v8) )
      LOWORD(v8) = BYTE1(v8);
    v8 = (unsigned __int16)v8;
    v9 = v10 == 0 ? 8 : 0;
    v11 = (int)(unsigned __int16)v8 >> 4;
    if ( v11 )
    {
      v8 = (int)(unsigned __int16)v8 >> 4;
      v12 = v11 >> 2;
      if ( !v12 )
        goto LABEL_11;
    }
    else
    {
      v9 |= 4u;
      v12 = (int)(unsigned __int16)v8 >> 2;
      if ( !v12 )
      {
LABEL_11:
        v9 |= 2u;
        goto LABEL_12;
      }
    }
    v8 = v12;
LABEL_12:
    if ( !(v8 >> 1) )
      v9 |= 1u;
    goto LABEL_14;
  }
  return result;
}
