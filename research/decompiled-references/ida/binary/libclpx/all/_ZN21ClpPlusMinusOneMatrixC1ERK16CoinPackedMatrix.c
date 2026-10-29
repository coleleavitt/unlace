// Alternative name is '_ZN21ClpPlusMinusOneMatrixC2ERK16CoinPackedMatrix'
void __fastcall ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(ClpPlusMinusOneMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  int *v5; // r12
  _DWORD *v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  int *v15; // r10
  _DWORD *v16; // r9
  __int64 v17; // r13
  int v18; // r15d
  int v19; // ecx
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r11
  signed int v25; // edi
  int v26; // esi
  __int64 v27; // r12
  int v28; // ebp
  int v29; // ebp
  int v30; // esi
  int v31; // ebp
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // r8
  int v35; // r11d
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // esi
  int v39; // r11d
  signed int v40; // r12d
  int v41; // r8d
  int v42; // edx
  signed int v43; // r12d
  int v44; // r11d
  __int64 v45; // rdx
  int v46; // esi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  _DWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // [rsp+4h] [rbp-84h]
  int v54; // [rsp+8h] [rbp-80h]
  int v55; // [rsp+Ch] [rbp-7Ch]
  __int64 v56; // [rsp+10h] [rbp-78h]
  int v57; // [rsp+18h] [rbp-70h]
  int v58; // [rsp+1Ch] [rbp-6Ch]
  __int64 v59; // [rsp+20h] [rbp-68h]
  __int64 v60; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+40h] [rbp-48h]

  ClpMatrixBase::ClpMatrixBase(this);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 15) = 0;
  v3 = *((_QWORD *)a2 + 5);
  v4 = *((_BYTE *)a2 + 8) == 0;
  *((_DWORD *)this + 13) = 12;
  *(_QWORD *)this = off_4D0E88;
  *((_QWORD *)this + 11) = 0;
  v61 = v3;
  v5 = *((int **)a2 + 6);
  v6 = *((_DWORD **)a2 + 7);
  v7 = *((_DWORD *)a2 + 16);
  v60 = *((_QWORD *)a2 + 4);
  if ( v4 )
    v7 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 33) = v7;
  *((_DWORD *)this + 32) = -1;
  v8 = *((int *)a2 + 18);
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 15) = operator new[](4 * v8);
  v9 = *((_DWORD *)this + 33) + 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v10 = operator new[](4 * v9);
  v11 = *((int *)this + 33);
  *((_QWORD *)this + 13) = v10;
  if ( v11 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 14) = operator new[](4 * v11);
  v12 = *((int *)a2 + 16);
  if ( *((_BYTE *)a2 + 8) )
    v12 = *((int *)a2 + 17);
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v13 = operator new[](4 * v12);
  v14 = *((int *)this + 33);
  v56 = *((_QWORD *)this + 13);
  if ( (int)v14 <= 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v14) = 0;
    operator delete[]((void *)v13);
    goto LABEL_56;
  }
  v59 = *((_QWORD *)this + 14);
  v15 = v5;
  v57 = -(int)(v13 >> 2) & 3;
  v16 = v6;
  v17 = 1;
  v53 = 0;
  v54 = 0;
  v18 = 0;
  v62 = 4 * (-(__int64)(v13 >> 2) & 3);
  v19 = 0;
  do
  {
    *(_DWORD *)(v56 + 4 * v17 - 4) = v19;
    v20 = *v15;
    v21 = v20 + *v16;
    if ( (int)v20 >= v21 )
    {
      *(_DWORD *)(v59 + 4 * v17 - 4) = v19;
      goto LABEL_39;
    }
    v22 = (int)v20 + 1;
    v23 = v60 + 8 * v20 - 8LL * (int)v22;
    v24 = v61 + 4 * v20 - 4LL * (int)v22;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        if ( fabs(*(double *)(v23 + 8 * v22) - 1.0) < 1.0e-10 )
        {
          v26 = *(_DWORD *)(v24 + 4 * v22);
          v27 = v19;
          v28 = v26;
          if ( *((_DWORD *)this + 32) >= v26 )
            v28 = *((_DWORD *)this + 32);
          ++v18;
          ++v19;
          *((_DWORD *)this + 32) = v28;
          *(_DWORD *)(*((_QWORD *)this + 15) + 4 * v27) = v26;
          v21 = *v15 + *v16;
          goto LABEL_16;
        }
        if ( fabs(*(double *)(v23 + 8 * v22) + 1.0) < 1.0e-10 )
          break;
        ++v53;
LABEL_16:
        v29 = v22++;
        if ( v21 <= v29 )
          goto LABEL_22;
      }
      v30 = *(_DWORD *)(v24 + 4 * v22);
      v31 = v30;
      if ( *((_DWORD *)this + 32) >= v30 )
        v31 = *((_DWORD *)this + 32);
      ++v54;
      *((_DWORD *)this + 32) = v31;
      v32 = v25++;
      *(_DWORD *)(v13 + 4 * v32) = v30;
      LODWORD(v32) = v22;
      v21 = *v15 + *v16;
      ++v22;
    }
    while ( v21 > (int)v32 );
