__int64 __fastcall sub_D63A40(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  unsigned __int8 **v17; // rax
  void *v18; // rcx
  __int64 v19; // rsi
  unsigned __int8 **v20; // [rsp+8h] [rbp-50h] BYREF
  void *v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-40h]
  char v23; // [rsp+1Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < a5 )
    goto LABEL_3;
  v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v14 = (void *)*a4;
  v22 = 8;
  v21 = v14;
  v23 = 1;
  v15 = *(_QWORD *)(v13 + 8);
  v20 = (unsigned __int8 **)sub_E33C90(a1, v13, 2422, 0);
  if ( v20 )
  {
    sub_CF8A40(&v20, (__int64)&v21);
    if ( v20 )
    {
      sub_AE9DF0(v20, v15, 8u);
      if ( v20 )
        sub_AE9DF0(v20, a5, 3u);
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v8 )
  {
    if ( v22 > 0x40 && v21 )
      operator delete[](v21);
LABEL_3:
    v8 = 1;
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return v8;
    v9 = *a3;
    if ( (*a3 & 0x80000000) != 0 )
    {
      v16 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v17 = (unsigned __int8 **)sub_E33C90(a1, v16, 2427, 0);
      v18 = (void *)*a3;
      v23 = 0;
      v20 = v17;
      v22 = 32;
      v21 = v18;
      if ( v17 )
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
      v10 = 32;
      if ( v9 )
      {
        _BitScanReverse(&v11, v9);
        v10 = v11 ^ 0x1F;
      }
      v8 = 1;
      if ( *a4 <= v10 )
        return v8;
      v19 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v19, 2426, 0);
    }
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return v8;
}
