unsigned __int64 __fastcall sub_51EB80(_BYTE *a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  _BYTE *v8; // rbx
  __int64 v9; // rax
  char *v10; // rbx
  int v11; // r12d
  __int64 v12; // rax
  _BYTE *v13; // rdx
  bool v14; // al
  char *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  _BYTE *v18; // rax
  char v19; // cl
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rax
  int i; // ebx
  _BYTE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-A8h]
  _BYTE *v32; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-90h]
  void *v34; // [rsp+20h] [rbp-88h] BYREF
  __int128 v35; // [rsp+28h] [rbp-80h]
  void *ptr[2]; // [rsp+38h] [rbp-70h]
  __int128 v37; // [rsp+48h] [rbp-60h]
  int v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v32 = a1;
  v33 = a2;
  v39 = __readfsqword(0x28u);
  v31 = unpack_dq(&v32);
  v6 = unpack_dq(&v32);
  v7 = v6;
  if ( a4 )
  {
    v38 = 0;
    v34 = nullptr;
    v35 = 0;
    v37 = 0;
    *(_OWORD *)ptr = 0;
    if ( v6 )
    {
      v34 = (void *)qvector_reserve(&v34, 0, v6, 33);
      v8 = v34;
      if ( (unsigned __int64)v35 < v7 )
      {
        v9 = 33 * v35;
        do
        {
          v10 = &v8[v9];
          v9 += 33;
          *((_QWORD *)v10 + 2) = 0;
          v10[24] = 0;
          v10[32] = 0;
          *(_OWORD *)v10 = 0;
          v8 = v34;
        }
        while ( v9 != 33 * v7 );
      }
      *(_QWORD *)&v35 = v7;
      v11 = 0;
      v12 = 0;
      do
      {
        v15 = &v8[33 * v12];
        v16 = unpack_dq(&v32);
        *(_QWORD *)v15 = v16;
        *((_QWORD *)v15 + 1) = v16 + unpack_dq(&v32);
        *((_QWORD *)v15 + 2) = unpack_dq(&v32);
        v17 = v33;
        v18 = v32;
        if ( (unsigned __int64)v32 >= v33 )
        {
          v15[24] = 0;
          v13 = v18;
          v14 = 0;
        }
        else
        {
          v19 = *v32;
          v13 = ++v32;
          v15[24] = v19;
          if ( (unsigned __int64)(v18 + 1) >= v17 )
          {
            v14 = 0;
          }
          else
          {
            v13 = v18 + 2;
            v14 = v18[1] != 0;
          }
        }
        ++v11;
        v15[32] = v14;
        v8 = v34;
        v12 = v11;
        v32 = v13;
      }
      while ( v11 < v7 );
      v20 = v35;
      v21 = *a3;
      v22 = 33 * v35;
      v23 = 33 * v31;
      if ( (_QWORD)v35 )
      {
        v24 = a3[1];
        if ( a3[2] < (unsigned __int64)(v35 + v24) )
        {
          v30 = qvector_reserve(a3, v21, v35 + v24, 33);
          *a3 = v30;
          v24 = a3[1];
          v21 = v30;
        }
        v25 = v21 + v23;
        memmove((void *)(v21 + v23 + v22), (const void *)(v21 + v23), 33 * v24 - v23);
        v26 = 0;
        if ( v20 )
        {
          do
          {
            *(__m128i *)(v25 + v26) = _mm_loadu_si128((const __m128i *)&v8[v26]);
            *(__m128i *)(v25 + v26 + 16) = _mm_loadu_si128((const __m128i *)&v8[v26 + 16]);
            *(_BYTE *)(v25 + v26 + 32) = v8[v26 + 32];
            v26 += 33;
          }
          while ( v22 != v26 );
        }
        a3[1] += v20;
      }
      if ( ptr[1] )
      {
        *(_QWORD *)&v37 = 0;
        qfree(ptr[1]);
      }
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
  }
  else
  {
    memmove((void *)(33 * v31 + *a3), (const void *)(*a3 + 33 * (v31 + v6)), 33 * (a3[1] - (v31 + v6)));
    a3[1] -= v7;
    if ( v7 )
    {
      for ( i = 0; i < v7; ++i )
      {
        unpack_dq(&v32);
        unpack_dq(&v32);
        unpack_dq(&v32);
        v29 = v32;
        if ( (unsigned __int64)v32 < v33 )
        {
          if ( (unsigned __int64)(v32 + 1) >= v33 )
            v29 = v32 + 1;
          else
            v29 = v32 + 2;
        }
        v32 = v29;
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}
