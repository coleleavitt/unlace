// Alternative name is '_ZN21ClpPlusMinusOneMatrixC1ERKS_'
void __fastcall ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(ClpPlusMinusOneMatrix *this, const __m128i **a2)
{
  unsigned __int64 v4; // rsi
  char v5; // dl
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  int v8; // r12d
  __m128i *v9; // rax
  const __m128i *v10; // rsi
  unsigned int v11; // r8d
  const __m128i *v12; // rdx
  __m128i *v13; // rcx
  __int64 v14; // r8
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rdx
  const __m128i *v18; // r12
  void *v19; // rax
  unsigned __int64 v20; // rdi
  __m128i *v21; // rax
  unsigned __int64 v22; // rdi
  const __m128i *v23; // r8
  int v24; // esi
  unsigned int v25; // r10d
  const __m128i *v26; // rdx
  __m128i *v27; // rcx
  __int64 v28; // r10
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __m128i *v32; // rax
  int v33; // edi
  const __m128i *v34; // r8
  unsigned int v35; // r10d
  const __m128i *v36; // rdx
  __m128i *v37; // rcx
  __int64 v38; // r10
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rdx
  __m128i *v42; // rcx
  const __m128i *v43; // rdx
  __int32 v44; // r9d
  __m128i *v45; // rdx
  const __m128i *v46; // rcx
  __int32 v47; // r11d
  __m128i *v48; // rcx
  const __m128i *v49; // rdx
  __int32 v50; // r11d

  ClpMatrixBase::ClpMatrixBase(this, (const ClpMatrixBase *)a2);
  v4 = *((int *)a2 + 32);
  v5 = *((_BYTE *)a2 + 136);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 15) = 0;
  *(_QWORD *)this = off_4D0E88;
  v6 = *((int *)a2 + 33);
  *((_DWORD *)this + 32) = v4;
  *((_BYTE *)this + 136) = v5;
  *((_DWORD *)this + 33) = v6;
  if ( (_DWORD)v6 )
  {
    v7 = a2[13]->m128i_i32[v6];
    v8 = a2[13]->m128i_i32[v6];
    if ( v7 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v9 = (__m128i *)operator new[](4 * v7);
    *((_QWORD *)this + 15) = v9;
    v10 = a2[15];
    if ( v8 && v10 != v9 )
    {
      v11 = v8 >> 3;
      if ( v8 >> 3 > 0 )
      {
        if ( (v10 >= &v9[2] || v9 >= &v10[2]) && v11 > 1 )
        {
          v12 = a2[15];
          v13 = v9;
          v14 = v11 - 1;
          do
          {
            v15 = _mm_loadu_si128(v12);
            v12 += 2;
            v13 += 2;
            v16 = _mm_loadu_si128(v12 - 1);
            v13[-2] = v15;
            v13[-1] = v16;
          }
          while ( v12 != &v10[2 * v14 + 2] );
        }
        else
        {
          v42 = v9;
          v43 = a2[15];
          v14 = v11 - 1;
          do
          {
            v44 = v43->m128i_i32[0];
            v43 += 2;
            v42 += 2;
            v42[-2].m128i_i32[0] = v44;
            v42[-2].m128i_i32[1] = v43[-2].m128i_i32[1];
            v42[-2].m128i_i32[2] = v43[-2].m128i_i32[2];
            v42[-2].m128i_i32[3] = v43[-2].m128i_i32[3];
            v42[-1].m128i_i32[0] = v43[-1].m128i_i32[0];
            v42[-1].m128i_i32[1] = v43[-1].m128i_i32[1];
            v42[-1].m128i_i32[2] = v43[-1].m128i_i32[2];
            v42[-1].m128i_i32[3] = v43[-1].m128i_i32[3];
          }
          while ( &v10[2 * v14 + 2] != v43 );
        }
        v17 = 32 * ((int)v14 + 1LL);
        v10 = (const __m128i *)((char *)v10 + v17);
        v9 = (__m128i *)((char *)v9 + v17);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_30;
        case 2:
          goto LABEL_29;
        case 3:
          goto LABEL_28;
        case 4:
          goto LABEL_27;
        case 5:
          goto LABEL_26;
        case 6:
          goto LABEL_25;
        case 7:
          v9[1].m128i_i32[2] = v10[1].m128i_i32[2];
LABEL_25:
          v9[1].m128i_i32[1] = v10[1].m128i_i32[1];
LABEL_26:
          v9[1].m128i_i32[0] = v10[1].m128i_i32[0];
LABEL_27:
          v9->m128i_i32[3] = v10->m128i_i32[3];
LABEL_28:
          v9->m128i_i32[2] = v10->m128i_i32[2];
LABEL_29:
          v9->m128i_i32[1] = v10->m128i_i32[1];
LABEL_30:
          v9->m128i_i32[0] = v10->m128i_i32[0];
          break;
        default:
          break;
      }
    }
    v20 = *((_DWORD *)this + 33) + 1;
    if ( v20 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v21 = (__m128i *)operator new[](4 * v20);
    v22 = *((int *)this + 33);
    *((_QWORD *)this + 13) = v21;
    v23 = a2[13];
    v24 = v22 + 1;
    if ( (_DWORD)v22 != -1 && v23 != v21 )
    {
      v25 = v24 >> 3;
      if ( v24 >> 3 > 0 )
      {
        if ( (v23 >= &v21[2] || v21 >= &v23[2]) && v25 > 1 )
        {
          v26 = a2[13];
          v27 = v21;
          v28 = v25 - 1;
          do
          {
            v29 = _mm_loadu_si128(v26);
            v26 += 2;
            v27 += 2;
            v30 = _mm_loadu_si128(v26 - 1);
            v27[-2] = v29;
            v27[-1] = v30;
          }
          while ( v26 != &v23[2 * v28 + 2] );
        }
        else
        {
          v48 = v21;
          v49 = a2[13];
          v28 = v25 - 1;
          do
          {
            v50 = v49->m128i_i32[0];
            v49 += 2;
            v48 += 2;
            v48[-2].m128i_i32[0] = v50;
            v48[-2].m128i_i32[1] = v49[-2].m128i_i32[1];
            v48[-2].m128i_i32[2] = v49[-2].m128i_i32[2];
            v48[-2].m128i_i32[3] = v49[-2].m128i_i32[3];
            v48[-1].m128i_i32[0] = v49[-1].m128i_i32[0];
            v48[-1].m128i_i32[1] = v49[-1].m128i_i32[1];
            v48[-1].m128i_i32[2] = v49[-1].m128i_i32[2];
            v48[-1].m128i_i32[3] = v49[-1].m128i_i32[3];
          }
          while ( &v23[2 * v28 + 2] != v49 );
        }
        v31 = 32 * ((int)v28 + 1LL);
        v23 = (const __m128i *)((char *)v23 + v31);
        v21 = (__m128i *)((char *)v21 + v31);
      }
      switch ( v24 % 8 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_45;
        case 4:
          goto LABEL_44;
        case 5:
          goto LABEL_43;
        case 6:
          goto LABEL_42;
        case 7:
          v21[1].m128i_i32[2] = v23[1].m128i_i32[2];
LABEL_42:
          v21[1].m128i_i32[1] = v23[1].m128i_i32[1];
LABEL_43:
          v21[1].m128i_i32[0] = v23[1].m128i_i32[0];
LABEL_44:
          v21->m128i_i32[3] = v23->m128i_i32[3];
LABEL_45:
          v21->m128i_i32[2] = v23->m128i_i32[2];
LABEL_46:
          v21->m128i_i32[1] = v23->m128i_i32[1];
LABEL_47:
          v21->m128i_i32[0] = v23->m128i_i32[0];
          break;
        default:
          break;
      }
    }
    if ( v22 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v32 = (__m128i *)operator new[](4 * v22);
    v33 = *((_DWORD *)this + 33);
    *((_QWORD *)this + 14) = v32;
    v4 = *((int *)this + 32);
    v34 = a2[14];
    if ( v33 && v34 != v32 )
    {
      v35 = v33 >> 3;
      if ( v33 >> 3 > 0 )
      {
        if ( (v32 >= &v34[2] || v34 >= &v32[2]) && v35 > 1 )
        {
          v36 = a2[14];
          v37 = v32;
          v38 = v35 - 1;
          do
          {
            v39 = _mm_loadu_si128(v36);
            v36 += 2;
            v37 += 2;
            v40 = _mm_loadu_si128(v36 - 1);
            v37[-2] = v39;
            v37[-1] = v40;
          }
          while ( &v34[2 * v38 + 2] != v36 );
        }
        else
        {
          v45 = v32;
          v46 = a2[14];
          v38 = v35 - 1;
          do
          {
            v47 = v46->m128i_i32[0];
            v45 += 2;
            v46 += 2;
            v45[-2].m128i_i32[0] = v47;
            v45[-2].m128i_i32[1] = v46[-2].m128i_i32[1];
            v45[-2].m128i_i32[2] = v46[-2].m128i_i32[2];
            v45[-2].m128i_i32[3] = v46[-2].m128i_i32[3];
            v45[-1].m128i_i32[0] = v46[-1].m128i_i32[0];
            v45[-1].m128i_i32[1] = v46[-1].m128i_i32[1];
            v45[-1].m128i_i32[2] = v46[-1].m128i_i32[2];
            v45[-1].m128i_i32[3] = v46[-1].m128i_i32[3];
          }
          while ( &v32[2 * v38 + 2] != v45 );
        }
        v41 = 32 * ((int)v38 + 1LL);
        v34 = (const __m128i *)((char *)v34 + v41);
        v32 = (__m128i *)((char *)v32 + v41);
      }
      switch ( v33 % 8 )
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
          v32[1].m128i_i32[2] = v34[1].m128i_i32[2];
LABEL_13:
          v32[1].m128i_i32[1] = v34[1].m128i_i32[1];
LABEL_14:
          v32[1].m128i_i32[0] = v34[1].m128i_i32[0];
LABEL_15:
          v32->m128i_i32[3] = v34->m128i_i32[3];
LABEL_16:
          v32->m128i_i32[2] = v34->m128i_i32[2];
LABEL_17:
          v32->m128i_i32[1] = v34->m128i_i32[1];
LABEL_18:
          v32->m128i_i32[0] = v34->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  v18 = a2[1];
  if ( v18 && (_DWORD)v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v19 = (void *)operator new[](8 * v4);
    *((_QWORD *)this + 1) = memcpy(v19, v18, 8 * v4);
  }
  else
  {
    *((_QWORD *)this + 1) = 0;
  }
}

