_DWORD *__fastcall sub_DE2E10(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v4; // r14d
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  char v16; // al
  _DWORD *v17; // rbx
  char v18; // al
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  const __m128i *v25; // rbx
  __m128i *v26; // r13
  __int64 v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]

  v3 = *(_DWORD *)(a1 + 64);
  v4 = 2 * v3;
  if ( 3 * v3 < (unsigned int)(4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72))) )
  {
    v21 = sub_186B270(16LL * v4);
    v22 = 16LL * v4;
    v23 = v21;
    v24 = v21 + v22;
    if ( v4 )
    {
      if ( ((16 * (_BYTE)v4) & 0x10) == 0 || (*(_QWORD *)(v21 + 8) = 0, v21 += 16, v21 != v24) )
      {
        do
        {
          *(_QWORD *)(v21 + 8) = 0;
          v21 += 32;
          *(_QWORD *)(v21 - 8) = 0;
        }
        while ( v21 != v24 );
      }
    }
    v25 = *(const __m128i **)(a1 + 56);
    v26 = (__m128i *)&v25[*(unsigned int *)(a1 + 64)];
    if ( v25 != v26 )
    {
      do
      {
        while ( v25->m128i_i64[1] <= 1uLL )
        {
          if ( v26 == ++v25 )
            goto LABEL_38;
        }
        v27 = 16LL * (v25->m128i_i32[0] & (v4 - 1));
        v28 = (__m128i *)(v23 + v27);
        if ( v22 == v27 )
        {
LABEL_42:
          if ( (__m128i *)v23 == v28 )
          {
LABEL_47:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = (__m128i *)v23;
          while ( v29->m128i_i64[1] )
          {
            if ( v28 == ++v29 )
              goto LABEL_47;
          }
        }
        else
        {
          v29 = (__m128i *)(v23 + v27);
          while ( v29->m128i_i64[1] )
          {
            if ( (__m128i *)v24 == ++v29 )
              goto LABEL_42;
          }
        }
        v30 = _mm_loadu_si128(v25++);
        *v29 = v30;
      }
      while ( v26 != v25 );
LABEL_38:
      v26 = *(__m128i **)(a1 + 56);
    }
    if ( v26 )
    {
      v33 = v23;
      sub_186B220(v26);
      v23 = v33;
    }
    *(_QWORD *)(a1 + 56) = v23;
    *(_DWORD *)(a1 + 64) = v4;
    *(_DWORD *)(a1 + 72) = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 104LL))(a2);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v5;
  v8 = *(unsigned int *)(a1 + 64);
  v9 = v8 - 1;
  v8 *= 16;
  v10 = v6 + v8;
  v11 = 16LL * (v7 & v9);
  v12 = v6 + v11;
  if ( v11 == v8 )
  {
    v13 = 0;
    while ( 1 )
    {
LABEL_12:
      if ( v12 == v6 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v15 = *(_QWORD *)(v6 + 8);
      if ( v15 > 1 )
      {
        if ( v7 == *(_DWORD *)v6 )
        {
          v32 = v12;
          v18 = (*(__int64 (__fastcall **)(unsigned __int64, _DWORD *))(*(_QWORD *)v15 + 112LL))(v15, a2);
          v12 = v32;
          if ( v18 )
            goto LABEL_17;
        }
      }
      else
      {
        if ( !v15 )
        {
LABEL_21:
          if ( v13 )
            --*(_DWORD *)(a1 + 72);
          else
            v13 = v6;
          *(_DWORD *)v13 = v7;
          v19 = *(_DWORD *)(a1 + 68);
          v17 = a2;
          *(_QWORD *)(v13 + 8) = a2;
          *(_DWORD *)(a1 + 68) = v19 + 1;
          return v17;
        }
        v13 = v6;
      }
      v6 += 16;
    }
  }
  v6 += v11;
  v13 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v6 + 8);
      if ( v14 > 1 )
        break;
      if ( !v14 )
        goto LABEL_21;
      v13 = v6;
      v6 += 16;
      if ( v10 == v6 )
      {
LABEL_9:
        v6 = *(_QWORD *)(a1 + 56);
        goto LABEL_12;
      }
    }
    if ( v7 == *(_DWORD *)v6 )
    {
      v31 = v12;
      v16 = (*(__int64 (__fastcall **)(unsigned __int64, _DWORD *))(*(_QWORD *)v14 + 112LL))(v14, a2);
      v12 = v31;
      if ( v16 )
        break;
    }
    v6 += 16;
    if ( v10 == v6 )
      goto LABEL_9;
  }
LABEL_17:
  v17 = *(_DWORD **)(v6 + 8);
  if ( a2 != v17 )
    sub_DE2D20(a1, a2);
  return v17;
}

