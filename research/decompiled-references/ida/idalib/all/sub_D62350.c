__int64 __fastcall sub_D62350(__int64 a1, __int64 a2, _WORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rsi
  unsigned __int8 **v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int8 **v22; // [rsp+8h] [rbp-50h] BYREF
  void *v23; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-40h]
  char v25; // [rsp+1Ch] [rbp-3Ch]

  if ( a5 > 1 && *a4 >= a5 )
  {
    v15 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v16 = *a4;
    v24 = 32;
    v23 = (void *)v16;
    v25 = 1;
    v17 = *(_QWORD *)(v15 + 8);
    v22 = (unsigned __int8 **)sub_E33C90(a1, v15, 2422, 0);
    if ( v22 )
    {
      sub_CF8A40(&v22, (__int64)&v23);
      if ( v22 )
      {
        sub_AE9DF0(v22, v17, 8u);
        if ( v22 )
          sub_AE9DF0(v22, a5, 3u);
      }
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( !(_BYTE)v8 )
    {
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      return v8;
    }
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
  }
  v8 = 1;
  if ( *(char *)(sub_E32240(a1) + 1) >= 0 )
  {
    LOWORD(v9) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v18 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v19 = (unsigned __int8 **)sub_E33C90(a1, v18, 2427, 0);
      v20 = (unsigned __int16)*a3;
      v25 = 0;
      v22 = v19;
      v24 = 16;
      v23 = (void *)v20;
      if ( v19 )
      {
        sub_CF8A40(&v22, (__int64)&v23);
        if ( v24 > 0x40 )
        {
          if ( v23 )
            operator delete[](v23);
        }
      }
      return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v10 = 16;
    if ( !(_WORD)v9 )
    {
LABEL_13:
      v8 = 1;
      if ( *a4 <= v10 )
        return v8;
      v21 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v21, 2426, 0);
      return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v11 = BYTE1(v9);
    if ( BYTE1(v9) )
      LOWORD(v9) = BYTE1(v9);
    v9 = (unsigned __int16)v9;
    v10 = v11 == 0 ? 8 : 0;
    v12 = (int)(unsigned __int16)v9 >> 4;
    if ( v12 )
    {
      v9 = (int)(unsigned __int16)v9 >> 4;
      v13 = v12 >> 2;
      if ( !v13 )
        goto LABEL_10;
    }
    else
    {
      v10 |= 4u;
      v13 = (int)(unsigned __int16)v9 >> 2;
      if ( !v13 )
      {
LABEL_10:
        v10 |= 2u;
        goto LABEL_11;
      }
    }
    v9 = v13;
LABEL_11:
    if ( !(v9 >> 1) )
      v10 |= 1u;
    goto LABEL_13;
  }
  return v8;
}
