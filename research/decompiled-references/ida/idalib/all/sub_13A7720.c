__int64 __fastcall sub_13A7720(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r13
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 *v7; // rbp
  __int64 *v8; // r14
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int *v14; // r13
  int *i; // r14
  int v16; // eax
  signed __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  char *v20; // rdx
  char *v21; // r9
  char *v22; // rsi
  _QWORD *v23; // r8
  __int64 v24; // rdi
  char **v26; // rbp
  char **v27; // rbx
  unsigned __int64 v28; // r14
  int v29; // eax
  char **v30; // rsi
  char **v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r15
  volatile signed __int32 **v40; // rbp
  volatile signed __int32 **v41; // r13
  volatile signed __int32 **v42; // rdi
  volatile signed __int32 *v43; // r14
  int v44; // edx
  volatile signed __int32 *v45; // r14
  int v46; // edx
  char **v47; // rbp
  __int64 v48; // r14
  __int64 v49; // r13
  int v50; // eax
  char **v51; // rsi
  char **v52; // rdi
  __m128i v53; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v54; // [rsp+1Ch] [rbp-3Ch]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v5 = *(_QWORD *)a1;
    v54 = *((_DWORD *)a2 + 2);
    v53.m128i_i64[1] = v54;
    if ( v54 <= v3 )
    {
      v38 = v5;
      if ( v54 )
      {
        v47 = (char **)(v5 + 8);
        v48 = 32LL * v54;
        v49 = *a2 + 8;
        do
        {
          v50 = *(_DWORD *)(v49 - 8);
          v51 = (char **)v49;
          v52 = v47;
          v47 += 4;
          v49 += 32;
          *((_DWORD *)v47 - 10) = v50;
          sub_A25240(v52, v51);
        }
        while ( (char **)(v5 + 8 + v48) != v47 );
        v5 += v48;
        v38 = *(_QWORD *)a1;
        v3 = *(unsigned int *)(a1 + 8);
      }
      v39 = v38 + 32 * v3;
      while ( v5 != v39 )
      {
        v39 -= 32;
        v40 = *(volatile signed __int32 ***)(v39 + 8);
        v41 = *(volatile signed __int32 ***)(v39 + 16);
        v42 = v40;
        if ( v41 != v40 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v43 = v40[1];
                if ( v43 )
                {
                  if ( !_InterlockedSub(v43 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
                    if ( !_InterlockedSub(v43 + 3, 1u) )
                      break;
                  }
                }
                v40 += 2;
                if ( v41 == v40 )
                  goto LABEL_57;
              }
              v40 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 24LL))(v43);
            }
            while ( v41 != v40 );
          }
          else
          {
            do
            {
              v45 = v40[1];
              if ( v45 )
              {
                v46 = *((_DWORD *)v45 + 2);
                *((_DWORD *)v45 + 2) = v46 - 1;
                if ( v46 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
                  v44 = *((_DWORD *)v45 + 3);
                  *((_DWORD *)v45 + 3) = v44 - 1;
                  if ( v44 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 24LL))(v45);
                }
              }
              v40 += 2;
            }
            while ( v40 != v41 );
          }
