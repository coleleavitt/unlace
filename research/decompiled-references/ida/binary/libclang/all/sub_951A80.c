__int64 __fastcall sub_951A80(__int64 a1, __int64 a2, char *a3, __int16 *a4, unsigned int a5)
{
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int8 **v18; // r15
  unsigned __int8 **v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int8 **v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v25; // [rsp+18h] [rbp-50h] BYREF
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 < 0 )
  {
    v24 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v19 = (unsigned __int8 **)sub_A2E1B0(a1, &v24, 2242, 0);
    v20 = (unsigned __int16)*a4;
    v28 = 0;
    v25 = v19;
    v27 = 16;
    v26 = (void *)v20;
    if ( v19 )
    {
      sub_8DF340(&v25, (__int64)&v26);
      if ( v27 > 0x40 )
      {
        if ( v26 )
          operator delete[](v26);
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 || *a4 < (__int16)a5 )
  {
LABEL_4:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *a3;
    if ( *a3 < 0 )
    {
      v21 = (unsigned __int8 **)sub_A2E240(a1, v10, 2225, 0);
      v22 = (unsigned __int8)*a3;
      v28 = 0;
      v25 = v21;
      v27 = 8;
      v26 = (void *)v22;
      if ( v21 )
      {
        sub_8DF340(&v25, (__int64)&v26);
        if ( v27 > 0x40 )
        {
          if ( v26 )
            operator delete[](v26);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = 8;
    if ( *a3 )
    {
      v13 = v11 >> 4;
      if ( !(v11 >> 4) )
      {
        v13 = *a3;
        v14 = v11 >> 2;
        v12 = 6;
        if ( v14 )
        {
          v13 = v14;
          v12 = 4;
        }
        goto LABEL_11;
      }
      v12 = 1;
      if ( !((unsigned int)v11 >> 6) )
      {
        v12 = 2;
LABEL_11:
        if ( !(v13 >> 1) )
          v12 |= 1u;
      }
    }
    if ( v12 >= *a4 )
      return 1;
    sub_A2E240(a1, v10, 2224, 0);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v28 = 0;
  v16 = v15;
  v17 = (unsigned __int16)*a4;
  v27 = 16;
  v26 = (void *)v17;
  v23 = *(_QWORD *)(v16 + 8);
  v25 = (unsigned __int8 **)sub_A2E240(a1, v16, 2220, 0);
  v18 = v25;
  if ( v25 )
  {
    sub_8DF340(&v25, (__int64)&v26);
    sub_8D69A0(v18, v23);
    sub_8D6E40(v18, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    goto LABEL_4;
  }
  if ( v27 <= 0x40 || !v26 )
    return 0;
  operator delete[](v26);
  return 0;
}

