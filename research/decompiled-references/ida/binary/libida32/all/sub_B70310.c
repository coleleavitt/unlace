unsigned __int64 __fastcall sub_B70310(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD **v16; // rbx
  _BYTE *v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  __m128 v20; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF

  v19 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = a1;
      if ( (*(_BYTE *)(a1 + 8) & 0x7D) != 4 )
        break;
      while ( 1 )
      {
        v8 = *(_QWORD *)(sub_B68470(v7) + 16);
        if ( (v8 & 4) != 0 )
          break;
        a1 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = a1;
        if ( (*(_BYTE *)(a1 + 8) & 0x7D) != 4 )
          goto LABEL_5;
      }
      a1 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    }
LABEL_5:
    v9 = sub_B6D830(v7, a2, a3, a4, a5, a6);
    v10 = v9;
    if ( a1 == v9 )
      break;
    a1 = v9;
  }
  if ( (*(_BYTE *)(v9 + 9) & 4) != 0 )
  {
    v20.m128_u64[0] = (unsigned __int64)v21;
    v20.m128_u64[1] = 0x200000000LL;
    sub_B6E4F0(v9, (__int64)&v20, a3, a4, a5, a6);
    v16 = (_QWORD **)v20.m128_u64[0];
    v17 = (_BYTE *)(v20.m128_u64[0] + 8LL * v20.m128_u32[2]);
    if ( (_BYTE *)v20.m128_u64[0] != v17 )
    {
      do
      {
        v18 = *v16++;
        sub_B701B0(v10, v18, *(_BYTE *)(v10 + 9) & 1);
      }
      while ( v17 != (_BYTE *)v16 );
      v17 = (_BYTE *)v20.m128_u64[0];
    }
    *(_BYTE *)(v10 + 9) &= ~4u;
    if ( v17 != v21 )
      free(v17);
  }
  v11 = *(_QWORD *)v10;
  result = 0;
  if ( *(_QWORD *)v10 )
  {
    v13 = sub_B6D6D0(*(_QWORD *)v10, &v19);
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
      v14 = v11 + 8;
      v15 = 64;
    }
    else
    {
      v14 = *(_QWORD *)(v11 + 8);
      v15 = 16LL * *(unsigned int *)(v11 + 16);
    }
    sub_AA8A70(&v20, (__int64 *)(v14 + v15), (__int64 *)(v14 + v15), v11, 1);
    result = 0;
    if ( v13 != v20.m128_u64[0] )
      return *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFFCLL;
  }
  return result;
}

