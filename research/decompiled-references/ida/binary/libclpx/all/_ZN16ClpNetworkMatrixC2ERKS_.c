// Alternative name is '_ZN16ClpNetworkMatrixC1ERKS_'
void __fastcall ClpNetworkMatrix::ClpNetworkMatrix(ClpNetworkMatrix *this, const __m128i **a2)
{
  int v4; // edi
  int v5; // r8d
  char v6; // al
  unsigned __int64 v7; // rdi
  __m128i *v8; // rax
  int v9; // esi
  const __m128i *v10; // rdi
  int v11; // esi
  unsigned int v12; // r10d
  const __m128i *v13; // rdx
  __m128i *v14; // rcx
  __int64 v15; // r10
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rdx
  const __m128i *v19; // r12
  unsigned __int64 v20; // rbp
  void *v21; // rax
  __m128i *v22; // rcx
  const __m128i *v23; // rdx
  __int32 v24; // r11d

  ClpMatrixBase::ClpMatrixBase(this, (const ClpMatrixBase *)a2);
  v4 = *((_DWORD *)a2 + 29);
  v5 = *((_DWORD *)a2 + 28);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 29) = v4;
  *(_QWORD *)this = off_4D07B8;
  v6 = *((_BYTE *)a2 + 120);
  *((_DWORD *)this + 28) = v5;
  *((_BYTE *)this + 120) = v6;
  if ( v4 )
  {
    v7 = 2 * v4;
    if ( v7 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v8 = (__m128i *)operator new[](4 * v7);
    v9 = *((_DWORD *)this + 29);
    *((_QWORD *)this + 13) = v8;
    v5 = *((_DWORD *)this + 28);
    v10 = a2[13];
    v11 = 2 * v9;
    if ( v11 && v10 != v8 )
    {
      v12 = v11 >> 3;
      if ( v11 >> 3 > 0 )
      {
        if ( (v10 >= &v8[2] || v8 >= &v10[2]) && v12 > 1 )
        {
          v13 = a2[13];
          v14 = v8;
          v15 = v12 - 1;
          do
          {
            v16 = _mm_loadu_si128(v13);
            v13 += 2;
            v14 += 2;
            v17 = _mm_loadu_si128(v13 - 1);
            v14[-2] = v16;
            v14[-1] = v17;
          }
          while ( v13 != &v10[2 * v15 + 2] );
        }
        else
        {
          v22 = v8;
          v23 = a2[13];
          v15 = v12 - 1;
          do
          {
            v24 = v23->m128i_i32[0];
            v23 += 2;
            v22 += 2;
            v22[-2].m128i_i32[0] = v24;
            v22[-2].m128i_i32[1] = v23[-2].m128i_i32[1];
            v22[-2].m128i_i32[2] = v23[-2].m128i_i32[2];
            v22[-2].m128i_i32[3] = v23[-2].m128i_i32[3];
            v22[-1].m128i_i32[0] = v23[-1].m128i_i32[0];
            v22[-1].m128i_i32[1] = v23[-1].m128i_i32[1];
            v22[-1].m128i_i32[2] = v23[-1].m128i_i32[2];
            v22[-1].m128i_i32[3] = v23[-1].m128i_i32[3];
          }
          while ( &v10[2 * v15 + 2] != v23 );
        }
        v18 = 32 * ((int)v15 + 1LL);
        v10 = (const __m128i *)((char *)v10 + v18);
        v8 = (__m128i *)((char *)v8 + v18);
      }
      switch ( v11 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          v8[1].m128i_i32[2] = v10[1].m128i_i32[2];
LABEL_13:
          v8[1].m128i_i32[1] = v10[1].m128i_i32[1];
LABEL_14:
          v8[1].m128i_i32[0] = v10[1].m128i_i32[0];
LABEL_15:
          v8->m128i_i32[3] = v10->m128i_i32[3];
LABEL_16:
          v8->m128i_i32[2] = v10->m128i_i32[2];
LABEL_17:
          v8->m128i_i32[1] = v10->m128i_i32[1];
LABEL_18:
          v8->m128i_i32[0] = v10->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  v19 = a2[1];
  if ( v19 && v5 )
  {
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v20 = 8LL * v5;
    v21 = (void *)operator new[](v20);
    *((_QWORD *)this + 1) = memcpy(v21, v19, v20);
  }
  else
  {
    *((_QWORD *)this + 1) = 0;
  }
}

