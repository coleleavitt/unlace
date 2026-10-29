void __fastcall sub_1EDA380(__int64 a1, __m128i *a2)
{
  const __m128i *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int32 v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  volatile signed __int32 **v11; // rdi
  char *v12; // r13
  __int64 v13; // r12
  char *v14; // rbx
  volatile signed __int32 **v15; // r15
  volatile signed __int32 **v16; // r14
  volatile signed __int32 *v17; // rbp
  int v18; // edx
  volatile signed __int32 *v19; // rbp
  int v20; // edx
  const __m128i *v21; // [rsp+8h] [rbp-40h]

  v3 = *(const __m128i **)a1;
  v4 = *(_QWORD *)a1 + 352LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v4 )
  {
    do
    {
      *a2 = _mm_loadu_si128(v3);
      a2[1] = _mm_loadu_si128(v3 + 1);
      a2[2].m128i_i64[0] = v3[2].m128i_i64[0];
      v6 = v3[2].m128i_i32[1];
      a2[3].m128i_i64[0] = 0;
      a2[3].m128i_i64[1] = 0;
      a2[2].m128i_i32[1] = v6;
      a2[2].m128i_i64[1] = 0;
      a2[2].m128i_i64[1] = v3[2].m128i_i64[1];
      v7 = v3[3].m128i_i64[0];
      v3[2].m128i_i64[1] = 0;
      v8 = a2[3].m128i_i64[0];
      a2[3].m128i_i64[0] = v7;
      v9 = v3[3].m128i_i64[1];
      v3[3].m128i_i64[0] = v8;
      v10 = a2[3].m128i_i64[1];
      a2[3].m128i_i64[1] = v9;
      v3[3].m128i_i64[1] = v10;
      a2[4].m128i_i64[0] = (__int64)a2[5].m128i_i64;
      a2[4].m128i_i32[2] = 0;
      a2[4].m128i_i32[3] = 8;
      if ( v3[4].m128i_i32[2] )
        sub_1EC2EC0((__int64)a2[4].m128i_i64, (__int64)v3[4].m128i_i64);
      v5 = v3[21].m128i_i64[0];
      v3 += 22;
      a2 += 22;
      a2[-1].m128i_i64[0] = v5;
      a2[-1].m128i_i64[1] = v3[-1].m128i_i64[1];
    }
    while ( (const __m128i *)v4 != v3 );
    v21 = *(const __m128i **)a1;
    v13 = *(_QWORD *)a1 + 352LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v13 )
    {
      do
      {
        while ( 1 )
        {
          v13 -= 352;
          v12 = *(char **)(v13 + 64);
          v14 = &v12[32 * *(unsigned int *)(v13 + 72)];
          if ( v12 != v14 )
          {
            do
            {
              while ( 1 )
              {
                v14 -= 32;
                v15 = *((volatile signed __int32 ***)v14 + 1);
                v16 = *((volatile signed __int32 ***)v14 + 2);
                v11 = v15;
                if ( v16 != v15 )
                {
                  if ( &_pthread_key_create )
                  {
                    do
                    {
                      v17 = v15[1];
                      if ( v17 )
                      {
                        if ( !_InterlockedSub(v17 + 2, 1u) )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
                          if ( !_InterlockedSub(v17 + 3, 1u) )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
                        }
                      }
                      v15 += 2;
                    }
                    while ( v16 != v15 );
                  }
                  else
                  {
                    do
                    {
                      v19 = v15[1];
                      if ( v19 )
                      {
                        v20 = *((_DWORD *)v19 + 2);
                        *((_DWORD *)v19 + 2) = v20 - 1;
                        if ( v20 == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
                          v18 = *((_DWORD *)v19 + 3);
                          *((_DWORD *)v19 + 3) = v18 - 1;
                          if ( v18 == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
                        }
                      }
                      v15 += 2;
                    }
                    while ( v16 != v15 );
                  }
                  v11 = *((volatile signed __int32 ***)v14 + 1);
                }
                if ( !v11 )
                  break;
                operator delete(v11);
                if ( v12 == v14 )
                  goto LABEL_9;
              }
            }
            while ( v12 != v14 );
LABEL_9:
            v12 = *(char **)(v13 + 64);
          }
          if ( v12 == (char *)(v13 + 80) )
            break;
          free(v12);
          sub_A0AD20(v13 + 40);
          if ( (const __m128i *)v13 == v21 )
            return;
        }
        sub_A0AD20(v13 + 40);
      }
      while ( (const __m128i *)v13 != v21 );
    }
  }
}
