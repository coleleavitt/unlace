unsigned __int64 __fastcall sub_4FF5C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v19 = __readfsqword(0x28u);
  v18 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v18);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970();
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v9 = *(_QWORD *)(v6 + 32) + v8;
  v10 = unpack_dd(&v18);
  v11 = unpack_dd(&v18);
  v12 = unpack_dd(&v18);
  if ( a3 )
    v11 = v12;
  v13 = sub_4FED00((unsigned int **)v9, v10);
  v14 = *(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8);
  if ( v13 != (unsigned int *)v14 )
  {
    v15 = *v13;
    if ( v10 >= (unsigned int)v15 )
    {
      v16 = v13[1];
      if ( v10 < v16
        && (unsigned int)v15 < v11
        && (v16 >= v11
         || (unsigned int *)v14 == (unsigned int *)((char *)v13 + 17)
         || *(unsigned int *)((char *)v13 + 17) >= v11) )
      {
        sub_4FD960(*(unsigned int *)(v9 + 56), v15, v16, v11);
        v13[1] = v11;
        *((_BYTE *)v13 + 16) = 1;
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

