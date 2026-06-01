void __fastcall sub_52C2E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v6; // r9
  int v7; // r8d
  unsigned int v8; // esi
  __m128i *v9; // rbp
  unsigned int v10; // r11d
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // edi
  __int64 v14; // r11
  __m128i *v15; // r10
  __m128i *v16; // rax
  __m128i *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  __m128i *v21; // rax
  int v22; // esi
  __m128i *v23; // r10
  __int64 v24; // rdi
  __m128i *v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r14
  const __m128i *v28; // r12
  const __m128i *v29; // rbx
  __int64 v30; // rdx
  __m128i *v31; // rsi
  __m128i *v32; // rdx
  __m128i v33; // xmm0
  unsigned int v34; // [rsp+0h] [rbp-68h]
  int v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int32 v37; // [rsp+28h] [rbp-40h]

  v2 = *(__int64 **)a2;
  v3 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( (__int64 *)v3 == v2 )
        return;
    }
    if ( (__int64 *)v3 != v2 )
    {
      v4 = *v2;
      while ( 1 )
      {
        v6 = *(unsigned int *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 16);
        v37 = *((_DWORD *)v2 + 2);
        v8 = 2 * v6;
        if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *(_DWORD *)(a1 + 12))) )
        {
          v35 = 2 * v6;
          v21 = (__m128i *)sub_186B270(16LL * v8);
          v11 = 16LL * v8;
          v22 = v35;
          v9 = v21;
          v23 = (__m128i *)((char *)v21 + v11);
          if ( v35 )
          {
            do
            {
              v21->m128i_i64[0] = 0;
              ++v21;
              v21[-1].m128i_i32[2] = 0;
            }
            while ( v21 != v23 );
          }
          v10 = v35 - 1;
          v12 = (__int64)v23;
          v24 = 16LL * *(unsigned int *)(a1 + 8);
          v25 = (__m128i *)(*(_QWORD *)a1 + v24);
          if ( *(__m128i **)a1 != v25 )
          {
            v26 = v4;
            v27 = v2;
            v28 = (const __m128i *)(*(_QWORD *)a1 + v24);
            v29 = *(const __m128i **)a1;
            do
            {
              while ( v29->m128i_i64[0] <= 1uLL )
              {
                if ( v28 == ++v29 )
                  goto LABEL_42;
              }
              v30 = 16LL * (*(_DWORD *)(v29->m128i_i64[0] + 12) & v10);
              v31 = &v9[(unsigned __int64)v30 / 0x10];
              if ( v11 == v30 )
              {
LABEL_46:
                if ( v9 == v31 )
                {
LABEL_54:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v32 = v9;
                while ( v32->m128i_i64[0] )
                {
                  if ( v31 == ++v32 )
                    goto LABEL_54;
                }
              }
              else
              {
                v32 = &v9[(unsigned __int64)v30 / 0x10];
                while ( v32->m128i_i64[0] )
                {
                  if ( v23 == ++v32 )
                    goto LABEL_46;
                }
              }
              v33 = _mm_loadu_si128(v29++);
              *v32 = v33;
            }
            while ( v28 != v29 );
LABEL_42:
            v2 = v27;
            v12 = (__int64)v23;
            v25 = *(__m128i **)a1;
            v4 = v26;
            v22 = v35;
          }
          if ( v25 )
          {
            v36 = v11;
            v34 = v10;
            sub_186B220(v25);
            v11 = v36;
            v10 = v34;
          }
          *(_QWORD *)a1 = v9;
          v7 = 0;
          *(_DWORD *)(a1 + 8) = v22;
          *(_DWORD *)(a1 + 16) = 0;
        }
        else
        {
          v9 = *(__m128i **)a1;
          v10 = v6 - 1;
          v11 = 16 * v6;
          v12 = *(_QWORD *)a1 + v11;
        }
        v13 = *(_DWORD *)(v4 + 12);
        v14 = 16LL * (v13 & v10);
        v15 = &v9[(unsigned __int64)v14 / 0x10];
        if ( v14 != v11 )
        {
          v16 = &v9[(unsigned __int64)v14 / 0x10];
          v17 = nullptr;
          while ( 1 )
          {
            v18 = v16->m128i_i64[0];
            if ( v16->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v18 + 12) == v13 && v18 == v4 )
              {
                v16->m128i_i64[0] = v4;
                v16->m128i_i32[2] = v37;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v18 )
              {
                if ( v17 )
                  goto LABEL_52;
                v17 = v16;
                goto LABEL_53;
              }
              v17 = v16;
            }
            if ( ++v16 == (__m128i *)v12 )
              goto LABEL_20;
          }
        }
        v17 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v15 == v9 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v19 = v9->m128i_i64[0];
          if ( v9->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v19 + 12) == v13 && v19 == v4 )
          {
            v9->m128i_i64[0] = v4;
            v9->m128i_i32[2] = v37;
            goto LABEL_25;
          }
LABEL_19:
          ++v9;
        }
        if ( v19 )
          break;
        if ( v17 )
LABEL_52:
          *(_DWORD *)(a1 + 16) = v7 - 1;
        else
          v17 = v9;
LABEL_53:
        v17->m128i_i64[0] = v4;
        v17->m128i_i32[2] = v37;
        ++*(_DWORD *)(a1 + 12);
LABEL_25:
        v20 = v2 + 2;
        if ( (__int64 *)v3 != v2 + 2 )
        {
          while ( 1 )
          {
            v4 = *v20;
            v2 = v20;
            if ( (unsigned __int64)*v20 > 1 )
              break;
            v20 += 2;
            if ( (__int64 *)v3 == v20 )
              return;
          }
          if ( (__int64 *)v3 != v20 )
            continue;
        }
        return;
      }
      v17 = v9;
      goto LABEL_19;
    }
  }
}

