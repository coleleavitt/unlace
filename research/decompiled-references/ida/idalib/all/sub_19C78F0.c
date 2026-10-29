__int64 __fastcall sub_19C78F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // r8
  int v8; // esi
  int v9; // r10d
  __int64 v10; // r9
  unsigned int i; // eax
  __int64 v12; // r13
  __int64 v13; // r11
  unsigned int v14; // esi
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 result; // rax
  unsigned int v26; // eax
  __int64 v27; // rdi
  int v28; // edx
  int v29; // r11d
  __int64 v30; // r10
  unsigned int k; // eax
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdi
  int v35; // edx
  int v36; // r11d
  unsigned int j; // eax
  __int64 v38; // r8
  unsigned int v39; // eax
  int v40; // edx
  int v41; // edx
  __m128i v42; // [rsp+0h] [rbp-38h] BYREF

  v5 = a3;
  sub_15EE8F0((unsigned __int64 *)&v42, a2);
  v6 = *(_BYTE *)(a1 + 760) & 1;
  if ( v6 )
  {
    v7 = a1 + 768;
    v8 = 7;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 776);
    v7 = *(_QWORD *)(a1 + 768);
    if ( !v14 )
    {
      v15 = *(_DWORD *)(a1 + 760);
      v10 = 0;
      v16 = (v15 >> 1) + 1;
      goto LABEL_13;
    }
    v8 = v14 - 1;
  }
  v9 = 1;
  v10 = 0;
  for ( i = v8
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4)
              | ((unsigned __int64)(v42.m128i_i32[0] ^ (unsigned int)((unsigned __int64)v42.m128i_i64[0] >> 9)) << 32))) >> 31)
           ^ (484763065 * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4))));
        ;
        i = v8 & v26 )
  {
    v12 = v7 + ((unsigned __int64)i << 6);
    v13 = *(_QWORD *)v12;
    if ( *(_OWORD *)&v42 == *(_OWORD *)v12 )
      break;
    if ( v13 )
    {
      if ( v13 == 4 && !(*(_QWORD *)(v12 + 8) | v10) )
        v10 = v7 + ((unsigned __int64)i << 6);
    }
    else if ( !*(_QWORD *)(v12 + 8) )
    {
      v15 = *(_DWORD *)(a1 + 760);
      v17 = 24;
      v14 = 8;
      if ( !v10 )
        v10 = v12;
      v16 = (v15 >> 1) + 1;
      if ( !v6 )
      {
        v14 = *(_DWORD *)(a1 + 776);
LABEL_13:
        v17 = 3 * v14;
      }
      v18 = (unsigned int)(4 * v16);
      v19 = (unsigned __int8 *)(a1 + 760);
      if ( (unsigned int)v17 > (unsigned int)v18 )
      {
        v20 = v14 - *(_DWORD *)(a1 + 764) - (unsigned int)v16;
        v21 = v14 >> 3;
        if ( (unsigned int)v20 > (unsigned int)v21 )
        {
LABEL_16:
          *(_DWORD *)(a1 + 760) = (2 * (v15 >> 1) + 2) | v15 & 1;
          if ( *(_QWORD *)v10 || *(_QWORD *)(v10 + 8) )
            --*(_DWORD *)(a1 + 764);
          v22 = _mm_load_si128(&v42);
          *(_QWORD *)(v10 + 16) = v10 + 32;
          v23 = v10 + 16;
          v24 = (2 * v5) | a2 & 0xFFFFFFFFFFFFFFFDLL;
          *(_QWORD *)(v10 + 24) = 0x400000000LL;
          result = 0;
          *(__m128i *)v10 = v22;
          goto LABEL_19;
        }
        sub_15EF470(v19, v14, v20, v21, v17, v10);
        if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
        {
          v34 = a1 + 768;
          v35 = 7;
LABEL_35:
          v36 = 1;
          v30 = 0;
          for ( j = v35
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4)
                      | ((unsigned __int64)(v42.m128i_i32[0] ^ (unsigned int)((unsigned __int64)v42.m128i_i64[0] >> 9)) << 32))) >> 31)
                   ^ (484763065 * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4))));
                ;
                j = v35 & v39 )
          {
            v10 = v34 + ((unsigned __int64)j << 6);
            v38 = *(_QWORD *)v10;
            if ( *(_OWORD *)&v42 == *(_OWORD *)v10 )
              break;
            if ( v38 )
            {
              if ( v38 == 4 && !(*(_QWORD *)(v10 + 8) | v30) )
                v30 = v34 + ((unsigned __int64)j << 6);
            }
            else if ( !*(_QWORD *)(v10 + 8) )
            {
              goto LABEL_51;
            }
            v39 = v36 + j;
            ++v36;
          }
LABEL_44:
          v15 = *(_DWORD *)(a1 + 760);
          goto LABEL_16;
        }
        v41 = *(_DWORD *)(a1 + 776);
        v34 = *(_QWORD *)(a1 + 768);
        if ( v41 )
        {
          v35 = v41 - 1;
          goto LABEL_35;
        }
LABEL_61:
        *(_DWORD *)(a1 + 760) = (2 * (*(_DWORD *)(a1 + 760) >> 1) + 2) | *(_DWORD *)(a1 + 760) & 1;
        BUG();
      }
      sub_15EF470(v19, 2 * v14, v18, v16, v17, v10);
      if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
      {
        v27 = a1 + 768;
        v28 = 7;
      }
      else
      {
        v40 = *(_DWORD *)(a1 + 776);
        v27 = *(_QWORD *)(a1 + 768);
        if ( !v40 )
          goto LABEL_61;
        v28 = v40 - 1;
      }
      v29 = 1;
      v30 = 0;
      for ( k = v28
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4)
                  | ((unsigned __int64)(v42.m128i_i32[0] ^ (unsigned int)((unsigned __int64)v42.m128i_i64[0] >> 9)) << 32))) >> 31)
               ^ (484763065 * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4))));
            ;
            k = v28 & v33 )
      {
        v10 = v27 + ((unsigned __int64)k << 6);
        v32 = *(_QWORD *)v10;
        if ( *(_OWORD *)&v42 == *(_OWORD *)v10 )
          break;
        if ( v32 )
        {
          if ( v32 == 4 && !(*(_QWORD *)(v10 + 8) | v30) )
            v30 = v27 + ((unsigned __int64)k << 6);
        }
        else if ( !*(_QWORD *)(v10 + 8) )
        {
LABEL_51:
          if ( v30 )
            v10 = v30;
          goto LABEL_44;
        }
        v33 = v29 + k;
        ++v29;
      }
      goto LABEL_44;
    }
    v26 = v9 + i;
    ++v9;
  }
  result = *(unsigned int *)(v12 + 24);
  v23 = v12 + 16;
  v24 = (2 * v5) | a2 & 0xFFFFFFFFFFFFFFFDLL;
  if ( *(unsigned int *)(v12 + 28) < (unsigned __int64)(result + 1) )
  {
    sub_2237220(v12 + 16, v12 + 32, result + 1, 8);
    result = *(unsigned int *)(v12 + 24);
  }
LABEL_19:
  *(_QWORD *)(*(_QWORD *)v23 + 8 * result) = v24;
  ++*(_DWORD *)(v23 + 8);
  return result;
}
