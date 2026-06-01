__int64 __fastcall sub_3786F0(_QWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 tinfo_property; // rax
  __int64 v10; // r15
  _QWORD *v11; // r13
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // ecx
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rsi
  __int64 i; // rax
  unsigned __int64 *v18; // rcx
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v5 = a1[5];
  v6 = a1[9];
  v23 = __readfsqword(0x28u);
  v8 = a1[1];
  v20 = 0;
  *(_QWORD *)(a2 + 8) = -1;
  get_type_by_tid(&v20, v8);
  tinfo_property = get_tinfo_property(v20, 310);
  v10 = tinfo_property;
  if ( tinfo_property )
  {
    ptr = nullptr;
    v22 = 0;
    sub_377CC0((__int64)&ptr, tinfo_property, v6, 0.0, a4, a5);
    v11 = ptr;
    v12 = v22;
    if ( (*(_BYTE *)(v10 + 52) & 7) != 0 )
      v13 = 1 << ((*(_BYTE *)(v10 + 52) & 7) - 1);
    else
      v13 = (unsigned __int8)getinf(61);
    v14 = 8 * v13;
    v15 = v5;
    if ( v14 <= 63 )
      v15 = ~(-1LL << v14) & v5;
    v16 = v11;
    for ( i = (8 * v12) >> 3; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v18 = &v16[i >> 1];
        if ( *v18 >= v15 )
          break;
        v16 = v18 + 1;
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_10;
      }
    }
LABEL_10:
    if ( v16 != v11 )
      *(_QWORD *)(a2 + 8) = *(v16 - 1);
    if ( v11 )
      qfree(v11);
  }
  clear_tinfo_t(&v20);
  return 0;
}
