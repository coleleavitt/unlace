__int64 __fastcall enum_type_data_t__get_max_serial(__int64 *a1, __int64 a2)
{
  char v3; // bp
  unsigned int v5; // ebp
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  int *v9; // rdx
  int *v10; // rbp
  int *v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  void (__fastcall *v14)(__m128i **, const __m128i **, int); // rax
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rsi
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  int *v28; // r12
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // edx
  unsigned __int8 v32; // [rsp+3h] [rbp-75h] BYREF
  int v33; // [rsp+4h] [rbp-74h] BYREF
  __int64 v34; // [rsp+8h] [rbp-70h] BYREF
  __int128 v35; // [rsp+10h] [rbp-68h] BYREF
  __m128i v36; // [rsp+20h] [rbp-58h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v3 = *((_BYTE *)a1 + 52);
  v37 = __readfsqword(0x28u);
  v32 = 0;
  v5 = v3 & 0x10;
  if ( v5 )
  {
    v36 = 0u;
    v35 = 0;
    v6 = (_QWORD *)operator new(0x18u);
    *v6 = a1;
    v7 = _mm_loadl_epi64((const __m128i *)off_2B27AC0);
    v6[1] = a2;
    v6[2] = &v32;
    *(_QWORD *)&v35 = v6;
    v8 = a1[4];
    v36 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)sub_412760);
    if ( v8 )
    {
      v9 = (int *)a1[3];
      v10 = &v9[v8];
      if ( v9 != v10 )
      {
        v11 = (int *)a1[3];
        v12 = 0;
        while ( 1 )
        {
          v13 = *v11;
          if ( !(_DWORD)v13 )
            break;
          ++v11;
          v12 += v13;
          if ( v10 == v11 )
          {
            if ( v12 != a1[1] )
              break;
            v28 = (int *)a1[3];
            v14 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_412380;
            v29 = 0;
            do
            {
              v30 = *v28;
              v34 = v29;
              v33 = v30;
              if ( !v14 )
                std::__throw_bad_function_call();
              v31 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v36.m128i_i64[1])(&v35, &v34, &v33);
              v14 = (void (__fastcall *)(__m128i **, const __m128i **, int))v36.m128i_i64[0];
              if ( v31 )
                break;
              ++v28;
              v29 += v30;
            }
            while ( v10 != v28 );
            if ( !v36.m128i_i64[0] )
              return v32;
            goto LABEL_8;
          }
        }
      }
    }
    v14 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_412380;
LABEL_8:
    v14((__m128i **)&v35, (const __m128i **)&v35, 3);
    return v32;
  }
  else
  {
    v16 = a1[1];
    while ( v16 )
    {
      if ( (*((_BYTE *)a1 + 52) & 7) != 0 )
      {
        v17 = 1 << ((*((_BYTE *)a1 + 52) & 7) - 1);
      }
      else
      {
        v27 = getinf(61);
        v16 = a1[1];
        v17 = v27;
      }
      v18 = 8 * v17;
      if ( v18 > 63 )
      {
        v20 = a2;
        v19 = a2;
      }
      else
      {
        v19 = a2 & ((1LL << v18) - 1);
        v20 = a2 | -(1LL << v18);
      }
      v21 = *a1;
      v22 = -56;
      if ( v16 != -1 )
        v22 = 56 * v16;
      v23 = v21 + v22;
      if ( v21 == v23 )
        break;
      v24 = v5;
      v25 = *a1;
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v25 + 48);
          if ( v26 == v20 || v26 == v19 )
            break;
          v25 += 56;
          if ( v23 == v25 )
            goto LABEL_26;
        }
        if ( !v24 )
          break;
        v25 += 56;
        --v24;
        if ( v23 == v25 )
          goto LABEL_26;
      }
      if ( v25 - v21 < 0 )
        break;
      if ( (_BYTE)++v5 == 0xFF )
        return v5;
    }
LABEL_26:
    LOBYTE(v5) = ((_BYTE)v5 == 0) + v5 - 1;
  }
  return v5;
}
