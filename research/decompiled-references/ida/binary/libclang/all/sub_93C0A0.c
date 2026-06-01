__int64 __fastcall sub_93C0A0(__int64 a1, __int64 a2, unsigned __int64 *a3, void **a4, unsigned int a5)
{
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rcx
  unsigned __int8 **v17; // rax
  void *v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v20; // [rsp+18h] [rbp-50h] BYREF
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 )
    goto LABEL_3;
  v8 = a5;
  if ( (unsigned __int64)*a4 < a5 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v23 = 1;
  v11 = v10;
  v12 = *a4;
  v22 = 64;
  v21 = v12;
  v19 = *(_QWORD *)(v11 + 8);
  v20 = (unsigned __int8 **)sub_A2E240(a1, v11, 2220, 0);
  v13 = v20;
  if ( v20 )
  {
    sub_8DF340(&v20, (__int64)&v21);
    sub_8D69A0(v13, v19);
    sub_8D6E40(v13, v8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v22 > 0x40 && v21 )
      operator delete[](v21);
LABEL_3:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    if ( (*a3 & 0x8000000000000000LL) != 0LL )
    {
      v17 = (unsigned __int8 **)sub_A2E240(a1, v14, 2225, 0);
      v18 = (void *)*a3;
      v23 = 0;
      v20 = v17;
      v22 = 64;
      v21 = v18;
      if ( v17 )
      {
        sub_8DF340(&v20, (__int64)&v21);
        if ( v22 > 0x40 )
        {
          if ( v21 )
            operator delete[](v21);
        }
      }
    }
    else
    {
      v15 = 64;
      if ( *a3 )
      {
        _BitScanReverse64(&v16, *a3);
        v15 = v16 ^ 0x3F;
      }
      if ( v15 >= *(_DWORD *)a4 )
        return 1;
      sub_A2E240(a1, v14, 2224, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v22 > 0x40 && v21 )
  {
    operator delete[](v21);
    return 0;
  }
  return result;
}

