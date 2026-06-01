__int64 __fastcall sub_1002DF0(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __m128i a7,
        int a8,
        int a9)
{
  int v12; // r14d
  const __m128i *v13; // rbp
  _QWORD *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 result; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rsi
  unsigned __int8 v27; // cf
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __m128i *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  int v39; // ebp
  int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned int v45; // [rsp+8h] [rbp-90h]
  unsigned int v46; // [rsp+8h] [rbp-90h]
  unsigned int v47; // [rsp+8h] [rbp-90h]
  unsigned int v48; // [rsp+Ch] [rbp-8Ch]
  unsigned int v49; // [rsp+Ch] [rbp-8Ch]
  unsigned int v50; // [rsp+Ch] [rbp-8Ch]
  unsigned int v51; // [rsp+Ch] [rbp-8Ch]
  void *v52; // [rsp+10h] [rbp-88h] BYREF
  signed __int64 v53; // [rsp+18h] [rbp-80h]
  _QWORD v54[15]; // [rsp+20h] [rbp-78h] BYREF

  if ( a8 >= 0 )
  {
    if ( *(_QWORD *)a2 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) - *(_DWORD *)(*(_QWORD *)a2 + 8LL);
    }
    else
    {
      v29 = *(_QWORD *)(a2 + 16);
      while ( 1 )
      {
        v30 = *(_QWORD *)(v29 + 8);
        if ( !v30 )
          break;
        v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v30 & 4) == 0 || !v29 )
        {
          v12 = *(_DWORD *)(v29 + 32);
          goto LABEL_4;
        }
      }
      v12 = 64;
    }
LABEL_4:
    v13 = (const __m128i *)&v52;
    if ( !a3 )
    {
LABEL_10:
      v15 = *(_DWORD *)(a1 + 312);
      v16 = v15 + v12 + 1;
      if ( v15 >= v16 || v16 > *(_DWORD *)(a1 + 316) )
      {
        sub_FA3370((__int64)&v52, *(_QWORD *)(a1 + 8), a5, 63);
        sub_AC6300((__int64)&v52);
        sub_10018B0(a1, *(_QWORD *)(a1 + 8), 0x100000020uLL, a7);
        return 0;
      }
      *(_QWORD *)(a2 + 24) = a3;
      *(_QWORD *)(a2 + 32) = a4;
      v31 = *(_DWORD *)(a1 + 312);
      BYTE3(v52) &= ~0x80u;
      v54[0] = a6 | a2 & 0xFFFFFFFFFFFFFFF8LL;
      v53 = a5;
      LODWORD(v52) = v31 & 0x7FFFFFFF | (unsigned int)v52 & 0x80000000;
      v32 = *(unsigned int *)(a1 + 192);
      v33 = v32 + 1;
      v34 = 24 * v32;
      if ( v32 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 196) )
      {
        v35 = *(_QWORD *)(a1 + 184);
LABEL_23:
        v36 = (__m128i *)(v34 + v35);
        *v36 = _mm_loadu_si128(v13);
        v36[1].m128i_i64[0] = v13[1].m128i_i64[0];
        v37 = *(unsigned int *)(a1 + 208);
        v38 = *(unsigned int *)(a1 + 212);
        ++*(_DWORD *)(a1 + 192);
        v39 = *(_DWORD *)(a1 + 312);
        if ( v37 + 1 > v38 )
        {
          sub_22134E0(a1 + 200, a1 + 216, v37 + 1, 4);
          v37 = *(unsigned int *)(a1 + 208);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 200) + 4 * v37) = v39;
        v40 = *(_DWORD *)(a1 + 312);
        ++*(_DWORD *)(a1 + 208);
        *(_DWORD *)(a1 + 476) = v40;
        v41 = v40 + v12 + 1;
        *(_DWORD *)(a1 + 312) = v41;
        *(_DWORD *)(a1 + 480) = v41;
        result = (unsigned int)(*(_DWORD *)(a1 + 192) - 1);
        *(_DWORD *)(a1 + 472) = result;
        return result;
      }
      v42 = *(_QWORD *)(a1 + 184);
      v43 = a1 + 184;
      if ( v42 > (unsigned __int64)&v52 )
      {
        v44 = a1 + 200;
      }
      else
      {
        v44 = a1 + 200;
        if ( (unsigned __int64)&v52 < v42 + v34 )
        {
          sub_22134E0(v43, v44, v33, 24);
          v35 = *(_QWORD *)(a1 + 184);
          v13 = (const __m128i *)((char *)&v52 + v35 - v42);
          v34 = 24LL * *(unsigned int *)(a1 + 192);
          goto LABEL_23;
        }
      }
      sub_22134E0(v43, v44, v33, 24);
      v35 = *(_QWORD *)(a1 + 184);
      v34 = 24LL * *(unsigned int *)(a1 + 192);
      goto LABEL_23;
    }
    v14 = v54;
    v52 = v54;
    if ( (unsigned __int64)a4 > 0xF )
    {
      if ( a4 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v50 = a6;
      v46 = a5;
      v14 = (_QWORD *)operator new(a4 + 1);
      v54[0] = a4;
      a5 = v46;
      v52 = v14;
      a6 = v50;
    }
    else
    {
      if ( a4 == 1 )
      {
        LOBYTE(v54[0]) = *a3;
        goto LABEL_8;
      }
      if ( !a4 )
      {
LABEL_8:
        v53 = a4;
        *((_BYTE *)v14 + a4) = 0;
        if ( v52 != v54 )
        {
          v48 = a6;
          v45 = a5;
          operator delete(v52);
          a6 = v48;
          a5 = v45;
        }
        goto LABEL_10;
      }
    }
    v51 = a6;
    v47 = a5;
    memcpy(v14, a3, a4);
    v14 = v52;
    a5 = v47;
    a6 = v51;
    goto LABEL_8;
  }
  *(_QWORD *)(a2 + 24) = a3;
  *(_QWORD *)(a2 + 32) = a4;
  v18 = a6 | a2 & 0xFFFFFFFFFFFFFFF8LL;
  v49 = a5;
  v19 = sub_FFBB60(a1 + 264, (unsigned int)(-2 - a8));
  v20 = *(_DWORD *)v19;
  *(_DWORD *)(v19 + 12) = 0;
  *(_QWORD *)(v19 + 16) = v18;
  *(_DWORD *)(v19 + 8) = v49;
  v21 = a9 & 0x7FFFFFFF | v20 & 0x80000000;
  *(_DWORD *)v19 = v21;
  *(_BYTE *)(v19 + 3) = HIBYTE(v21) & 0x7F;
  v22 = 1LL << ((-2 - a8) & 0x3F);
  v23 = 8LL * ((unsigned int)(-2 - a8) >> 6);
  v24 = (__int64 *)(v23 + *(_QWORD *)(a1 + 392));
  v25 = (__int64 *)(*(_QWORD *)(a1 + 320) + v23);
  v26 = v22 | *v24;
  v27 = _bittest64(&v26, (-2 - a8) & 0x3F);
  *v24 = v26;
  if ( v27 )
    v28 = *v25 | v22;
  else
    v28 = *v25 & ~v22;
  *v25 = v28;
  return (unsigned int)a8;
}

