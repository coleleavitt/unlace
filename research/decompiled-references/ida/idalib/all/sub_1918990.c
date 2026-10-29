__int64 __fastcall sub_1918990(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned int a5, __m128 a6, __m128 a7)
{
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  bool v13; // al
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-D8h]
  _BYTE v18[200]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = a4;
  if ( a5 == 9 )
  {
    sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), a4, 0x143Bu, 0);
    sub_15F7200(v18);
    return 0;
  }
  else
  {
    result = sub_1918440(a1, a2, a3, a4, 0, 2, a6, a7);
    v11 = result;
    if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v12 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v17 = *(_QWORD *)(v12 + 8);
      sub_18CF4F0(a1, (__int64 *)v7, v12, *a3 & 0xFFFFFFFFFFFFFFFELL, a5, *(double *)a6.m128_u64);
      v13 = sub_F580C0(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
      v14 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v13 )
      {
        sub_16D2360(a1, v7, *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a5, *(double *)a6.m128_u64);
        v14 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 13 )
        v15 = 0;
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                  + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 13
        && v15
        && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x64
        && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x64 )
      {
        return v17;
      }
      else
      {
        return sub_18C30D0(a1, v11);
      }
    }
  }
  return result;
}
