__int64 __fastcall sub_C27B10(unsigned __int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned __int8 v6; // [rsp+1h] [rbp-3D9h]
  _WORD v7[4]; // [rsp+2h] [rbp-3D8h] BYREF
  __int64 v8; // [rsp+Ah] [rbp-3D0h]
  __m128 v9[60]; // [rsp+12h] [rbp-3C8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
    return 0;
  v7[0] = 0;
  v8 = 0;
  sub_BEEB30(v9, a3, (__int64)v7, 2);
  v6 = sub_C26D90(a1, a4, (__int64)v9, a2);
  sub_C00040((__int64)v9, a4);
  return v6;
}

