__int64 __fastcall sub_D4ED20(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int8 **v13; // rax
  void *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v18; // [rsp+18h] [rbp-50h] BYREF
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 || !(unsigned __int8)sub_D4DD10(a4, a5) )
    goto LABEL_3;
  v16 = sub_DFB220(*(_QWORD *)(a1 + 400));
  sub_D23FD0((__int64)&v19, a4, 0);
  v11 = v16;
  v17 = *(_QWORD *)(v16 + 8);
  v18 = (unsigned __int8 **)sub_E0FF50(a1, v11, 2422, 0);
  if ( v18 )
  {
    sub_CD4D00(&v18, (__int64)&v19);
    if ( v18 )
    {
      sub_AC60B0(v18, v17, 8u);
      if ( v18 )
        sub_AC60B0(v18, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
LABEL_3:
    if ( *(char *)(sub_E0E500(a1) + 1) >= 0 )
    {
      if ( (*a3 & 0x8000000000000000LL) != 0LL )
      {
        v12 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v13 = (unsigned __int8 **)sub_E0FF50(a1, v12, 2427, 0);
        v14 = (void *)*a3;
        v21 = 0;
        v18 = v13;
        v20 = 64;
        v19 = v14;
        if ( v13 )
        {
          sub_CD4D00(&v18, (__int64)&v19);
          if ( v20 > 0x40 )
          {
            if ( v19 )
              operator delete[](v19);
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
        if ( (unsigned int)sub_D357D0(a4) <= v8 )
          return 1;
        v15 = sub_DFB220(*(_QWORD *)(a1 + 400));
        sub_E0FF50(a1, v15, 2426, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    return 1;
  }
  if ( v20 > 0x40 && v19 )
  {
    operator delete[](v19);
    return 0;
  }
  return result;
}

