__int64 __fastcall sub_672D40(
        __int64 a1,
        unsigned __int64 *s1,
        unsigned __int64 a3,
        unsigned int a4,
        double a5,
        __m128i a6,
        double a7)
{
  unsigned __int64 *v8; // rsi
  unsigned __int64 *v11; // rax
  __int64 *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // al
  __int64 *v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24[2]; // [rsp+10h] [rbp-58h] BYREF
  int v25[2]; // [rsp+18h] [rbp-50h] BYREF
  int v26[4]; // [rsp+20h] [rbp-48h]
  bool v27; // [rsp+30h] [rbp-38h]
  char v28; // [rsp+31h] [rbp-37h]
  char v29; // [rsp+32h] [rbp-36h] BYREF
  int v30[2]; // [rsp+38h] [rbp-30h]

  *(_QWORD *)v30 = __readfsqword(0x28u);
  if ( !s1 )
    return 0xFFFFFFFFLL;
  if ( (*((_BYTE *)s1 + 44) & 8) != 0 )
    return 4294967288LL;
  v8 = (unsigned __int64 *)*s1;
  v11 = sub_505D70(a1 + 1624, (unsigned __int64)v8);
  v12 = (__int64 *)v11;
  if ( !v11 )
    return 0xFFFFFFFFLL;
  if ( s1 != v11 )
  {
    v8 = v11;
    if ( memcmp(s1, v11, 0xC0u) )
      return 0xFFFFFFFFLL;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( v13 < a3 )
    return 4294967285LL;
  v14 = v13 & (a3 - *v12);
  if ( (v14 & 1) != 0 )
    return 4294967290LL;
  v16 = -v14;
  if ( v14 > 0 )
    v16 = v13 & (a3 - *v12);
  if ( v13 < v16 )
    return 4294967285LL;
  result = 0;
  if ( v14 )
  {
    *(_QWORD *)v24 = a1;
    v17 = a4 & 0x20;
    v29 = 0;
    *(_OWORD *)v26 = 0;
    *(_QWORD *)v25 = 0;
    v27 = (a4 & 0x20) != 0;
    v18 = *(_BYTE *)(a1 + 2960);
    *(_BYTE *)(a1 + 2960) = 1;
    v28 = v18;
    if ( (a4 & 0x20) != 0 )
    {
      ++*(_DWORD *)(a1 + 800);
      sub_681B50(a1);
      v19 = *(__int64 **)v24;
    }
    else
    {
      v19 = (__int64 *)a1;
    }
    sub_5C9D00(*v19, v8, v17, v16);
    sub_672910((__int64 *)a1, v12, a3, a4, &v29, (__int64 *)v25, 0.0, a6, a7);
    sub_66FC30((__int64)v24, (int)v12, v20, v21, v22, v23);
  }
  return result;
}
