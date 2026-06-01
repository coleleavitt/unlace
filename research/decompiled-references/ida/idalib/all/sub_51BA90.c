__int64 __fastcall sub_51BA90(__int64 *a1, const char *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rax
  size_t v5; // rbx
  _BYTE *v6; // rsi
  __int64 v7; // rbp
  size_t v8; // r12
  size_t v9; // rax
  size_t v10; // rbx
  size_t v11; // r12
  size_t v12; // rbp
  size_t v13; // r13
  _BYTE *v14; // rsi
  __int64 v15; // rbp
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __m128i si128; // xmm1
  int v25; // edx
  __m128 v26; // xmm0
  void *v27; // rax
  size_t v28; // rdx
  void *v30; // rax
  void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi
  __int64 v34; // rax
  size_t n; // [rsp+8h] [rbp-D0h]
  int v36; // [rsp+10h] [rbp-C8h]
  bool v37; // [rsp+17h] [rbp-C1h]
  __int64 v38; // [rsp+18h] [rbp-C0h] BYREF
  size_t v39; // [rsp+20h] [rbp-B8h]
  _DWORD *ph; // [rsp+28h] [rbp-B0h]
  int v41; // [rsp+30h] [rbp-A8h]
  int v42; // [rsp+34h] [rbp-A4h]
  void **p_src; // [rsp+38h] [rbp-A0h]
  void *src; // [rsp+40h] [rbp-98h] BYREF
  __int128 v45; // [rsp+48h] [rbp-90h]
  __int64 v46; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+68h] [rbp-70h] BYREF
  size_t v48[2]; // [rsp+70h] [rbp-68h]
  __int64 v49; // [rsp+80h] [rbp-58h]
  int v50; // [rsp+88h] [rbp-50h]
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  ph = (_DWORD *)get_ph(a1, a2);
  v41 = ph[18] + 1 - ph[17];
  v36 = 0;
  v42 = sub_46AA70(*a1);
  p_src = &src;
  if ( v41 > 0 )
  {
    while ( 1 )
    {
      v45 = 0;
      v2 = ph[17] + v36;
      v3 = (int)ph[19];
      src = nullptr;
      get_reg_name(p_src, v2, v3, 0xFFFFFFFFLL);
      v4 = *a1;
      v5 = a1[2];
      ptr = nullptr;
      *(_OWORD *)v48 = 0;
      v46 = v4;
      v37 = v42 == v2;
      if ( !v5 )
        break;
      v32 = (void *)qalloc_or_throw(v5);
      v33 = (const void *)a1[1];
      ptr = v32;
      v48[1] = v5;
      v8 = v5 + 1;
      memcpy(v32, v33, v5);
      v34 = a1[4];
      v48[0] = v5;
      v6 = ptr;
      v49 = v34;
      v50 = *((_DWORD *)a1 + 10);
      v9 = v5 - 1;
      if ( v48[1] < v5 + 1 )
      {
        v7 = v5--;
        goto LABEL_4;
      }
LABEL_5:
      v48[0] = v8;
      v6[v5] = 0;
      *((_BYTE *)ptr + v9) = 32;
      v10 = v45;
      if ( (_QWORD)v45 )
      {
        v11 = v45 - 1;
        if ( (_QWORD)v45 != 1 )
        {
          v12 = v48[0];
          v13 = v45 - 1;
          if ( v48[0] )
          {
            v12 = v48[0] - 1;
            v13 = v11 + v48[0] - 1;
            v10 = v45 + v48[0] - 1;
          }
          v14 = ptr;
          if ( v48[1] < v10 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
            v14 = ptr;
          }
          v48[0] = v10;
          v14[v13] = 0;
          memcpy((char *)ptr + v12, src, v11);
        }
      }
      v15 = operator new(0xB8u);
      v16 = v48[0];
      *(_QWORD *)v15 = &off_2B26160;
      v17 = v46;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 8) = v17;
      *(_OWORD *)(v15 + 24) = 0;
      if ( v16 )
      {
        v30 = (void *)qalloc_or_throw(v16);
        *(_QWORD *)(v15 + 16) = v30;
        v31 = ptr;
        *(_QWORD *)(v15 + 32) = v16;
        memcpy(v30, v31, v16);
        *(_QWORD *)(v15 + 24) = v16;
      }
      v18 = v49;
      *(_QWORD *)(v15 + 120) = -1;
      *(_QWORD *)(v15 + 128) = -1;
      *(_QWORD *)(v15 + 40) = v18;
      LODWORD(v18) = v50;
      *(_QWORD *)(v15 + 136) = -1;
      *(_DWORD *)(v15 + 48) = v18;
      *(_QWORD *)(v15 + 144) = 0;
      *(_OWORD *)(v15 + 56) = 0;
      *(_OWORD *)(v15 + 72) = 0;
      *(_OWORD *)(v15 + 88) = 0;
      *(_OWORD *)(v15 + 104) = 0;
      merge_handler_ctr(v15, 0);
      *(_QWORD *)(v15 + 152) = 0;
      v19 = (const char *)src;
      *(_QWORD *)v15 = &off_2B2D9B0;
      v38 = v15 + 152;
      v20 = *(_QWORD *)(v15 + 8);
      *(_DWORD *)(v15 + 176) = v2;
      *(_QWORD *)(v15 + 72) = 0;
      *(_OWORD *)(v15 + 160) = 0;
      if ( *(int *)(v20 + 28) > 0 )
      {
        v21 = 0;
        do
        {
          v22 = operator new(0x50u);
          v23 = *(_QWORD *)(v15 + 8);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
          v25 = *(_DWORD *)(v23 + 4LL * (int)v21 + 16);
          *(_QWORD *)v22 = &off_2B2D8F8;
          v26 = _mm_loadh_ps((const double *)&v38);
          *(_DWORD *)(v22 + 12) = -1;
          *(_DWORD *)(v22 + 8) = v25;
          *(_QWORD *)(v22 + 48) = 0;
          *(__m128i *)(v22 + 16) = si128;
          *(__m128 *)(v22 + 32) = v26;
          *(_OWORD *)(v22 + 56) = 0;
          if ( v19 )
          {
            n = strlen(v19);
            v39 = n + 1;
            v27 = (void *)qvector_reserve(v22 + 48, 0, n + 1, 1);
            v28 = v39;
            *(_QWORD *)(v22 + 48) = v27;
            *(_QWORD *)(v22 + 56) = v28;
            memmove(v27, v19, n);
            *(_BYTE *)(*(_QWORD *)(v22 + 48) + n) = 0;
            v23 = *(_QWORD *)(v15 + 8);
          }
          *(_QWORD *)(v15 + 8 * v21 + 56) = v22;
          *(_DWORD *)(v22 + 12) = v21++;
          *(_DWORD *)(v22 + 72) = v2;
          *(_BYTE *)(v22 + 76) = v37;
        }
        while ( *(_DWORD *)(v23 + 28) > (int)v21 );
      }
      if ( ptr )
      {
        v48[0] = 0;
        qfree(ptr);
      }
      if ( src )
      {
        *(_QWORD *)&v45 = 0;
        qfree(src);
      }
      if ( v41 == ++v36 )
        return 0;
    }
    v6 = nullptr;
    v7 = 1;
    v8 = 2;
    v49 = a1[4];
    v50 = *((_DWORD *)a1 + 10);
LABEL_4:
    ptr = (void *)qvector_reserve(&ptr, v6, v8, 1);
    v6 = ptr;
    v9 = v5;
    v5 = v7;
    goto LABEL_5;
  }
  return 0;
}
