unsigned __int64 __fastcall sub_19CC80(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  size_t v6; // rbx
  void *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // r13
  __int64 v20; // rbp
  size_t v21; // r14
  void *v22; // rax
  __int64 v23; // rbp
  _QWORD *v24; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int128 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a1 )
  {
    v28 = 0;
    v27 = qvector_reserve();
    v1 = v27;
    if ( TProgram::application )
    {
      v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(TProgram::application + 136LL) + 32LL))(
                       TProgram::application + 136LL,
                       0);
      do
      {
        v3 = v2[1];
        v4 = 0;
        if ( v3 )
        {
          do
          {
            while ( 1 )
            {
              v5 = *(_QWORD *)(*v2 + 8 * v4);
              v6 = *(_QWORD *)(v5 + 48);
              if ( v6 > 1 )
                break;
              if ( v3 == ++v4 )
                goto LABEL_11;
            }
            v7 = (void *)qalloc_or_throw();
            memcpy(v7, *(const void **)(v5 + 40), v6);
            v8 = v28;
            v9 = v27;
            if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
            {
              v27 = qvector_reserve();
              v8 = v28;
              v9 = v27;
            }
            ++v4;
            v10 = v9 + 24 * v8;
            *(_QWORD *)v10 = v7;
            *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
            *(_QWORD *)&v28 = v28 + 1;
          }
          while ( v3 != v4 );
        }
LABEL_11:
        v2 = (_QWORD *)v2[15];
      }
      while ( v2 );
      v1 = v27;
    }
    v11 = 24 * v28;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v28) >> 3);
    if ( v12 )
    {
      v13 = a1[1];
      v14 = *a1;
      v15 = 3 * v13;
      v16 = v13 - 0x5555555555555555LL * ((24 * (__int64)v28) >> 3);
      v17 = 0;
      v18 = 8 * v15;
      if ( a1[2] < v16 )
      {
        v26 = qvector_reserve();
        *a1 = v26;
        v14 = v26;
        v17 = 24 * a1[1] - v18;
      }
      v19 = (_QWORD *)(v14 + v18);
      v20 = v1 + v11;
      memmove(&v19[(unsigned __int64)v11 / 8], v19, v17);
      if ( v1 + v11 != v1 )
      {
        do
        {
          while ( 1 )
          {
            *v19 = 0;
            *(_OWORD *)(v19 + 1) = 0;
            v21 = *(_QWORD *)(v1 + 8);
            if ( v21 )
              break;
            v1 += 24;
            v19 += 3;
            if ( v20 == v1 )
              goto LABEL_21;
          }
          v22 = (void *)qalloc_or_throw();
          *v19 = v22;
          v1 += 24;
          v19[2] = v21;
          v19 += 3;
          memcpy(v22, *(const void **)(v1 - 24), v21);
          *(v19 - 2) = v21;
        }
        while ( v20 != v1 );
      }
LABEL_21:
      v1 = v27;
      a1[1] += v12;
    }
    if ( v1 )
    {
      if ( (_QWORD)v28 )
      {
        v23 = 0;
        do
        {
          v24 = (_QWORD *)(v1 + 24 * v23);
          if ( *v24 )
          {
            v24[1] = 0;
            qfree();
          }
          ++v23;
          v1 = v27;
        }
        while ( (_QWORD)v28 != v23 );
      }
      qfree();
    }
  }
  return v29 - __readfsqword(0x28u);
}

