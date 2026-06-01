__m128 *__fastcall sub_15B8900(__m128 *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  int v9; // eax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  void *v15; // [rsp+8h] [rbp-50h] BYREF
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  void *v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+20h] [rbp-38h]

  v8 = a3[4];
  if ( v8 )
  {
    v9 = sub_E90000(a3[4]);
    if ( v9 )
    {
      if ( v9 != 3 || ((*(__int64 *)(v8 + 8) >> 1) & 3) != 2 )
        goto LABEL_4;
      v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v14 = v13;
    }
    else
    {
      v13 = sub_15B7950(a2, v8);
      v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    }
    if ( v14 )
    {
      sub_15B7680((__int64)&v16, (__int64)a2, v13, a3[6]);
      if ( v17 != v16 )
      {
        v15 = v17;
        a1[1].m128_u64[0] = v18;
        *a1 = _mm_loadh_ps((const double *)&v15);
        return a1;
      }
      if ( v17 )
        operator delete(v17);
    }
LABEL_4:
    a1[1].m128_u64[0] = 0;
    *a1 = 0;
    return a1;
  }
  v11 = a3[2];
  if ( v11 && !(unsigned __int8)sub_BFE300(v11) )
    v8 = a3[2];
  v12 = sub_15B84F0(a2, a3[3], v8, (*a3 >> 19) & 1LL, a5, a6);
  sub_15B7680((__int64)a1, (__int64)a2, v12, a3[6]);
  return a1;
}
