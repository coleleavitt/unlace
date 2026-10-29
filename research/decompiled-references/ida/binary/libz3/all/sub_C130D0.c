void __fastcall sub_C130D0(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  unsigned int v11; // edx
  __m128i *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __m128i *v15; // rcx
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // r13
  _QWORD *v19; // rax
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-78h] BYREF
  __int64 v31; // [rsp+10h] [rbp-68h]
  __int64 v32; // [rsp+18h] [rbp-60h]
  _BYTE v33[24]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1[2200] )
    return;
  v8 = *(_QWORD *)a1;
  v9 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)a1, (__m128i)a2);
  if ( a2 == *(_QWORD *)(*(_QWORD *)a1 + 864LL) )
  {
    *(_QWORD *)&v33[16] = a3;
    *(__m128i *)v33 = v9;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v13 = *a4;
    if ( !*a4 || (v14 = *(_DWORD *)(v13 - 4), v14 == *(_DWORD *)(v13 - 8)) )
    {
      v30 = v9;
      sub_C16F00(a4);
      v13 = *a4;
      v9 = _mm_load_si128(&v30);
      v14 = *(_DWORD *)(*a4 - 4);
    }
    v15 = (__m128i *)(v13 + 24LL * v14);
    v15[1].m128i_i64[0] = a3;
    *v15 = v9;
    *(_DWORD *)(v13 - 4) = v14 + 1;
    *(_OWORD *)&v33[8] = 0;
    sub_C16530(v33);
    a1[2200] = 1;
  }
  else
  {
    if ( a2 == *(_QWORD *)(v8 + 856) )
      return;
    if ( *(_WORD *)(a2 + 4) || (v16 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v16 )
    {
LABEL_5:
      ++*(_DWORD *)(a2 + 8);
      *(_QWORD *)&v33[16] = a3;
      *(__m128i *)v33 = v9;
      if ( a3 )
        ++*(_DWORD *)(a3 + 8);
      v10 = *a4;
      if ( !*a4 || (v11 = *(_DWORD *)(v10 - 4), v11 == *(_DWORD *)(v10 - 8)) )
      {
        v30 = v9;
        sub_C16F00(a4);
        v10 = *a4;
        v9 = _mm_load_si128(&v30);
        v11 = *(_DWORD *)(*a4 - 4);
      }
      v12 = (__m128i *)(v10 + 24LL * v11);
      v12[1].m128i_i64[0] = a3;
      *v12 = v9;
      *(_DWORD *)(v10 - 4) = v11 + 1;
      return;
    }
    v17 = v16[1];
    if ( v17 != 5 )
    {
      if ( v17 == 8 && *(_DWORD *)(a2 + 24) == 1 )
      {
        v18 = *(_QWORD *)(a2 + 32);
        if ( !*(_WORD *)(v18 + 4) )
        {
          v19 = *(_QWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
          if ( v19 )
          {
            if ( *v19 == 0x600000000LL )
            {
              v20 = *(_DWORD *)(v18 + 24);
              v30.m128i_i32[0] = 0;
              if ( v20 )
              {
                while ( 1 )
                {
                  v32 = v8;
                  v31 = 0;
                  v21 = *(_QWORD *)(v18 + 8LL * v30.m128i_u32[0] + 32);
                  if ( *(_DWORD *)(v8 + 712) )
                  {
                    v29 = sub_15E0720(v8);
                    v31 = v29;
                    if ( v29 )
                      ++*(_DWORD *)(v29 + 8);
                    v32 = *(_QWORD *)a1;
                  }
                  v22 = sub_15EC2C0(v32, v21);
                  v25 = v22;
                  if ( v22 )
                    ++*(_DWORD *)(v22 + 8);
                  sub_C130D0((_DWORD)a1, v22, v31, (_DWORD)a4, v23, v24, v30.m128i_i32[0], v30.m128i_i64[1], v31, v32);
                  sub_C0E600(v25, v32);
                  sub_C0E540(v31, v8);
                  if ( ++v30.m128i_i32[0] >= *(_DWORD *)(v18 + 24) )
                    break;
                  v8 = *(_QWORD *)a1;
                }
              }
              return;
            }
          }
        }
      }
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
      v30.m128i_i32[0] = 0;
      while ( 1 )
      {
        v26 = 0;
        v27 = *(_QWORD *)(a2 + 8LL * v30.m128i_u32[0] + 32);
        if ( *(_DWORD *)(v8 + 712) )
        {
          v31 = *(_QWORD *)(a2 + 8LL * v30.m128i_u32[0] + 32);
          v28 = sub_15E06D0(v8, a3, v30.m128i_u32[0]);
          LODWORD(v27) = v31;
          v26 = v28;
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
        }
        sub_C130D0((_DWORD)a1, v27, v26, (_DWORD)a4, v27, a6, v30.m128i_i32[0], v30.m128i_i64[1], v31, v32);
        sub_C0E540(v26, v8);
        if ( ++v30.m128i_i32[0] >= *(_DWORD *)(a2 + 24) )
          break;
        v8 = *(_QWORD *)a1;
      }
    }
  }
}

