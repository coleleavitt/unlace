__int64 __fastcall sub_31F2A0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  size_t v17; // r14
  const char *v18; // rsi
  const char *v19; // rsi
  char updated; // al
  __int64 v21; // rdx
  __int64 *v22; // rdi
  unsigned int v23; // r12d
  __int64 *v24; // rbx
  __int64 v25; // rbp
  double v26; // xmm0_8
  char v28; // [rsp-8h] [rbp-1118h]
  void *v29; // [rsp+8h] [rbp-1108h] BYREF
  __int128 v30; // [rsp+10h] [rbp-1100h]
  __int64 v31; // [rsp+28h] [rbp-10E8h] BYREF
  _QWORD v32[529]; // [rsp+30h] [rbp-10E0h] BYREF
  __int64 *v33; // [rsp+10B8h] [rbp-58h]
  __int128 v34; // [rsp+10C0h] [rbp-50h]
  unsigned __int64 v35; // [rsp+10D0h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v30 = 0;
  v29 = nullptr;
  if ( a3 )
  {
    v17 = strlen(a3);
    v29 = (void *)qvector_reserve(&v29, 0, v17 + 1, 1);
    *(_QWORD *)&v30 = v17 + 1;
    memmove(v29, a3, v17);
    *((_BYTE *)v29 + v17) = 0;
  }
  v18 = (_BYTE *)(&dword_0 + 2);
  if ( (unsigned __int8)sub_196F50(
                          (int)&v29,
                          2,
                          (int)"Enter snapshot description",
                          a4,
                          a5,
                          a6,
                          (__m128)0LL,
                          a8,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13,
                          a14,
                          v28) )
  {
    if ( a3 && a4 )
    {
      if ( (_QWORD)v30 )
        qstrncpy(a3, v29, a4);
      else
        qstrncpy(a3, &s1, a4);
    }
    v31 = 0;
    v19 = &s1;
    v32[0] = 0;
    v32[16] = 0;
    v33 = nullptr;
    v34 = 0;
    if ( (_QWORD)v30 )
      v19 = (const char *)v29;
    qstrncpy((char *)v32 + 2, v19, 128);
    v18 = (const char *)(a1 + 4280);
    updated = update_snapshot_attributes(a2, a1 + 4280, &v31, 1);
    v21 = v34;
    v22 = v33;
    v23 = updated == 0 ? -1 : 1;
    v24 = v33;
    if ( 8LL * (_QWORD)v34 )
    {
      do
      {
        v25 = *v24;
        if ( *v24 )
        {
          v26 = sub_319CD0(*v24);
          qfree(v25, v18, v26);
          v22 = v33;
          v21 = v34;
        }
        ++v24;
      }
      while ( v24 != &v22[v21] );
    }
    if ( v22 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v22, v18);
    }
  }
  else
  {
    v23 = 0;
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v18);
  }
  return v23;
}
