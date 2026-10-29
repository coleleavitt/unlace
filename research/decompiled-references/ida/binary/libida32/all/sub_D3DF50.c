__int64 __fastcall sub_D3DF50(__int64 a1, __int64 a2, _WORD *a3, int *a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  unsigned __int8 **v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  unsigned __int8 **v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v25; // [rsp+18h] [rbp-50h] BYREF
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 >= 0 )
    goto LABEL_3;
  v24 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v18 = (unsigned __int8 **)sub_E0FFE0(a1, &v24, 2444, 0);
  v19 = (unsigned int)*a4;
  v28 = 0;
  v25 = v18;
  v27 = 32;
  v26 = (void *)v19;
  if ( v18 )
  {
    sub_CD4D00(&v25, (__int64)&v26);
    if ( v27 > 0x40 )
    {
      if ( v26 )
        operator delete[](v26);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_3:
    if ( a5 > 1 && *a4 >= a5 )
    {
      v15 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v16 = (unsigned int)*a4;
      v27 = 32;
      v26 = (void *)v16;
      v28 = 0;
      v17 = *(_QWORD *)(v15 + 8);
      v25 = (unsigned __int8 **)sub_E0FF50(a1, v15, 2422, 0);
      if ( v25 )
      {
        sub_CD4D00(&v25, (__int64)&v26);
        if ( v25 )
        {
          sub_AC60B0(v25, v17, 8u);
          if ( v25 )
            sub_AC60B0(v25, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v27 > 0x40 && v26 )
        {
          operator delete[](v26);
          return 0;
        }
        return result;
      }
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
    }
    v8 = sub_E0E500(a1);
    result = 1;
    if ( *(char *)(v8 + 1) < 0 )
      return result;
    LOWORD(v10) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v21 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v22 = (unsigned __int8 **)sub_E0FF50(a1, v21, 2427, 0);
      v23 = (unsigned __int16)*a3;
      v28 = 0;
      v25 = v22;
      v27 = 16;
      v26 = (void *)v23;
      if ( v22 )
      {
        sub_CD4D00(&v25, (__int64)&v26);
        if ( v27 > 0x40 )
        {
          if ( v26 )
            operator delete[](v26);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v11 = 16;
    if ( !(_WORD)v10 )
    {
LABEL_14:
      result = 1;
      if ( *a4 <= v11 )
        return result;
      v20 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_E0FF50(a1, v20, 2426, 0);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = BYTE1(v10);
    if ( BYTE1(v10) )
      LOWORD(v10) = BYTE1(v10);
    v10 = (unsigned __int16)v10;
    v11 = v12 == 0 ? 8 : 0;
    v13 = (int)(unsigned __int16)v10 >> 4;
    if ( v13 )
    {
      v10 = (int)(unsigned __int16)v10 >> 4;
      v14 = v13 >> 2;
      if ( !v14 )
        goto LABEL_11;
    }
    else
    {
      v11 |= 4u;
      v14 = (int)(unsigned __int16)v10 >> 2;
      if ( !v14 )
      {
LABEL_11:
        v11 |= 2u;
        goto LABEL_12;
      }
    }
    v10 = v14;
LABEL_12:
    if ( !(v10 >> 1) )
      v11 |= 1u;
    goto LABEL_14;
  }
  return result;
}

