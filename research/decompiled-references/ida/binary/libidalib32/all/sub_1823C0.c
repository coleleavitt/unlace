__int64 __fastcall sub_1823C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebp
  size_t v18; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v20; // rbx
  void *v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  _QWORD *v27; // rax
  unsigned __int8 *v29; // rsi
  signed __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int128 v32; // xmm0
  unsigned __int64 v33; // rdx
  __m128i v34; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v35; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-C0h]
  void *src; // [rsp+38h] [rbp-B0h]
  __int128 v39; // [rsp+40h] [rbp-A8h]
  __int64 v40; // [rsp+50h] [rbp-98h]
  __int128 v41; // [rsp+58h] [rbp-90h]
  __int128 v42; // [rsp+68h] [rbp-80h]
  __int128 v43; // [rsp+78h] [rbp-70h]
  __int128 v44; // [rsp+88h] [rbp-60h]
  int v45; // [rsp+98h] [rbp-50h]
  __int64 v46; // [rsp+A0h] [rbp-48h]
  _QWORD v47[8]; // [rsp+A8h] [rbp-40h] BYREF

  v4 = *a1;
  v47[2] = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 224))(a1);
  v36 = 0;
  v37 = 0;
  v7 = v6;
  v39 = 0;
  v41 = 0;
  src = nullptr;
  v40 = 0;
  v45 = -1;
  v46 = 12;
  memset(v47, 255, 12);
  v42 = 0;
  v43 = 0;
  v44 = 0;
  if ( v6 )
  {
    v8 = qvector_reserve();
    v9 = v37;
    v36 = v8;
    if ( (unsigned __int64)v37 < v7 )
    {
      v10 = 24 * v37;
      v11 = 24 * v37 + v8;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      v12 = v9 + 1;
      if ( v9 + 1 < v7 )
      {
        v13 = v10 + 24;
        do
        {
          ++v12;
          v14 = v13 + v36;
          v13 += 24;
          *(_QWORD *)v14 = 0;
          *(_OWORD *)(v14 + 8) = 0;
        }
        while ( v7 != v12 );
      }
    }
    v15 = v39;
    *(_QWORD *)&v37 = v7;
    if ( v7 != (_QWORD)v39 )
    {
      v35 = 0;
      if ( v7 >= (unsigned __int64)v39 )
      {
        if ( &v35 < src || &v35 >= (__m128i *)((char *)src + 16 * *((_QWORD *)&v39 + 1)) )
        {
          if ( *((_QWORD *)&v39 + 1) < v7 )
          {
            src = (void *)qvector_reserve();
            v15 = v39;
          }
          if ( v15 < v7 )
          {
            do
            {
              v16 = v15++;
              *((__m128i *)src + v16) = _mm_load_si128(&v35);
            }
            while ( v7 != v15 );
          }
        }
        else
        {
          v32 = 0;
          if ( *((_QWORD *)&v39 + 1) < v7 )
          {
            src = (void *)qvector_reserve();
            v32 = 0;
            v15 = v39;
          }
          if ( v15 < v7 )
          {
            do
            {
              v33 = v15++;
              *((_OWORD *)src + v33) = v32;
            }
            while ( v7 != v15 );
          }
        }
      }
      *(_QWORD *)&v39 = v7;
    }
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 96))(a1, &v36, a3);
  if ( (_BYTE)v17 )
  {
    sub_17F840(&v36);
    for ( i = 0; i < (unsigned __int64)v37; ++i )
    {
      v31 = v36 + 24 * i;
      v30 = *(_QWORD *)(v31 + 8);
      if ( v30 )
      {
        v29 = *(unsigned __int8 **)v31;
        --v30;
      }
      else
      {
        v29 = (unsigned __int8 *)s1;
      }
      sub_1820F0((__int64 **)a2, v29, v30, 0, v18);
    }
    v20 = v39;
    v21 = nullptr;
    *(_QWORD *)(a2 + 112) = v46;
    *(_DWORD *)(a2 + 120) = v47[0];
    if ( v20 )
    {
      v21 = (void *)qalloc_or_throw();
      memcpy(v21, src, 16 * v20);
    }
    v22 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
    if ( *(_QWORD *)(a2 + 32) )
    {
      *(_QWORD *)(a2 + 40) = 0;
      v34 = v22;
      qfree();
      v22 = _mm_load_si128(&v34);
    }
    v23 = *(_QWORD *)((char *)v47 + 4);
    *(_QWORD *)(a2 + 32) = v21;
    *(__m128i *)(a2 + 40) = v22;
    *(_QWORD *)(a2 + 124) = v23;
  }
  if ( (_QWORD)v42 )
  {
    *((_QWORD *)&v42 + 1) = 0;
    qfree();
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  v24 = v36;
  if ( v36 )
  {
    v25 = v37;
    if ( (_QWORD)v37 )
    {
      v26 = 0;
      do
      {
        v27 = (_QWORD *)(v24 + 24 * v26);
        if ( *v27 )
        {
          v27[1] = 0;
          qfree();
          v24 = v36;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v17;
}

