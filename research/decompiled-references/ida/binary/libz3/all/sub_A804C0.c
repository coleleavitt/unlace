unsigned __int64 __fastcall sub_A804C0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // r12
  void *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // r14
  _QWORD *v13; // r12
  _QWORD *v14; // rbp
  int v15; // eax
  void *v16; // r15
  int v17; // eax
  void *v18; // r15
  unsigned __int64 result; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int32 v22; // eax
  __int32 v23; // ebx
  unsigned int v24; // r14d
  size_t v25; // rdi
  unsigned int *v26; // rax
  int *v27; // r15
  __int64 v28; // rsi
  _DWORD *v29; // rdx
  int *v30; // rax
  int *v31; // rsi
  int v32; // ecx
  char v33; // di
  __int64 v34; // rcx
  char v35; // di
  __int64 v36; // rcx
  char v37; // di
  __int64 v38; // rcx
  char v39; // di
  __int64 v40; // rcx
  __int64 v41; // rbp
  int *v42; // rbp
  void *v43; // r14
  void *v44; // r14
  int *v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rdx
  char *v50; // r12
  unsigned int v51; // ebx
  __int64 v52; // rax
  char **exception; // rbx
  __m128i v54; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+10h] [rbp-68h]
  unsigned int v56; // [rsp+14h] [rbp-64h]
  unsigned __int64 v57; // [rsp+18h] [rbp-60h]
  char *v58[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[6];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + (v3 << 6);
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 32);
        sub_182CBA0(v5, v2 + 48);
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v7 = v2 + 16;
        v2 += 64;
        sub_182CBA0(v6, v7);
      }
      while ( v2 != v4 );
      v2 = a1[6];
    }
    sub_186B220((void *)(v2 - 8));
  }
  v8 = a1[7];
  if ( !v8 )
  {
    v20 = a1[33] - a1[32];
    a1[6] = 0;
    v57 = 0xAAAAAAAAAAAAAAABLL * (v20 >> 3);
    v54.m128i_i32[0] = -1431655765 * (v20 >> 3);
    goto LABEL_27;
  }
  v9 = _mm_loadl_epi64((const __m128i *)(v8 - 8));
  v54.m128i_i64[0] = v9.m128i_i64[0];
  v10 = (_QWORD *)sub_186B270(((unsigned __int64)(unsigned int)_mm_cvtsi128_si32(v9) << 6) + 8);
  v11 = _mm_loadl_epi64(&v54);
  v12 = a1[7];
  v13 = v10 + 1;
  a1[6] = v10 + 1;
  *v10 = v11.m128i_i64[0];
  if ( v12 )
  {
    v54.m128i_i64[0] = v12 + ((unsigned __int64)*(unsigned int *)(v12 - 4) << 6);
    if ( v12 != v54.m128i_i64[0] )
    {
      v14 = v10 + 1;
      while ( 1 )
      {
        *((_BYTE *)v14 + 4) &= 0xFCu;
        v18 = qword_1C7F2C0;
        *((_BYTE *)v14 + 20) &= 0xFCu;
        *(_DWORD *)v14 = 0;
        v14[1] = 0;
        *((_DWORD *)v14 + 4) = 1;
        v14[3] = 0;
        if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
        {
          sub_182C690(v18, v14, v12);
          if ( (*(_BYTE *)(v12 + 20) & 1) != 0 )
          {
LABEL_19:
            sub_182C690(v18, v14 + 2, v12 + 16);
            goto LABEL_13;
          }
        }
        else
        {
          *(_DWORD *)v14 = *(_DWORD *)v12;
          if ( (*(_BYTE *)(v12 + 20) & 1) != 0 )
            goto LABEL_19;
        }
        v15 = *(_DWORD *)(v12 + 16);
        *((_BYTE *)v14 + 20) &= ~1u;
        *((_DWORD *)v14 + 4) = v15;
LABEL_13:
        *((_BYTE *)v14 + 36) &= 0xFCu;
        v16 = qword_1C7F2C0;
        *((_BYTE *)v14 + 52) &= 0xFCu;
        *((_DWORD *)v14 + 8) = 0;
        v14[5] = 0;
        *((_DWORD *)v14 + 12) = 1;
        v14[7] = 0;
        if ( (*(_BYTE *)(v12 + 36) & 1) != 0 )
          sub_182C690(v16, v14 + 4, v12 + 32);
        else
          *((_DWORD *)v14 + 8) = *(_DWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v12 + 52) & 1) != 0 )
        {
          sub_182C690(v16, v14 + 6, v12 + 48);
          v12 += 64;
          v14 += 8;
          if ( v54.m128i_i64[0] == v12 )
          {
LABEL_21:
            v13 = (_QWORD *)a1[6];
            v57 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1[33] - a1[32]) >> 3);
            v54.m128i_i32[0] = v57;
            if ( v13 )
            {
              result = *((unsigned int *)v13 - 1);
              v56 = *((_DWORD *)v13 - 1);
              goto LABEL_23;
            }
LABEL_27:
            result = v54.m128i_u32[0];
            if ( v54.m128i_i32[0] )
            {
              v56 = 0;
              goto LABEL_29;
            }
            return result;
          }
        }
        else
        {
          v17 = *(_DWORD *)(v12 + 48);
          *((_BYTE *)v14 + 52) &= ~1u;
          v12 += 64;
          v14 += 8;
          *((_DWORD *)v14 - 4) = v17;
          if ( v54.m128i_i64[0] == v12 )
            goto LABEL_21;
        }
      }
    }
  }
  v52 = (__int64)(a1[33] - a1[32]) >> 3;
  v56 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v11, 229));
  result = 0xAAAAAAAAAAAAAAABLL * v52;
  v57 = result;
  v54.m128i_i32[0] = result;
