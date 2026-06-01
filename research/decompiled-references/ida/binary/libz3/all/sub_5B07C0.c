void __fastcall sub_5B07C0(unsigned int a1, __m128i *a2, _QWORD *a3)
{
  int v6; // r14d
  __int64 v7; // rax
  __m128i *v8; // rbx
  __int32 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // r15
  __m128i *v16; // r14
  unsigned __int64 v17; // rdx
  unsigned int *v18; // rcx
  __m128i *v19; // r15
  __int32 v20; // r9d
  unsigned __int32 v21; // edi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // r10
  __int64 v25; // rsi
  __int32 v26; // edx
  unsigned int *v27; // rax
  unsigned __int32 v28; // esi
  unsigned int v29; // r9d
  unsigned int *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned __int32 v33; // ecx
  __int64 i; // rax
  __int64 v35; // rdx
  __int32 *v36; // rdi
  _DWORD *v37; // rdx
  __int32 v38; // r11d
  __int32 v39; // esi
  __int32 v40; // eax
  unsigned __int32 v41; // edi
  __int32 v42; // r15d
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _DWORD *v45; // r9
  __int64 v46; // rsi
  unsigned int *v47; // rdi
  __m128i v48; // xmm0
  char **exception; // r12
  unsigned int *v50; // [rsp+0h] [rbp-78h]
  unsigned int *v51; // [rsp+0h] [rbp-78h]
  unsigned int v52; // [rsp+Ch] [rbp-6Ch]
  __int64 v53[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1 > 1 )
  {
    if ( a1 == 2 )
    {
      v48 = _mm_loadl_epi64(a2);
      if ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v48, 229)) < (unsigned int)_mm_cvtsi128_si32(v48) )
      {
        a2->m128i_i64[0] = _mm_shuffle_epi32(v48, 225).m128i_u64[0];
        *a3 = __ROL8__(*a3, 32);
      }
    }
    else
    {
      v6 = 1;
      v7 = sub_186B270(0x10u);
      *(_QWORD *)v7 = 2;
      v8 = (__m128i *)(v7 + 8);
      ++*(_DWORD *)(v7 + 4);
      *(_DWORD *)(v7 + 8) = 0;
      do
      {
        v11 = v8[-1].m128i_u32[3];
        if ( (_DWORD)v11 == v8[-1].m128i_i32[2] )
        {
          v12 = (unsigned int)(3 * v11 + 1) >> 1;
          v13 = 4 * v12 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(&v8[-1].m128i_u64[1], v13);
          v8 = (__m128i *)(v14 + 2);
          *v14 = v12;
          v9 = (__int32 *)&v14[v14[1] + 2];
        }
        else
        {
          v9 = &v8->m128i_i32[v11];
        }
        *v9 = v6++;
        v10 = (unsigned int)(v8[-1].m128i_i32[3] + 1);
        v8[-1].m128i_i32[3] = v10;
      }
      while ( v6 != a1 );
      v15 = 4 * v10;
      v16 = (__m128i *)((char *)v8 + 4 * v10);
      if ( v16 != v8 )
      {
        _BitScanReverse64(&v17, v15 >> 2);
        sub_5B0340(v8, (unsigned int *)v8 + v10, 2LL * (int)v17, (__int64)a2);
        v18 = &v8->m128i_u32[1];
        if ( (unsigned __int64)v15 <= 0x40 )
        {
          if ( v15 != 4 )
          {
            v40 = v8->m128i_i32[0];
            do
            {
              v41 = a2->m128i_u32[*v18];
              v42 = *v18;
              if ( v41 < a2->m128i_i32[v40] )
              {
                if ( (char *)v18 - (char *)v8 <= 4 )
                {
                  if ( (char *)v18 - (char *)v8 == 4 )
                    *v18 = v40;
                }
                else
                {
                  v51 = v18;
                  memmove((char *)v8->m128i_i64 + 4, v8, (char *)v18 - (char *)v8);
                  v18 = v51;
                }
                v8->m128i_i32[0] = v42;
                v40 = v42;
              }
              else
              {
                v43 = v18 - 1;
                v44 = *(v18 - 1);
                if ( v41 >= a2->m128i_i32[v44] )
                {
                  v45 = v18;
                }
                else
                {
                  do
                  {
                    v43[1] = v44;
                    v45 = v43;
                    v46 = *--v43;
                    LODWORD(v44) = v46;
                  }
                  while ( v41 < a2->m128i_i32[v46] );
                }
                *v45 = v42;
                v40 = v8->m128i_i32[0];
              }
              ++v18;
            }
            while ( v16 != (__m128i *)v18 );
          }
        }
        else
        {
          v19 = v8 + 4;
          do
          {
            while ( 1 )
            {
              v21 = a2->m128i_u32[*v18];
              v20 = *v18;
              if ( v21 < a2->m128i_i32[v8->m128i_u32[0]] )
                break;
              v22 = v18 - 1;
              v23 = *(v18 - 1);
              if ( v21 >= a2->m128i_i32[v23] )
              {
                v24 = v18;
              }
              else
              {
                do
                {
                  v22[1] = v23;
                  v24 = v22;
                  v25 = *--v22;
                  LODWORD(v23) = v25;
                }
                while ( v21 < a2->m128i_i32[v25] );
              }
              ++v18;
              *v24 = v20;
              if ( v19 == (__m128i *)v18 )
                goto LABEL_20;
            }
            if ( (char *)v18 - (char *)v8 <= 4 )
            {
              if ( (char *)v18 - (char *)v8 == 4 )
                *v18 = v8->m128i_i32[0];
            }
            else
            {
              v52 = *v18;
              v50 = v18;
              memmove((char *)v8->m128i_i64 + 4, v8, (char *)v18 - (char *)v8);
              v18 = v50;
              v20 = v52;
            }
            ++v18;
            v8->m128i_i32[0] = v20;
          }
          while ( v19 != (__m128i *)v18 );
          do
          {
LABEL_20:
            while ( 1 )
            {
              v26 = v19[-1].m128i_i32[3];
              v27 = &v19[-1].m128i_u32[3];
              v28 = a2->m128i_u32[v19->m128i_u32[0]];
              v29 = v19->m128i_i32[0];
              if ( v28 < a2->m128i_i32[v26] )
                break;
              v47 = (unsigned int *)v19;
              v19 = (__m128i *)((char *)v19 + 4);
              *v47 = v29;
              if ( v16 == v19 )
                goto LABEL_23;
            }
            do
            {
              v27[1] = v26;
              v30 = v27;
              v31 = *--v27;
              v26 = v31;
            }
            while ( v28 < a2->m128i_i32[v31] );
            v19 = (__m128i *)((char *)v19 + 4);
            *v30 = v29;
          }
          while ( v16 != v19 );
        }
      }
LABEL_23:
      v32 = 0;
      do
      {
        v33 = v8->m128i_u32[v32];
        v8->m128i_i32[v32] = v32;
        for ( i = v32; v33 != (_DWORD)v32; v8->m128i_i32[i] = v39 )
        {
          v35 = i * 4;
          i = v33;
          v36 = (__int32 *)((char *)a2->m128i_i32 + v35);
          v37 = (_DWORD *)((char *)a3 + v35);
          v38 = *v36;
          *v36 = a2->m128i_i32[i];
          a2->m128i_i32[i] = v38;
          LODWORD(v36) = *v37;
          *v37 = *(_DWORD *)((char *)a3 + i * 4);
          *(_DWORD *)((char *)a3 + i * 4) = (_DWORD)v36;
          v39 = v33;
          v33 = v8->m128i_u32[i];
        }
        ++v32;
      }
      while ( v32 != a1 );
      sub_186B220(&v8[-1].m128i_u64[1]);
    }
  }
}

