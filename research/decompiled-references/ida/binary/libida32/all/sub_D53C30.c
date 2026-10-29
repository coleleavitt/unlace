__int64 __fastcall sub_D53C30(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v8; // r12d
  unsigned __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int8 **v14; // rax
  void *v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+18h] [rbp-50h] BYREF
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+2Ch] [rbp-3Ch]

  if ( !(unsigned __int8)sub_D31740(a4) )
    goto LABEL_37;
  v18 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v19 = (unsigned __int8 **)sub_E0FFE0(a1, &v18, 2444, 0);
  sub_D27A40((__int64)&v20, (__int64)a4, 0);
  if ( v19 )
    sub_CD4D00(&v19, (__int64)&v20);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_37:
    if ( a5 > 1 && (unsigned __int8)sub_D52A50(a4, a5) )
    {
      v16 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_D27A40((__int64)&v20, (__int64)a4, 0);
      v11 = v16;
      v17 = *(_QWORD *)(v16 + 8);
      v19 = (unsigned __int8 **)sub_E0FF50(a1, v11, 2422, 0);
      if ( v19 )
      {
        sub_CD4D00(&v19, (__int64)&v20);
        if ( v19 )
        {
          sub_AC60B0(v19, v17, 8u);
          if ( v19 )
            sub_AC60B0(v19, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v21 > 0x40 && v20 )
        {
          operator delete[](v20);
          return 0;
        }
        return result;
      }
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
    }
    if ( *(char *)(sub_E0E500(a1) + 1) >= 0 )
    {
      if ( (*a3 & 0x8000000000000000LL) != 0LL )
      {
        v13 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v14 = (unsigned __int8 **)sub_E0FF50(a1, v13, 2427, 0);
        v15 = (void *)*a3;
        v22 = 0;
        v19 = v14;
        v21 = 64;
        v20 = v15;
        if ( v14 )
        {
          sub_CD4D00(&v19, (__int64)&v20);
          if ( v21 > 0x40 )
          {
            if ( v20 )
              operator delete[](v20);
          }
        }
      }
      else
      {
        v8 = 64;
        if ( *a3 )
        {
          _BitScanReverse64(&v9, *a3);
          v8 = v9 ^ 0x3F;
        }
        if ( (unsigned int)sub_D358B0((__int64)a4) <= v8 )
          return 1;
        v12 = sub_DFB220(*(_QWORD *)(a1 + 400));
        sub_E0FF50(a1, v12, 2426, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    return 1;
  }
  return result;
}

