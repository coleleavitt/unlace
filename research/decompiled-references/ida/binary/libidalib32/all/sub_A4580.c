__int64 __fastcall sub_A4580(unsigned int a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 **v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  _QWORD *v14; // r12
  __int64 *v15; // r14
  size_t v16; // r12
  int v17; // r13d
  __int64 v18; // rsi
  __int16 v19; // ax
  __int16 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // rbp
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  void *src; // [rsp+8h] [rbp-F0h]
  void *v35; // [rsp+10h] [rbp-E8h]
  void *v36; // [rsp+18h] [rbp-E0h]
  void *v37; // [rsp+20h] [rbp-D8h]
  char v38; // [rsp+2Ch] [rbp-CCh]
  __int16 v39; // [rsp+2Ch] [rbp-CCh]
  char v40; // [rsp+2Fh] [rbp-C9h]
  _QWORD v41[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+40h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-A8h]
  __int128 v44; // [rsp+58h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-90h]
  _QWORD v46[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v47; // [rsp+80h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-68h]
  __int128 v49; // [rsp+98h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-50h]
  __int16 v51; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v52; // [rsp+B8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v3 = sub_A0850((__int64)xmmword_250E60, a1);
  v4 = *(__int64 ***)(v3 + 24);
  if ( !v4 )
    return 0;
  v5 = (unsigned __int64)v4[1];
  if ( !v5 )
    return 0;
  v7 = a2[1];
  if ( v5 != v7 )
  {
    v45 = 0;
    v41[0] = 0;
    v41[1] = 0;
    v43 = 0;
    v42 = 0;
    v44 = 0;
    if ( v5 < v7 )
    {
      v13 = v5;
      do
      {
        v14 = (_QWORD *)(*a2 + (v13 << 6));
        if ( v14[4] )
        {
          v14[5] = 0;
          qfree();
        }
        if ( v14[1] )
        {
          v14[2] = 0;
          qfree();
        }
        ++v13;
      }
      while ( v13 < v7 );
    }
    else
    {
      v8 = *a2;
      v9 = a2[2];
      if ( (unsigned __int64)v41 >= *a2 && (unsigned __int64)v41 < v8 + (v9 << 6) )
      {
        v46[1] = 0;
        v48 = 0;
        v46[0] = v41[0];
        v50 = 0;
        v51 = 0;
        v47 = 0;
        v49 = 0;
        if ( v9 < v5 )
        {
          *a2 = qvector_reserve();
          v7 = a2[1];
        }
        v10 = v46[0];
        if ( v7 < v5 )
        {
          do
          {
            v11 = v7++;
            v12 = *a2 + (v11 << 6);
            *(_QWORD *)v12 = v10;
            *(_QWORD *)(v12 + 8) = 0;
            *(_QWORD *)(v12 + 32) = 0;
            *(_DWORD *)(v12 + 56) = 0;
            *(_WORD *)(v12 + 60) = 0;
            *(_OWORD *)(v12 + 16) = 0;
            *(_OWORD *)(v12 + 40) = 0;
          }
          while ( v5 != v7 );
        }
        a2[1] = v5;
        sub_9FB10(v46);
        goto LABEL_20;
      }
      if ( v9 < v5 )
      {
        *a2 = qvector_reserve();
        v7 = a2[1];
      }
      v31 = v41[0];
      if ( v7 < v5 )
      {
        do
        {
          v32 = v7++;
          v33 = *a2 + (v32 << 6);
          *(_QWORD *)v33 = v31;
          *(_QWORD *)(v33 + 8) = 0;
          *(_QWORD *)(v33 + 32) = 0;
          *(_DWORD *)(v33 + 56) = 0;
          *(_WORD *)(v33 + 60) = 0;
          *(_OWORD *)(v33 + 16) = 0;
          *(_OWORD *)(v33 + 40) = 0;
        }
        while ( v5 != v7 );
      }
    }
    a2[1] = v5;
LABEL_20:
    v4 = *(__int64 ***)(v3 + 24);
    v7 = (unsigned __int64)v4[1];
  }
  v15 = *v4;
  if ( v7 << 6 )
  {
    do
    {
      v24 = *v15;
      v25 = v15[2];
      *((_QWORD *)&v42 + 1) = 0;
      v35 = nullptr;
      v41[0] = v24;
      if ( v25 )
      {
        v26 = (void *)qalloc_or_throw();
        v27 = (const void *)v15[1];
        *((_QWORD *)&v42 + 1) = v25;
        v35 = v26;
        memcpy(v26, v27, v25);
      }
      *((_QWORD *)&v44 + 1) = 0;
      v16 = v15[5];
      if ( v16 )
      {
        v28 = (void *)qalloc_or_throw();
        v29 = (const void *)v15[4];
        src = v28;
        *((_QWORD *)&v44 + 1) = v16;
        memcpy(v28, v29, v16);
        v17 = *((_DWORD *)v15 + 14);
        v40 = *((_WORD *)v15 + 30);
        WORD2(v45) = *((_WORD *)v15 + 30);
        LODWORD(v45) = v17;
        v38 = BYTE5(v45);
        v46[0] = v41[0];
        if ( v25 )
        {
          v36 = (void *)qalloc_or_throw();
          memcpy(v36, v35, v25);
        }
        else
        {
          v36 = nullptr;
        }
        v37 = (void *)qalloc_or_throw();
        memcpy(v37, src, v16);
      }
      else
      {
        v17 = *((_DWORD *)v15 + 14);
        v40 = *((_WORD *)v15 + 30);
        WORD2(v45) = *((_WORD *)v15 + 30);
        LODWORD(v45) = v17;
        v38 = BYTE5(v45);
        v46[0] = v41[0];
        if ( v25 )
        {
          v36 = (void *)qalloc_or_throw();
          memcpy(v36, v35, v25);
          src = nullptr;
        }
        else
        {
          src = nullptr;
          v36 = nullptr;
        }
        v37 = nullptr;
      }
      v18 = *a2;
      v50 = v17;
      LOBYTE(v19) = v40;
      HIBYTE(v19) = v38;
      v51 = v19;
      v20 = v19;
      v21 = a2[1];
      if ( a2[2] < (unsigned __int64)(v21 + 1) )
      {
        v39 = v20;
        v30 = qvector_reserve();
        *a2 = v30;
        v18 = v30;
        v20 = v39;
        v21 = a2[1];
      }
      v22 = (v21 << 6) + v18;
      v23 = v46[0];
      *(__m128i *)(v22 + 16) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      *(_QWORD *)v22 = v23;
      *(_DWORD *)(v22 + 56) = v17;
      *(_QWORD *)(v22 + 8) = v36;
      *(_WORD *)(v22 + 60) = v20;
      *(_QWORD *)(v22 + 32) = v37;
      *(__m128i *)(v22 + 40) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      ++a2[1];
      if ( src )
        qfree();
      if ( v35 )
        qfree();
      v15 += 8;
    }
    while ( v15 != (__int64 *)(**(_QWORD **)(v3 + 24) + (*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) << 6)) );
  }
  return 0;
}

