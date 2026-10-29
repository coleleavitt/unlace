__int64 __fastcall sub_D4E140(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r13d
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int8 **v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v21; // [rsp+18h] [rbp-50h] BYREF
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || !(unsigned __int8)sub_D4DD10(a4, a5) )
    goto LABEL_3;
  v19 = sub_DFB220(*(_QWORD *)(a1 + 400));
  sub_D23FD0((__int64)&v22, a4, 0);
  v14 = v19;
  v20 = *(_QWORD *)(v19 + 8);
  v21 = (unsigned __int8 **)sub_E0FF50(a1, v14, 2422, 0);
  if ( v21 )
  {
    sub_CD4D00(&v21, (__int64)&v22);
    if ( v21 )
    {
      sub_AC60B0(v21, v20, 8u);
      if ( v21 )
        sub_AC60B0(v21, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v23 > 0x40 && v22 )
      operator delete[](v22);
LABEL_3:
    if ( *(char *)(sub_E0E500(a1) + 1) < 0 )
      return 1;
    LOWORD(v8) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v15 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v16 = (unsigned __int8 **)sub_E0FF50(a1, v15, 2427, 0);
      v17 = (unsigned __int16)*a3;
      v24 = 0;
      v21 = v16;
      v23 = 16;
      v22 = (void *)v17;
      if ( v16 )
      {
        sub_CD4D00(&v21, (__int64)&v22);
        if ( v23 > 0x40 )
        {
          if ( v22 )
            operator delete[](v22);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v9 = 16;
    if ( !(_WORD)v8 )
    {
LABEL_13:
      if ( (unsigned int)sub_D357D0(a4) <= v9 )
        return 1;
      v18 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_E0FF50(a1, v18, 2426, 0);
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
        goto LABEL_10;
    }
    else
    {
      v9 |= 4u;
      v12 = (int)(unsigned __int16)v8 >> 2;
      if ( !v12 )
      {
LABEL_10:
        v9 |= 2u;
        goto LABEL_11;
      }
    }
    v8 = v12;
LABEL_11:
    if ( !(v8 >> 1) )
      v9 |= 1u;
    goto LABEL_13;
  }
  if ( v23 > 0x40 && v22 )
  {
    operator delete[](v22);
    return 0;
  }
  return result;
}

