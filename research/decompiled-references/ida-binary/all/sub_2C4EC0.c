__int64 __fastcall sub_2C4EC0(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbp
  int i; // ebx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v10 = *(_QWORD *)(a1 + 440);
  v20 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 8);
  for ( i = 0; ; ++i )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL);
    if ( v13 != interactive_graph_t__::vfunc_7 )
      break;
    if ( *(_DWORD *)(v10 + 184) <= i )
      goto LABEL_12;
LABEL_7:
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 104) + i) & 1) != 0 )
    {
      v14 = v19;
      v15 = v18;
      if ( *((_QWORD *)&v19 + 1) < (unsigned __int64)(v19 + 1) )
      {
        v18 = qvector_reserve(&v18, v18, v19 + 1, 4);
        v15 = v18;
        v14 = v19;
      }
      *(_DWORD *)(v15 + 4 * v14) = i;
      *(_QWORD *)&v19 = v19 + 1;
    }
  }
  if ( (int)v13(v10) > i )
    goto LABEL_7;
LABEL_12:
  v16 = sub_2C4D80(a1, (__int64)&v18, -1, a2, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, (const char *)&v18);
  }
  return v16;
}
