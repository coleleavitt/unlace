__int64 __fastcall sub_9A3540(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // r14
  unsigned int v12; // esi
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 i; // rax
  __int64 *ptr; // [rsp+20h] [rbp-C8h]
  unsigned int v25; // [rsp+28h] [rbp-C0h]
  _QWORD v26[23]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  ptr = v26;
  v25 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0
    || *(_DWORD *)a2 != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    v9 = *(_QWORD *)(a1 + 480);
    if ( !v9 )
    {
      sub_16669E0(a1 + 472);
      v9 = *(_QWORD *)(a1 + 480);
    }
    v10 = sub_166A700(v9, a2, a3, a4, a5, a6);
    v11 = v26;
    v12 = 1;
    v26[0] = v10;
    v25 = 1;
  }
  else
  {
    v11 = v26;
    v12 = 0;
  }
  if ( v8 )
  {
    LODWORD(v13) = 16;
    v14 = 0;
    v15 = 8LL * v8;
    do
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + v14);
      if ( v12 >= (unsigned int)v13 )
      {
        v13 = (unsigned int)(2 * v13);
        v12 = v25;
        v11 = (__int64 *)sub_186B270(8 * v13);
        if ( v25 )
        {
          if ( v25 - 1 <= 2 || v11 == ptr + 1 )
          {
            for ( i = 0; i != v25; ++i )
              v11[i] = ptr[i];
          }
          else
          {
            v18 = 0;
            do
            {
              *(__m128i *)&v11[v18] = _mm_loadu_si128((const __m128i *)&ptr[v18]);
              v18 += 2;
            }
            while ( v18 != 2LL * (v25 >> 1) );
            if ( (v25 & 1) != 0 )
              v11[v25 & 0xFFFFFFFE] = ptr[v25 & 0xFFFFFFFE];
          }
        }
        if ( ptr != v26 && ptr )
        {
          sub_186B220(ptr);
          v12 = v25;
        }
        ptr = v11;
      }
      v16 = v12;
      v14 += 8;
      ++v12;
      v11[v16] = v17;
      v25 = v12;
    }
    while ( v15 != v14 );
  }
  v19 = sub_9A3160(a1, v12, v11, a3);
  if ( ptr && ptr != v26 )
    sub_186B220(ptr);
  return v19;
}

