__int64 __fastcall sub_9B2EB0(__int64 a1, unsigned int a2, __int64 a3, __m128i *a4, __int64 a5, __int64 a6)
{
  char v8; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __m128i *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF

  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    a4 = (__m128i *)(a1 + 8);
    v9 = a1 + 72;
    if ( !v8 )
    {
      v11 = *(__m128i **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    a2 = v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      a4 = (__m128i *)(a1 + 8);
      v9 = a1 + 72;
      if ( !v8 )
      {
        v11 = *(__m128i **)(a1 + 8);
        v12 = *(unsigned int *)(a1 + 16);
        v13 = 16LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = *(__m128i **)(a1 + 8);
        v12 = *(unsigned int *)(a1 + 16);
        a2 = 64;
        v13 = 1024;
LABEL_5:
        v14 = sub_220C370(v13, 8, v9, a4, a5, a6);
        *(_DWORD *)(a1 + 16) = a2;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        sub_9B2DE0(a1, v11, &v11[v12]);
        return operator delete();
      }
      a4 = (__m128i *)(a1 + 8);
      v9 = a1 + 72;
      a2 = 64;
    }
  }
  if ( a4->m128i_i64[0] == -4096 || a4->m128i_i64[0] == -8192 )
  {
    v16 = &v22;
  }
  else
  {
    v22 = *a4;
    v16 = (__m128i *)&v23;
  }
  if ( (__m128i *)v9 != &a4[1] )
  {
    v17 = a4[1].m128i_i64[0];
    if ( v17 != -8192 && v17 != -4096 )
    {
      v16->m128i_i64[0] = v17;
      ++v16;
      v16[-1].m128i_i64[1] = a4[1].m128i_i64[1];
    }
    if ( (__m128i *)v9 != &a4[2] )
    {
      v18 = a4[2].m128i_i64[0];
      if ( v18 != -8192 && v18 != -4096 )
      {
        v16->m128i_i64[0] = v18;
        ++v16;
        v16[-1].m128i_i64[1] = a4[2].m128i_i64[1];
      }
      if ( (__m128i *)v9 != &a4[3] )
      {
        v19 = a4[3].m128i_i64[0];
        if ( v19 != -8192 && v19 != -4096 )
        {
          v16->m128i_i64[0] = v19;
          ++v16;
          v16[-1].m128i_i64[1] = a4[3].m128i_i64[1];
        }
        if ( (__m128i *)v9 != &a4[4] )
        {
          v20 = a4[4].m128i_i64[0];
          if ( v20 != -4096 && v20 != -8192 )
          {
            v16->m128i_i64[0] = v20;
            ++v16;
            v16[-1].m128i_i64[1] = a4[4].m128i_i64[1];
          }
        }
      }
    }
  }
  if ( a2 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v21 = sub_220C370(16LL * a2, 8, v9, a4, a5, a6);
    *(_DWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 8) = v21;
  }
  return sub_9B2DE0(a1, &v22, v16);
}

