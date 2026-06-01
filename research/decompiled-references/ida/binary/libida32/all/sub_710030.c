unsigned __int64 __fastcall sub_710030(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  const char *v10; // rsi
  const char *v11; // rdi
  int i; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // r12
  const char *v19; // rsi
  __int64 v20; // r12
  void *v21; // r14
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // rax
  const char *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  const char *v29; // rsi
  __int64 v31; // rax
  char *v32; // r14
  __int64 v33; // r13
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rsi
  __m128i v37; // xmm0
  void *v38; // rdi
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-4128h] BYREF
  __int64 v42; // [rsp+10h] [rbp-4118h]
  int v43; // [rsp+1Ch] [rbp-410Ch]
  void *v44; // [rsp+20h] [rbp-4108h] BYREF
  __int64 v45; // [rsp+28h] [rbp-4100h]
  void *v46; // [rsp+40h] [rbp-40E8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-40E0h]
  void *v48; // [rsp+60h] [rbp-40C8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-40C0h]
  void *ptr; // [rsp+80h] [rbp-40A8h] BYREF
  __m128i v51; // [rsp+88h] [rbp-40A0h] BYREF
  _BYTE v52[4]; // [rsp+A0h] [rbp-4088h] BYREF
  _BYTE v53[4100]; // [rsp+A4h] [rbp-4084h] BYREF
  __int64 v54; // [rsp+10A8h] [rbp-3080h]
  __int16 v55; // [rsp+10B0h] [rbp-3078h]
  __int16 v56; // [rsp+10B2h] [rbp-3076h]
  __int64 v57; // [rsp+20C8h] [rbp-2060h]
  int v58; // [rsp+20D4h] [rbp-2054h]
  unsigned __int64 v59; // [rsp+40E8h] [rbp-40h]

  v42 = a2;
  v43 = a3;
  v59 = __readfsqword(0x28u);
  sub_70FF70((__int64)&v44, a2, (int)".vault", a4, a5, a6);
  v10 = haystack;
  if ( v45 )
    LODWORD(v10) = (_DWORD)v44;
  sub_70FF70((__int64)&v46, (int)v10, (int)"*", v7, v8, v9);
  v11 = haystack;
  v57 = 0;
  v58 = 0;
  if ( v47 )
    v11 = (const char *)v46;
  for ( i = qfindfirst(v11, v52, 0); !i; i = qfindnext(v52) )
  {
    if ( v53[0] != 46 && (v52[1] & 0x40) == 0 )
    {
      v16 = a1[1];
      v17 = a1[2];
      if ( v17 < v16 + 1 )
      {
        v18 = qvector_reserve(a1, 0, v16 + 1, 40);
        v31 = a1[2];
        v32 = (char *)*a1;
        a1[2] = v17;
        v33 = a1[1];
        v41.m128i_i64[0] = v31;
        v34 = v33 - 1;
        if ( v34 >= 0 )
        {
          v35 = v18;
          do
          {
            v36 = *(_QWORD *)v32;
            v37 = _mm_loadu_si128((const __m128i *)(v32 + 8));
            *(_QWORD *)v32 = 0;
            *((_QWORD *)v32 + 2) = 0;
            *(_QWORD *)v35 = v36;
            *(__m128i *)(v35 + 8) = v37;
            *(_QWORD *)(v35 + 24) = *((_QWORD *)v32 + 3);
            *(_DWORD *)(v35 + 32) = *((_DWORD *)v32 + 8);
            v38 = *(void **)v32;
            if ( *(_QWORD *)v32 )
            {
              *((_QWORD *)v32 + 1) = 0;
              qfree(v38);
            }
            v32 += 40;
            v35 += 40;
          }
          while ( v34-- != 0 );
          v32 = (char *)*a1;
        }
        qfree(v32);
        v40 = v41.m128i_i64[0];
        *a1 = v18;
        a1[2] = v40;
        v16 = a1[1];
      }
      else
      {
        v18 = *a1;
      }
      v19 = haystack;
      v20 = v18 + 40 * v16;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      ++a1[1];
      if ( v45 )
        LODWORD(v19) = (_DWORD)v44;
      sub_70FF70((__int64)&ptr, (int)v19, (int)v53, v13, v14, v15);
      v21 = ptr;
      v22 = _mm_loadu_si128(&v51);
      ptr = nullptr;
      v51 = 0;
      v23 = *(void **)v20;
      if ( *(_QWORD *)v20 )
      {
        *(_QWORD *)(v20 + 8) = 0;
        v41 = v22;
        qfree(v23);
        v22 = _mm_load_si128(&v41);
      }
      *(_QWORD *)v20 = v21;
      *(__m128i *)(v20 + 8) = v22;
      if ( ptr )
      {
        v51.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v24 = v54;
      *(_QWORD *)(v20 + 24) = v54;
      *(_WORD *)(v20 + 32) = v55;
      *(_WORD *)(v20 + 34) = v56;
      a1[3] += v24;
    }
  }
  if ( (_BYTE)v43 )
  {
    sub_70FF70((__int64)&v48, v42, (int)"*", v13, v14, v15);
    v25 = haystack;
    if ( v49 )
      v25 = (const char *)v48;
    if ( !(unsigned int)qfindfirst(v25, v52, 0x4000) )
    {
      do
      {
        sub_70FF70((__int64)&ptr, v42, (int)v53, v26, v27, v28);
        v29 = haystack;
        if ( v51.m128i_i64[0] )
          v29 = (const char *)ptr;
        sub_710030(a1, v29, 1);
        if ( ptr )
        {
          v51.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      while ( !(unsigned int)qfindnext(v52) );
    }
    if ( v48 )
    {
      v49 = 0;
      qfree(v48);
    }
  }
  qfindclose(v52);
  if ( v46 )
  {
    v47 = 0;
    qfree(v46);
  }
  if ( v44 )
  {
    v45 = 0;
    qfree(v44);
  }
  return v59 - __readfsqword(0x28u);
}

