unsigned __int64 __fastcall sub_528B00(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r15
  char *v5; // r14
  __int64 v6; // rsi
  char *v7; // rbp
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // r14
  bool v17; // cc
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rsi
  int v22; // ebp
  __int64 v23; // rax
  char *v24; // rax
  int v25; // ecx
  int *v26; // rbx
  int *v27; // r15
  int v28; // esi
  int v29; // ecx
  unsigned __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  char *v33; // rax
  void *v34; // rdi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  void *v38; // rdi
  char *v39; // [rsp+10h] [rbp-68h]
  __int64 v40; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 140);
  v43 = __readfsqword(0x28u);
  if ( v1 && !errorexit )
  {
    v2 = *(_QWORD *)(a1 + 152);
    ptr = nullptr;
    v42 = 0;
    v4 = v2;
    if ( v2 )
    {
      v5 = (char *)qvector_reserve(&ptr, 0, v2, 40);
      v6 = *((_QWORD *)&v42 + 1);
      *((_QWORD *)&v42 + 1) = 0;
      v7 = (char *)ptr;
      v8 = v42 - 1;
      if ( (__int64)v42 - 1 >= 0 )
      {
        v9 = v5;
        do
        {
          v10 = *(_QWORD *)v7;
          v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
          *(_QWORD *)v7 = 0;
          *((_QWORD *)v7 + 2) = 0;
          *(_QWORD *)v9 = v10;
          *(__m128i *)(v9 + 8) = v11;
          *((_QWORD *)v9 + 3) = *((_QWORD *)v7 + 3);
          v9[32] = v7[32];
          v12 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            v40 = v8;
            v39 = v9;
            qfree(v12);
            v8 = v40;
            v9 = v39;
          }
          v7 += 40;
          v9 += 40;
        }
        while ( v8-- != 0 );
        v7 = (char *)ptr;
      }
      qfree(v7);
      v14 = v42;
      ptr = v5;
      *((_QWORD *)&v42 + 1) = v6;
      if ( (unsigned __int64)v42 < v2 )
      {
        v15 = 40 * v42;
        do
        {
          v16 = &v5[v15];
          ++v14;
          v15 += 40;
          *(_QWORD *)v16 = 0;
          *((_QWORD *)v16 + 3) = 0;
          v16[32] = 0;
          *(_OWORD *)(v16 + 8) = 0;
          v5 = (char *)ptr;
        }
        while ( v2 != v14 );
      }
      v17 = *(_QWORD *)(a1 + 152) <= 1u;
      *(_QWORD *)&v42 = v2;
      if ( !v17 )
      {
        v18 = 1;
        v19 = 1;
        do
        {
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v19);
          if ( v20 )
          {
            v21 = &v5[40 * v19];
            *((_DWORD *)v21 + 6) = *(_DWORD *)(v20 + 64);
            sub_51E0F0(&ptr, (__int64 *)v21, (_QWORD **)v20);
            v5 = (char *)ptr;
          }
          v19 = ++v18;
        }
        while ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 152) );
        v4 = v42;
      }
      if ( v4 > 1 )
      {
        v22 = 1;
        v23 = 1;
        do
        {
          v24 = &v5[40 * v23];
          v25 = *((_DWORD *)v24 + 7);
          if ( *((_DWORD *)v24 + 6) != v25 )
          {
            if ( *((_DWORD *)v24 + 6) <= v25 )
            {
              if ( !under_debugger )
                interr(1000);
              BUG();
            }
            if ( !v24[32] )
            {
              v26 = *(int **)v24;
              v24[32] = 1;
              v27 = &v26[*((_QWORD *)v24 + 1)];
              if ( v26 != v27 )
              {
                do
                {
                  v28 = *v26++;
                  sub_51DDF0(&ptr, v28);
                }
                while ( v27 != v26 );
                v5 = (char *)ptr;
              }
            }
          }
          v23 = ++v22;
        }
        while ( v22 < (unsigned __int64)v42 );
      }
      v2 = *(_QWORD *)(a1 + 152);
    }
    else
    {
      v5 = nullptr;
    }
    *(_BYTE *)(a1 + 134) = 1;
    v36 = v2;
    v29 = v2;
    v37 = (unsigned int)(v2 - 1);
    if ( (int)v37 > 0 )
    {
      do
      {
        if ( v37 < v36 )
        {
          v38 = *(void **)(*(_QWORD *)(a1 + 144) + 8 * v37);
          if ( v38 )
          {
            if ( !v5[40 * v37 + 32] )
            {
              sub_528A10(v38, *(_QWORD *)a1, v37);
              v36 = *(_QWORD *)(a1 + 152);
              v5 = (char *)ptr;
            }
          }
        }
        --v37;
      }
      while ( v37 );
      v29 = v36;
    }
    *(_BYTE *)(a1 + 134) = 0;
    *(_DWORD *)(a1 + 140) = 0;
    v30 = ((v36 * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64) & 0xFFFFFFFFFFFFFFFELL;
    if ( v30 < 0x3E8 )
      LODWORD(v30) = 1000;
    *(_DWORD *)(a1 + 136) = v30 + v29;
    if ( v5 )
    {
      v31 = v42;
      if ( (_QWORD)v42 )
      {
        v32 = 0;
        do
        {
          v33 = &v5[40 * v32];
          v34 = *(void **)v33;
          if ( *(_QWORD *)v33 )
          {
            *((_QWORD *)v33 + 1) = 0;
            qfree(v34);
            v5 = (char *)ptr;
          }
          ++v32;
        }
        while ( v31 != v32 );
      }
      *(_QWORD *)&v42 = 0;
      qfree(v5);
    }
  }
  return v43 - __readfsqword(0x28u);
}

