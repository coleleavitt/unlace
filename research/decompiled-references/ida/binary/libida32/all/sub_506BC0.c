unsigned __int64 __fastcall sub_506BC0(_BYTE *a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  _BYTE *v8; // rbx
  __int64 v9; // rax
  char *v10; // rbx
  int v11; // r12d
  __int64 v12; // rax
  char *v13; // rbx
  int v14; // eax
  char v15; // dl
  _BYTE *v16; // rax
  bool v17; // dl
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  int i; // ebx
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-A8h]
  _BYTE *v30; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-90h]
  void *v32; // [rsp+20h] [rbp-88h] BYREF
  __int128 v33; // [rsp+28h] [rbp-80h]
  void *ptr[2]; // [rsp+38h] [rbp-70h]
  __int128 v35; // [rsp+48h] [rbp-60h]
  int v36; // [rsp+58h] [rbp-50h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v30 = a1;
  v31 = a2;
  v37 = __readfsqword(0x28u);
  v29 = unpack_dq(&v30, a2);
  v6 = unpack_dq(&v30, v31);
  v7 = v6;
  if ( a4 )
  {
    v36 = 0;
    v32 = nullptr;
    v33 = 0;
    v35 = 0;
    *(_OWORD *)ptr = 0;
    if ( v6 )
    {
      v32 = (void *)qvector_reserve(&v32, 0, v6, 17);
      v8 = v32;
      if ( (unsigned __int64)v33 < v7 )
      {
        v9 = 17 * v33;
        do
        {
          v10 = &v8[v9];
          v9 += 17;
          *(_QWORD *)v10 = 0;
          *((_DWORD *)v10 + 2) = 0;
          v10[12] = 0;
          v10[16] = 0;
          v8 = v32;
        }
        while ( v9 != 17 * v7 );
      }
      *(_QWORD *)&v33 = v7;
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = &v8[17 * v12];
        v14 = unpack_dd(&v30);
        *(_DWORD *)v13 = v14;
        *((_DWORD *)v13 + 1) = v14 + unpack_dd(&v30);
        *((_DWORD *)v13 + 2) = unpack_dd(&v30);
        v15 = 0;
        v16 = v30;
        if ( (unsigned __int64)v30 < v31 )
        {
          v15 = *v30;
          v16 = v30 + 1;
        }
        v13[12] = v15;
        v17 = 0;
        v30 = v16;
        if ( (unsigned __int64)v16 < v31 )
          v17 = *v16++ != 0;
        ++v11;
        v30 = v16;
        v12 = v11;
        v13[16] = v17;
        v8 = v32;
      }
      while ( v11 < v7 );
      v18 = v33;
      v19 = *a3;
      v20 = 17 * v33;
      v21 = 17 * v29;
      if ( (_QWORD)v33 )
      {
        v22 = a3[1];
        if ( a3[2] < (unsigned __int64)(v33 + v22) )
        {
          v28 = qvector_reserve(a3, v19, v33 + v22, 17);
          *a3 = v28;
          v22 = a3[1];
          v19 = v28;
        }
        v23 = v19 + v21;
        memmove((void *)(v19 + v21 + v20), (const void *)(v19 + v21), 17 * v22 - v21);
        v24 = 0;
        if ( v18 )
        {
          do
          {
            *(__m128i *)(v23 + v24) = _mm_loadu_si128((const __m128i *)&v8[v24]);
            *(_BYTE *)(v23 + v24 + 16) = v8[v24 + 16];
            v24 += 17;
          }
          while ( v20 != v24 );
        }
        a3[1] += v18;
      }
      if ( ptr[1] )
      {
        *(_QWORD *)&v35 = 0;
        qfree(ptr[1]);
      }
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
  }
  else
  {
    memmove((void *)(17 * v29 + *a3), (const void *)(*a3 + 17 * (v29 + v6)), 17 * (a3[1] - (v29 + v6)));
    a3[1] -= v7;
    if ( v7 )
    {
      for ( i = 0; i < v7; ++i )
      {
        unpack_dd(&v30);
        unpack_dd(&v30);
        unpack_dd(&v30);
        v27 = v30;
        if ( (unsigned __int64)v30 < v31 )
        {
          if ( (unsigned __int64)(v30 + 1) >= v31 )
            v27 = v30 + 1;
          else
            v27 = v30 + 2;
        }
        v30 = v27;
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}