LABEL_57:
          v42 = *(volatile signed __int32 ***)(v39 + 8);
        }
        if ( v42 )
          operator delete(v42);
      }
    }
    else
    {
      if ( v53.m128i_i64[1] <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v12 = *a2;
        if ( v3 )
        {
          v3 *= 32LL;
          v26 = (char **)(v12 + 8);
          v27 = (char **)(v5 + 8);
          v28 = v12 + 8 + v3;
          do
          {
            v29 = *((_DWORD *)v26 - 2);
            v30 = v26;
            v31 = v27;
            v26 += 4;
            v27 += 4;
            *((_DWORD *)v27 - 10) = v29;
            sub_A25240(v31, v30);
          }
          while ( v26 != (char **)v28 );
          v5 = *(_QWORD *)a1;
          v12 = *a2;
          v53.m128i_i64[1] = *((unsigned int *)a2 + 2);
        }
      }
      else
      {
        v6 = v5 + 32 * v3;
        while ( v6 != v5 )
        {
          while ( 1 )
          {
            v6 -= 32;
            v7 = *(__int64 **)(v6 + 8);
            v8 = *(__int64 **)(v6 + 16);
            v9 = v7;
            if ( v8 != v7 )
            {
              if ( &_pthread_key_create )
              {
                do
                {
                  while ( 1 )
                  {
                    v10 = v7[1];
                    if ( v10 )
                    {
                      if ( !_InterlockedSub((volatile signed __int32 *)(v10 + 8), 1u) )
                      {
                        v11 = *(_QWORD *)v10;
                        v53.m128i_i64[0] = v10;
                        (*(void (__fastcall **)(__int64))(v11 + 16))(v10);
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v53.m128i_i64[0] + 12), 0xFFFFFFFF) == 1 )
                          break;
                      }
                    }
                    v7 += 2;
                    if ( v8 == v7 )
                      goto LABEL_14;
                  }
                  v7 += 2;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v53.m128i_i64[0] + 24LL))(v53.m128i_i64[0]);
                }
                while ( v8 != v7 );
              }
              else
              {
                do
                {
                  v35 = v7[1];
                  if ( v35 )
                  {
                    v36 = *(_DWORD *)(v35 + 8);
                    *(_DWORD *)(v35 + 8) = v36 - 1;
                    if ( v36 == 1 )
                    {
                      v32 = *(_QWORD *)v35;
                      v53.m128i_i64[0] = v35;
                      (*(void (__fastcall **)(__int64))(v32 + 16))(v35);
                      v33 = v53.m128i_i64[0];
                      v34 = *(_DWORD *)(v53.m128i_i64[0] + 12);
                      *(_DWORD *)(v53.m128i_i64[0] + 12) = v34 - 1;
                      if ( v34 == 1 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
                    }
                  }
                  v7 += 2;
                }
                while ( v8 != v7 );
              }
LABEL_14:
              v9 = *(__int64 **)(v6 + 8);
            }
            if ( !v9 )
              break;
            operator delete(v9);
            if ( v6 == v5 )
              goto LABEL_17;
          }
        }
LABEL_17:
        *(_DWORD *)(a1 + 8) = 0;
        v3 = 0;
        sub_13A7520(a1, v53.m128i_i64[1]);
        v5 = *(_QWORD *)a1;
        v12 = *a2;
        v53.m128i_i64[1] = *((unsigned int *)a2 + 2);
      }
      v13 = v3 + v5;
      v14 = (int *)(v12 + v3);
      for ( i = (int *)(v12 + 32 * v53.m128i_i64[1]); v14 != i; v13 += 32 )
      {
        v16 = *v14;
        v17 = *((_QWORD *)v14 + 2) - *((_QWORD *)v14 + 1);
        *(_OWORD *)(v13 + 8) = 0;
        *(_DWORD *)v13 = v16;
        *(_QWORD *)(v13 + 24) = 0;
        if ( v17 >> 4 )
        {
          if ( (unsigned __int64)(v17 >> 4) > 0xFFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
          v18 = operator new(v17);
        }
        else
        {
          v18 = 0;
        }
        v53.m128i_i64[0] = v18;
        v19 = _mm_loadl_epi64(&v53);
        *(_QWORD *)(v13 + 24) = v18 + v17;
        *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v19, v19);
        v20 = *((char **)v14 + 2);
        v21 = *((char **)v14 + 1);
        if ( v20 != v21 )
        {
          v22 = *((char **)v14 + 1);
          v23 = (_QWORD *)v18;
          if ( &_pthread_key_create )
          {
            do
            {
              *v23 = *(_QWORD *)v22;
              v24 = *((_QWORD *)v22 + 1);
              v23[1] = v24;
              if ( v24 )
                _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
              v22 += 16;
              v23 += 2;
            }
            while ( v20 != v22 );
          }
          else
          {
            do
            {
              *v23 = *(_QWORD *)v22;
              v37 = *((_QWORD *)v22 + 1);
              v23[1] = v37;
              if ( v37 )
                ++*(_DWORD *)(v37 + 8);
              v22 += 16;
              v23 += 2;
            }
            while ( v20 != v22 );
          }
          v18 += ((v20 - 16 - v21) & 0xFFFFFFFFFFFFFFF0LL) + 16;
        }
        v14 += 8;
        *(_QWORD *)(v13 + 16) = v18;
      }
    }
    *(_DWORD *)(a1 + 8) = v54;
  }
  return a1;
}
