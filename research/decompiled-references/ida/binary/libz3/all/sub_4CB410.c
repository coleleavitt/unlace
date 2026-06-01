void __fastcall sub_4CB410(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v1 = a1 - 1;
  v3 = (__int64 *)a1[15];
  *(__m128i *)(a1 - 1) = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)&off_1C4F2E0),
                           (__m128i)(unsigned __int64)off_1C4F1A0);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[14];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[15];
    if ( v3 )
LABEL_9:
      sub_186B220(v3 - 1);
  }
  v8 = a1[13];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[12];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (void *)a1[9];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[7];
  if ( v11 )
  {
    v12 = a1[8];
    v7 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v12, v11);
  }
  v13 = a1[2];
  *a1 = qword_1C65E98;
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[1];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  operator delete(v1, 0x88u);
}

