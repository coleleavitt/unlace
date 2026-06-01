void __fastcall sub_110BEA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char *v15; // [rsp+10h] [rbp-218h] BYREF
  __int16 v16; // [rsp+30h] [rbp-1F8h]
  __m128i v17; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-1D8h] BYREF
  __int16 v19; // [rsp+60h] [rbp-1C8h]
  __m128i v20[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int16 v21; // [rsp+90h] [rbp-198h]
  __m128i v22[2]; // [rsp+A0h] [rbp-188h] BYREF
  __int16 v23; // [rsp+C0h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-140h] BYREF
  __int16 v26; // [rsp+F0h] [rbp-138h]

  (*(void (__fastcall **)(__m128i *, __int64))(*(_QWORD *)a1 + 296LL))(&v17, a1);
  v21 = 260;
  v20[0].m128i_i64[0] = (__int64)&v17;
  if ( !(unsigned int)sub_22674F0(v20, ptr) && ptr[0] )
  {
    if ( *(_DWORD *)(a1 + 60) == 15 && *(_DWORD *)(a1 + 64) == 27 )
    {
      *(_QWORD *)ptr = "-libpath:";
      v26 = 259;
    }
    else
    {
      v5 = 259;
      *(_QWORD *)ptr = "-L";
      v26 = 259;
    }
    sub_A1D840(v22, (const __m128i *)ptr, v20, v3, v4, v5);
    v13 = sub_10B6980(a2, (__int64)v22);
    sub_10B8890(a3, v13);
  }
  if ( (__int64 *)v17.m128i_i64[0] != &v18 )
    operator delete((void *)v17.m128i_i64[0]);
  v6 = (_BYTE *)sub_2266770(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL), 0);
  *(_QWORD *)ptr = &v25;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  sub_9FC110(ptr, v6, &v6[v7]);
  v23 = 257;
  v21 = 257;
  v19 = 257;
  v16 = 259;
  v15 = "lib";
  sub_2266670(ptr, &v15, &v17, v20, v22);
  v17 = *(__m128i *)ptr;
  v19 = 261;
  if ( !(unsigned int)sub_22674F0(&v17, v22) && v22[0].m128i_i8[0] )
  {
    if ( *(_DWORD *)(a1 + 60) != 15 || (v11 = "-libpath:", *(_DWORD *)(a1 + 64) != 27) )
      v11 = "-L";
    v22[0].m128i_i64[0] = (__int64)v11;
    v23 = 259;
    sub_A1D840(v20, v22, &v17, v8, v9, v10);
    v12 = sub_10B6980(a2, (__int64)v20);
    sub_10B8890(a3, v12);
  }
  if ( *(__int64 **)ptr != &v25 )
    free(*(void **)ptr);
}

