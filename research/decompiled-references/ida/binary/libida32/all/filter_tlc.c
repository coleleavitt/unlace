__int64 __fastcall filter_tlc(_QWORD *a1, unsigned int (__fastcall *a2)(_QWORD, __int64, __int64), __int64 a3)
{
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // r12
  void *v9; // rbp
  unsigned int v10; // ebx
  __m128 v11; // xmm0
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _DWORD *v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned int *v21; // rbx
  unsigned __int64 v22; // rax
  __m128 v23; // xmm0
  unsigned int *v24; // rsi
  unsigned int v25; // edx
  unsigned int *v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *s1; // [rsp+20h] [rbp-58h] BYREF
  __m128 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v5 = *a1;
  v42 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(v5 + 32))(a1);
  s1 = nullptr;
  v8 = v7;
  v41 = 0;
  if ( v7 )
  {
    s1 = (void *)qvector_reserve(&s1, 0, v7, 4);
    v13 = 0;
    while ( 1 )
    {
      v19 = a1[2];
      if ( v19 )
      {
        if ( v13 < v19 )
        {
          v14 = *(_DWORD *)(a1[1] + 4 * v13);
          goto LABEL_10;
        }
      }
      else if ( v13 < (*(int (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1) )
      {
        v14 = v13 + 1;
        goto LABEL_10;
      }
      v14 = 0;
LABEL_10:
      v15 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), a1);
      v16 = sub_5467E0(v15, a1, v14, 1);
      if ( v16 && !*(_DWORD *)(v16 + 96) && (!a2 || a2(v14, v16 + 88, a3)) )
      {
        v17 = v41.m128_u64[0];
        v18 = s1;
        if ( v41.m128_u64[1] < v41.m128_u64[0] + 1 )
        {
          s1 = (void *)qvector_reserve(&s1, s1, v41.m128_u64[0] + 1, 4);
          v18 = s1;
          v17 = v41.m128_u64[0];
        }
        v18[v17] = v14;
        ++v41.m128_u64[0];
      }
      if ( v8 == ++v13 )
      {
        v20 = v41.m128_u64[0];
        v9 = (void *)a1[1];
        v21 = (unsigned int *)s1;
        if ( v41.m128_u64[0] == a1[2] && !memcmp(s1, (const void *)a1[1], 4 * v41.m128_u64[0]) )
        {
          v9 = v21;
          v10 = 0;
        }
        else
        {
          v22 = v41.m128_u64[1];
          a1[5] = 0;
          v23 = _mm_loadh_ps((const double *)a1 + 3);
          a1[1] = v21;
          a1[2] = v20;
          a1[3] = v22;
          s1 = v9;
          v41 = v23;
          if ( v20 )
          {
            v24 = &v21[v20];
            if ( v24 == v21 )
            {
              v39 = -1;
              v29 = a1 + 4;
              v27 = 1;
            }
            else
            {
              v25 = 0;
              v26 = v21;
              if ( ((4 * (_BYTE)v20) & 4) == 0 )
                goto LABEL_63;
              if ( *v21 )
                v25 = *v21;
              v26 = v21 + 1;
              if ( v24 != v21 + 1 )
              {
LABEL_63:
                do
                {
                  if ( v25 < *v26 )
                    v25 = *v26;
                  if ( v25 < v26[1] )
                    v25 = v26[1];
                  v26 += 2;
                }
                while ( v24 != v26 );
              }
              v27 = v25 + 1;
              if ( v25 == -1 )
              {
LABEL_36:
                v28 = 0;
                do
                {
                  *(_DWORD *)(a1[4] + 4LL * *(unsigned int *)(a1[1] + 4 * v28)) = v28;
                  ++v28;
                }
                while ( v28 < a1[2] );
                goto LABEL_38;
              }
              v39 = -1;
              v29 = a1 + 4;
            }
            v30 = a1[4];
            v31 = a1[6];
            if ( (unsigned __int64)&v39 < v30 || (unsigned __int64)&v39 >= v30 + 4 * v31 )
            {
              v35 = 0;
              if ( v31 >= v27
                || (v37 = qvector_reserve(v29, v30, v27, 4), a1[4] = v37, v30 = v37, v35 = a1[5], v35 < v27) )
              {
                v36 = 4 * v35;
                while ( 1 )
                {
                  *(_DWORD *)(v30 + v36) = -1;
                  v36 += 4;
                  if ( 4 * v27 == v36 )
                    break;
                  v30 = a1[4];
                }
              }
            }
            else
            {
              v32 = 0;
              if ( v31 >= v27
                || (v38 = qvector_reserve(v29, v30, v27, 4), a1[4] = v38, v30 = v38, v32 = a1[5], v32 < v27) )
              {
                v33 = 4 * v32;
                while ( 1 )
                {
                  *(_DWORD *)(v30 + v33) = -1;
                  v33 += 4;
                  if ( v33 == 4 * v27 )
                    break;
                  v30 = a1[4];
                }
              }
            }
            v34 = a1[2];
            a1[5] = v27;
            if ( v34 )
              goto LABEL_36;
LABEL_38:
            v9 = s1;
            v10 = 1;
          }
          else
          {
            v10 = 1;
          }
        }
LABEL_4:
        if ( v9 )
        {
          v41.m128_u64[0] = 0;
          qfree(v9);
        }
        return v10;
      }
    }
  }
  if ( a1[2] )
  {
    v9 = (void *)a1[1];
    a1[5] = 0;
    v10 = 1;
    v11 = _mm_loadh_ps((const double *)a1 + 3);
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    s1 = v9;
    v41 = v11;
    goto LABEL_4;
  }
  return 0;
}

