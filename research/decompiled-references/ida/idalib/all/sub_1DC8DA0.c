unsigned __int64 __fastcall sub_1DC8DA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v4; // rbp
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+18h] [rbp-70h]
  _BYTE v19[104]; // [rsp+20h] [rbp-68h] BYREF

  v4 = (unsigned __int64 *)(a2 + 56);
  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  ptr = v19;
  v18 = 0x600000000LL;
  v9 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
  if ( a2 + 56 != v9 )
  {
    do
    {
      v10 = sub_1DC71F0(a1, *v4, (unsigned __int64)v5, v6, v7, v8, a3, a4);
      if ( (unsigned __int64)v10 <= 1 )
        break;
      v13 = sub_1AA8160(
              *(__int64 **)(*a1 + 744),
              *(unsigned __int8 *)(a2 + 8),
              51,
              (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( v13 <= 1 )
        break;
      v6 = (unsigned int)v18;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v18 + 1LL;
      if ( v15 > HIDWORD(v18) )
      {
        v16 = v14;
        sub_2237220(&ptr, v19, v15, 8);
        v6 = (unsigned int)v18;
        v5 = ptr;
        v14 = v16;
      }
      else
      {
        v5 = ptr;
      }
      ++v4;
      v5[v6] = v14;
      LODWORD(v18) = v18 + 1;
    }
    while ( (unsigned __int64 *)v9 != v4 );
  }
  v11 = 1;
  if ( !(unsigned __int8)sub_1AA8E70(*(_QWORD *)(*a1 + 744), *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), nullptr, 0, a3) )
    v11 = sub_1AA2840(
            *(_QWORD **)(*a1 + 744),
            8,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 48),
            (__int64 *)ptr,
            (unsigned int)v18,
            4,
            *(_DWORD *)(a2 + 44),
            *(_DWORD *)(a2 + 16),
            nullptr,
            0,
            0);
  if ( ptr != v19 )
    free(ptr);
  return v11;
}
