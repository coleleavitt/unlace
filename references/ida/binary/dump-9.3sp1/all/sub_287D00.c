__int64 __fastcall sub_287D00(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v6; // r15d
  __int64 v8; // r14
  void *v9; // rsi
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r11
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  __m128i v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r12
  __m128i v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // al
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // [rsp+Ch] [rbp-CCh]
  char v55; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v56; // [rsp+20h] [rbp-B8h] BYREF
  int v57; // [rsp+28h] [rbp-B0h]
  __int64 v58; // [rsp+2Ch] [rbp-ACh]
  void *src[2]; // [rsp+38h] [rbp-A0h]
  __int128 v60; // [rsp+48h] [rbp-90h]
  __int64 v61; // [rsp+60h] [rbp-78h] BYREF
  int v62; // [rsp+68h] [rbp-70h]
  __int64 v63; // [rsp+6Ch] [rbp-6Ch]
  void *v64; // [rsp+80h] [rbp-58h]
  __m128i v65; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+98h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 73 )
    return 2;
  if ( a1[1] && *(_DWORD *)(a2 + 12) != -1 )
    return 1;
  v8 = *(_QWORD *)(a2 + 24);
  v56 = -1;
  v57 = 70;
  v58 = -1;
  *(_OWORD *)src = 0;
  v60 = 0;
  if ( (unsigned __int8)sub_27EE20(a1, v8, &v56, &v55) && (a3 || !v55) )
  {
    if ( (_QWORD)v60 )
    {
      v9 = src[1];
      v10 = 0;
      v11 = 0;
      if ( a1[1] )
      {
        v12 = *(_QWORD *)src[1];
LABEL_11:
        v54 = v10;
        v13 = 0;
        v14 = 0;
        while ( 1 )
        {
          v15 = *a1 + 56 * v14;
          v16 = *(_QWORD *)(v15 + 40);
          if ( v16 )
            break;
LABEL_23:
          v14 = ++v13;
          if ( v13 >= (unsigned __int64)a1[1] )
          {
            v10 = v54 + 1;
            v11 = v54 + 1;
            if ( v11 >= (unsigned __int64)v60 )
              goto LABEL_16;
            v12 = *((_QWORD *)src[1] + v10);
            goto LABEL_11;
          }
        }
        v17 = *(_QWORD *)(v15 + 32);
        v18 = 0;
        v19 = 0;
        while ( *(_QWORD *)(v17 + 8 * v19) != v12 )
        {
          v19 = ++v18;
          if ( v18 >= v16 )
            goto LABEL_23;
        }
      }
      else
      {
        do
        {
          v20 = v10 + 1;
          v11 = v20;
          if ( v20 >= (unsigned __int64)v60 )
            break;
          v10 = v20 + 1;
          v11 = v10;
        }
        while ( v10 < (unsigned __int64)v60 );
      }
LABEL_16:
      v6 = 6;
      if ( v11 != (_QWORD)v60 )
        goto LABEL_17;
    }
    if ( (unsigned __int8)sub_285490(*(_QWORD *)(v8 + 64), 0) )
    {
      v9 = src[1];
      v6 = a3 == 0 ? 7 : 5;
      goto LABEL_17;
    }
    if ( !v55 )
    {
      if ( !a3 && a1[1] )
        a1[12] = a2;
      v61 = -1;
      v62 = 70;
      v63 = -1;
      sub_25AA70((__int64)&v61, (__int64)&v56);
      v37 = v60;
      v64 = nullptr;
      v65 = 0;
      if ( (_QWORD)v60 )
      {
        v64 = (void *)qalloc_or_throw(8 * v60, (__int64)&v56, v35, v36);
        v65.m128i_i64[1] = v37;
        memcpy(v64, src[1], 8 * v37);
        v65.m128i_i64[0] = v37;
      }
      v38 = a1[1];
      v39 = *a1;
      if ( a1[2] < (unsigned __int64)(v38 + 1) )
      {
        v50 = qvector_reserve((__int64)a1, v39, v38 + 1, 56);
        *a1 = v50;
        v39 = v50;
        v38 = a1[1];
      }
      v40 = v39 + 56 * v38;
      *(_QWORD *)v40 = -1;
      *(_DWORD *)(v40 + 8) = 70;
      *(_QWORD *)(v40 + 12) = -1;
      sub_25AA70(v40, (__int64)&v61);
      v41 = _mm_loadu_si128(&v65);
      *(_QWORD *)(v40 + 32) = v64;
      *(__m128i *)(v40 + 40) = v41;
      ++a1[1];
      sub_255050((__int64)&v61);
      v44 = a1[4];
      v45 = *(_QWORD *)(v8 + 64);
      v46 = a1[3];
      v47 = v44 + 1;
      if ( a1[5] < (unsigned __int64)(v44 + 1) )
      {
        v49 = qvector_reserve((__int64)(a1 + 3), v46, v47, 8);
        a1[3] = v49;
        v46 = v49;
        v44 = a1[4];
      }
      *(_QWORD *)(v46 + 8 * v44) = v45;
      ++a1[4];
      if ( *(_QWORD *)(v8 + 72) )
      {
        v48 = sub_288310(a1);
        v9 = src[1];
        v6 = v48;
      }
      else
      {
        v51 = sub_241B40(*(_QWORD *)(v8 + 64), 0, v47, v42, v43);
        v9 = src[1];
        v6 = 8 * v51;
      }
      goto LABEL_17;
    }
    if ( !*(_QWORD *)(v8 + 72) && !(unsigned __int8)sub_241B40(*(_QWORD *)(v8 + 64), 0, v21, v22, v23) )
    {
      v61 = -1;
      v62 = 70;
      v63 = -1;
      sub_25AA70((__int64)&v61, (__int64)&v56);
      v26 = v60;
      v64 = nullptr;
      v65 = 0;
      if ( (_QWORD)v60 )
      {
        v64 = (void *)qalloc_or_throw(8 * v60, (__int64)&v56, v24, v25);
        v65.m128i_i64[1] = v26;
        memcpy(v64, src[1], 8 * v26);
        v65.m128i_i64[0] = v26;
      }
      v27 = a1[1];
      if ( a1[2] < (unsigned __int64)(v27 + 1) )
      {
        *a1 = qvector_reserve((__int64)a1, *a1, v27 + 1, 56);
        v27 = a1[1];
      }
      v28 = *a1 + 56 * v27;
      *(_QWORD *)v28 = -1;
      *(_DWORD *)(v28 + 8) = 70;
      *(_QWORD *)(v28 + 12) = -1;
      sub_25AA70(v28, (__int64)&v61);
      v29 = _mm_loadu_si128(&v65);
      *(_QWORD *)(v28 + 32) = v64;
      *(__m128i *)(v28 + 40) = v29;
      ++a1[1];
      sub_255050((__int64)&v61);
      v30 = a1[4];
      v31 = a1[3];
      v61 = 0;
      v32 = a1[5];
      v33 = v30;
      v34 = v30 + 1;
      if ( (unsigned __int64)&v61 < v31 || (unsigned __int64)&v61 >= v31 + 8 * v32 )
      {
        if ( v32 < v34 )
        {
          v53 = qvector_reserve((__int64)(a1 + 3), v31, v34, 8);
          a1[3] = v53;
          v33 = a1[4];
          v31 = v53;
        }
        *(_QWORD *)(v31 + 8 * v33) = 0;
      }
      else
      {
        if ( v32 < v34 )
        {
          v52 = qvector_reserve((__int64)(a1 + 3), v31, v34, 8);
          a1[3] = v52;
          v31 = v52;
          v30 = a1[4];
        }
        *(_QWORD *)(v31 + 8 * v30) = 0;
      }
      ++a1[4];
      v9 = src[1];
      v6 = 4;
      goto LABEL_17;
    }
  }
  v9 = src[1];
  v6 = 3;
LABEL_17:
  if ( v9 )
  {
    *(_QWORD *)&v60 = 0;
    qfree((__int64)v9);
  }
  sub_255050((__int64)&v56);
  return v6;
}
