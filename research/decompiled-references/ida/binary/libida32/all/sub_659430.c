__int64 __fastcall sub_659430(_QWORD *a1, const char *a2, int a3, void **a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  char *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r12
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  char *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r13
  void *v26; // rax
  size_t v27; // rdx
  void *v28; // rax
  __int64 v29; // r9
  size_t v30; // rdx
  void *v31; // rax
  size_t v32; // rdx
  char *v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r12
  char *v36; // rbx
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // r12
  unsigned __int64 v42; // r13
  __int64 v43; // rax
  _BYTE *v44; // rbx
  unsigned int *v46; // [rsp+10h] [rbp-D8h]
  __m128i v49; // [rsp+28h] [rbp-C0h] BYREF
  size_t v50; // [rsp+38h] [rbp-B0h]
  void **p_ptr; // [rsp+40h] [rbp-A8h]
  char *v52; // [rsp+48h] [rbp-A0h]
  __int64 (__fastcall **v53[2])(_QWORD, _QWORD *, __int64); // [rsp+50h] [rbp-98h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+60h] [rbp-88h]
  void **v55; // [rsp+68h] [rbp-80h]
  _QWORD *v56; // [rsp+70h] [rbp-78h]
  int v57; // [rsp+78h] [rbp-70h]
  int v58; // [rsp+7Ch] [rbp-6Ch]
  char v59; // [rsp+80h] [rbp-68h]
  void *ptr; // [rsp+88h] [rbp-60h] BYREF
  __m128i v61; // [rsp+90h] [rbp-58h]
  char v62; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v46 = (unsigned int *)a2;
  v63 = __readfsqword(0x28u);
  v7 = a3 & 1;
  v53[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1;
  v53[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2B0D408;
  v54 = &off_2B0D3D8;
  if ( (_DWORD)v7 )
  {
    v58 = a3;
    v56 = a5;
    v55 = a4;
    v57 = -1;
    v59 = 0;
    ptr = nullptr;
    v61 = 0;
  }
  else
  {
    v58 = a3;
    p_ptr = &ptr;
    v55 = &ptr;
    v56 = a5;
    v57 = -1;
    v59 = 0;
    ptr = nullptr;
    v61 = 0;
    if ( (a3 & 5) == 0 )
    {
      v8 = (__int64)a4[1];
      v49.m128i_i64[0] = v8;
      if ( v8 )
      {
        v52 = (char *)qalloc_or_throw(80 * v8, a2, v7);
        v21 = v52;
        v22 = 0;
        do
        {
          v24 = (__int64)*a4 + 80 * v22;
          *(_QWORD *)v21 = 0;
          *(_OWORD *)(v21 + 8) = 0;
          v25 = v24;
          if ( *(_QWORD *)(v24 + 8) )
          {
            v49.m128i_i64[1] = *(_QWORD *)(v24 + 8);
            v26 = (void *)qalloc_or_throw(v49.m128i_i64[1], a2);
            v27 = v49.m128i_u64[1];
            *(_QWORD *)v21 = v26;
            *((_QWORD *)v21 + 2) = v27;
            a2 = *(const char **)v25;
            memcpy(v26, *(const void **)v25, v27);
            *((_QWORD *)v21 + 1) = v49.m128i_i64[1];
          }
          *((_QWORD *)v21 + 3) = 0;
          *((_OWORD *)v21 + 2) = 0;
          if ( *(_QWORD *)(v25 + 32) )
          {
            v49.m128i_i64[1] = *(_QWORD *)(v25 + 32);
            v31 = (void *)qalloc_or_throw(v49.m128i_i64[1], a2);
            v32 = v49.m128i_u64[1];
            *((_QWORD *)v21 + 3) = v31;
            *((_QWORD *)v21 + 5) = v32;
            a2 = *(const char **)(v25 + 24);
            memcpy(v31, a2, v32);
            *((_QWORD *)v21 + 4) = v49.m128i_i64[1];
          }
          *((_QWORD *)v21 + 6) = 0;
          *(_OWORD *)(v21 + 56) = 0;
          v23 = *(_QWORD *)(v25 + 56);
          if ( v23 )
          {
            v49.m128i_i64[1] = *(_QWORD *)(v25 + 56);
            v50 = 8 * v23;
            v28 = (void *)qalloc_or_throw(8 * v23, a2);
            v29 = v49.m128i_i64[1];
            v30 = v50;
            *((_QWORD *)v21 + 6) = v28;
            *((_QWORD *)v21 + 8) = v29;
            a2 = *(const char **)(v25 + 48);
            memcpy(v28, a2, v30);
            *((_QWORD *)v21 + 7) = v49.m128i_i64[1];
          }
          ++v22;
          v21 += 80;
          *((_DWORD *)v21 - 2) = *(_DWORD *)(v25 + 72);
        }
        while ( v49.m128i_i64[0] != v22 );
        v33 = (char *)ptr;
        if ( ptr )
        {
          if ( v61.m128i_i64[0] )
          {
            v34 = 0;
            v35 = v61.m128i_i64[0];
            do
            {
              v36 = &v33[80 * v34];
              v37 = *((void **)v36 + 6);
              if ( v37 )
              {
                *((_QWORD *)v36 + 7) = 0;
                qfree(v37);
              }
              v38 = *((void **)v36 + 3);
              if ( v38 )
              {
                *((_QWORD *)v36 + 4) = 0;
                qfree(v38);
              }
              v39 = *(void **)v36;
              if ( *(_QWORD *)v36 )
              {
                *((_QWORD *)v36 + 1) = 0;
                qfree(v39);
              }
              ++v34;
              v33 = (char *)ptr;
            }
            while ( v35 != v34 );
          }
          v61.m128i_i64[0] = 0;
          qfree(v33);
        }
        v40 = _mm_loadl_epi64(&v49);
        v41 = 0;
        v42 = 0;
        ptr = v52;
        v61 = _mm_unpacklo_epi64(v40, v40);
        do
        {
          v43 = *(_QWORD *)(*v56 + 8 * v42);
          if ( v43 != -1 )
          {
            v44 = (_BYTE *)(*(_QWORD *)((char *)ptr + v41) + v43);
            *v44 = toupper((unsigned __int8)*v44);
          }
          ++v42;
          v41 += 80;
        }
        while ( v42 < v61.m128i_i64[0] );
      }
    }
  }
  v62 = 0;
  v9 = v46[1];
  v10 = *v46;
  if ( (a3 & 0x10) != 0 )
    v11 = sub_3BC8E0(a1, v10, v9, 1, v53);
  else
    v11 = sub_3BC8C0(a1, v10, v9, 1, v53);
  v12 = v11;
  if ( a6 )
    *a6 = v62;
  v13 = (char *)ptr;
  v53[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2B0D408;
  v54 = &off_2B0D3D8;
  if ( ptr )
  {
    v14 = v61.m128i_i64[0];
    if ( v61.m128i_i64[0] )
    {
      v15 = 0;
      do
      {
        v16 = &v13[80 * v15];
        v17 = *((void **)v16 + 6);
        if ( v17 )
        {
          *((_QWORD *)v16 + 7) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 3);
        if ( v18 )
        {
          *((_QWORD *)v16 + 4) = 0;
          qfree(v18);
        }
        v19 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v19);
        }
        ++v15;
        v13 = (char *)ptr;
      }
      while ( v14 != v15 );
    }
    v61.m128i_i64[0] = 0;
    qfree(v13);
  }
  return v12;
}

