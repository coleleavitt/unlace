__int64 __fastcall sub_21B79D0(__int64 a1, unsigned int a2, unsigned int a3, __int32 a4, int a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  _QWORD *v12; // r9
  __m128 *v13; // r8
  __int64 v14; // rsi
  __int64 result; // rax
  __m128 v16; // xmm0
  _QWORD *v17; // r14
  _BYTE *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // r8
  __m128 *v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  _QWORD *v24; // [rsp+0h] [rbp-78h] BYREF
  __m128 *v25; // [rsp+8h] [rbp-70h]
  char *v26; // [rsp+10h] [rbp-68h]
  int v27; // [rsp+1Ch] [rbp-5Ch]
  __m128 v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-48h]
  unsigned int v30; // [rsp+34h] [rbp-44h]
  __int32 v31; // [rsp+38h] [rbp-40h]

  v28.m128_u64[0] = __PAIR64__(a3, a2);
  v27 = a5;
  v28.m128_i32[2] = a4;
  v8 = sub_21B6DA0(a1, (int *)&v28, 3);
  v9 = *(_QWORD *)(a1 + 8);
  v29 = a2;
  v30 = a3;
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  v31 = a4;
  v24 = v11;
  v28 = _mm_loadh_ps((const double *)&v24);
  if ( v10 != v11 )
  {
    v26 = &v28.m128_i8[12];
    do
    {
      v12 = (_QWORD *)*v10;
      v13 = &v28;
      if ( *v10 )
      {
        do
        {
          v14 = v13[1].m128_u32[0];
          v25 = v13;
          if ( !(_DWORD)v14 )
            break;
          v24 = v12;
          if ( (unsigned __int8)sub_21B9810(v12, v14) )
          {
            v24 = v11;
            v29 = a2;
            v30 = a3;
            v16 = _mm_loadh_ps((const double *)&v24);
            v31 = a4;
            v28 = v16;
            if ( v11 == v10 )
              return (unsigned __int8)v27;
            v26 = &v28.m128_i8[12];
LABEL_11:
            v17 = (_QWORD *)*v10;
            v18 = *(_BYTE **)(*v10 + 16LL);
            if ( !v18 )
              v18 = (_BYTE *)*v10;
            v19 = v10 + 1;
            v18[44] |= 1u;
            for ( v28.m128_u64[0] = (unsigned __int64)v19; v11 != v19; v28.m128_u64[0] = (unsigned __int64)v19 )
            {
              v20 = (_QWORD *)*v19;
              v21 = &v28;
              if ( *v19 )
              {
                do
                {
                  v22 = v21[1].m128_u32[0];
                  v25 = v21;
                  if ( !(_DWORD)v22 )
                    break;
                  v24 = v20;
                  v23 = sub_21B9810(v20, v22);
                  v20 = v24;
                  if ( v23 )
                  {
                    v10 = (_QWORD *)v28.m128_u64[0];
                    if ( v11 != (_QWORD *)v28.m128_u64[0] )
                      goto LABEL_11;
                    goto LABEL_19;
                  }
                  v21 = (__m128 *)&v25->m128_i16[2];
                }
                while ( &v25->m128_i16[2] != (__int16 *)v26 );
              }
              ++v19;
            }
LABEL_19:
            result = sub_21B9810(v17, a2);
            if ( !(_BYTE)result )
              return sub_21B9810(v17, a3);
            return result;
          }
          v12 = v24;
          v13 = (__m128 *)&v25->m128_i16[2];
        }
        while ( &v25->m128_i16[2] != (__int16 *)v26 );
      }
      v28.m128_u64[0] = (unsigned __int64)++v10;
    }
    while ( v11 != v10 );
  }
  return (unsigned __int8)v27;
}
