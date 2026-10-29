__int64 __fastcall sub_4C5590(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v7; // rbx
  unsigned int *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  size_t v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+8h] [rbp-40h]

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 104LL))(*(_QWORD *)(a2 + 8));
  if ( !v7 )
  {
    v7 = sub_186B270(0x30u);
    *(_QWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)v7 = qword_1C65E70;
    *(_QWORD *)(v7 + 24) = 0;
    if ( a3 )
    {
      v9 = a4;
      do
        sub_4C54F0((_QWORD *)(v7 + 24), v9++);
      while ( &a4[a3] != v9 );
      if ( v7 + 8 != a2 + 16 )
      {
        v10 = *(_QWORD *)(v7 + 8);
        if ( v10 )
          sub_186B220((void *)(v10 - 8));
        v11 = *(_QWORD *)(a2 + 16);
        if ( v11 )
        {
LABEL_10:
          v12 = *(_DWORD *)(v11 - 4);
          v13 = *(unsigned int *)(v11 - 8);
          v21 = v13;
          v14 = (_QWORD *)sub_186B270(8 * v13 + 8);
          v15 = *(_QWORD **)(a2 + 16);
          *(_QWORD *)(v7 + 8) = v14 + 1;
          *v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v12)).m128i_u64[0];
          if ( v15 )
          {
            v16 = 8LL * *((unsigned int *)v15 - 1);
            if ( v16 <= 8 )
            {
              if ( v16 == 8 )
                v14[1] = *v15;
            }
            else
            {
              memmove(v14 + 1, v15, v16);
            }
          }
          goto LABEL_13;
        }
        *(_QWORD *)(v7 + 8) = 0;
      }
LABEL_13:
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(a2 + 24);
      if ( a3 > 1 )
      {
        v17 = *(_QWORD *)(v7 + 8);
        v18 = *(_QWORD *)(v17 + 8LL * *a4);
        v19 = a4;
        do
        {
          v20 = v19[1];
          *(_QWORD *)(v17 + 8LL * *v19++) = *(_QWORD *)(v17 + 8 * v20);
        }
        while ( v19 != &a4[a3 - 1] );
        *(_QWORD *)(v17 + 8LL * a4[a3 - 1]) = v18;
      }
      goto LABEL_17;
    }
    if ( a2 + 16 == v7 + 8 || (v11 = *(_QWORD *)(a2 + 16)) == 0 )
    {
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(a2 + 24);
LABEL_17:
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)v7 = &off_1C4EF70;
      *(_QWORD *)(v7 + 32) = off_1C4EFA8;
      return v7;
    }
    goto LABEL_10;
  }
  return v7;
}

