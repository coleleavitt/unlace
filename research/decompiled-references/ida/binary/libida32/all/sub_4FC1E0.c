unsigned __int64 __fastcall sub_4FC1E0(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  void *v5; // rdi
  char v7; // al
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  const char *v16; // rax
  const char *v17; // rbp
  size_t v18; // rax
  char *v19; // r13
  char *v20; // r15
  const char *v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  const char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+Ch] [rbp-9Ch]
  __int64 v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+28h] [rbp-80h]
  int v34[3]; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v35; // [rsp+38h] [rbp-70h] BYREF
  __m128i v36; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v34[0] = a2;
  v39 = __readfsqword(0x28u);
  sub_4F7A30(*(_QWORD *)a1);
  v3 = *(_QWORD *)a1;
  ptr = nullptr;
  v38 = 0;
  v4 = sub_79BAE0(v34, v3, &ptr, 1, 0, 83);
  v5 = ptr;
  if ( v4 > 0 )
  {
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v38));
    if ( ptr < (char *)ptr + (unsigned __int64)v38 )
    {
      v7 = *(_BYTE *)ptr;
      v36.m128i_i64[0] = (__int64)ptr + 1;
      if ( v7 == 1 )
      {
        v8 = unpack_dd(&v36);
        v9 = *(_QWORD *)(a1 + 144);
        v33 = v8;
        v32 = a1 + 136;
        v10 = *(_QWORD *)(a1 + 136);
        if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)(v9 + 1) )
        {
          v29 = qvector_reserve(v32, v10, v9 + 1, 56);
          *(_QWORD *)(a1 + 136) = v29;
          v9 = *(_QWORD *)(a1 + 144);
          v10 = v29;
        }
        v31 = 1;
        v11 = v10 + 56 * v9;
        *(_QWORD *)v11 = 0;
        *(_QWORD *)(v11 + 24) = 0;
        *(_DWORD *)(v11 + 48) = 0;
        *(_BYTE *)(v11 + 52) = 0;
        *(_OWORD *)(v11 + 8) = 0;
        *(_OWORD *)(v11 + 32) = 0;
        ++*(_QWORD *)(a1 + 144);
        if ( v33 > 1 )
        {
          do
          {
            if ( v36.m128i_i64[0] >= (unsigned __int64)v36.m128i_i64[1] )
              break;
            v12 = *(_QWORD *)(a1 + 144);
            v13 = *(_QWORD *)(a1 + 136);
            if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)(v12 + 1) )
            {
              v26 = qvector_reserve(v32, v13, v12 + 1, 56);
              *(_QWORD *)(a1 + 136) = v26;
              v12 = *(_QWORD *)(a1 + 144);
              v13 = v26;
            }
            v14 = v13 + 56 * v12;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
            v15 = v36.m128i_i64[1];
            *(_QWORD *)(v14 + 24) = 0;
            *(_DWORD *)(v14 + 48) = 0;
            *(_BYTE *)(v14 + 52) = 0;
            *(_OWORD *)(v14 + 32) = 0;
            ++*(_QWORD *)(a1 + 144);
            v16 = (const char *)unpack_ds(&v36, v15, 1);
            v17 = v16;
            if ( v16 )
            {
              v18 = strlen(v16);
              *(_QWORD *)v14 = v17;
              v19 = (char *)(a1 + 72);
              *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)(v18 + 1), (__m128i)(v18 + 1));
              v20 = *(char **)(a1 + 80);
              if ( !v20 )
                goto LABEL_28;
              do
              {
                while ( 1 )
                {
                  v21 = haystack;
                  if ( *((_QWORD *)v20 + 5) )
                    v21 = *((const char **)v20 + 4);
                  v22 = strcmp(v21, v17);
                  v23 = *((_QWORD *)v20 + 2);
                  v24 = *((_QWORD *)v20 + 3);
                  if ( v22 < 0 )
                    break;
                  v19 = v20;
                  v20 = *((char **)v20 + 2);
                  if ( !v23 )
                    goto LABEL_21;
                }
                v20 = *((char **)v20 + 3);
              }
              while ( v24 );
LABEL_21:
              if ( (char *)(a1 + 72) == v19 )
                goto LABEL_28;
              v25 = haystack;
              if ( *((_QWORD *)v19 + 5) )
                v25 = *((const char **)v19 + 4);
              if ( strcmp(v17, v25) < 0 )
              {
LABEL_28:
                v35 = v14;
                v19 = (char *)sub_4FB0E0((_QWORD *)(a1 + 64), v19, &v35);
              }
              *((_DWORD *)v19 + 14) = v31;
            }
            else
            {
              *(_BYTE *)(v14 + 52) = 1;
              v27 = *(_QWORD *)(a1 + 48);
              v28 = *(_QWORD *)(a1 + 40);
              if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v27 + 1) )
              {
                v30 = qvector_reserve(a1 + 40, v28, v27 + 1, 4);
                *(_QWORD *)(a1 + 40) = v30;
                v28 = v30;
                v27 = *(_QWORD *)(a1 + 48);
              }
              *(_DWORD *)(v28 + 4 * v27) = v31;
              ++*(_QWORD *)(a1 + 48);
            }
            ++v31;
          }
          while ( v31 != v33 );
        }
        v5 = ptr;
      }
    }
  }
  *(_BYTE *)(a1 + 160) = 0;
  if ( v5 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v5);
  }
  return v39 - __readfsqword(0x28u);
}

