__int64 __fastcall sub_4E86C0(__int64 a1, __int64 a2, int *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (*v17)(); // r8
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64); // rax
  __int32 v19; // r13d
  int v20; // ebp
  int v21; // r12d
  bool v22; // zf
  __m128i *v23; // rsi
  __int64 v24; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  unsigned __int32 v32; // ebp
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64); // rax
  void *v38; // rdi
  char v39; // al
  char v40; // dl
  __m128i v41; // xmm0
  __m128i *v42; // rax
  __int64 v43; // rdx
  __int32 v44; // r13d
  int v45; // ebp
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v53; // [rsp+8h] [rbp-160h]
  char v54; // [rsp+Fh] [rbp-159h]
  int v55; // [rsp+10h] [rbp-158h] BYREF
  __int128 v56; // [rsp+18h] [rbp-150h]
  char v57; // [rsp+28h] [rbp-140h]
  int v58; // [rsp+2Ch] [rbp-13Ch]
  void *ptr[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v60; // [rsp+40h] [rbp-128h]
  char v61; // [rsp+48h] [rbp-120h]
  __int64 v62; // [rsp+50h] [rbp-118h] BYREF
  __int64 v63; // [rsp+58h] [rbp-110h]
  __int64 v64; // [rsp+60h] [rbp-108h]
  char v65; // [rsp+68h] [rbp-100h] BYREF
  char v66; // [rsp+81h] [rbp-E7h]
  char v67; // [rsp+99h] [rbp-CFh]
  _QWORD v68[8]; // [rsp+128h] [rbp-40h] BYREF

  v6 = a5;
  v9 = *(_QWORD *)(a1 + 56);
  v68[0] = __readfsqword(0x28u);
  if ( v9 )
  {
    v11 = v9 - 1;
    *(_QWORD *)(a1 + 56) = v11;
    if ( !v11 )
    {
      *(_BYTE *)(a2 + 24) = 2;
      *(_QWORD *)(a2 + 8) = 0;
      v23 = *(__m128i **)a2;
      ptr[0] = (void *)0xFFFFFFFFLL;
      v33 = *(_QWORD *)(a2 + 16);
      ptr[1] = (void *)(unsigned int)a5;
      if ( ptr < (void **)v23 || ptr >= (void **)&v23[v33] )
      {
        if ( !v33 )
        {
LABEL_47:
          v34 = qvector_reserve(a2, v23, 1, 16);
          *(_QWORD *)a2 = v34;
          v23 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v34);
        }
LABEL_15:
        *v23 = _mm_load_si128((const __m128i *)ptr);
LABEL_16:
        ++*(_QWORD *)(a2 + 8);
        return 1;
      }
      goto LABEL_44;
    }
  }
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 )
  {
    v13 = v12 - 1;
    *(_QWORD *)(a1 + 64) = v13;
    if ( !v13 )
    {
      v23 = *(__m128i **)a2;
      *(_BYTE *)(a2 + 24) = 2;
      ptr[0] = (void *)0xFFFFFFFFLL;
      v24 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      ptr[1] = (void *)(unsigned int)a5;
      if ( ptr >= (void **)v23 && ptr < (void **)&v23[v24] )
      {
LABEL_22:
        if ( v24 )
        {
LABEL_24:
          v23->m128i_i32[2] = a5;
          v23->m128i_i64[0] = 0xFFFFFFFFLL;
          v23->m128i_i32[3] = 0;
          goto LABEL_16;
        }
LABEL_23:
        v30 = qvector_reserve(a2, v23, 1, 16);
        *(_QWORD *)a2 = v30;
        v23 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v30);
        goto LABEL_24;
      }
LABEL_14:
      if ( v24 )
        goto LABEL_15;
LABEL_51:
      v35 = qvector_reserve(a2, v23, 1, 16);
      v36 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v35;
      v23 = (__m128i *)(v35 + 16 * v36);
      goto LABEL_15;
    }
  }
  v62 = -1;
  v64 = 0;
  v63 = 0xFFFFFFFFLL;
  v14 = &v65;
  do
  {
    *(_WORD *)v14 = 0;
    v14 += 24;
    *((_WORD *)v14 - 11) = 0;
    *((_WORD *)v14 - 10) = 0;
    *((_DWORD *)v14 - 1) = 0;
    *((_WORD *)v14 - 9) = 0;
    *((_QWORD *)v14 - 2) = 0;
    *((_DWORD *)v14 - 2) = 0;
  }
  while ( v14 != (char *)v68 );
  if ( !(unsigned int)decode_insn(&v62, (unsigned int)a5, v68, 0, 0, a6) )
  {
    v23 = *(__m128i **)a2;
    *(_BYTE *)(a2 + 24) = 3;
    ptr[0] = (void *)0xFFFFFFFFLL;
    v33 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    ptr[1] = (void *)(unsigned int)a5;
    if ( ptr < (void **)v23 || ptr >= (void **)&v23[v33] )
    {
      if ( v33 )
        goto LABEL_15;
      goto LABEL_51;
    }
LABEL_44:
    if ( v33 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 1530LL) )
  {
    v26 = (unsigned int)get_item_end(v6, v6, &qword_2CA1698, v15) - (unsigned int)a5;
    v53 = v26;
    if ( HIWORD(v63) != (_DWORD)v26 )
    {
      LODWORD(v63) = -1;
      v28 = *(_QWORD *)(qword_2CA1698 + 1480);
      v29 = *(unsigned __int8 *)(v28 + 1530);
      *(_BYTE *)(v28 + 1530) = 0;
      v54 = v29;
      decode_insn(&v62, v6, &qword_2CA1698, v26, v29, v27);
      *(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 1530LL) = v54;
      if ( HIWORD(v63) != v53 )
      {
        v23 = *(__m128i **)a2;
        *(_BYTE *)(a2 + 24) = 3;
        ptr[0] = (void *)0xFFFFFFFFLL;
        v24 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        ptr[1] = (void *)(unsigned int)a5;
        if ( ptr >= (void **)v23 && ptr < (void **)&v23[v24] )
          goto LABEL_22;
LABEL_74:
        if ( v24 )
          goto LABEL_15;
        goto LABEL_47;
      }
    }
  }
  v16 = *(_QWORD *)a1;
  v55 = 0x10000;
  v57 = 0;
  v17 = *(__int64 (**)())(v16 + 72);
  v58 = 0;
  v56 = 0;
  if ( v17 == sub_4DC720 )
    goto LABEL_10;
  if ( !((unsigned __int8 (__fastcall *)(__int64, int *, int *, __int64 *))v17)(a1, &v55, a3, &v62) )
  {
LABEL_52:
    v16 = *(_QWORD *)a1;
LABEL_10:
    v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 80);
    if ( v18 == sub_4DDF20 )
    {
      v19 = v63;
      v20 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      v21 = WORD2(v63);
      v22 = v66 == 5;
      ptr[0] = (void *)0xFFFFFFFFLL;
      *(_QWORD *)(a2 + 8) = 0;
      LODWORD(ptr[1]) = v19;
      WORD2(ptr[1]) = v21;
      if ( v22 )
        v20 = v67 == 0;
      v23 = *(__m128i **)a2;
      HIWORD(ptr[1]) = v20;
      v24 = *(_QWORD *)(a2 + 16);
      if ( ptr >= (void **)v23 && ptr < (void **)&v23[v24] )
      {
        if ( !v24 )
        {
          v47 = qvector_reserve(a2, v23, 1, 16);
          v48 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v47;
          v23 = (__m128i *)(v47 + 16 * v48);
        }
        v23->m128i_i32[2] = v19;
        v23->m128i_i64[0] = 0xFFFFFFFFLL;
        v23->m128i_i32[3] = v21 | (v20 << 16);
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, int *, __int64 *, __int64))v18)(a1, a2, a3, &v62, a5) )
      return 1;
    *a4 = 0;
    return 0;
  }
  v31 = sub_4E84D0(a1, (__int64)a3, (__int64)&v55, (__int64)&v62);
  if ( v31 )
  {
    if ( v31 == 2 )
    {
      v32 = *(_DWORD *)(a1 + 72);
      v23 = *(__m128i **)a2;
      v24 = *(_QWORD *)(a2 + 16);
      if ( v32 != -1 )
      {
        *(_BYTE *)(a2 + 24) = 2;
        *(_QWORD *)(a2 + 8) = 0;
        ptr[0] = (void *)0xFFFFFFFFLL;
        ptr[1] = (void *)v32;
        if ( ptr < (void **)v23 || ptr >= (void **)&v23[v24] )
        {
          if ( !v24 )
          {
            v49 = qvector_reserve(a2, v23, 1, 16);
            *(_QWORD *)a2 = v49;
            v23 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v49);
          }
          *v23 = _mm_load_si128((const __m128i *)ptr);
        }
        else
        {
          if ( !v24 )
          {
            v50 = qvector_reserve(a2, v23, 1, 16);
            *(_QWORD *)a2 = v50;
            v23 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v50);
          }
          v23->m128i_i32[2] = v32;
          v23->m128i_i64[0] = 0xFFFFFFFFLL;
          v23->m128i_i32[3] = 0;
        }
        ++*(_QWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 72) = -1;
        return 1;
      }
      v44 = v63;
      v45 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      v46 = WORD2(v63);
      v22 = v66 == 5;
      ptr[0] = (void *)0xFFFFFFFFLL;
      *(_QWORD *)(a2 + 8) = 0;
      LODWORD(ptr[1]) = v44;
      WORD2(ptr[1]) = v46;
      if ( v22 )
        v45 = v67 == 0;
      HIWORD(ptr[1]) = v45;
      if ( ptr >= (void **)v23 && ptr < (void **)&v23[v24] )
      {
        if ( !v24 )
        {
          v51 = qvector_reserve(a2, v23, 1, 16);
          *(_QWORD *)a2 = v51;
          v23 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v51);
        }
        v23->m128i_i32[2] = v44;
        v23->m128i_i64[0] = 0xFFFFFFFFLL;
        v23->m128i_i32[3] = v46 | (v45 << 16);
        goto LABEL_16;
      }
      goto LABEL_74;
    }
    goto LABEL_52;
  }
  *a4 = v58;
  if ( *a3 < 0 )
    return 0;
  v37 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v37 == sub_4DC6D0 )
    return 0;
  ((void (__fastcall *)(void **, __int64, __int64, _QWORD, _QWORD))v37)(ptr, a1, a5, (unsigned int)*a3, 0);
  v38 = ptr[0];
  if ( ((unsigned __int8)(v61 - 10) <= 1u || (unsigned __int8)(v61 - 12) <= 1u)
    && ptr[1] == (char *)&dword_0 + 1
    && *((_DWORD *)ptr[0] + 2) == (_DWORD)v63
    && !*((_WORD *)ptr[0] + 6) )
  {
    if ( v61 == 11 )
    {
      v39 = 10;
LABEL_65:
      v61 = v39;
      *((_WORD *)ptr[0] + 6) = WORD2(v63);
      v40 = v61;
      v41 = _mm_loadu_si128((const __m128i *)&ptr[1]);
      v61 = *(_BYTE *)(a2 + 24);
      v42 = *(__m128i **)a2;
      *(_BYTE *)(a2 + 24) = v40;
      v43 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = v38;
      ptr[0] = v42;
      v60 = v43;
      *(__m128i *)(a2 + 8) = v41;
      if ( v42 )
      {
        ptr[1] = nullptr;
        qfree(v42);
      }
      return 1;
    }
    if ( v61 == 13 )
    {
      v39 = 12;
      goto LABEL_65;
    }
  }
  if ( !ptr[0] )
    return 0;
  ptr[1] = nullptr;
  qfree(ptr[0]);
  return 0;
}

