unsigned __int64 __fastcall sub_486F80(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbp
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r14
  unsigned __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r8
  __int64 *v22; // r12
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // r11
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  int v29; // ebx
  char *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  char *v33; // rax
  void *v34; // rdi
  unsigned __int64 v36; // rsi
  char *v37; // [rsp+0h] [rbp-88h]
  __int64 v39; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 8);
  v41 = 0;
  ptr = nullptr;
  v2 = *(int *)(v1 + 28);
  if ( *(_DWORD *)(v1 + 28) )
  {
    v3 = qvector_reserve(&ptr, 0, v2, 24);
    v4 = *((_QWORD *)&v41 + 1);
    *((_QWORD *)&v41 + 1) = 0;
    v5 = (char *)ptr;
    v6 = v41 - 1;
    if ( (__int64)v41 - 1 >= 0 )
    {
      v7 = v3;
      do
      {
        v8 = *(_QWORD *)v5;
        v9 = _mm_loadu_si128((const __m128i *)(v5 + 8));
        v7 += 24;
        v5 += 24;
        *((_QWORD *)v5 - 3) = 0;
        *(_QWORD *)(v7 - 24) = v8;
        *(__m128i *)(v7 - 16) = v9;
        *((_QWORD *)v5 - 1) = 0;
      }
      while ( v6-- != 0 );
      v5 = (char *)ptr;
    }
    v37 = (char *)v3;
    qfree(v5);
    v11 = v41;
    *((_QWORD *)&v41 + 1) = v4;
    ptr = v37;
    if ( (unsigned __int64)v41 < v2 )
    {
      v12 = 24 * v41;
      v13 = &v37[24 * v41];
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      v14 = v11 + 1;
      if ( v11 + 1 < v2 )
      {
        v15 = v12 + 24;
        do
        {
          ++v14;
          v16 = (char *)ptr + v15;
          v15 += 24;
          *(_QWORD *)v16 = 0;
          *(_OWORD *)(v16 + 8) = 0;
        }
        while ( v2 != v14 );
      }
    }
    *(_QWORD *)&v41 = v2;
    if ( (int)v2 > 0 )
    {
      v17 = 0;
      do
      {
        v18 = (unsigned __int64 *)((char *)ptr + 3 * v17);
        v19 = *(_QWORD *)(a1 + v17 + 56);
        v20 = *(__int64 **)(v19 + 56);
        v21 = *(_QWORD *)(v19 + 64) << 7;
        v22 = (__int64 *)((char *)v20 + v21);
        if ( v20 != (__int64 *)((char *)v20 + v21) )
        {
          v23 = v18[1];
          do
          {
            v25 = v20[1];
            v36 = *v18;
            v26 = v23 + 1;
            v27 = *v20;
            if ( !v25 )
              LODWORD(v25) = 1;
            LODWORD(v39) = *v20;
            v28 = v18[2];
            v29 = v27 + v25;
            HIDWORD(v39) = v29;
            if ( (unsigned __int64)&v39 < v36 || (unsigned __int64)&v39 >= v36 + 8 * v28 )
            {
              if ( v28 < v26 )
              {
                v36 = qvector_reserve(v18, v36, v23 + 1, 8);
                *v18 = v36;
                v23 = v18[1];
              }
              *(_QWORD *)(v36 + 8 * v23) = v39;
            }
            else
            {
              if ( v28 < v26 )
              {
                v36 = qvector_reserve(v18, v36, v23 + 1, 8);
                *v18 = v36;
                v23 = v18[1];
              }
              v24 = (_DWORD *)(v36 + 8 * v23);
              *v24 = v27;
              v24[1] = v29;
            }
            v20 += 16;
            v23 = v18[1] + 1;
            v18[1] = v23;
          }
          while ( v22 != v20 );
        }
        v17 += 8;
      }
      while ( v17 != 8 * v2 );
    }
  }
  sub_4459B0((__int64 *)(a1 + 152), &ptr);
  v30 = (char *)ptr;
  if ( ptr )
  {
    v31 = v41;
    if ( (_QWORD)v41 )
    {
      v32 = 0;
      do
      {
        v33 = &v30[24 * v32];
        v34 = *(void **)v33;
        if ( *(_QWORD *)v33 )
        {
          *((_QWORD *)v33 + 1) = 0;
          qfree(v34);
          v30 = (char *)ptr;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v30);
  }
  return v42 - __readfsqword(0x28u);
}

