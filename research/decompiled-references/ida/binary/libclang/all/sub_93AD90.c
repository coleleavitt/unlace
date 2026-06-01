__int64 __fastcall sub_93AD90(__int64 a1, __int64 a2, unsigned int *a3, void **a4, unsigned int a5)
{
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 **v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v21; // [rsp+18h] [rbp-50h] BYREF
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 )
    goto LABEL_3;
  v8 = a5;
  if ( (unsigned __int64)*a4 < a5 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v24 = 1;
  v11 = v10;
  v12 = *a4;
  v23 = 64;
  v22 = v12;
  v20 = *(_QWORD *)(v11 + 8);
  v21 = (unsigned __int8 **)sub_A2E240(a1, v11, 2220, 0);
  v13 = v21;
  if ( v21 )
  {
    sub_8DF340(&v21, (__int64)&v22);
    sub_8D69A0(v13, v20);
    sub_8D6E40(v13, v8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v23 > 0x40 && v22 )
      operator delete[](v22);
LABEL_3:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v15 = *a3;
    if ( (*a3 & 0x80000000) != 0 )
    {
      v18 = (unsigned __int8 **)sub_A2E240(a1, v14, 2225, 0);
      v19 = (void *)*a3;
      v24 = 0;
      v21 = v18;
      v23 = 32;
      v22 = v19;
      if ( v18 )
      {
        sub_8DF340(&v21, (__int64)&v22);
        if ( v23 > 0x40 )
        {
          if ( v22 )
            operator delete[](v22);
        }
      }
    }
    else
    {
      v16 = 32;
      if ( v15 )
      {
        _BitScanReverse(&v17, v15);
        v16 = v17 ^ 0x1F;
      }
      if ( v16 >= *(_DWORD *)a4 )
        return 1;
      sub_A2E240(a1, v14, 2224, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v23 > 0x40 && v22 )
  {
    operator delete[](v22);
    return 0;
  }
  return result;
}

