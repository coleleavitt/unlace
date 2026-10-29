void __fastcall sub_1DB8FA0(
        void (__fastcall *a1)(__int64, __int64, void **),
        __int64 a2,
        unsigned int a3,
        const __m128i *a4)
{
  __int64 v6; // rsi
  __int32 v7; // edx
  __m128i si128; // xmm0
  void **v9; // rbp
  _QWORD *v10; // rax
  void **v11; // r12
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rbx
  void **v16; // r12
  __int64 v17; // rdx
  void *v18[2]; // [rsp+0h] [rbp-38h] BYREF
  __int32 v19; // [rsp+10h] [rbp-28h]

  v6 = a3;
  v7 = a4[1].m128i_i32[0];
  si128 = _mm_load_si128(a4);
  a4->m128i_i64[0] = 0;
  v19 = v7;
  *(__m128i *)v18 = si128;
  a1(a2, v6, v18);
  v9 = (void **)v18[0];
  if ( v18[0] )
  {
    v10 = v18[1];
    if ( v18[1] )
    {
      if ( v18[0] < v18[1] || v18[0] > (char *)v18[1] + 14848 )
      {
        v11 = *((void ***)v18[0] + 66);
        v12 = &v11[8 * (unsigned __int64)*((unsigned int *)v18[0] + 134)];
        if ( v11 != v12 )
        {
          do
          {
            while ( 1 )
            {
              v12 -= 8;
              v13 = (void **)v12[3];
              if ( v13 == v12 + 5 )
                break;
              operator delete(v13);
              if ( v11 == v12 )
                goto LABEL_7;
            }
          }
          while ( v11 != v12 );
LABEL_7:
          v12 = (void **)v9[66];
        }
        if ( v12 != v9 + 68 )
          free(v12);
        v14 = (void **)v9[52];
        if ( v14 != v9 + 54 )
          free(v14);
        v15 = v9 + 48;
        v16 = v9 + 8;
        do
        {
          while ( *v15 != v15 + 2 )
          {
            operator delete(*v15);
            v15 -= 4;
            if ( v16 == v15 )
            {
              operator delete(v9, 0x3A0u);
              return;
            }
          }
          v15 -= 4;
        }
        while ( v15 != v16 );
        operator delete(v9, 0x3A0u);
      }
      else
      {
        v17 = *((unsigned int *)v18[1] + 3744);
        *((_DWORD *)v18[1] + 3744) = v17 + 1;
        v10[v17 + 1856] = v9;
      }
    }
  }
}
