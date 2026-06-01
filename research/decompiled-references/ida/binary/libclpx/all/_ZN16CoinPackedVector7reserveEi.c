void __fastcall CoinPackedVector::reserve(CoinPackedVector *this, int a2)
{
  __m128i *v3; // rbp
  __m128i *v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rax
  int v11; // esi
  __m128i *v12; // r8
  unsigned int v13; // r9d
  const __m128i *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __m128i *v20; // rcx
  __m128i *v21; // rdi
  bool v22; // cl
  unsigned int v23; // r9d
  const __m128i *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // r9
  __m128i *v30; // rcx
  __int64 *v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __m128i *v37; // rdx
  __int32 v38; // r10d
  __m128i *v39; // rdx
  __m128i *v40; // rcx
  __int32 v41; // r10d

  if ( *((_DWORD *)this + 16) < a2 )
  {
    *((_DWORD *)this + 16) = a2;
    v3 = *((__m128i **)this + 4);
    v4 = *((__m128i **)this + 7);
    v5 = *((_QWORD **)this + 5);
    if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL
      || (v6 = operator new[](4LL * a2), v7 = *((int *)this + 16), *((_QWORD *)this + 4) = v6, v7 > 0x1FFFFFFFFFFFFFFELL)
      || (v8 = operator new[](4 * v7), v9 = *((int *)this + 16), *((_QWORD *)this + 7) = v8, v9 > 0xFFFFFFFFFFFFFFFLL) )
    {
      __cxa_throw_bad_array_new_length();
    }
    v10 = (_QWORD *)operator new[](8 * v9);
    v11 = *((_DWORD *)this + 12);
    *((_QWORD *)this + 5) = v10;
    if ( v11 > 0 )
    {
      v12 = *((__m128i **)this + 4);
      if ( v3 != v12 )
      {
        v13 = v11 >> 3;
        if ( v11 >> 3 )
        {
          if ( (v12 >= &v3[2] || v3 >= &v12[2]) && v13 > 1 )
          {
            v14 = v3;
            v15 = *((_QWORD *)this + 4);
            v16 = v13 - 1;
            do
            {
              v17 = _mm_loadu_si128(v14);
              v14 += 2;
              v15 += 32;
              v18 = _mm_loadu_si128(v14 - 1);
              *(__m128i *)(v15 - 32) = v17;
              *(__m128i *)(v15 - 16) = v18;
            }
            while ( v14 != &v3[2 * v16 + 2] );
          }
          else
          {
            v36 = *((_QWORD *)this + 4);
            v37 = v3;
            v16 = v13 - 1;
            do
            {
              v38 = v37->m128i_i32[0];
              v37 += 2;
              v36 += 32;
              *(_DWORD *)(v36 - 32) = v38;
              *(_DWORD *)(v36 - 28) = v37[-2].m128i_i32[1];
              *(_DWORD *)(v36 - 24) = v37[-2].m128i_i32[2];
              *(_DWORD *)(v36 - 20) = v37[-2].m128i_i32[3];
              *(_DWORD *)(v36 - 16) = v37[-1].m128i_i32[0];
              *(_DWORD *)(v36 - 12) = v37[-1].m128i_i32[1];
              *(_DWORD *)(v36 - 8) = v37[-1].m128i_i32[2];
              *(_DWORD *)(v36 - 4) = v37[-1].m128i_i32[3];
            }
            while ( &v3[2 * v16 + 2] != v37 );
          }
          v19 = 2 * ((int)v16 + 1LL);
          v20 = &v3[v19];
          v12 = (__m128i *)((char *)v12 + v19 * 16);
        }
        else
        {
          v20 = v3;
        }
        switch ( v11 & 7 )
        {
          case 0:
            goto LABEL_28;
          case 1:
            goto LABEL_27;
          case 2:
            goto LABEL_26;
          case 3:
            goto LABEL_25;
          case 4:
            goto LABEL_24;
          case 5:
            goto LABEL_23;
          case 6:
            goto LABEL_22;
          case 7:
            v12[1].m128i_i32[2] = v20[1].m128i_i32[2];
LABEL_22:
            v12[1].m128i_i32[1] = v20[1].m128i_i32[1];
LABEL_23:
            v12[1].m128i_i32[0] = v20[1].m128i_i32[0];
LABEL_24:
            v12->m128i_i32[3] = v20->m128i_i32[3];
LABEL_25:
            v12->m128i_i32[2] = v20->m128i_i32[2];
LABEL_26:
            v12->m128i_i32[1] = v20->m128i_i32[1];
LABEL_27:
            v12->m128i_i32[0] = v20->m128i_i32[0];
LABEL_28:
            v11 = *((_DWORD *)this + 12);
            break;
        }
      }
      v21 = *((__m128i **)this + 7);
      v22 = v11 == 0;
      if ( v4 != v21 && v11 )
      {
        v23 = v11 / 8;
        if ( v11 / 8 <= 0 )
        {
          v30 = v4;
        }
        else
        {
          if ( (v4 >= &v21[2] || v21 >= &v4[2]) && v23 > 1 )
          {
            v24 = v4;
            v25 = *((_QWORD *)this + 7);
            v26 = v23 - 1;
            do
            {
              v27 = _mm_loadu_si128(v24);
              v24 += 2;
              v25 += 32;
              v28 = _mm_loadu_si128(v24 - 1);
              *(__m128i *)(v25 - 32) = v27;
              *(__m128i *)(v25 - 16) = v28;
            }
            while ( &v4[2 * v26 + 2] != v24 );
          }
          else
          {
            v39 = *((__m128i **)this + 7);
            v40 = v4;
            v26 = v23 - 1;
            do
            {
              v41 = v40->m128i_i32[0];
              v39 += 2;
              v40 += 2;
              v39[-2].m128i_i32[0] = v41;
              v39[-2].m128i_i32[1] = v40[-2].m128i_i32[1];
              v39[-2].m128i_i32[2] = v40[-2].m128i_i32[2];
              v39[-2].m128i_i32[3] = v40[-2].m128i_i32[3];
              v39[-1].m128i_i32[0] = v40[-1].m128i_i32[0];
              v39[-1].m128i_i32[1] = v40[-1].m128i_i32[1];
              v39[-1].m128i_i32[2] = v40[-1].m128i_i32[2];
              v39[-1].m128i_i32[3] = v40[-1].m128i_i32[3];
            }
            while ( &v21[2 * v26 + 2] != v39 );
          }
          v29 = 2 * ((int)v26 + 1LL);
          v30 = &v4[v29];
          v21 = (__m128i *)((char *)v21 + v29 * 16);
        }
        switch ( v11 % 8 )
        {
          case 1:
            goto LABEL_44;
          case 2:
            goto LABEL_43;
          case 3:
            goto LABEL_42;
          case 4:
            goto LABEL_41;
          case 5:
            goto LABEL_40;
          case 6:
            goto LABEL_39;
          case 7:
            v21[1].m128i_i32[2] = v30[1].m128i_i32[2];
LABEL_39:
            v21[1].m128i_i32[1] = v30[1].m128i_i32[1];
LABEL_40:
            v21[1].m128i_i32[0] = v30[1].m128i_i32[0];
LABEL_41:
            v21->m128i_i32[3] = v30->m128i_i32[3];
LABEL_42:
            v21->m128i_i32[2] = v30->m128i_i32[2];
LABEL_43:
            v21->m128i_i32[1] = v30->m128i_i32[1];
LABEL_44:
            v21->m128i_i32[0] = v30->m128i_i32[0];
            break;
          default:
            break;
        }
        v11 = *((_DWORD *)this + 12);
        v22 = v11 == 0;
      }
      if ( v5 != v10 && !v22 )
      {
        if ( v11 / 8 <= 0 )
        {
          v35 = v5;
        }
        else
        {
          v31 = v5;
          v32 = v10;
          do
          {
            v33 = *v31;
            v32 += 8;
            v31 += 8;
            *(v32 - 8) = v33;
            *(v32 - 7) = *(v31 - 7);
            *(v32 - 6) = *(v31 - 6);
            *(v32 - 5) = *(v31 - 5);
            *(v32 - 4) = *(v31 - 4);
            *(v32 - 3) = *(v31 - 3);
            *(v32 - 2) = *(v31 - 2);
            *(v32 - 1) = *(v31 - 1);
          }
          while ( v32 != &v10[8 * (unsigned int)(v11 / 8 - 1) + 8] );
          v34 = (v11 / 8 - 1 + 1LL) << 6;
          v35 = (_QWORD *)((char *)v5 + v34);
          v10 = (_QWORD *)((char *)v10 + v34);
        }
        switch ( v11 % 8 )
        {
          case 1:
            goto LABEL_60;
          case 2:
            goto LABEL_59;
          case 3:
            goto LABEL_58;
          case 4:
            goto LABEL_57;
          case 5:
            goto LABEL_56;
          case 6:
            goto LABEL_55;
          case 7:
            v10[6] = v35[6];
LABEL_55:
            v10[5] = v35[5];
LABEL_56:
            v10[4] = v35[4];
LABEL_57:
            v10[3] = v35[3];
LABEL_58:
            v10[2] = v35[2];
LABEL_59:
            v10[1] = v35[1];
LABEL_60:
            *v10 = *v35;
            if ( !v5 )
              goto LABEL_8;
            goto LABEL_7;
          default:
            break;
        }
      }
    }
    if ( v5 )
LABEL_7:
      operator delete[](v5);
LABEL_8:
    if ( v4 )
      operator delete[](v4);
    if ( v3 )
      operator delete[](v3);
  }
}

