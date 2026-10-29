__int64 __fastcall ClpNetworkMatrix::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  int v7; // eax
  int v8; // edi
  unsigned __int64 v9; // rdi
  __m128i *v10; // rax
  int v11; // esi
  __m128i *v12; // rdi
  int v13; // esi
  unsigned int v14; // r9d
  const __m128i *v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // r9
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __m128i *v22; // rdx
  int *v23; // rcx
  int v24; // r10d

  if ( a1 != a2 )
  {
    ClpMatrixBase::operator=();
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = *(void **)(a1 + 96);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 104);
    if ( v6 )
      operator delete[](v6);
    v7 = *(_DWORD *)(a2 + 112);
    v8 = *(_DWORD *)(a2 + 116);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 112) = v7;
    LOBYTE(v7) = *(_BYTE *)(a2 + 120);
    *(_DWORD *)(a1 + 116) = v8;
    *(_BYTE *)(a1 + 120) = v7;
    if ( v8 )
    {
      v9 = 2 * v8;
      if ( v9 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v10 = (__m128i *)operator new[](4 * v9);
      v11 = *(_DWORD *)(a1 + 116);
      *(_QWORD *)(a1 + 104) = v10;
      v12 = *(__m128i **)(a2 + 104);
      v13 = 2 * v11;
      if ( v13 && v12 != v10 )
      {
        v14 = v13 >> 3;
        if ( v13 >> 3 > 0 )
        {
          if ( (v12 >= &v10[2] || v10 >= &v12[2]) && v14 > 1 )
          {
            v15 = *(const __m128i **)(a2 + 104);
            v16 = v10;
            v17 = v14 - 1;
            do
            {
              v18 = _mm_loadu_si128(v15);
              v15 += 2;
              v16 += 2;
              v19 = _mm_loadu_si128(v15 - 1);
              v16[-2] = v18;
              v16[-1] = v19;
            }
            while ( v15 != &v12[2 * v17 + 2] );
          }
          else
          {
            v22 = v10;
            v23 = *(int **)(a2 + 104);
            v17 = v14 - 1;
            do
            {
              v24 = *v23;
              v22 += 2;
              v23 += 8;
              v22[-2].m128i_i32[0] = v24;
              v22[-2].m128i_i32[1] = *(v23 - 7);
              v22[-2].m128i_i32[2] = *(v23 - 6);
              v22[-2].m128i_i32[3] = *(v23 - 5);
              v22[-1].m128i_i32[0] = *(v23 - 4);
              v22[-1].m128i_i32[1] = *(v23 - 3);
              v22[-1].m128i_i32[2] = *(v23 - 2);
              v22[-1].m128i_i32[3] = *(v23 - 1);
            }
            while ( &v10[2 * v17 + 2] != v22 );
          }
          v20 = 32 * ((int)v17 + 1LL);
          v12 = (__m128i *)((char *)v12 + v20);
          v10 = (__m128i *)((char *)v10 + v20);
        }
        switch ( v13 % 8 )
        {
          case 1:
            goto LABEL_25;
          case 2:
            goto LABEL_24;
          case 3:
            goto LABEL_23;
          case 4:
            goto LABEL_22;
          case 5:
            goto LABEL_21;
          case 6:
            goto LABEL_20;
          case 7:
            v10[1].m128i_i32[2] = v12[1].m128i_i32[2];
LABEL_20:
            v10[1].m128i_i32[1] = v12[1].m128i_i32[1];
LABEL_21:
            v10[1].m128i_i32[0] = v12[1].m128i_i32[0];
LABEL_22:
            v10->m128i_i32[3] = v12->m128i_i32[3];
LABEL_23:
            v10->m128i_i32[2] = v12->m128i_i32[2];
LABEL_24:
            v10->m128i_i32[1] = v12->m128i_i32[1];
LABEL_25:
            v10->m128i_i32[0] = v12->m128i_i32[0];
            break;
          default:
            return a1;
        }
      }
    }
  }
  return a1;
}

