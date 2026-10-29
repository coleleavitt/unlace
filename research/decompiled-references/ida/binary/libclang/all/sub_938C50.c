__int64 __fastcall sub_938C50(__int64 a1, __int64 a2, __int16 *a3, _BYTE *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rsi
  __int16 v15; // ax
  unsigned __int16 v16; // dx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // edx
  unsigned __int8 **v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v28; // [rsp+18h] [rbp-50h] BYREF
  void *v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-40h]
  char v31; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || *a4 < (unsigned __int8)a5 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v31 = 1;
  v11 = v10;
  v12 = (unsigned __int8)*a4;
  v30 = 8;
  v29 = (void *)v12;
  v27 = *(_QWORD *)(v11 + 8);
  v28 = (unsigned __int8 **)sub_A2E240(a1, v11, 2220, 0);
  v13 = v28;
  if ( v28 )
  {
    sub_8DF340(&v28, (__int64)&v29);
    sub_8D69A0(v13, v27);
    sub_8D6E40(v13, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
LABEL_3:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v15 = *a3;
    if ( *a3 < 0 )
    {
      v24 = (unsigned __int8 **)sub_A2E240(a1, v14, 2225, 0);
      v25 = (unsigned __int16)*a3;
      v31 = 0;
      v28 = v24;
      v30 = 16;
      v29 = (void *)v25;
      if ( v24 )
      {
        sub_8DF340(&v28, (__int64)&v29);
        if ( v30 > 0x40 )
        {
          if ( v29 )
            operator delete[](v29);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v16 = *a3;
    v17 = 16;
    if ( !v15 )
      goto LABEL_21;
    v18 = v15;
    v19 = SHIBYTE(v15);
    if ( v19 )
    {
      v23 = v18 >> 12;
      if ( v18 >> 12 )
      {
        if ( (unsigned int)v18 >> 14 )
        {
          v17 = 0;
          goto LABEL_20;
        }
        v17 = 0;
        v21 = (unsigned __int16)v23;
        goto LABEL_31;
      }
      v16 = v19;
      v26 = 0;
    }
    else
    {
      v20 = v18 >> 4;
      if ( v20 )
      {
        v16 = v20;
        v17 = 8;
        goto LABEL_17;
      }
      v26 = 8;
    }
    v17 = v26 | 4;
LABEL_17:
    v21 = v16;
    v22 = (int)v16 >> 2;
    if ( v22 )
    {
      v21 = v22;
      goto LABEL_19;
    }
LABEL_31:
    v17 |= 2u;
LABEL_19:
    if ( !(v21 >> 1) )
LABEL_20:
      v17 |= 1u;
LABEL_21:
    if ( v17 >= (unsigned __int8)*a4 )
      return 1;
    sub_A2E240(a1, v14, 2224, 0);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    return 0;
  }
  return result;
}

