unsigned __int64 __fastcall sub_3F3300(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v12; // r13
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  char *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rcx
  __m128i v28; // xmm0
  void *v29; // rdi
  void *v30; // rdi
  __int64 v32; // [rsp+10h] [rbp-F8h]
  __int64 v33; // [rsp+18h] [rbp-F0h]
  _QWORD v34[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+30h] [rbp-D8h]
  __int64 v36; // [rsp+40h] [rbp-C8h]
  __int128 v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  __int128 v39; // [rsp+60h] [rbp-A8h]
  _QWORD v40[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v41; // [rsp+80h] [rbp-88h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  __int128 v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( (char *)v6 != a2 )
  {
    v34[1] = 0;
    v36 = 0;
    v34[0] = -1;
    v38 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    if ( (unsigned __int64)a2 < v6 )
    {
      v12 = a2;
      do
      {
        v13 = (_QWORD *)(*a1 + 80LL * (_QWORD)v12);
        v14 = (void *)v13[7];
        if ( v14 )
        {
          v13[8] = 0;
          qfree(v14);
        }
        v15 = (void *)v13[4];
        if ( v15 )
        {
          v13[5] = 0;
          qfree(v15);
        }
        v16 = (void *)v13[1];
        if ( v16 )
        {
          v13[2] = 0;
          qfree(v16);
        }
        ++v12;
      }
      while ( (char *)v6 != v12 );
      a1[1] = (__int64)a2;
    }
    else
    {
      v8 = a1[2];
      if ( (unsigned __int64)v34 < *a1 || (unsigned __int64)v34 >= 80 * v8 + *a1 )
      {
        if ( v8 < (unsigned __int64)a2 )
        {
          v17 = qvector_reserve(a1, 0, a2, 80);
          v18 = a1[2];
          v19 = a1[1];
          a1[2] = v8;
          v32 = v17;
          v20 = (char *)*a1;
          v33 = v18;
          v21 = v19 - 1;
          if ( v21 >= 0 )
          {
            v22 = v17;
            do
            {
              *(_QWORD *)v22 = *(_QWORD *)v20;
              v23 = *((_QWORD *)v20 + 1);
              v24 = _mm_loadu_si128((const __m128i *)v20 + 1);
              *((_QWORD *)v20 + 1) = 0;
              *(_QWORD *)(v22 + 8) = v23;
              *(__m128i *)(v22 + 16) = v24;
              v25 = *((_QWORD *)v20 + 4);
              v26 = _mm_loadu_si128((const __m128i *)(v20 + 40));
              *((_OWORD *)v20 + 1) = 0;
              *(_QWORD *)(v22 + 32) = v25;
              *(__m128i *)(v22 + 40) = v26;
              v27 = *((_QWORD *)v20 + 7);
              v28 = _mm_loadu_si128((const __m128i *)v20 + 4);
              *((_QWORD *)v20 + 4) = 0;
              *(_OWORD *)(v20 + 40) = 0;
              *(_QWORD *)(v22 + 56) = v27;
              *(__m128i *)(v22 + 64) = v28;
              v29 = *((void **)v20 + 4);
              *((_QWORD *)v20 + 7) = 0;
              *((_QWORD *)v20 + 9) = 0;
              if ( v29 )
              {
                *((_QWORD *)v20 + 5) = 0;
                qfree(v29);
              }
              v30 = *((void **)v20 + 1);
              if ( v30 )
              {
                *((_QWORD *)v20 + 2) = 0;
                qfree(v30);
              }
              v20 += 80;
              v22 += 80;
            }
            while ( v21-- != 0 );
            v20 = (char *)*a1;
          }
          qfree(v20);
          v6 = a1[1];
          *a1 = v32;
          a1[2] = v33;
        }
        if ( v6 < (unsigned __int64)a2 )
        {
          v9 = 80 * v6;
          do
          {
            ++v6;
            v10 = v9 + *a1;
            v9 += 80;
            *(_QWORD *)v10 = -1;
            *(_QWORD *)(v10 + 8) = 0;
            *(_QWORD *)(v10 + 32) = 0;
            *(_QWORD *)(v10 + 56) = 0;
            *(_OWORD *)(v10 + 16) = 0;
            *(_OWORD *)(v10 + 40) = 0;
            *(_OWORD *)(v10 + 64) = 0;
          }
          while ( a2 != (char *)v6 );
        }
        a1[1] = (__int64)a2;
      }
      else
      {
        v40[0] = -1;
        v40[1] = 0;
        v42 = 0;
        v44 = 0;
        v41 = 0;
        v43 = 0;
        v45 = 0;
        sub_3F3070(a1, a2, v40, a4, a5, a6);
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}

