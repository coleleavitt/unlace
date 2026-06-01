__int64 __fastcall sub_1143150(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __m128 *v15; // rbx
  __m128 *v16; // r14
  unsigned __int64 v17; // r15
  __m128 *v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  _QWORD *v23; // r13
  __int64 result; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __m128 *v30; // rbx
  unsigned __int64 v31; // r15
  __m128 *v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128 *v37; // [rsp+0h] [rbp-68h] BYREF
  char *v38; // [rsp+8h] [rbp-60h]
  __m128 v39; // [rsp+10h] [rbp-58h] BYREF
  __int64 v40; // [rsp+20h] [rbp-48h]
  int v41; // [rsp+28h] [rbp-40h]

  v39.m128_i32[0] = 2419;
  v5 = sub_2193060(a2, &v39, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2419) )
    {
      if ( v8 == ++v7 )
        goto LABEL_5;
    }
    if ( v8 != v7 )
    {
      do
      {
        v25 = *v7;
        v26 = *(_QWORD *)(*v7 + 16LL);
        if ( !v26 )
          v26 = *v7;
        ++v7;
        *(_BYTE *)(v26 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2419) )
        {
          if ( v8 == ++v7 )
            goto LABEL_30;
        }
      }
      while ( v8 != v7 );
LABEL_30:
      sub_2191D00(v25, a2, a3);
    }
  }
LABEL_5:
  v39.m128_i32[0] = 2334;
  v9 = sub_2193060(a2, &v39, 1);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
  v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
  if ( v11 != v12 )
  {
    while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2334) )
    {
      if ( v12 == ++v11 )
        goto LABEL_9;
    }
    if ( v12 != v11 )
    {
      do
      {
        v27 = *v11;
        v28 = *(_QWORD *)(*v11 + 16LL);
        if ( !v28 )
          v28 = *v11;
        ++v11;
        *(_BYTE *)(v28 + 44) |= 1u;
        if ( v11 == v12 )
          break;
        while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2334) )
        {
          if ( v12 == ++v11 )
            goto LABEL_40;
        }
      }
      while ( v12 != v11 );
LABEL_40:
      sub_2191D00(v27, a2, a3);
    }
  }
LABEL_9:
  sub_21936A0(a2, a3, 2977, 2769);
  v39.m128_u64[0] = 0xAB500000B5ELL;
  v39.m128_i32[2] = 2911;
  v13 = sub_2193060(a2, &v39, 3);
  v14 = *(_QWORD *)(a2 + 8);
  v40 = 0xAB500000B5ELL;
  v41 = 2911;
  v15 = (__m128 *)(v14 + 8LL * (unsigned int)v13);
  v16 = (__m128 *)(v14 + 8 * HIDWORD(v13));
  v37 = v16;
  v39 = _mm_loadh_ps((const double *)&v37);
  if ( v15 != v16 )
  {
    v38 = &v39.m128_i8[12];
    do
    {
      v17 = v15->m128_u64[0];
      v18 = &v39;
      if ( v15->m128_u64[0] )
      {
        do
        {
          v19 = v18[1].m128_u32[0];
          v37 = v18;
          if ( !(_DWORD)v19 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v17, v19) )
          {
            v37 = v16;
            v40 = 0xAB500000B5ELL;
            v41 = 2911;
            v39 = _mm_loadh_ps((const double *)&v37);
            if ( v15 != v16 )
            {
              v38 = &v39.m128_i8[12];
LABEL_45:
              v29 = v15->m128_u64[0];
              if ( *(_QWORD *)(v15->m128_u64[0] + 16) )
                v29 = *(_QWORD *)(v15->m128_u64[0] + 16);
              v30 = (__m128 *)&v15->m128_u16[4];
              *(_BYTE *)(v29 + 44) |= 1u;
              for ( v39.m128_u64[0] = (unsigned __int64)v30; v16 != v30; v39.m128_u64[0] = (unsigned __int64)v30 )
              {
                v31 = v30->m128_u64[0];
                v32 = &v39;
                if ( v30->m128_u64[0] )
                {
                  do
                  {
                    v33 = v32[1].m128_u32[0];
                    v37 = v32;
                    if ( !(_DWORD)v33 )
                      break;
                    if ( (unsigned __int8)sub_2195AD0(v31, v33) )
                    {
                      v15 = (__m128 *)v39.m128_u64[0];
                      if ( v16 != (__m128 *)v39.m128_u64[0] )
                        goto LABEL_45;
                      goto LABEL_53;
                    }
                    v32 = (__m128 *)&v37->m128_i16[2];
                  }
                  while ( &v37->m128_i16[2] != (__int16 *)v38 );
                }
                v30 = (__m128 *)((char *)v30 + 8);
              }
LABEL_53:
              sub_1142860(a2, a3);
            }
            goto LABEL_16;
          }
          v18 = (__m128 *)&v37->m128_i16[2];
        }
        while ( &v37->m128_i16[2] != (__int16 *)v38 );
      }
      v15 = (__m128 *)((char *)v15 + 8);
      v39.m128_u64[0] = (unsigned __int64)v15;
    }
    while ( v16 != v15 );
  }
LABEL_16:
  v39.m128_i32[0] = 2849;
  v20 = sub_2193060(a2, &v39, 1);
  v21 = *(_QWORD *)(a2 + 8);
  v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
  v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
  if ( v22 != v23 )
  {
    while ( !*v22 || !(unsigned __int8)sub_2195AD0(*v22, 2849) )
    {
      if ( v23 == ++v22 )
        goto LABEL_20;
    }
    if ( v22 != v23 )
    {
      do
      {
        v34 = *v22;
        if ( *(_QWORD *)(*v22 + 16LL) )
          v34 = *(_QWORD *)(*v22 + 16LL);
        ++v22;
        *(_BYTE *)(v34 + 44) |= 1u;
        if ( v22 == v23 )
          break;
        while ( !*v22 || !(unsigned __int8)sub_2195AD0(*v22, 2849) )
        {
          if ( v23 == ++v22 )
            goto LABEL_63;
        }
      }
      while ( v23 != v22 );
LABEL_63:
      v35 = *(unsigned int *)(a3 + 8);
      if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_22134E0(a3, a3 + 16, v35 + 1, 8);
        v35 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v35) = "-msave-reg-params";
      ++*(_DWORD *)(a3 + 8);
    }
  }
LABEL_20:
  if ( (unsigned __int8)sub_2193B10(a2, 1958, 1486, 1) )
  {
    v36 = *(unsigned int *)(a3 + 8);
    if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v36 + 1, 8);
      v36 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v36) = "-fxl-pragma-pack";
    ++*(_DWORD *)(a3 + 8);
  }
  result = sub_10BAF60(a2, 0x70Fu, 0x57Cu);
  if ( !result )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fno-sized-deallocation";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}

