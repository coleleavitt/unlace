__int64 __fastcall sub_9371F0(__int64 a1, __int64 a2, char *a3, _BYTE *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // edx
  unsigned __int8 **v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v22; // [rsp+18h] [rbp-50h] BYREF
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < (unsigned __int8)a5 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v25 = 1;
  v11 = v10;
  v12 = (unsigned __int8)*a4;
  v24 = 8;
  v23 = (void *)v12;
  v21 = *(_QWORD *)(v11 + 8);
  v22 = (unsigned __int8 **)sub_A2E240(a1, v11, 2220, 0);
  v13 = v22;
  if ( v22 )
  {
    sub_8DF340(&v22, (__int64)&v23);
    sub_8D69A0(v13, v21);
    sub_8D6E40(v13, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
LABEL_3:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v15 = *a3;
    if ( *a3 < 0 )
    {
      v19 = (unsigned __int8 **)sub_A2E240(a1, v14, 2225, 0);
      v20 = (unsigned __int8)*a3;
      v25 = 0;
      v22 = v19;
      v24 = 8;
      v23 = (void *)v20;
      if ( v19 )
      {
        sub_8DF340(&v22, (__int64)&v23);
        if ( v24 > 0x40 )
        {
          if ( v23 )
            operator delete[](v23);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v16 = 8;
    if ( *a3 )
    {
      v17 = v15 >> 4;
      if ( !(v15 >> 4) )
      {
        v17 = *a3;
        v18 = v15 >> 2;
        v16 = 6;
        if ( v18 )
        {
          v17 = v18;
          v16 = 4;
        }
        goto LABEL_17;
      }
      v16 = 1;
      if ( !((unsigned int)v15 >> 6) )
      {
        v16 = 2;
LABEL_17:
        if ( !(v17 >> 1) )
          v16 |= 1u;
      }
    }
    if ( v16 >= (unsigned __int8)*a4 )
      return 1;
    sub_A2E240(a1, v14, 2224, 0);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v24 > 0x40 && v23 )
  {
    operator delete[](v23);
    return 0;
  }
  return result;
}

