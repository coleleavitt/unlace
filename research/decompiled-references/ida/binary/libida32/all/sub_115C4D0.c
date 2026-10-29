__int64 __fastcall sub_115C4D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  void **v7; // rdi
  void **v8; // r12
  void **v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  signed __int64 v14; // rbp
  _QWORD *v15; // rbx
  __m128i v16; // xmm0
  __int64 v17; // r9
  _BYTE *v18; // r12
  signed __int64 v19; // rbp
  __int64 v20; // r13
  _BYTE *v21; // rax
  unsigned __int64 v23; // rbp
  __int64 *v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  void **v27; // rdi
  void **v28; // r14
  void **v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rbp
  __int64 *v33; // rsi
  __m128i v34; // [rsp+0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned int v36; // [rsp+1Ch] [rbp-3Ch]

  v35 = a1;
  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v5 = *(_QWORD *)a1;
    v36 = *(_DWORD *)(a2 + 8);
    v2 = v36;
    if ( v36 <= v3 )
    {
      v25 = v5;
      if ( v36 )
      {
        v30 = *(_QWORD *)a2;
        v31 = v5;
        v32 = *(_QWORD *)a2 + 56LL * v36;
        do
        {
          sub_9CAB60(v31, v30);
          v33 = (__int64 *)(v30 + 32);
          v30 += 56;
          sub_10F4C70(v31 + 32, v33);
          v31 += 56;
        }
        while ( v30 != v32 );
        v5 += 56LL * v36;
        v25 = *(_QWORD *)v35;
        v3 = *(unsigned int *)(v35 + 8);
      }
      v26 = v25 + 56 * v3;
      while ( v5 != v26 )
      {
        v26 -= 56LL;
        v27 = *(void ***)(v26 + 32);
        v28 = *(void ***)(v26 + 40);
        v29 = v27;
        if ( v28 != v27 )
        {
          do
          {
            while ( *v29 != v29 + 2 )
            {
              operator delete(*v29);
              v29 += 4;
              if ( v28 == v29 )
                goto LABEL_51;
            }
            v29 += 4;
          }
          while ( v28 != v29 );
LABEL_51:
          v27 = *(void ***)(v26 + 32);
        }
        if ( v27 )
          operator delete(v27);
        if ( *(_QWORD *)v26 != v26 + 16 )
          operator delete(*(void **)v26);
      }
    }
    else
    {
      if ( v36 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v11 = *(_QWORD *)a2;
        if ( v3 )
        {
          v3 *= 56LL;
          v23 = v11 + v3;
          do
          {
            sub_9CAB60(v5, v11);
            v24 = (__int64 *)(v11 + 32);
            v11 += 56;
            sub_10F4C70(v5 + 32, v24);
            v5 += 56;
          }
          while ( v23 != v11 );
          v2 = *(unsigned int *)(a2 + 8);
          v11 = *(_QWORD *)a2;
          v5 = *(_QWORD *)v35;
        }
      }
      else
      {
        v6 = v5 + 56 * v3;
        while ( v6 != v5 )
        {
          while ( 1 )
          {
            v6 -= 56LL;
            v7 = *(void ***)(v6 + 32);
            v8 = *(void ***)(v6 + 40);
            v9 = v7;
            if ( v8 != v7 )
            {
              do
              {
                while ( *v9 != v9 + 2 )
                {
                  operator delete(*v9);
                  v9 += 4;
                  if ( v8 == v9 )
                    goto LABEL_9;
                }
                v9 += 4;
              }
              while ( v8 != v9 );
LABEL_9:
              v7 = *(void ***)(v6 + 32);
            }
            if ( v7 )
              operator delete(v7);
            if ( *(_QWORD *)v6 == v6 + 16 )
              break;
            operator delete(*(void **)v6);
            if ( v6 == v5 )
              goto LABEL_14;
          }
        }
LABEL_14:
        v10 = (__int64 *)v35;
        v3 = 0;
        *(_DWORD *)(v35 + 8) = 0;
        sub_10E7280((__int64)v10, v2);
        v5 = *v10;
        v2 = *(unsigned int *)(a2 + 8);
        v11 = *(_QWORD *)a2;
      }
      v12 = v5 + v3;
      v13 = v11 + v3;
      v34.m128i_i64[1] = v11 + 56 * v2;
      if ( v13 != v34.m128i_i64[1] )
      {
        while ( 1 )
        {
          *(_QWORD *)v12 = v12 + 16;
          sub_115A670((_QWORD *)v12, *(_BYTE **)v13, *(_QWORD *)v13 + *(_QWORD *)(v13 + 8));
          v14 = *(_QWORD *)(v13 + 40) - *(_QWORD *)(v13 + 32);
          *(_OWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 48) = 0;
          if ( v14 >> 5 )
          {
            if ( (unsigned __int64)(v14 >> 5) > 0x7FFFFFFFFFFFFFFLL )
              std::__throw_bad_alloc();
            v15 = (_QWORD *)operator new(v14);
          }
          else
          {
            v15 = nullptr;
          }
          v34.m128i_i64[0] = (__int64)v15;
          v16 = _mm_loadl_epi64(&v34);
          *(_QWORD *)(v12 + 48) = (char *)v15 + v14;
          *(__m128i *)(v12 + 32) = _mm_unpacklo_epi64(v16, v16);
          v17 = *(_QWORD *)(v13 + 32);
          v34.m128i_i64[0] = *(_QWORD *)(v13 + 40);
          if ( v34.m128i_i64[0] != v17 )
            break;
LABEL_30:
          *(_QWORD *)(v12 + 40) = v15;
          v13 += 56LL;
          v12 += 56LL;
          if ( v13 == v34.m128i_i64[1] )
            goto LABEL_31;
        }
        *v15 = v15 + 2;
        v18 = *(_BYTE **)v17;
        v19 = *(_QWORD *)(v17 + 8);
        if ( v19 + *(_QWORD *)v17 && !v18 )
LABEL_29:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v20 = v17 + 32;
        while ( (unsigned __int64)v19 <= 0xF )
        {
          v21 = (_BYTE *)*v15;
          if ( v19 == 1 )
          {
            *v21 = *v18;
            v21 = (_BYTE *)*v15;
          }
          else if ( v19 )
          {
            goto LABEL_43;
          }
LABEL_26:
          v15[1] = v19;
          v15 += 4;
          v21[v19] = 0;
          if ( v20 == v34.m128i_i64[0] )
            goto LABEL_30;
          v20 += 32;
          *v15 = v15 + 2;
          v18 = *(_BYTE **)(v20 - 32);
          v19 = *(_QWORD *)(v20 - 24);
          if ( &v18[v19] && !v18 )
            goto LABEL_29;
        }
        if ( v19 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v21 = (_BYTE *)operator new(v19 + 1);
        v15[2] = v19;
        *v15 = v21;
LABEL_43:
        memcpy(v21, v18, v19);
        v21 = (_BYTE *)*v15;
        goto LABEL_26;
      }
    }
LABEL_31:
    *(_DWORD *)(v35 + 8) = v36;
  }
  return v35;
}