LABEL_22:
    *(_DWORD *)(v59 + 4 * v17 - 4) = v19;
    if ( v25 )
    {
      v33 = *((_QWORD *)this + 15);
      v34 = 4LL * v19;
      if ( (v13 >= v33 + v34 + 16 || v33 + v34 >= v13 + 16) && (unsigned int)v25 > 0xC )
      {
        if ( v57 )
        {
          v35 = v19 + 1;
          v55 = 1;
          *(_DWORD *)(v33 + 4LL * v19) = *(_DWORD *)v13;
          if ( v57 != 1 )
          {
            *(_DWORD *)(v33 + 4LL * v35) = *(_DWORD *)(v13 + 4);
            if ( v57 == 2 )
            {
              v35 = v19 + 2;
              v55 = 2;
            }
            else
            {
              v35 = v19 + 3;
              v55 = 3;
              *(_DWORD *)(v33 + 4LL * (v19 + 2)) = *(_DWORD *)(v13 + 8);
            }
          }
        }
        else
        {
          v35 = v19;
          v55 = 0;
        }
        v36 = 0;
        v58 = v25 - v57;
        v37 = v33 + v62 + v34;
        v38 = 0;
        do
        {
          ++v38;
          *(__m128i *)(v37 + v36) = _mm_load_si128((const __m128i *)(v13 + v62 + v36));
          v36 += 16;
        }
        while ( (unsigned int)(v25 - v57) >> 2 > v38 );
        v39 = (v58 & 0xFFFFFFFC) + v35;
        v40 = (v58 & 0xFFFFFFFC) + v55;
        if ( v58 != (v58 & 0xFFFFFFFC) )
        {
          *(_DWORD *)(v33 + 4LL * v39) = *(_DWORD *)(v13 + 4LL * v40);
          if ( v25 > v40 + 1 )
          {
            *(_DWORD *)(v33 + 4LL * (v39 + 1)) = *(_DWORD *)(v13 + 4LL * (v40 + 1));
            if ( v25 > v40 + 2 )
            {
              *(_DWORD *)(v33 + 4LL * (v39 + 2)) = *(_DWORD *)(v13 + 4LL * (v40 + 2));
              if ( v25 > v40 + 3 )
              {
                v41 = v39 + 4;
                *(_DWORD *)(v33 + 4LL * (v39 + 3)) = *(_DWORD *)(v13 + 4LL * (v40 + 3));
                v42 = v40 + 4;
                if ( v25 > v40 + 4 )
                {
                  v43 = v40 + 5;
                  v44 = v39 + 5;
                  *(_DWORD *)(v33 + 4LL * v41) = *(_DWORD *)(v13 + 4LL * v42);
                  if ( v25 > v43 )
                    *(_DWORD *)(v33 + 4LL * v44) = *(_DWORD *)(v13 + 4LL * v43);
                }
              }
            }
          }
        }
      }
      else
      {
        v51 = 0;
        do
        {
          *(_DWORD *)(v33 + v34 + v51) = *(_DWORD *)(v13 + v51);
          v51 += 4;
        }
        while ( v51 != 4LL * (unsigned int)(v25 - 1) + 4 );
      }
      v19 += v25;
    }
LABEL_39:
    v45 = *((int *)this + 33);
    v46 = v17;
    ++v15;
    ++v17;
    ++v16;
  }
  while ( (int)v45 > v46 );
  *(_DWORD *)(v56 + 4 * v45) = v19;
  operator delete[]((void *)v13);
  if ( v53 )
  {
    v47 = *((void **)this + 15);
    if ( v47 )
      operator delete[](v47);
    v48 = *((void **)this + 13);
    *((_QWORD *)this + 15) = 0;
    *((_QWORD *)this + 16) = 0;
    if ( v48 )
      operator delete[](v48);
    v49 = *((void **)this + 14);
    if ( v49 )
      operator delete[](v49);
    v50 = (_DWORD *)operator new[](0xCu);
    *v50 = v18;
    *((_QWORD *)this + 13) = v50;
    *((_QWORD *)this + 14) = 0;
    v50[1] = v54;
    v50[2] = v53;
    return;
  }
LABEL_56:
  ++*((_DWORD *)this + 32);
  v52 = *((_DWORD *)a2 + 16);
  if ( *((_BYTE *)a2 + 8) )
    v52 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 32) = v52;
  *((_BYTE *)this + 136) = 1;
  ClpPlusMinusOneMatrix::checkValid(this, 0);
}

