__int64 __fastcall sub_2F7560(__int64 a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  _QWORD *v4; // r12
  void *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r14
  void *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbx
  int v30; // eax
  void *v31; // rax
  void *v32; // rdi
  unsigned int v35; // [rsp+8h] [rbp-70h]
  void *v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+10h] [rbp-68h]
  unsigned int v38; // [rsp+1Ch] [rbp-5Ch]
  __int64 v39; // [rsp+30h] [rbp-48h]

  v1 = (_QWORD *)a1;
  sub_330280(a1 + 296);
  sub_2EE240(a1);
  v2 = *(_QWORD **)(a1 + 608);
  v39 = a1 + 608;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[13 * v3];
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 6);
        sub_182CBA0(v5, v2 + 8);
        v6 = v2[5];
        if ( v6 )
        {
          v7 = *(unsigned int *)(v6 - 4);
          if ( (_DWORD)v7 )
          {
            v8 = v6 + 32 * v7;
            do
            {
              v9 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6);
              v10 = v6 + 16;
              v6 += 32;
              sub_182CBA0(v9, v10);
            }
            while ( v6 != v8 );
            v6 = v2[5];
          }
          sub_186B220((void *)(v6 - 8));
        }
        sub_2334C0(v2 + 3);
        v11 = v2[1];
        if ( v11 )
        {
          v12 = v2[2];
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v12, v11);
        }
        v2 += 13;
      }
      while ( v2 != v4 );
      v1 = (_QWORD *)a1;
      v2 = *(_QWORD **)(a1 + 608);
    }
    *((_DWORD *)v2 - 1) = 0;
  }
  v14 = (_QWORD *)v1[27];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = v1[26];
          v13 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_23;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_23:
    v14 = (_QWORD *)v1[27];
    if ( v14 )
LABEL_24:
      *((_DWORD *)v14 - 1) = 0;
  }
  v18 = v1[74];
  v38 = 0;
  if ( v18 )
  {
    while ( 1 )
    {
      if ( v38 >= *(_DWORD *)(v18 - 4) )
        return sub_2FD290(v1 + 26, v1 + 70);
      v19 = v18 + 104LL * v38;
      v20 = v1[76];
      if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), (_DWORD)v21 == *(_DWORD *)(v20 - 8)) )
      {
        sub_2FDD40(v39);
        v20 = v1[76];
        v21 = *(unsigned int *)(v20 - 4);
      }
      v22 = v20 + 104 * v21;
      *(_DWORD *)v22 = *(_DWORD *)v19;
      v23 = _mm_loadu_si128((const __m128i *)(v19 + 8));
      *(__m128i *)(v22 + 8) = v23;
      if ( v23.m128i_i64[0] )
        ++*(_DWORD *)(v23.m128i_i64[0] + 8);
      v24 = *(_QWORD *)(v19 + 24);
      *(_QWORD *)(v22 + 32) = 0;
      *(_QWORD *)(v22 + 24) = v24;
      sub_2FD290(v22 + 24, v19 + 24);
      *(_QWORD *)(v22 + 40) = 0;
      v25 = *(_QWORD *)(v19 + 40);
      if ( v25 )
      {
        v26 = *(_DWORD *)(v25 - 4);
        v35 = *(_DWORD *)(v25 - 8);
        v27 = sub_186B270(32LL * v35 + 8) + 8;
        *(_QWORD *)(v27 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v26)).m128i_u64[0];
        *(_QWORD *)(v22 + 40) = v27;
        v28 = *(_QWORD *)(v19 + 40);
        if ( v28 )
        {
          v37 = v28 + 32LL * *(unsigned int *)(v28 - 4);
          if ( v28 != v37 )
            break;
        }
      }
LABEL_40:
      *(_QWORD *)(v22 + 48) = 0;
      v32 = qword_1C7F2C0;
      *(_QWORD *)(v22 + 56) = 0;
      *(_QWORD *)(v22 + 64) = 1;
      *(_QWORD *)(v22 + 72) = 0;
      sub_27B950((__int64)v32, v22 + 48, (int *)(v19 + 48));
      *(_BYTE *)(v22 + 80) = *(_BYTE *)(v19 + 80);
      *(_QWORD *)(v22 + 88) = *(_QWORD *)(v19 + 88);
      *(_DWORD *)(v22 + 96) = *(_DWORD *)(v19 + 96);
      ++*(_DWORD *)(v1[76] - 4LL);
      if ( *(_DWORD *)v19 == 2 )
      {
        sub_2EBE70((__int64)v1, (unsigned __int64 *)(v19 + 88), v38++);
        v18 = v1[74];
        if ( !v18 )
          return sub_2FD290(v1 + 26, v1 + 70);
      }
      else
      {
        v18 = v1[74];
        ++v38;
        if ( !v18 )
          return sub_2FD290(v1 + 26, v1 + 70);
      }
    }
    v29 = v27;
    while ( 1 )
    {
      v31 = qword_1C7F2C0;
      *(_BYTE *)(v29 + 4) &= 0xFCu;
      *(_BYTE *)(v29 + 20) &= 0xFCu;
      *(_DWORD *)v29 = 0;
      *(_QWORD *)(v29 + 8) = 0;
      *(_DWORD *)(v29 + 16) = 1;
      *(_QWORD *)(v29 + 24) = 0;
      v36 = v31;
      if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
      {
        sub_182C690(v31, v29, v28);
        if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
          goto LABEL_39;
LABEL_36:
        v30 = *(_DWORD *)(v28 + 16);
        *(_BYTE *)(v29 + 20) &= ~1u;
        v28 += 32;
        v29 += 32;
        *(_DWORD *)(v29 - 16) = v30;
        if ( v37 == v28 )
          goto LABEL_40;
      }
      else
      {
        *(_DWORD *)v29 = *(_DWORD *)v28;
        if ( (*(_BYTE *)(v28 + 20) & 1) == 0 )
          goto LABEL_36;
LABEL_39:
        sub_182C690(v36, v29 + 16, v28 + 16);
        v28 += 32;
        v29 += 32;
        if ( v37 == v28 )
          goto LABEL_40;
      }
    }
  }
  return sub_2FD290(v1 + 26, v1 + 70);
}

