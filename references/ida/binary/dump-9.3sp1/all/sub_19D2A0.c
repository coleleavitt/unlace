__int64 __fastcall sub_19D2A0(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rbx
  void *v22; // rax
  void *v23; // rbx
  __int64 v24; // rdi
  __m128i v25; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-C8h] BYREF
  size_t n; // [rsp+10h] [rbp-B8h]
  _QWORD *v30; // [rsp+18h] [rbp-B0h]
  _QWORD v31[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *dest; // [rsp+30h] [rbp-98h]
  __int64 v33; // [rsp+38h] [rbp-90h]
  __int64 v34; // [rsp+40h] [rbp-88h]
  __int128 v35; // [rsp+48h] [rbp-80h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int128 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  int v40; // [rsp+80h] [rbp-48h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v1 = 0;
  v41 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( (_DWORD)v2 )
  {
    v4 = (int)v2;
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 < v4 )
    {
      v26 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v4 )
      {
        v27 = qvector_reserve(a1, v26, v4, 8);
        *(_QWORD *)a1 = v27;
        v26 = v27;
        v5 = *(_QWORD *)(a1 + 8);
      }
      memset((void *)(v26 + 8 * v5), 0, 8 * (v4 - v5));
      *(_QWORD *)(a1 + 8) = v4;
    }
    else if ( v4 != v5 )
    {
      *(_QWORD *)(a1 + 8) = v4;
    }
    v7 = *(_QWORD *)(a1 + 32);
    dest = nullptr;
    v8 = *(_QWORD *)(v7 + 480);
    v31[0] = &off_4DE288;
    v33 = 0;
    v31[1] = v8;
    v34 = 0;
    v36 = a1;
    v37 = 0;
    v39 = -1;
    v40 = -1;
    v30 = v31;
    v35 = 0;
    v38 = 0;
    sub_331E00(v31, v7);
    *(_QWORD *)(v36 + 8) = 0;
    v9 = v37;
    v10 = v37 + 56 * v38;
    if ( v37 != v10 )
    {
      do
      {
        v11 = *(_QWORD *)(v9 + 8);
        v12 = *(void **)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8 * v11 - 8) )
        {
          v13 = (int)v11;
          v14 = (__int64)v12 + 8 * (int)v11 - 8;
          while ( 1 )
          {
            if ( (int)v13 <= 0 )
            {
              v15 = v36;
              if ( *(_QWORD *)(v36 + 8) >= v11 )
                goto LABEL_13;
              goto LABEL_28;
            }
            v14 -= 8;
            v7 = (unsigned int)(v13 - 1);
            if ( !*(_QWORD *)(v14 + 8) )
              break;
            v13 = (int)v7;
          }
          v7 = (__int64)v12 + 8 * v13;
          v21 = (8 * v13) >> 3;
          memmove(v12, (const void *)v7, 8 * v11 - 8 * v13);
          v11 = *(_QWORD *)(v9 + 8) - v21;
          *(_QWORD *)(v9 + 8) = v11;
          v15 = v36;
          if ( *(_QWORD *)(v36 + 8) >= v11 )
            goto LABEL_13;
LABEL_28:
          v28.m128i_i64[0] = v11;
          n = 8 * v11;
          v22 = (void *)qalloc_or_throw(8 * v11, v7, 8 * v11, v14);
          v7 = *(_QWORD *)v9;
          v23 = v22;
          v28 = _mm_unpacklo_epi64((__m128i)v28.m128i_u64[0], (__m128i)v28.m128i_u64[0]);
          memcpy(v22, (const void *)v7, n);
          v24 = *(_QWORD *)v15;
          if ( *(_QWORD *)v15 )
          {
            *(_QWORD *)(v15 + 8) = 0;
            qfree(v24);
          }
          v25 = _mm_load_si128(&v28);
          *(_QWORD *)v15 = v23;
          *(__m128i *)(v15 + 8) = v25;
          *(_QWORD *)(v15 + 24) = *(_QWORD *)(v9 + 24);
          *(_QWORD *)(v15 + 32) = *(_QWORD *)(v9 + 32);
          *(_DWORD *)(v15 + 40) = *(_DWORD *)(v9 + 40);
          *(_DWORD *)(v15 + 44) = *(_DWORD *)(v9 + 44);
          *(_DWORD *)(v15 + 48) = *(_DWORD *)(v9 + 48);
        }
LABEL_13:
        v9 += 56;
      }
      while ( v10 != v9 );
      v10 = v37;
      v9 = v37;
    }
    v1 = 1;
    if ( !*(_QWORD *)(v36 + 8) )
    {
      *(_DWORD *)(a1 + 44) = -1;
      v1 = 0;
    }
    v31[0] = &off_4DE288;
    if ( v10 )
    {
      v16 = v38;
      if ( (_QWORD)v38 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = (__int64 *)(v17 + v10);
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v20);
            v9 = v37;
          }
          ++v18;
          v10 = v9;
          v17 += 56;
        }
        while ( v16 != v18 );
      }
      *(_QWORD *)&v38 = 0;
      qfree(v10);
    }
    v31[0] = &unk_4EBEE0;
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    qfree((__int64)dest);
  }
  return v1;
}
