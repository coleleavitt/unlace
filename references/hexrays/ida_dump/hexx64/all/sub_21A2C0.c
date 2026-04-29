unsigned __int64 __fastcall sub_21A2C0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  const __m128i *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  const __m128i *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  int v18; // r15d
  const __m128i *v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // [rsp+8h] [rbp-C0h]
  __int64 v30; // [rsp+8h] [rbp-C0h]
  _QWORD v31[5]; // [rsp+10h] [rbp-B8h] BYREF
  char v32; // [rsp+38h] [rbp-90h]
  __int64 v33; // [rsp+40h] [rbp-88h]
  __int128 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int128 v36; // [rsp+60h] [rbp-68h]
  const __m128i *v37; // [rsp+70h] [rbp-58h] BYREF
  __int128 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
  {
    v3 = (int)v1;
    v32 = 0;
    v34 = 0;
    memset(&v31[1], 0, 32);
    v31[0] = off_4DF720;
    v33 = 0;
    v35 = 0;
    v37 = nullptr;
    v36 = 0;
    v38 = 0;
    if ( (_DWORD)v1 )
    {
      v5 = qvector_reserve(&v37, 0, (int)v1, 32);
      v6 = *((_QWORD *)&v38 + 1);
      *((_QWORD *)&v38 + 1) = 0;
      v7 = v37;
      v8 = v38 - 1;
      if ( (__int64)v38 - 1 >= 0 )
      {
        v9 = v5;
        do
        {
          v10 = _mm_loadu_si128(v7);
          v9 += 32;
          v7 += 2;
          *(__m128i *)(v9 - 32) = v10;
          *(__m128i *)(v9 - 16) = _mm_loadu_si128(v7 - 1);
        }
        while ( v8-- != 0 );
        v7 = v37;
      }
      v29 = v5;
      qfree(v7);
      *((_QWORD *)&v38 + 1) = v6;
      v37 = (const __m128i *)v29;
      if ( (unsigned __int64)v38 < v3 )
      {
        v12 = v38 + 1;
        v13 = 32 * v38 + v29;
        *(_QWORD *)v13 = 0;
        *(_BYTE *)(v13 + 24) = 0;
        *(_OWORD *)(v13 + 8) = 0;
        if ( v12 < v3 )
        {
          do
          {
            v14 = v12++;
            v15 = &v37[2 * v14];
            v15->m128i_i64[0] = 0;
            v15[1].m128i_i8[8] = 0;
            *(const __m128i *)((char *)v15 + 8) = 0;
          }
          while ( v3 != v12 );
        }
      }
      *(_QWORD *)&v38 = v3;
    }
    sub_11FBB0(a1, (__int64)v31);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( (_QWORD)v38 )
    {
      do
      {
        v19 = &v37[2 * v17];
        if ( v19->m128i_i64[0] )
        {
          if ( !v19[1].m128i_i8[8] )
          {
            v20 = *(int *)(*(_QWORD *)(v19->m128i_i64[0] + 40) + 16LL);
            v21 = &v37[2 * v20];
            if ( !v21->m128i_i64[1] && (v19->m128i_i64[1] == 1 || v21[1].m128i_i64[0] == 1) )
            {
              v27 = *(_QWORD *)(a1 + 432);
              if ( (*(_BYTE *)(v27 + v16 + 26) & 2) == 0 )
              {
                v28 = v27 + 104 * v20;
                if ( (*(_BYTE *)(v28 + 26) & 2) == 0 )
                {
                  v30 = v27 + v16;
                  if ( (unsigned int)sub_219F90(a1, v27 + v16, v28) )
                  {
                    ++v18;
                    *(_DWORD *)(v30 + 24) |= 0x200000u;
                  }
                }
              }
            }
          }
        }
        ++v17;
        v16 += 104;
      }
      while ( v17 < (unsigned __int64)v38 );
      if ( v18 )
        sub_2196C0(a1);
    }
    v31[0] = off_4DF720;
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    v22 = v35;
    if ( v35 )
    {
      v23 = v36;
      if ( (_QWORD)v36 )
      {
        v24 = 0;
        do
        {
          v25 = (__int64 *)(v22 + 24 * v24);
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            qfree(v26);
            v22 = v35;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v36 = 0;
      qfree(v22);
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
  }
  return v39 - __readfsqword(0x28u);
}
