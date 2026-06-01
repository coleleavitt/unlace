__int64 __fastcall sub_10BC2A0(__int64 a1, __int64 a2, unsigned __int32 a3, unsigned int a4)
{
  char v5; // al
  unsigned int v6; // edx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // r12
  unsigned __int32 v15; // r13d
  __int64 v16; // rax
  const char **v17; // rax
  const char *v18; // rbx
  __m128i v19; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+18h] [rbp-B0h]
  __m128 v21; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int32 v22; // [rsp+30h] [rbp-98h]
  __m128i v23; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int32 v24; // [rsp+50h] [rbp-78h]

  v19.m128i_i64[1] = a1;
  v5 = sub_2193B10(a2, a3, a4, 0);
  v6 = 0;
  if ( v5 )
  {
    v8 = 0;
    v23.m128i_i32[0] = a3;
    v9 = sub_2193060(a2, &v23, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v24 = a3;
    v19.m128i_i64[0] = v10 + 8 * HIDWORD(v9);
    v11 = _mm_loadl_epi64(&v19);
    v20 = v10 + 8LL * (unsigned int)v9;
    v23 = _mm_unpacklo_epi64(v11, v11);
    sub_10BC260((__int64)&v23);
    v22 = a3;
    v21 = _mm_loadh_ps((const double *)v19.m128i_i64);
    sub_10BC260((__int64)&v21);
    v12 = (_QWORD *)v21.m128_u64[1];
    v13 = (_QWORD *)v21.m128_u64[0];
    v14 = (_QWORD *)v23.m128i_i64[0];
    v15 = v22;
    v19.m128i_i64[0] = v21.m128_u64[1] - 16;
    if ( v21.m128_u64[0] != v23.m128i_i64[0] )
    {
      do
      {
        while ( 1 )
        {
          v8 = *v13;
          v16 = *(_QWORD *)(*v13 + 16LL);
          if ( !v16 )
            v16 = *v13;
          *(_BYTE *)(v16 + 44) |= 1u;
          if ( v13 + 1 != v12 )
            break;
          v13 = v12;
          if ( v14 == v12 )
            goto LABEL_13;
        }
        if ( v15 )
        {
          ++v13;
          do
          {
            if ( *v13 && (unsigned __int8)sub_2195AD0(*v13, v15) )
              break;
            ++v13;
          }
          while ( v13 != v12 );
        }
        else
        {
          v13 += ((unsigned __int64)(v19.m128i_i64[0] - (_QWORD)v13) >> 3) + 2;
        }
      }
      while ( v14 != v13 );
    }
LABEL_13:
    v17 = *(const char ***)(v8 + 48);
    v18 = *v17;
    if ( !*v17
      || j__strlen(*v17) != 4
      || (v6 = 1, *(_DWORD *)v18 != 1819047270) && (v6 = 2, *(_DWORD *)v18 != 1852401780) )
    {
      sub_FA3370((__int64)&v23, *(_QWORD *)v19.m128i_i64[1], 0, 497);
      sub_AC84E0((unsigned __int8 **)&v23, *(_BYTE **)(v8 + 24), *(_QWORD *)(v8 + 32));
      sub_10B4AF0((unsigned __int8 **)&v23, **(_QWORD **)(v8 + 48));
      sub_AC6300((__int64)&v23);
      return 0;
    }
  }
  return v6;
}

