__int64 __fastcall sub_D3ABD0(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  unsigned __int8 **v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rsi
  unsigned __int8 **v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v23; // [rsp+18h] [rbp-50h] BYREF
  void *v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 >= 0 )
    goto LABEL_3;
  v22 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v16 = (unsigned __int8 **)sub_E0FFE0(a1, &v22, 2444, 0);
  v17 = (unsigned __int16)*a4;
  v26 = 0;
  v23 = v16;
  v25 = 16;
  v24 = (void *)v17;
  if ( v16 )
  {
    sub_CD4D00(&v23, (__int64)&v24);
    if ( v25 > 0x40 )
    {
      if ( v24 )
        operator delete[](v24);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_3:
    if ( a5 > 1 && *a4 >= a5 )
    {
      v13 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v14 = (unsigned __int16)*a4;
      v25 = 16;
      v24 = (void *)v14;
      v26 = 0;
      v15 = *(_QWORD *)(v13 + 8);
      v23 = (unsigned __int8 **)sub_E0FF50(a1, v13, 2422, 0);
      if ( v23 )
      {
        sub_CD4D00(&v23, (__int64)&v24);
        if ( v23 )
        {
          sub_AC60B0(v23, v15, 8u);
          if ( v23 )
            sub_AC60B0(v23, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v25 > 0x40 && v24 )
        {
          operator delete[](v24);
          return 0;
        }
        return result;
      }
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
    }
    v8 = sub_E0E500(a1);
    result = 1;
    if ( *(char *)(v8 + 1) < 0 )
      return result;
    LOBYTE(v10) = *a3;
    if ( (char)*a3 < 0 )
    {
      v19 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v20 = (unsigned __int8 **)sub_E0FF50(a1, v19, 2427, 0);
      v21 = (unsigned __int8)*a3;
      v26 = 0;
      v23 = v20;
      v25 = 8;
      v24 = (void *)v21;
      if ( v20 )
      {
        sub_CD4D00(&v23, (__int64)&v24);
        if ( v25 > 0x40 )
        {
          if ( v24 )
            operator delete[](v24);
        }
      }
    }
    else
    {
      v11 = 8;
      if ( (_BYTE)v10 )
      {
        v12 = (int)(unsigned __int8)v10 >> 4;
        if ( v12 )
          LOBYTE(v10) = v12;
        v10 = (unsigned __int8)v10;
        v11 = v12 == 0 ? 4 : 0;
        if ( (int)(unsigned __int8)v10 >> 2 )
          v10 = (int)(unsigned __int8)v10 >> 2;
        else
          v11 |= 2u;
        if ( !(v10 >> 1) )
          v11 |= 1u;
      }
      result = 1;
      if ( *a4 <= v11 )
        return result;
      v18 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_E0FF50(a1, v18, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  return result;
}

