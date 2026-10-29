__int64 __fastcall sub_D667E0(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int16 *a4, unsigned int a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int8 **v16; // rax
  void *v17; // rdx
  __int64 v18; // rsi
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < a5 )
    goto LABEL_3;
  v12 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v13 = (void *)*a4;
  v21 = 16;
  v20 = v13;
  v22 = 1;
  v14 = *(_QWORD *)(v12 + 8);
  v19 = (unsigned __int8 **)sub_E33C90(a1, v12, 2422, 0);
  if ( v19 )
  {
    sub_CF8A40(&v19, (__int64)&v20);
    if ( v19 )
    {
      sub_AE9DF0(v19, v14, 8u);
      if ( v19 )
        sub_AE9DF0(v19, a5, 3u);
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v8 )
  {
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
LABEL_3:
    v8 = 1;
    if ( *(char *)(sub_E32240(a1) + 1) < 0 )
      return v8;
    if ( (*a3 & 0x8000000000000000LL) != 0LL )
    {
      v15 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v16 = (unsigned __int8 **)sub_E33C90(a1, v15, 2427, 0);
      v17 = (void *)*a3;
      v22 = 0;
      v19 = v16;
      v21 = 64;
      v20 = v17;
      if ( v16 )
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
      v9 = 64;
      if ( *a3 )
      {
        _BitScanReverse64(&v10, *a3);
        v9 = v10 ^ 0x3F;
      }
      v8 = 1;
      if ( *a4 <= v9 )
        return v8;
      v18 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      sub_E33C90(a1, v18, 2426, 0);
    }
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  return v8;
}
