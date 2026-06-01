__int64 __fastcall sub_1582780(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r14
  __int64 v4; // r13
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  int v9; // r13d
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  _DWORD *v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v17; // rdx
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 *v21; // rsi
  unsigned __int64 *v22; // r15
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  int v25; // eax
  _DWORD *v26; // r15
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  int v29; // eax
  int v30; // r15d
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(_DWORD **)a2;
    v4 = a2 + 16;
    v6 = *(unsigned __int64 **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v9 = *(_DWORD *)(a2 + 8);
      if ( v8 <= v7 )
      {
        v21 = *(unsigned __int64 **)a1;
        if ( v8 )
        {
          v22 = &v6[4 * v8];
          do
          {
            v23 = v6[1];
            *(_DWORD *)v6 = *v3;
            if ( v23 )
            {
              v24 = v6[2];
              if ( v24 )
              {
                sub_1580C40(v24, v23);
                v6[1] = 0;
              }
            }
            v25 = v3[6];
            v6 += 4;
            v3 += 8;
            *((_DWORD *)v6 - 2) = v25;
            *(__m128i *)(v6 - 3) = _mm_loadu_si128((const __m128i *)(v3 - 6));
            *((_QWORD *)v3 - 3) = 0;
          }
          while ( v6 != v22 );
          v21 = *(unsigned __int64 **)a1;
          v7 = *(unsigned int *)(a1 + 8);
        }
        sub_C239B0((__int64)v6, (__int64)&v21[4 * v7]);
        *(_DWORD *)(a1 + 8) = v9;
        sub_C239B0(*(_QWORD *)a2, *(_QWORD *)a2 + 32LL * *(unsigned int *)(a2 + 8));
        *(_DWORD *)(a2 + 8) = 0;
      }
      else
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          sub_C239B0(*(_QWORD *)a1, (__int64)&v6[4 * v7]);
          *(_DWORD *)(a1 + 8) = 0;
          v6 = (unsigned __int64 *)sub_2237400(a1, a1 + 16, v8, 32, v32);
          sub_15825A0(a1, (__int64)v6);
          v30 = v32[0];
          if ( a1 + 16 != *(_QWORD *)a1 )
            free(*(void **)a1);
          *(_QWORD *)a1 = v6;
          v3 = *(_DWORD **)a2;
          *(_DWORD *)(a1 + 12) = v30;
          v8 = *(unsigned int *)(a2 + 8);
          v10 = v3;
        }
        else
        {
          v10 = *(_DWORD **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v31 = 32 * v7;
            v26 = &v3[8 * v7];
            do
            {
              v27 = v6[1];
              *(_DWORD *)v6 = *v3;
              if ( v27 )
              {
                v28 = v6[2];
                if ( v28 )
                {
                  sub_1580C40(v28, v27);
                  v6[1] = 0;
                }
              }
              v29 = v3[6];
              v3 += 8;
              v6 += 4;
              *((_DWORD *)v6 - 2) = v29;
              *(__m128i *)(v6 - 3) = _mm_loadu_si128((const __m128i *)(v3 - 6));
              *((_QWORD *)v3 - 3) = 0;
            }
            while ( v26 != v3 );
            v3 = *(_DWORD **)a2;
            v8 = *(unsigned int *)(a2 + 8);
            v6 = (unsigned __int64 *)(v31 + *(_QWORD *)a1);
            v10 = (_DWORD *)(*(_QWORD *)a2 + v31);
          }
        }
        v11 = &v3[8 * v8];
        if ( v11 != v10 )
        {
          do
          {
            v12 = *v10;
            v6[2] = 0;
            v10 += 8;
            v6 += 4;
            *(v6 - 3) = 0;
            *((_DWORD *)v6 - 8) = v12;
            *((_DWORD *)v6 - 2) = *(v10 - 2);
            *(v6 - 2) = *((_QWORD *)v10 - 2);
            *(v6 - 3) = *((_QWORD *)v10 - 3);
            *((_QWORD *)v10 - 3) = 0;
          }
          while ( v11 != v10 );
          v3 = *(_DWORD **)a2;
        }
        *(_DWORD *)(a1 + 8) = v9;
        v13 = &v3[8 * *(unsigned int *)(a2 + 8)];
        while ( v3 != v13 )
        {
          v13 -= 8;
          v14 = *((_QWORD *)v13 + 1);
          if ( v14 )
          {
            v15 = *((_QWORD *)v13 + 2);
            if ( v15 )
              sub_1580C40(v15, v14);
          }
        }
        *(_DWORD *)(a2 + 8) = 0;
      }
    }
    else
    {
      v17 = 4 * v7;
      v18 = &v6[v17];
      if ( &v6[v17] != v6 )
      {
        do
        {
          v18 -= 4;
          v19 = v18[1];
          if ( v19 )
          {
            v20 = v18[2];
            if ( v20 )
              sub_1580C40(v20, v19);
          }
        }
        while ( v18 != v6 );
        v6 = *(unsigned __int64 **)a1;
      }
      if ( v6 != (unsigned __int64 *)(a1 + 16) )
        free(v6);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = v4;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
