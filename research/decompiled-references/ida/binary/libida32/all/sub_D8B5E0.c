__int64 __fastcall sub_D8B5E0(__int64 a1, __int64 a2)
{
  void **v3; // rbx
  void **v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  void **v9; // rdi
  unsigned __int64 v10; // rcx
  void **v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rsi
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  void **v20; // rbp
  void *v22; // rax
  void **v23; // rbx
  void **v24; // rdx
  void **v25; // rbx
  void **v26; // rbp
  void **v27; // rbx
  void *v28; // rdi
  void **v29; // rbp
  void *v30; // rdx
  void *v31; // rdi
  void **v32; // rbx
  void **v33; // rbp
  void **v34; // r15
  void *v35; // rcx
  void *v36; // rdi
  unsigned int v37; // [rsp+4h] [rbp-44h]
  __int64 v38; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(void ***)a2;
    v5 = *(void ***)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v37 = *(_DWORD *)(a2 + 8);
      v7 = v37;
      if ( v37 <= v6 )
      {
        v24 = *(void ***)a1;
        if ( v37 )
        {
          v33 = *(void ***)a1;
          v38 = v37;
          v34 = &v3[v38];
          do
          {
            v35 = *v3;
            *v3 = nullptr;
            v36 = *v33;
            *v33 = v35;
            if ( v36 )
              operator delete[](v36);
            ++v3;
            ++v33;
          }
          while ( v3 != v34 );
          v5 = (void **)((char *)v5 + v38 * 8);
          v24 = *(void ***)a1;
          v6 = *(unsigned int *)(a1 + 8);
        }
        v25 = &v24[v6];
        while ( v5 != v25 )
        {
          while ( *--v25 )
          {
            operator delete[](*v25);
            if ( v5 == v25 )
              goto LABEL_36;
          }
        }
LABEL_36:
        v26 = *(void ***)a2;
        *(_DWORD *)(a1 + 8) = v37;
        v27 = &v26[*(unsigned int *)(a2 + 8)];
        if ( v26 != v27 )
        {
          while ( 1 )
          {
            v28 = *--v27;
            if ( *v27 )
              break;
LABEL_40:
            if ( v26 == v27 )
              goto LABEL_18;
          }
          while ( 1 )
          {
            operator delete[](v28);
            if ( v26 == v27 )
              break;
            v28 = *--v27;
            if ( !*v27 )
              goto LABEL_40;
          }
        }
      }
      else
      {
        if ( v37 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v32 = &v5[v6];
          while ( v32 != v5 )
          {
            while ( *--v32 )
            {
              operator delete[](*v32);
              if ( v32 == v5 )
                goto LABEL_51;
            }
          }
LABEL_51:
          *(_DWORD *)(a1 + 8) = 0;
          v6 = 0;
          sub_D8B470(a1, v37);
          v3 = *(void ***)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v5 = *(void ***)a1;
          v8 = *(_QWORD *)a2;
        }
        else
        {
          v8 = *(_QWORD *)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 8LL;
            v29 = (void **)((char *)v3 + v6);
            do
            {
              v30 = *v3;
              *v3 = nullptr;
              v31 = *v5;
              *v5 = v30;
              if ( v31 )
                operator delete[](v31);
              ++v3;
              ++v5;
            }
            while ( v3 != v29 );
            v3 = *(void ***)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(void ***)a1;
            v8 = *(_QWORD *)a2 + v6;
          }
        }
        v9 = &v3[v7];
        v10 = (unsigned __int64)v5 + v6;
        if ( v9 != (void **)v8 )
        {
          v11 = (void **)v8;
          v12 = ((unsigned __int64)v9 - v8 - 8) >> 3;
          if ( (v10 >= v8 + 16 || v8 >= (unsigned __int64)v5 + v6 + 16) && (unsigned __int64)v9 - v8 - 8 > 0x10 )
          {
            v13 = v12 + 1;
            v14 = 0;
            do
            {
              v15 = _mm_loadu_si128((const __m128i *)(v8 + v14));
              *(_OWORD *)(v8 + v14) = 0;
              *(__m128i *)(v10 + v14) = v15;
              v14 += 16;
            }
            while ( v14 != 16 * ((v12 + 1) >> 1) );
            v16 = 8 * (v13 & 0xFFFFFFFFFFFFFFFELL);
            v17 = (__int64 *)(v16 + v8);
            v18 = (_QWORD *)(v16 + v10);
            if ( v13 != (v13 & 0xFFFFFFFFFFFFFFFELL) )
            {
              v19 = *v17;
              *v17 = 0;
              *v18 = v19;
            }
          }
          else
          {
            do
            {
              v22 = *v11;
              *v11++ = nullptr;
              v10 += 8LL;
              *(_QWORD *)(v10 - 8) = v22;
            }
            while ( v9 != v11 );
          }
          v3 = *(void ***)a2;
        }
        *(_DWORD *)(a1 + 8) = v37;
        v20 = &v3[*(unsigned int *)(a2 + 8)];
        while ( v3 != v20 )
        {
          while ( *--v20 )
          {
            operator delete[](*v20);
            if ( v3 == v20 )
              goto LABEL_18;
          }
        }
      }
LABEL_18:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v23 = &v5[v6];
      if ( v23 != v5 )
      {
        do
        {
          while ( *--v23 )
          {
            operator delete[](*v23);
            if ( v23 == v5 )
              goto LABEL_25;
          }
        }
        while ( v23 != v5 );
LABEL_25:
        v5 = *(void ***)a1;
      }
      if ( v5 != (void **)(a1 + 16) )
        free(v5);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}

