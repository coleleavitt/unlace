__int64 __fastcall ClpPlusMinusOneMatrix::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  int v9; // eax
  char v10; // dl
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r12d
  __m128i *v14; // rax
  __m128i *v15; // rdi
  unsigned int v16; // r8d
  const __m128i *v17; // rdx
  __m128i *v18; // rcx
  __int64 v19; // r8
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rdx
  unsigned __int64 v24; // rdi
  __m128i *v25; // rax
  unsigned __int64 v26; // rdi
  __m128i *v27; // r8
  int v28; // esi
  unsigned int v29; // r10d
  const __m128i *v30; // rdx
  __m128i *v31; // rcx
  __int64 v32; // r10
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __m128i *v36; // rax
  int v37; // esi
  __m128i *v38; // rdi
  unsigned int v39; // r9d
  const __m128i *v40; // rdx
  __m128i *v41; // rcx
  __int64 v42; // r9
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __m128i *v46; // rcx
  int *v47; // rdx
  int v48; // r11d
  __m128i *v49; // rdx
  int *v50; // rcx
  int v51; // r10d
  __m128i *v52; // rcx
  int *v53; // rdx
  int v54; // r9d

  if ( a1 != a2 )
  {
    ClpMatrixBase::operator=();
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = *(void **)(a1 + 104);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 112);
    if ( v6 )
      operator delete[](v6);
    v7 = *(void **)(a1 + 96);
    if ( v7 )
      operator delete[](v7);
    v8 = *(void **)(a1 + 120);
    if ( v8 )
      operator delete[](v8);
    v9 = *(_DWORD *)(a2 + 128);
    v10 = *(_BYTE *)(a2 + 136);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 128) = v9;
    v11 = *(int *)(a2 + 132);
    *(_BYTE *)(a1 + 136) = v10;
    *(_DWORD *)(a1 + 132) = v11;
    if ( (_DWORD)v11 )
    {
      v12 = *(int *)(*(_QWORD *)(a2 + 104) + 4 * v11);
      v13 = *(_DWORD *)(*(_QWORD *)(a2 + 104) + 4 * v11);
      if ( v12 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_74;
      v14 = (__m128i *)operator new[](4 * v12);
      *(_QWORD *)(a1 + 120) = v14;
      v15 = *(__m128i **)(a2 + 120);
      if ( v13 && v15 != v14 )
      {
        v16 = v13 >> 3;
        if ( v13 >> 3 > 0 )
        {
          if ( (v15 >= &v14[2] || v14 >= &v15[2]) && v16 > 1 )
          {
            v17 = *(const __m128i **)(a2 + 120);
            v18 = v14;
            v19 = v16 - 1;
            do
            {
              v20 = _mm_loadu_si128(v17);
              v17 += 2;
              v18 += 2;
              v21 = _mm_loadu_si128(v17 - 1);
              v18[-2] = v20;
              v18[-1] = v21;
            }
            while ( v17 != &v15[2 * v19 + 2] );
          }
          else
          {
            v52 = v14;
            v53 = *(int **)(a2 + 120);
            v19 = v16 - 1;
            do
            {
              v54 = *v53;
              v53 += 8;
              v52 += 2;
              v52[-2].m128i_i32[0] = v54;
              v52[-2].m128i_i32[1] = *(v53 - 7);
              v52[-2].m128i_i32[2] = *(v53 - 6);
              v52[-2].m128i_i32[3] = *(v53 - 5);
              v52[-1].m128i_i32[0] = *(v53 - 4);
              v52[-1].m128i_i32[1] = *(v53 - 3);
              v52[-1].m128i_i32[2] = *(v53 - 2);
              v52[-1].m128i_i32[3] = *(v53 - 1);
            }
            while ( &v15[2 * v19 + 2] != (__m128i *)v53 );
          }
          v22 = 32 * ((int)v19 + 1LL);
          v15 = (__m128i *)((char *)v15 + v22);
          v14 = (__m128i *)((char *)v14 + v22);
        }
        switch ( v13 % 8 )
        {
          case 1:
            goto LABEL_37;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_35;
          case 4:
            goto LABEL_34;
          case 5:
            goto LABEL_33;
          case 6:
            goto LABEL_32;
          case 7:
            v14[1].m128i_i32[2] = v15[1].m128i_i32[2];
LABEL_32:
            v14[1].m128i_i32[1] = v15[1].m128i_i32[1];
LABEL_33:
            v14[1].m128i_i32[0] = v15[1].m128i_i32[0];
LABEL_34:
            v14->m128i_i32[3] = v15->m128i_i32[3];
LABEL_35:
            v14->m128i_i32[2] = v15->m128i_i32[2];
LABEL_36:
            v14->m128i_i32[1] = v15->m128i_i32[1];
LABEL_37:
            v14->m128i_i32[0] = v15->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      v24 = *(_DWORD *)(a1 + 132) + 1;
      if ( v24 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_74;
      v25 = (__m128i *)operator new[](4 * v24);
      v26 = *(int *)(a1 + 132);
      *(_QWORD *)(a1 + 104) = v25;
      v27 = *(__m128i **)(a2 + 104);
      v28 = v26 + 1;
      if ( (_DWORD)v26 != -1 && v27 != v25 )
      {
        v29 = v28 >> 3;
        if ( v28 >> 3 > 0 )
        {
          if ( (v27 >= &v25[2] || v25 >= &v27[2]) && v29 > 1 )
          {
            v30 = *(const __m128i **)(a2 + 104);
            v31 = v25;
            v32 = v29 - 1;
            do
            {
              v33 = _mm_loadu_si128(v30);
              v30 += 2;
              v31 += 2;
              v34 = _mm_loadu_si128(v30 - 1);
              v31[-2] = v33;
              v31[-1] = v34;
            }
            while ( v30 != &v27[2 * v32 + 2] );
          }
          else
          {
            v46 = v25;
            v47 = *(int **)(a2 + 104);
            v32 = v29 - 1;
            do
            {
              v48 = *v47;
              v47 += 8;
              v46 += 2;
              v46[-2].m128i_i32[0] = v48;
              v46[-2].m128i_i32[1] = *(v47 - 7);
              v46[-2].m128i_i32[2] = *(v47 - 6);
              v46[-2].m128i_i32[3] = *(v47 - 5);
              v46[-1].m128i_i32[0] = *(v47 - 4);
              v46[-1].m128i_i32[1] = *(v47 - 3);
              v46[-1].m128i_i32[2] = *(v47 - 2);
              v46[-1].m128i_i32[3] = *(v47 - 1);
            }
            while ( &v27[2 * v32 + 2] != (__m128i *)v47 );
          }
          v35 = 32 * ((int)v32 + 1LL);
          v27 = (__m128i *)((char *)v27 + v35);
          v25 = (__m128i *)((char *)v25 + v35);
        }
        switch ( v28 % 8 )
        {
          case 1:
            goto LABEL_54;
          case 2:
            goto LABEL_53;
          case 3:
            goto LABEL_52;
          case 4:
            goto LABEL_51;
          case 5:
            goto LABEL_50;
          case 6:
            goto LABEL_49;
          case 7:
            v25[1].m128i_i32[2] = v27[1].m128i_i32[2];
LABEL_49:
            v25[1].m128i_i32[1] = v27[1].m128i_i32[1];
LABEL_50:
            v25[1].m128i_i32[0] = v27[1].m128i_i32[0];
LABEL_51:
            v25->m128i_i32[3] = v27->m128i_i32[3];
LABEL_52:
            v25->m128i_i32[2] = v27->m128i_i32[2];
LABEL_53:
            v25->m128i_i32[1] = v27->m128i_i32[1];
LABEL_54:
            v25->m128i_i32[0] = v27->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      if ( v26 > 0x1FFFFFFFFFFFFFFELL )
LABEL_74:
        __cxa_throw_bad_array_new_length();
      v36 = (__m128i *)operator new[](4 * v26);
      v37 = *(_DWORD *)(a1 + 132);
      *(_QWORD *)(a1 + 112) = v36;
      v38 = *(__m128i **)(a2 + 112);
      if ( v37 && v38 != v36 )
      {
        v39 = v37 >> 3;
        if ( v37 >> 3 > 0 )
        {
          if ( (v36 >= &v38[2] || v38 >= &v36[2]) && v39 > 1 )
          {
            v40 = *(const __m128i **)(a2 + 112);
            v41 = v36;
            v42 = v39 - 1;
            do
            {
              v43 = _mm_loadu_si128(v40);
              v40 += 2;
              v41 += 2;
              v44 = _mm_loadu_si128(v40 - 1);
              v41[-2] = v43;
              v41[-1] = v44;
            }
            while ( &v38[2 * v42 + 2] != v40 );
          }
          else
          {
            v49 = v36;
            v50 = *(int **)(a2 + 112);
            v42 = v39 - 1;
            do
            {
              v51 = *v50;
              v49 += 2;
              v50 += 8;
              v49[-2].m128i_i32[0] = v51;
              v49[-2].m128i_i32[1] = *(v50 - 7);
              v49[-2].m128i_i32[2] = *(v50 - 6);
              v49[-2].m128i_i32[3] = *(v50 - 5);
              v49[-1].m128i_i32[0] = *(v50 - 4);
              v49[-1].m128i_i32[1] = *(v50 - 3);
              v49[-1].m128i_i32[2] = *(v50 - 2);
              v49[-1].m128i_i32[3] = *(v50 - 1);
            }
            while ( &v36[2 * v42 + 2] != v49 );
          }
          v45 = 32 * ((int)v42 + 1LL);
          v38 = (__m128i *)((char *)v38 + v45);
          v36 = (__m128i *)((char *)v36 + v45);
        }
        switch ( v37 % 8 )
        {
          case 1:
            goto LABEL_29;
          case 2:
            goto LABEL_28;
          case 3:
            goto LABEL_27;
          case 4:
            goto LABEL_26;
          case 5:
            goto LABEL_25;
          case 6:
            goto LABEL_24;
          case 7:
            v36[1].m128i_i32[2] = v38[1].m128i_i32[2];
LABEL_24:
            v36[1].m128i_i32[1] = v38[1].m128i_i32[1];
LABEL_25:
            v36[1].m128i_i32[0] = v38[1].m128i_i32[0];
LABEL_26:
            v36->m128i_i32[3] = v38->m128i_i32[3];
LABEL_27:
            v36->m128i_i32[2] = v38->m128i_i32[2];
LABEL_28:
            v36->m128i_i32[1] = v38->m128i_i32[1];
LABEL_29:
            v36->m128i_i32[0] = v38->m128i_i32[0];
            break;
          default:
            return a1;
        }
      }
    }
  }
  return a1;
}

