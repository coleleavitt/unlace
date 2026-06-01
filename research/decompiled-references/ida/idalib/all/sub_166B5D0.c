void __fastcall sub_166B5D0(__int64 a1, __m128i a2, double a3)
{
  __int64 v3; // r9
  char v4; // r14
  __int64 v5; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  int v9; // eax
  _BYTE *v10; // rdi
  __int64 v11; // rcx
  size_t v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-130h] BYREF
  void *v14; // [rsp+28h] [rbp-128h] BYREF
  size_t n; // [rsp+30h] [rbp-120h]
  _QWORD v16[2]; // [rsp+38h] [rbp-118h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-108h] BYREF
  char v18; // [rsp+50h] [rbp-100h]
  __int64 v19; // [rsp+54h] [rbp-FCh]
  char v20; // [rsp+5Ch] [rbp-F4h]
  void *dest; // [rsp+60h] [rbp-F0h]
  __m128i v22; // [rsp+68h] [rbp-E8h] BYREF
  char v23; // [rsp+80h] [rbp-D0h]
  _BYTE v24[200]; // [rsp+88h] [rbp-C8h] BYREF

  v3 = *(unsigned int *)(a1 + 1160);
  if ( (_DWORD)v3 )
  {
    v4 = 1;
    v5 = a1 + 8;
    v7 = *(_QWORD *)(a1 + 1152);
    v8 = v7 + 32 * v3;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 -= 32;
        sub_168B9F0(v24, v5, *(unsigned int *)(v8 + 24), 7263, 0);
        sub_15F7200(v24);
        if ( v4 )
        {
          if ( *(_BYTE *)(a1 + 1237) == *(_BYTE *)(a1 + 1233)
            && *(_BYTE *)(a1 + 1238) == *(_BYTE *)(a1 + 1234)
            && *(_BYTE *)(a1 + 1236) == *(_BYTE *)(a1 + 1232)
            && *(_BYTE *)(a1 + 1239) == *(_BYTE *)(a1 + 1235) )
          {
            break;
          }
        }
        v4 = 0;
        if ( v7 == v8 )
          return;
      }
      sub_168B9F0(v24, v5, *(unsigned int *)(a1 + 1240), 6272, 0);
      v9 = sub_13DC8D0(*(_DWORD *)(a1 + 1240), 22, *(__int64 **)(a1 + 272), *(_QWORD *)(a1 + 232), 0, a2, a3);
      if ( !v9 )
        goto LABEL_10;
      v17[0] = v9;
      v17[1] = v9;
      dest = &v22.m128i_u64[1];
      v19 = 0;
      v20 = 0;
      v22.m128i_i64[0] = 0;
      v22.m128i_i8[8] = 0;
      v23 = 0;
      v18 = 0;
      v14 = v16;
      sub_1664F40(&v14, "pop", (__int64)"");
      v10 = dest;
      if ( v14 == v16 )
      {
        v12 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v16[0];
          else
            memcpy(dest, v16, n);
          v12 = n;
          v10 = dest;
        }
        v22.m128i_i64[0] = v12;
        v10[v12] = 0;
        v10 = v14;
        goto LABEL_17;
      }
      if ( dest == &v22.m128i_u64[1] )
        break;
      v13 = v16[0];
      v11 = v22.m128i_i64[1];
      dest = v14;
      a2 = (__m128i)_mm_loadh_ps((const double *)&v13);
      v22 = a2;
      if ( !v10 )
        goto LABEL_27;
      v14 = v10;
      v16[0] = v11;
LABEL_17:
      n = 0;
      *v10 = 0;
      if ( v14 != v16 )
        operator delete(v14);
      v23 = 0;
      sub_1589170((__int64)v24, v17);
      if ( dest != &v22.m128i_u64[1] )
        operator delete(dest);
LABEL_10:
      v4 = 0;
      sub_15F7200(v24);
      if ( v7 == v8 )
        return;
    }
    v13 = v16[0];
    dest = v14;
    a2 = (__m128i)_mm_loadh_ps((const double *)&v13);
    v22 = a2;
LABEL_27:
    v14 = v16;
    v10 = v16;
    goto LABEL_17;
  }
}
