__int64 __fastcall sub_878D20(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // edx
  int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r12
  __m128i *v33; // rax
  __m128i *v34; // r13
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __int64 v37; // rax
  __m128i *v38; // rdi
  unsigned int v39; // r15d
  const __m128i *v40; // r12
  const __m128i *v41; // rcx
  __int64 v42; // r14
  __m128i *v43; // r8
  __int64 v44; // rax
  __m128i *v45; // rdx
  __m128i *v46; // rax

  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == (_QWORD *)*v4 )
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  else
  {
    if ( v4 == a2 )
      *(_QWORD *)(a1 + 32) = *a2;
    v5 = *a2;
    v6 = (_QWORD *)a2[1];
    *v6 = *a2;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = *((_DWORD *)a2 + 5);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *((_DWORD *)a2 + 4) - v7;
  v10 = v7 - *((_DWORD *)a2 + 4);
  v11 = (v10 + v7) ^ ((*((_DWORD *)a2 + 4) - v7) << 8);
  v12 = (v10 - v11) ^ (v11 >> 13);
  v13 = (v9 - v11 - v12) ^ (v12 >> 12);
  v14 = (v11 - v12 - v13) ^ (v13 << 16);
  v15 = (v12 - v13 - v14) ^ (v14 >> 5);
  v16 = v13 - v14 - v15;
  v17 = (v15 - (v16 ^ (v15 >> 3)) - ((v14 - v15 - (v16 ^ (v15 >> 3))) ^ ((v16 ^ (v15 >> 3)) << 10)))
      ^ (((v14 - v15 - (v16 ^ (v15 >> 3))) ^ ((v16 ^ (v15 >> 3)) << 10)) >> 15);
  v18 = *(unsigned int *)(a1 + 16);
  v19 = v17 & ((_DWORD)v18 - 1);
  v18 *= 16;
  v20 = 16 * v19;
  v21 = v8 + v18;
  v22 = v8 + v20;
  if ( v20 == v18 )
  {
LABEL_17:
    if ( v8 != v22 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v29 = *(_DWORD *)(v23 + 4);
        if ( v29 == 2 )
        {
          if ( *(_DWORD *)v23 == v17 && *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL) == a2[2] )
            goto LABEL_12;
        }
        else if ( !v29 )
        {
          return sub_186B220(a2);
        }
        v23 += 16;
        if ( v22 == v23 )
          return sub_186B220(a2);
      }
    }
    return sub_186B220(a2);
  }
  v23 = v8 + v20;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v23 + 4);
    if ( v24 != 2 )
    {
      if ( !v24 )
        return sub_186B220(a2);
      goto LABEL_8;
    }
    if ( *(_DWORD *)v23 == v17 && *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL) == a2[2] )
      break;
LABEL_8:
    v23 += 16;
    if ( v21 == v23 )
      goto LABEL_17;
  }
LABEL_12:
  v25 = v23 + 16;
  v26 = *(unsigned int *)(a1 + 20);
  if ( v21 == v23 + 16 )
    v25 = *(_QWORD *)(a1 + 8);
  v27 = v26 - 1;
  if ( !*(_DWORD *)(v25 + 4) )
  {
    *(_DWORD *)(v23 + 4) = 0;
    *(_DWORD *)(a1 + 20) = v27;
    return sub_186B220(a2);
  }
  *(_DWORD *)(v23 + 4) = 1;
  v30 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = v27;
  v31 = v30 + 1;
  if ( v27 < 0x40 )
    v27 = 64;
  *(_DWORD *)(a1 + 24) = v31;
  if ( v27 < v31 && !(unsigned __int8)sub_186AF10(v26) )
  {
    v32 = *(unsigned int *)(a1 + 16);
    v33 = (__m128i *)sub_186B270(16 * v32);
    v34 = v33;
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 == 1 )
        goto LABEL_36;
      v35 = v33;
      v36 = &v33[2 * ((unsigned int)v32 >> 1)];
      do
      {
        v35->m128i_i64[0] = 0;
        v35 += 2;
        v35[-1].m128i_i64[0] = 0;
      }
      while ( v36 != v35 );
      if ( (v32 & 1) != 0 )
      {
        v33 = &v34[(unsigned int)v32 & 0xFFFFFFFE];
LABEL_36:
        v33->m128i_i64[0] = 0;
      }
    }
    v37 = *(unsigned int *)(a1 + 16);
    v38 = *(__m128i **)(a1 + 8);
    v39 = v37 - 1;
    v37 *= 16;
    v40 = v38;
    v41 = (__m128i *)((char *)v38 + v37);
    v42 = v37;
    v43 = (__m128i *)((char *)v34 + v37);
    if ( v38 != (__m128i *)&v38->m128i_i8[v37] )
    {
      do
      {
        if ( v40->m128i_i32[1] == 2 )
        {
          v44 = 16LL * (v40->m128i_i32[0] & v39);
          v45 = &v34[(unsigned __int64)v44 / 0x10];
          if ( v42 == v44 )
          {
LABEL_50:
            if ( v34 == v45 )
            {
LABEL_55:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v46 = v34;
            while ( v46->m128i_i32[1] )
            {
              if ( v45 == ++v46 )
                goto LABEL_55;
            }
          }
          else
          {
            v46 = &v34[(unsigned __int64)v44 / 0x10];
            while ( v46->m128i_i32[1] )
            {
              if ( v43 == ++v46 )
                goto LABEL_50;
            }
          }
          *v46 = _mm_loadu_si128(v40);
        }
        ++v40;
      }
      while ( v41 != v40 );
      v38 = *(__m128i **)(a1 + 8);
    }
    if ( v38 )
      sub_186B220(v38);
    *(_QWORD *)(a1 + 8) = v34;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return sub_186B220(a2);
}

