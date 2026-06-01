__int64 __fastcall sub_58C5F0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __m128i v8; // xmm1
  int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // ebp
  char *v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  void **v17; // r14
  void *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rdi
  _BYTE v26[28]; // [rsp+0h] [rbp-108h] BYREF
  __m128i v27; // [rsp+20h] [rbp-E8h] BYREF
  int v28; // [rsp+30h] [rbp-D8h]
  void *v29; // [rsp+38h] [rbp-D0h]
  __int128 v30; // [rsp+40h] [rbp-C8h]
  int v31; // [rsp+50h] [rbp-B8h]
  int v32; // [rsp+54h] [rbp-B4h]
  int v33; // [rsp+58h] [rbp-B0h]
  char v34; // [rsp+5Ch] [rbp-ACh]
  void *v35; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+78h] [rbp-90h]
  void *v38[2]; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  void *ptr; // [rsp+B0h] [rbp-58h]
  __int128 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C8h] [rbp-40h]
  unsigned int v46; // [rsp+D0h] [rbp-38h]
  char v47; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-30h]

  v48 = __readfsqword(0x28u);
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B052C8, (__m128i)(unsigned __int64)&v35);
  if ( a5 )
  {
    *(__m128i *)v26 = _mm_loadu_si128((const __m128i *)a5);
    v9 = *(_DWORD *)&v26[8];
    *(__m128i *)&v26[12] = _mm_loadu_si128((const __m128i *)(a5 + 12));
    v10 = *(_QWORD *)&v26[20];
  }
  else
  {
    *(_DWORD *)&v26[24] = 2;
    v9 = 0;
    *(_QWORD *)&v26[16] = 0x5000000000LL;
    v10 = 0x200000050LL;
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_23836B0);
  }
  v32 = v9;
  v41 = v10;
  v28 = 0;
  v29 = nullptr;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v37 = 0;
  v39 = 0;
  v40 = a2;
  v42 = 0;
  ptr = nullptr;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v30 = 0;
  v27 = v8;
  v36 = 0;
  *(_OWORD *)v38 = 0;
  v44 = 0;
  if ( (unsigned __int8)sub_58C4A0((__int64)&v27, a3, a4, (unsigned int *)v26) && sub_589160((__int64)&v27, 0) )
  {
    v11 = 0;
  }
  else
  {
    v11 = v46;
    if ( !v46 )
      v11 = -1;
  }
  v12 = (char *)ptr;
  v27.m128i_i64[0] = (__int64)off_2B052C8;
  if ( ptr )
  {
    v13 = v44;
    if ( (_QWORD)v44 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[24 * v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = (char *)ptr;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v12);
  }
  v17 = (void **)v38[0];
  if ( v38[0] )
  {
    v18 = *(void **)v38[0];
    if ( *(_QWORD *)v38[0] )
    {
      v19 = *((_QWORD *)v38[0] + 1);
      if ( v19 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          v22 = (__int64)v18 + v20;
          ++v21;
          v20 += 56;
          sub_378C80(v22);
          v18 = *v17;
        }
        while ( v19 != v21 );
      }
      v17[1] = nullptr;
      qfree(v18);
    }
    qfree(v17);
  }
  v23 = v38[1];
  if ( v38[1] )
  {
    clear_tinfo_t((char *)v38[1] + 40);
    v24 = (void *)v23[2];
    if ( v24 )
    {
      v23[3] = 0;
      qfree(v24);
    }
    cleanup_argloc(v23);
    qfree(v23);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  v27.m128i_i64[1] = 0;
  v27.m128i_i64[0] = (__int64)&off_2B05298;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v11;
}

