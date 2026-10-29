__int64 __fastcall sub_D52B20(__int64 a1, __int64 a2, _BYTE *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r13d
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int8 **v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v20; // [rsp+18h] [rbp-50h] BYREF
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]

  if ( !(unsigned __int8)sub_D31740(a4) )
    goto LABEL_43;
  v19 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v20 = (unsigned __int8 **)sub_E0FFE0(a1, &v19, 2444, 0);
  sub_D27A40((__int64)&v21, (__int64)a4, 0);
  if ( v20 )
    sub_CD4D00(&v20, (__int64)&v21);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_43:
    if ( a5 > 1 && (unsigned __int8)sub_D52A50(a4, a5) )
    {
      v17 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_D27A40((__int64)&v21, (__int64)a4, 0);
      v12 = v17;
      v18 = *(_QWORD *)(v17 + 8);
      v20 = (unsigned __int8 **)sub_E0FF50(a1, v12, 2422, 0);
      if ( v20 )
      {
        sub_CD4D00(&v20, (__int64)&v21);
        if ( v20 )
        {
          sub_AC60B0(v20, v18, 8u);
          if ( v20 )
            sub_AC60B0(v20, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v22 > 0x40 && v21 )
        {
          operator delete[](v21);
          return 0;
        }
        return result;
      }
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
    }
    if ( *(char *)(sub_E0E500(a1) + 1) >= 0 )
    {
      LOBYTE(v8) = *a3;
      if ( (char)*a3 < 0 )
      {
        v14 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v15 = (unsigned __int8 **)sub_E0FF50(a1, v14, 2427, 0);
        v16 = (unsigned __int8)*a3;
        v23 = 0;
        v20 = v15;
        v22 = 8;
        v21 = (void *)v16;
        if ( v15 )
        {
          sub_CD4D00(&v20, (__int64)&v21);
          if ( v22 > 0x40 )
          {
            if ( v21 )
              operator delete[](v21);
          }
        }
      }
      else
      {
        v9 = 8;
        if ( (_BYTE)v8 )
        {
          v10 = (int)(unsigned __int8)v8 >> 4;
          if ( v10 )
            LOBYTE(v8) = v10;
          v8 = (unsigned __int8)v8;
          v9 = v10 == 0 ? 4 : 0;
          if ( (int)(unsigned __int8)v8 >> 2 )
            v8 = (int)(unsigned __int8)v8 >> 2;
          else
            v9 |= 2u;
          if ( !(v8 >> 1) )
            v9 |= 1u;
        }
        if ( (unsigned int)sub_D358B0((__int64)a4) <= v9 )
          return 1;
        v13 = sub_DFB220(*(_QWORD *)(a1 + 400));
        sub_E0FF50(a1, v13, 2426, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    return 1;
  }
  return result;
}

