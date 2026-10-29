void __fastcall sub_23C4D0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // esi
  unsigned int v5; // edx
  __m128i *v6; // rcx
  __int64 v7; // rdx
  __m128i *v8; // rdi
  __m128i *i; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __m128i *v12; // rsi
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r12
  __m128i *v17; // rax
  __m128i *v18; // rbp
  __m128i *v19; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int *)(v1 + 8);
  v4 = *(_DWORD *)(v2 + 12);
  v5 = v3 - 1;
  v3 *= 16;
  v6 = (__m128i *)(*(_QWORD *)v1 + v3);
  v7 = 16LL * (v4 & v5);
  v8 = (__m128i *)(*(_QWORD *)v1 + v7);
  if ( v7 != v3 )
  {
    for ( i = (__m128i *)(*(_QWORD *)v1 + v7); v6 != i; ++i )
    {
      v10 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v10 + 12) == v4 && v2 == v10 )
        {
LABEL_17:
          v12 = i + 1;
          if ( v6 == &i[1] )
            v12 = *(__m128i **)v1;
          v13 = *(_DWORD *)(v1 + 12) - 1;
          if ( v12->m128i_i64[0] )
          {
            i->m128i_i64[0] = 1;
            v14 = *(_DWORD *)(v1 + 16);
            *(_DWORD *)(v1 + 12) = v13;
            v15 = v14 + 1;
            if ( v13 < 0x40 )
              v13 = 64;
            *(_DWORD *)(v1 + 16) = v15;
            if ( v13 < v15 && !(unsigned __int8)sub_186AF10(v8) )
            {
              v16 = *(unsigned int *)(v1 + 8);
              v17 = (__m128i *)sub_186B270(16 * v16);
              v18 = v17;
              v19 = &v17[v16];
              if ( (_DWORD)v16 )
              {
                if ( ((16 * (_BYTE)v16) & 0x10) == 0 || (*v17 = 0, ++v17, v19 != v17) )
                {
                  do
                  {
                    *v17 = 0;
                    v17 += 2;
                    v17[-1] = 0;
                  }
                  while ( v19 != v17 );
                }
              }
              sub_23AA00(*(const __m128i **)v1, *(_DWORD *)(v1 + 8), v18, *(_DWORD *)(v1 + 8));
              if ( *(_QWORD *)v1 )
                sub_186B220(*(void **)v1);
              *(_QWORD *)v1 = v18;
              *(_DWORD *)(v1 + 16) = 0;
            }
          }
          else
          {
            i->m128i_i64[0] = 0;
            *(_DWORD *)(v1 + 12) = v13;
          }
          return;
        }
      }
      else if ( !v10 )
      {
        return;
      }
    }
  }
  if ( *(__m128i **)v1 != v8 )
  {
    for ( i = *(__m128i **)v1; v8 != i; ++i )
    {
      v11 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v11 + 12) == v4 && v2 == v11 )
          goto LABEL_17;
      }
      else if ( !v11 )
      {
        return;
      }
    }
  }
}