LABEL_23:
  if ( v56 < v54.m128i_i32[0] )
  {
    if ( !v13 )
    {
LABEL_29:
      v21 = (_QWORD *)sub_186B270(0x88u);
      v13 = v21 + 1;
      *v21 = 2;
      a1[6] = v21 + 1;
    }
    while ( 1 )
    {
      v22 = *((_DWORD *)v13 - 2);
      v23 = v54.m128i_i32[0];
      if ( v22 >= v54.m128i_i32[0] )
        break;
      while ( 1 )
      {
        v24 = (3 * v22 + 1) >> 1;
        v55 = v24;
        v25 = (v24 << 6) + 8;
        if ( (v22 << 6) + 8 >= (unsigned int)v25 || v22 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v58);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v58);
          sub_233E40((__int64)v58);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B270(v25);
        v27 = (int *)a1[6];
        v54.m128i_i64[1] = (__int64)v26;
        v13 = v26 + 2;
        if ( !v27 )
          break;
        v28 = (unsigned int)*(v27 - 1);
        v29 = v26 + 2;
        v26[1] = v28;
        v30 = v27;
        v31 = &v27[16 * v28];
        if ( v27 != v31 )
        {
          do
          {
            v32 = *v30;
            v33 = *((_BYTE *)v30 + 4);
            v30 += 16;
            v29 += 16;
            *(v29 - 16) = v32;
            *((_BYTE *)v29 - 60) = v33 & 3 | *(_BYTE *)(v29 - 15) & 0xFC;
            v34 = *((_QWORD *)v30 - 7);
            *((_QWORD *)v30 - 7) = 0;
            *((_QWORD *)v29 - 7) = v34;
            v35 = *((_BYTE *)v30 - 44);
            *(v29 - 12) = *(v30 - 12);
            *((_BYTE *)v29 - 44) = v35 & 3 | *(_BYTE *)(v29 - 11) & 0xFC;
            v36 = *((_QWORD *)v30 - 5);
            *((_QWORD *)v30 - 5) = 0;
            *((_QWORD *)v29 - 5) = v36;
            v37 = *((_BYTE *)v30 - 28);
            *(v29 - 8) = *(v30 - 8);
            *((_BYTE *)v29 - 28) = v37 & 3 | *(_BYTE *)(v29 - 7) & 0xFC;
            v38 = *((_QWORD *)v30 - 3);
            *((_QWORD *)v30 - 3) = 0;
            *((_QWORD *)v29 - 3) = v38;
            v39 = *((_BYTE *)v30 - 12);
            *(v29 - 4) = *(v30 - 4);
            *((_BYTE *)v29 - 12) = v39 & 3 | *(_BYTE *)(v29 - 3) & 0xFC;
            v40 = *((_QWORD *)v30 - 1);
            *((_QWORD *)v30 - 1) = 0;
            *((_QWORD *)v29 - 1) = v40;
          }
          while ( v30 != v31 );
        }
        v41 = (unsigned int)*(v27 - 1);
        if ( (_DWORD)v41 )
        {
          v42 = &v27[16 * v41];
          do
          {
            v43 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v27 + 8);
            sub_182CBA0(v43, v27 + 12);
            v44 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v27);
            v45 = v27 + 4;
            v27 += 16;
            sub_182CBA0(v44, v45);
          }
          while ( v27 != v42 );
          v27 = (int *)a1[6];
        }
        sub_186B220(v27 - 2);
        v46 = (unsigned int *)v54.m128i_i64[1];
        v47 = v55;
        a1[6] = v13;
        *v46 = v47;
        v23 = v54.m128i_i32[0];
        v22 = *((_DWORD *)v13 - 2);
        if ( v22 >= v54.m128i_i32[0] )
          goto LABEL_41;
      }
      v51 = v55;
      v26[1] = 0;
      a1[6] = v13;
      *v26 = v51;
    }
LABEL_41:
    v48 = v56;
    v49 = (unsigned int)v57;
    *((_DWORD *)v13 - 1) = v23;
    v48 <<= 6;
    v49 <<= 6;
    result = (unsigned __int64)v13 + v48;
    v50 = (char *)v13 + v49;
    if ( v48 != v49 )
    {
      do
      {
        *(_OWORD *)(result + 16) = 0;
        result += 64LL;
        *(_OWORD *)(result - 16) = 0;
        *(_OWORD *)(result - 64) = 0;
        *(_OWORD *)(result - 32) = 0;
        *(_BYTE *)(result - 60) = 0;
        *(_DWORD *)(result - 48) = 1;
        *(_BYTE *)(result - 44) = 0;
        *(_BYTE *)(result - 28) = 0;
        *(_DWORD *)(result - 16) = 1;
        *(_BYTE *)(result - 12) = 0;
      }
      while ( v50 != (char *)result );
    }
  }
  return result;
}

