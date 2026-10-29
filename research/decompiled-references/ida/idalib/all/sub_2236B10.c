void __fastcall sub_2236B10(__int64 a1, void *a2, void *a3, __int64 a4)
{
  void *v4; // r8
  char v8; // al
  __int64 *v9; // rsi
  size_t v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 *v15; // rax
  __int64 *v16; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  __int64 *v19; // r8
  unsigned int v20; // r11d
  __int64 v21; // r9
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 *v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rdx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  __int64 *v44; // rax
  __int64 *v45; // rax
  int v46; // edx
  int v47; // edx
  int v48; // edx

  if ( a1 != a4 )
  {
    v4 = a3;
    v8 = *(_BYTE *)(a4 + 20);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v16 = *(__int64 **)a1;
      v17 = *(_DWORD *)(a1 + 12);
      if ( v8 )
      {
        v18 = *(_DWORD *)(a4 + 12);
        v19 = *(__int64 **)a4;
        v20 = v18;
        if ( v17 <= v18 )
          v20 = *(_DWORD *)(a1 + 12);
        v21 = 8LL * v20;
        v22 = &v16[(unsigned __int64)v21 / 8];
        if ( &v16[(unsigned __int64)v21 / 8] == v16 )
        {
          v31 = *(__int64 **)a1;
        }
        else
        {
          v23 = (unsigned __int64)(v21 - 8) >> 3;
          if ( (v19 >= v16 + 2 || v16 >= v19 + 2) && (v23 & 0x1FFFFFFFFFFFFFFELL) != 0 )
          {
            v24 = v23 + 1;
            v25 = 0;
            do
            {
              v26 = _mm_loadu_si128((const __m128i *)&v16[v25]);
              *(__m128i *)&v16[v25] = _mm_loadu_si128((const __m128i *)&v19[v25]);
              *(__m128i *)&v19[v25] = v26;
              v25 += 2;
            }
            while ( 2 * (v24 >> 1) != v25 );
            v27 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v28 = &v16[v27];
            v29 = &v19[v27];
            if ( v24 != (v24 & 0xFFFFFFFFFFFFFFFELL) )
            {
              v30 = *v28;
              *v28 = *v29;
              *v29 = v30;
            }
          }
          else
          {
            do
            {
              v36 = *v19;
              v37 = *v16++;
              ++v19;
              *(v16 - 1) = v36;
              *(v19 - 1) = v37;
            }
            while ( v16 != v22 );
          }
          v16 = *(__int64 **)a1;
          v19 = *(__int64 **)a4;
          v31 = (__int64 *)(*(_QWORD *)a1 + v21);
        }
        v32 = &v19[(unsigned __int64)v21 / 8];
        if ( v17 <= v20 )
        {
          v38 = v18;
          if ( v32 != &v19[v38] )
          {
            memmove(v31, v32, v38 * 8 - v21);
            v17 = *(_DWORD *)(a1 + 12);
            v18 = *(_DWORD *)(a4 + 12);
          }
        }
        else
        {
          v33 = v17;
          if ( v31 != &v16[v33] )
          {
            memmove(v32, v31, v33 * 8 - v21);
            v17 = *(_DWORD *)(a1 + 12);
            v18 = *(_DWORD *)(a4 + 12);
          }
        }
        *(_DWORD *)(a1 + 12) = v18;
        v34 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 12) = v17;
        v35 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v34;
        *(_DWORD *)(a4 + 16) = v35;
      }
      else
      {
        if ( 8LL * v17 )
          v4 = memmove(a3, v16, 8LL * v17);
        v39 = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
        v40 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 8) = v39;
        v41 = *(_DWORD *)(a4 + 12);
        *(_DWORD *)(a4 + 12) = v40;
        v42 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 12) = v41;
        v43 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = v42;
        *(_DWORD *)(a1 + 16) = v43;
        v44 = *(__int64 **)a4;
        *(_BYTE *)(a1 + 20) = 0;
        *(_QWORD *)a1 = v44;
        *(_QWORD *)a4 = v4;
        *(_BYTE *)(a4 + 20) = 1;
      }
    }
    else
    {
      v9 = *(__int64 **)a4;
      if ( v8 )
      {
        v10 = 8LL * *(unsigned int *)(a4 + 12);
        if ( v10 )
          a2 = memmove(a2, v9, v10);
        v11 = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v11;
        v12 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 12);
        v13 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 12) = v12;
        v14 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v13;
        *(_DWORD *)(a4 + 16) = v14;
        v15 = *(__int64 **)a1;
        *(_BYTE *)(a4 + 20) = 0;
        *(_QWORD *)a4 = v15;
        *(_QWORD *)a1 = a2;
        *(_BYTE *)(a1 + 20) = 1;
      }
      else
      {
        v45 = *(__int64 **)a1;
        v46 = *(_DWORD *)(a4 + 8);
        *(_QWORD *)a1 = v9;
        *(_QWORD *)a4 = v45;
        LODWORD(v45) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v46;
        v47 = *(_DWORD *)(a4 + 12);
        *(_DWORD *)(a4 + 8) = (_DWORD)v45;
        LODWORD(v45) = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 12) = v47;
        v48 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 12) = (_DWORD)v45;
        LODWORD(v45) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v48;
        *(_DWORD *)(a4 + 16) = (_DWORD)v45;
      }
    }
  }
}
