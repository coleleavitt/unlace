__int64 __fastcall sub_7D51E0(__int64 a1, __int64 a2, int *a3, __int64 *a4, const void *a5, const void *a6)
{
  void *v7; // r14
  size_t v10; // r13
  size_t v12; // rax
  size_t v13; // r8
  size_t v14; // rax
  size_t v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // al
  void *v20; // rdi
  size_t v21; // rdx
  void *v22; // rdi
  size_t v23; // rdx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rbp
  const void *v29; // r8
  void *v30; // rdi
  const void *v31; // r8
  void *v32; // rax
  const void *v33; // r8
  void *v34; // rax
  const void *v35; // r8
  void *v36; // rax
  const void *v37; // r8
  void *v38; // rax
  __int64 v39; // rax
  int v41[2]; // [rsp+0h] [rbp-C0h]
  int v42[2]; // [rsp+0h] [rbp-C0h]
  int v43[2]; // [rsp+0h] [rbp-C0h]
  int v44[2]; // [rsp+0h] [rbp-C0h]
  size_t v45; // [rsp+8h] [rbp-B8h]
  size_t v46; // [rsp+8h] [rbp-B8h]
  size_t v47; // [rsp+8h] [rbp-B8h]
  const void *v48; // [rsp+8h] [rbp-B8h]
  size_t v49; // [rsp+10h] [rbp-B0h]
  __int64 v50; // [rsp+18h] [rbp-A8h] BYREF
  int v51; // [rsp+20h] [rbp-A0h]
  int v52; // [rsp+24h] [rbp-9Ch]
  void *ptr; // [rsp+28h] [rbp-98h]
  __m128i v54; // [rsp+30h] [rbp-90h]
  int v55; // [rsp+40h] [rbp-80h]
  __int16 v56; // [rsp+44h] [rbp-7Ch]
  char v57; // [rsp+46h] [rbp-7Ah]
  void *v58; // [rsp+48h] [rbp-78h] BYREF
  __int128 v59; // [rsp+50h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-60h] BYREF
  __int128 v61; // [rsp+68h] [rbp-58h]
  unsigned __int64 v62; // [rsp+80h] [rbp-40h]

  v7 = nullptr;
  v10 = *(_QWORD *)(a2 + 8);
  v62 = __readfsqword(0x28u);
  v50 = (__int64)&off_2B3B6B0;
  LOBYTE(v51) = 13;
  ptr = nullptr;
  v57 = 0;
  v58 = nullptr;
  dest = nullptr;
  v55 = 0;
  v56 = 0;
  v52 = 6;
  v54 = 0;
  v59 = 0;
  v61 = 0;
  if ( v10 )
  {
    v7 = (void *)qalloc_or_throw(v10);
    memcpy(v7, *(const void **)a2, v10);
  }
  ptr = v7;
  v54 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( a5 && (v12 = strlen((const char *)a5), (v13 = v12) != 0) )
  {
    v22 = v58;
    v23 = v12 + 1;
    if ( *((_QWORD *)&v59 + 1) < v12 + 1 )
    {
      v49 = v12;
      v46 = v12 + 1;
      v58 = (void *)qvector_reserve(&v58, v58, v23, 1);
      v13 = v49;
      v22 = v58;
      v23 = v46;
    }
    *(_QWORD *)&v59 = v23;
    v45 = v13;
    memmove(v22, a5, v13);
    *((_BYTE *)v58 + v45) = 0;
  }
  else
  {
    *(_QWORD *)&v59 = 0;
  }
  if ( a6 && (v14 = strlen((const char *)a6), (v15 = v14) != 0) )
  {
    v20 = dest;
    v21 = v14 + 1;
    if ( *((_QWORD *)&v61 + 1) < v14 + 1 )
    {
      v47 = v14 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v21, 1);
      v21 = v47;
      v20 = dest;
    }
    *(_QWORD *)&v61 = v21;
    memmove(v20, a6, v15);
    *((_BYTE *)dest + v15) = 0;
  }
  else
  {
    *(_QWORD *)&v61 = 0;
  }
  v55 = *a3;
  v56 = *((_WORD *)a3 + 2);
  v16 = sub_7BFA10((__int64 *)a1, (unsigned __int8 *)&v50, a4);
  v17 = v16;
  if ( v16 )
  {
    v18 = *(_BYTE *)(v16 + 8);
    LOBYTE(a6) = v18 == 49;
    if ( v18 == 49 )
    {
      if ( a1 + 64 != v17 + 16 )
      {
        v24 = *(_QWORD *)(v17 + 24);
        if ( v24 > 1 )
        {
          v37 = *(const void **)(v17 + 16);
          v38 = *(void **)(a1 + 64);
          if ( *(_QWORD *)(a1 + 80) < v24 )
          {
            *(_QWORD *)v42 = *(_QWORD *)(v17 + 16);
            v38 = (void *)qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), *(_QWORD *)(v17 + 24), 1);
            *(_QWORD *)(a1 + 64) = v38;
            v37 = *(const void **)v42;
          }
          *(_QWORD *)(a1 + 72) = v24;
          memmove(v38, v37, v24 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 64) + v24 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 72) = 0;
        }
      }
      if ( a1 + 88 != v17 + 40 )
      {
        v25 = *(_QWORD *)(v17 + 48);
        if ( v25 > 1 )
        {
          v35 = *(const void **)(v17 + 40);
          v36 = *(void **)(a1 + 88);
          if ( *(_QWORD *)(a1 + 104) < v25 )
          {
            *(_QWORD *)v44 = *(_QWORD *)(v17 + 40);
            v36 = (void *)qvector_reserve(a1 + 88, *(_QWORD *)(a1 + 88), *(_QWORD *)(v17 + 48), 1);
            *(_QWORD *)(a1 + 88) = v36;
            v35 = *(const void **)v44;
          }
          *(_QWORD *)(a1 + 96) = v25;
          memmove(v36, v35, v25 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 88) + v25 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 96) = 0;
        }
      }
      if ( a1 + 112 != v17 + 64 )
      {
        v26 = *(_QWORD *)(v17 + 72);
        if ( v26 > 1 )
        {
          v33 = *(const void **)(v17 + 64);
          v34 = *(void **)(a1 + 112);
          if ( *(_QWORD *)(a1 + 128) < v26 )
          {
            *(_QWORD *)v43 = *(_QWORD *)(v17 + 64);
            v34 = (void *)qvector_reserve(a1 + 112, *(_QWORD *)(a1 + 112), *(_QWORD *)(v17 + 72), 1);
            *(_QWORD *)(a1 + 112) = v34;
            v33 = *(const void **)v43;
          }
          *(_QWORD *)(a1 + 120) = v26;
          memmove(v34, v33, v26 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 112) + v26 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 120) = 0;
        }
      }
      if ( a1 + 136 != v17 + 88 )
      {
        v27 = *(_QWORD *)(v17 + 96);
        if ( v27 > 1 )
        {
          v31 = *(const void **)(v17 + 88);
          v32 = *(void **)(a1 + 136);
          if ( *(_QWORD *)(a1 + 152) < v27 )
          {
            *(_QWORD *)v41 = *(_QWORD *)(v17 + 88);
            v32 = (void *)qvector_reserve(a1 + 136, *(_QWORD *)(a1 + 136), *(_QWORD *)(v17 + 96), 1);
            *(_QWORD *)(a1 + 136) = v32;
            v31 = *(const void **)v41;
          }
          *(_QWORD *)(a1 + 144) = v27;
          memmove(v32, v31, v27 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v27 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 144) = 0;
        }
      }
      *(_DWORD *)(a1 + 160) = *(_DWORD *)(v17 + 112);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(v17 + 120);
      *(_DWORD *)(a1 + 176) = *(_DWORD *)(v17 + 128);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 69LL) = 1;
    }
    else if ( v18 == 11 && a4 != (__int64 *)(v17 + 16) )
    {
      v28 = *(_QWORD *)(v17 + 24);
      if ( v28 < 2 )
      {
        a4[1] = 0;
      }
      else
      {
        v29 = *(const void **)(v17 + 16);
        v30 = (void *)*a4;
        if ( a4[2] < v28 )
        {
          v48 = *(const void **)(v17 + 16);
          v39 = qvector_reserve(a4, *a4, *(_QWORD *)(v17 + 24), 1);
          *a4 = v39;
          v29 = v48;
          v30 = (void *)v39;
        }
        a4[1] = v28;
        memmove(v30, v29, v28 - 1);
        *(_BYTE *)(*a4 + v28 - 1) = 0;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  else
  {
    LODWORD(a6) = 0;
  }
  sub_7DCBD0(&v50);
  return (unsigned int)a6;
}
