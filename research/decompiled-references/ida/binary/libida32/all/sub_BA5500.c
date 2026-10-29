__int64 __fastcall sub_BA5500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  unsigned int v9; // eax
  int v10; // eax
  __int64 result; // rax
  double v12; // xmm0_8
  __int64 v13; // [rsp+8h] [rbp-10h] BYREF

  v9 = a7 & 7;
  if ( v9 == 7 )
  {
    v10 = 3;
    if ( *(_DWORD *)(a7 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v10 = *(_DWORD *)(a7 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = v10 + 8;
  }
  if ( v9 < 3 )
    return 1;
  if ( v9 > 5 )
  {
    if ( v9 == 8 )
    {
      v12 = sub_EFED60(&v13, *(_QWORD *)((a7 & 0xFFFFFFFFFFFFFFF8LL) + 16));
      return (*(__int64 (__fastcall **)(__int64, __int64, double))(*(_QWORD *)a1 + 120LL))(a1, v13, v12);
    }
    return 1;
  }
  result = 1;
  if ( a9 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a1 + 136LL))(a1, *a9, a9 + 1);
  return result;
}

