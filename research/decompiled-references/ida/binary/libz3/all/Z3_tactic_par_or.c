_QWORD *__fastcall Z3_tactic_par_or(__int64 a1, unsigned int a2, __int64 *a3)
{
  char v4; // r14
  _BYTE *v5; // r15
  __int64 *v6; // r14
  __int64 v7; // r13
  unsigned int v8; // ecx
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rbx
  __int64 v17; // rax
  char v18; // [rsp+Fh] [rbp-C9h]
  _BYTE *ptr; // [rsp+10h] [rbp-C8h]
  unsigned int v20; // [rsp+18h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v18 = v4;
  if ( v4 )
    sub_29CA50(a1, a2);
  ptr = v21;
  v5 = v21;
  *(_DWORD *)(a1 + 1520) = 0;
  v20 = 0;
  if ( a2 )
  {
    v6 = a3;
    LODWORD(v7) = 16;
    v8 = 0;
    v9 = &a3[a2];
    do
    {
      v11 = *v6;
      if ( *v6 )
        v11 = *(_QWORD *)(v11 + 24);
      if ( v8 >= (unsigned int)v7 )
      {
        v7 = (unsigned int)(2 * v7);
        v12 = sub_186B270(8 * v7);
        v8 = v20;
        v5 = (_BYTE *)v12;
        if ( v20 )
        {
          if ( v20 - 1 <= 2 || (_BYTE *)v12 == ptr + 8 )
          {
            v17 = 0;
            do
            {
              *(_QWORD *)&v5[v17] = *(_QWORD *)&ptr[v17];
              v17 += 8;
            }
            while ( v17 != 8LL * v20 );
          }
          else
          {
            v13 = 0;
            do
            {
              *(__m128i *)&v5[v13] = _mm_loadu_si128((const __m128i *)&ptr[v13]);
              v13 += 16;
            }
            while ( 16LL * (v20 >> 1) != v13 );
            if ( (v20 & 1) != 0 )
              *(_QWORD *)&v5[8 * (v20 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v20 & 0xFFFFFFFE)];
          }
        }
        if ( ptr != v21 && ptr )
        {
          sub_186B220(ptr);
          v8 = v20;
        }
        ptr = v5;
      }
      v10 = v8;
      ++v6;
      ++v8;
      *(_QWORD *)&v5[8 * v10] = v11;
      v20 = v8;
    }
    while ( v9 != v6 );
  }
  v14 = sub_EEA340(a2, v5);
  v15 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v15, a1);
  *v15 = &off_1C4C8E0;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15[3] = v14;
  sub_24FBE0(a1, v15);
  if ( v18 )
  {
    sub_2BB620(v15);
    if ( ptr != v21 && ptr )
      sub_186B220(ptr);
    byte_1C7EBA0 = 1;
  }
  else if ( ptr != v21 && ptr )
  {
    sub_186B220(ptr);
  }
  return v15;
}

