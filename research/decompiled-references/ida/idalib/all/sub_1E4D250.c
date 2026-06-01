__int64 __fastcall sub_1E4D250(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  _BYTE *v10; // rax
  __int16 v11; // ax
  const __m128i *v12; // rbx
  unsigned int v13; // r13d
  const __m128i *v14; // r12
  __int64 *v15; // rbp
  __int64 v16; // r12
  int v17; // eax
  _BYTE v18[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-64h]
  const __m128i *v20; // [rsp+8h] [rbp-60h]
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-38h]

  switch ( a7 & 0x7FFFFFFF )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
      return 0;
    case 1:
      v8 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v8 + 16) != 45 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 45 )
          return 0;
        v8 = sub_F63050(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), v8, a3, a4);
        if ( !v8 )
          return 0;
      }
      sub_F5E520((__int64)v18, v8);
      goto LABEL_10;
    case 6:
      sub_F22A90(&v21, a8);
      v10 = sub_F22F10(v21.m128i_i64);
      if ( !v10 )
        return 0;
      sub_F22160((__int64)v18, (__int64)v10);
      goto LABEL_10;
    case 8:
      v11 = *(_WORD *)a8 & 0x1FF;
      if ( v11 == 7 )
      {
        sub_C95B30((__int64)v18, a8);
LABEL_10:
        v12 = v20;
        v13 = v19;
        v14 = (const __m128i *)((char *)v20 + 24 * v19);
LABEL_11:
        if ( v12 == v14 )
          return v13 + 1;
        while ( 1 )
        {
          v21 = _mm_loadu_si128(v12);
          v22 = v12[1].m128i_i64[0];
          if ( sub_F1D570((__int64)&v21) || (unsigned __int8)sub_F1D5E0((__int64)&v21) )
            break;
          v12 = (const __m128i *)((char *)v12 + 24);
          if ( v14 == v12 )
            return v13 + 1;
        }
        return 0;
      }
      if ( v11 != 59 )
        return 0;
      v15 = (__int64 *)(a8 + 32);
      v16 = a8 + 8LL * *(unsigned int *)(a8 + 28) + 32;
      v17 = *(_DWORD *)(a8 + 28);
      if ( v16 != a8 + 32 )
      {
        do
        {
          if ( sub_B799A0(*v15) )
            return 0;
          ++v15;
        }
        while ( (__int64 *)v16 != v15 );
        v17 = *(_DWORD *)(a8 + 28);
      }
      return (unsigned int)(v17 + 1);
    default:
      v14 = nullptr;
      v12 = nullptr;
      v13 = 0;
      goto LABEL_11;
  }
}
