__int64 __fastcall sub_952CF0(__int64 a1, __int64 a2, _WORD *a3, int *a4, unsigned int a5)
{
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int16 v13; // cx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int8 **v19; // r15
  unsigned __int8 **v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int8 **v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v27; // [rsp+18h] [rbp-50h] BYREF
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 < 0 )
  {
    v26 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v20 = (unsigned __int8 **)sub_A2E1B0(a1, &v26, 2242, 0);
    v21 = (unsigned int)*a4;
    v30 = 0;
    v27 = v20;
    v29 = 32;
    v28 = (void *)v21;
    if ( v20 )
    {
      sub_8DF340(&v27, (__int64)&v28);
      if ( v29 > 0x40 )
      {
        if ( v28 )
          operator delete[](v28);
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 || *a4 < (int)a5 )
  {
LABEL_4:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    LOWORD(v11) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v23 = (unsigned __int8 **)sub_A2E240(a1, v10, 2225, 0);
      v24 = (unsigned __int16)*a3;
      v30 = 0;
      v27 = v23;
      v29 = 16;
      v28 = (void *)v24;
      if ( v23 )
      {
        sub_8DF340(&v27, (__int64)&v28);
        if ( v29 > 0x40 )
        {
          if ( v28 )
            operator delete[](v28);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = 16;
    if ( !(_WORD)v11 )
      goto LABEL_16;
    v13 = SBYTE1(v11);
    v14 = (__int16)v11;
    if ( BYTE1(v11) )
    {
      v11 = (__int16)v11 >> 12;
      if ( v14 >> 12 )
      {
        v22 = (unsigned int)v14 >> 14 == 0;
        v11 = (unsigned __int16)v11;
        v12 = 0;
        if ( !v22 )
          goto LABEL_15;
        goto LABEL_37;
      }
      LOWORD(v11) = v13;
      v15 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v11 >> 4 )
      {
        LOWORD(v11) = (int)(unsigned __int8)v11 >> 4;
        v12 = 8;
LABEL_12:
        v11 = (unsigned __int16)v11;
        if ( (int)(unsigned __int16)v11 >> 2 )
        {
          v11 = (int)(unsigned __int16)v11 >> 2;
          goto LABEL_14;
        }
LABEL_37:
        v12 |= 2u;
LABEL_14:
        if ( !(v11 >> 1) )
LABEL_15:
          v12 |= 1u;
LABEL_16:
        if ( v12 >= *a4 )
          return 1;
        sub_A2E240(a1, v10, 2224, 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      }
      v15 = 8;
    }
    v12 = v15 | 4;
    goto LABEL_12;
  }
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v30 = 0;
  v17 = v16;
  v18 = (unsigned int)*a4;
  v29 = 32;
  v28 = (void *)v18;
  v25 = *(_QWORD *)(v17 + 8);
  v27 = (unsigned __int8 **)sub_A2E240(a1, v17, 2220, 0);
  v19 = v27;
  if ( v27 )
  {
    sub_8DF340(&v27, (__int64)&v28);
    sub_8D69A0(v19, v25);
    sub_8D6E40(v19, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    goto LABEL_4;
  }
  if ( v29 <= 0x40 || !v28 )
    return 0;
  operator delete[](v28);
  return 0;
}

