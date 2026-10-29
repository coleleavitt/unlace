__int64 __fastcall sub_CCD880(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // ebx
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // r10
  int v12; // esi
  unsigned int v13; // edx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 *i; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  __m128i *v29; // rax
  __m128i *v30; // rcx
  __m128i *v31; // rdx
  __int64 v32; // rax
  const __m128i *v33; // r15
  unsigned int v34; // r11d
  __m128i *v35; // r9
  __int64 v36; // r10
  __m128i *v37; // r8
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  unsigned int v41; // [rsp+8h] [rbp-60h]
  __m128i *v42; // [rsp+8h] [rbp-60h]

  result = *(_QWORD *)(a1 + 64);
  if ( !result )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = -a2;
    result = (unsigned int)-a2;
    if ( !v4 )
      return result;
    v6 = *(_DWORD *)(4 * result);
    v7 = *(_DWORD *)(v4 - 4);
    if ( v6 >= v7 )
      return result;
    while ( 1 )
    {
LABEL_4:
      --v7;
      v8 = 0x7FFFFFFF8LL;
      if ( v4 )
        v8 = 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
      v9 = *(_QWORD *)(v4 + v8);
      v10 = *(unsigned int *)(a1 + 32);
      v11 = *(__int64 **)(a1 + 24);
      v12 = *(_DWORD *)(v9 + 12);
      v13 = v10 - 1;
      v10 *= 16;
      v14 = (__int64 *)((char *)v11 + v10);
      v15 = 16LL * (v12 & v13);
      v16 = &v11[(unsigned __int64)v15 / 8];
      if ( v15 != v10 )
      {
        for ( i = &v11[(unsigned __int64)v15 / 8]; v14 != i; i += 2 )
        {
          v18 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v18 + 12) == v12 && v9 == v18 )
            {
LABEL_29:
              v24 = i + 2;
              v25 = *(unsigned int *)(a1 + 36);
              if ( v14 == i + 2 )
                v24 = *(_QWORD **)(a1 + 24);
              v26 = v25 - 1;
              if ( *v24 )
              {
                *i = 1;
                v27 = *(_DWORD *)(a1 + 40);
                *(_DWORD *)(a1 + 36) = v26;
                v28 = v27 + 1;
                if ( v26 < 0x40 )
                  v26 = 64;
                *(_DWORD *)(a1 + 40) = v28;
                if ( v26 < v28 )
                {
                  if ( !(unsigned __int8)sub_186AF10(v25) )
                  {
                    v41 = *(_DWORD *)(a1 + 32);
                    v29 = (__m128i *)sub_186B270(16LL * v41);
                    v30 = v29;
                    v31 = &v29[v41];
                    if ( v41 )
                    {
                      if ( ((16 * (_BYTE)v41) & 0x10) == 0 || (*v29 = 0, ++v29, v31 != v29) )
                      {
                        do
                        {
                          *v29 = 0;
                          v29 += 2;
                          v29[-1] = 0;
                        }
                        while ( v31 != v29 );
                      }
                    }
                    v32 = *(unsigned int *)(a1 + 32);
                    v33 = *(const __m128i **)(a1 + 24);
                    v34 = v32 - 1;
                    v32 *= 16;
                    v35 = (__m128i *)((char *)v33 + v32);
                    v36 = v32;
                    v37 = (__m128i *)((char *)v30 + v32);
                    if ( v33 != (const __m128i *)&v33->m128i_i8[v32] )
                    {
                      do
                      {
                        if ( v33->m128i_i64[0] > 1uLL )
                        {
                          v38 = 16LL * (*(_DWORD *)(v33->m128i_i64[0] + 12) & v34);
                          v39 = &v30[(unsigned __int64)v38 / 0x10];
                          if ( v36 == v38 )
                          {
LABEL_58:
                            if ( v30 == v39 )
                            {
LABEL_63:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v40 = v30;
                            while ( v40->m128i_i64[0] )
                            {
                              if ( v39 == ++v40 )
                                goto LABEL_63;
                            }
                          }
                          else
                          {
                            v40 = &v30[(unsigned __int64)v38 / 0x10];
                            while ( v40->m128i_i64[0] )
                            {
                              if ( v37 == ++v40 )
                                goto LABEL_58;
                            }
                          }
                          *v40 = _mm_loadu_si128(v33);
                        }
                        ++v33;
                      }
                      while ( v35 != v33 );
                      v35 = *(__m128i **)(a1 + 24);
                    }
                    if ( v35 )
                    {
                      v42 = v30;
                      sub_186B220(v35);
                      v30 = v42;
                    }
                    *(_QWORD *)(a1 + 24) = v30;
                    *(_DWORD *)(a1 + 40) = 0;
                  }
                  v4 = *(_QWORD *)(a1 + 56);
                }
              }
              else
              {
                *i = 0;
                *(_DWORD *)(a1 + 36) = v26;
              }
              goto LABEL_13;
            }
          }
          else if ( !v18 )
          {
            goto LABEL_13;
          }
        }
      }
      if ( v11 != v16 )
      {
        for ( i = *(__int64 **)(a1 + 24); v16 != i; i += 2 )
        {
          v23 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v23 + 12) == v12 && v9 == v23 )
              goto LABEL_29;
          }
          else if ( !v23 )
          {
            break;
          }
        }
      }
LABEL_13:
      v19 = *(_DWORD *)(v4 - 4) - 1;
      v20 = *(_QWORD *)(v4 + 8LL * v19);
      *(_DWORD *)(v4 - 4) = v19;
      if ( v20 && (v21 = *(_QWORD *)(a1 + 48), v22 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v22) )
      {
        sub_15D7BC0(v21, v20);
        if ( v7 == v6 )
        {
LABEL_26:
          result = *(_QWORD *)(a1 + 64);
          if ( result )
            goto LABEL_27;
          return result;
        }
      }
      else if ( v7 == v6 )
      {
        goto LABEL_26;
      }
      v4 = *(_QWORD *)(a1 + 56);
    }
  }
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_DWORD *)(result - 4) - a2;
  if ( v4 )
  {
    v6 = *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4) - a2));
    v7 = *(_DWORD *)(v4 - 4);
    if ( v6 < v7 )
      goto LABEL_4;
  }
LABEL_27:
  *(_DWORD *)(result - 4) = v5;
  return result;
}

