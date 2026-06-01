__int64 __fastcall sub_3CA840(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  int v6; // ecx
  __int64 result; // rax
  int v10; // edx
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rsi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // al
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // r13
  unsigned __int64 *v24; // r12
  __m128i v25; // xmm0
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  int v29; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v30; // [rsp+20h] [rbp-48h] BYREF
  __int128 v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v6 = *(_DWORD *)(a3 + 72);
  v32 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 16) == v6 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 12);
    v12 = sub_3C86C0(a3, *(_DWORD *)(a2 + 20), v10);
    v13 = *(_DWORD *)(a2 + 24);
    v14 = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a2 + 56) = v12;
    *(_QWORD *)(a2 + 64) = -1;
    *(_QWORD *)(a2 + 48) = -1;
    *(_DWORD *)(a2 + 32) = 73;
    v15 = sub_3C8680(a3, v14, v13);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 24);
      v29 = -1;
      v17 = s1;
      *(_QWORD *)(a2 + 48) = v16;
      v18 = *(_DWORD *)v15;
      v31 = 0;
      *(_DWORD *)(a2 + 32) = v18;
      v19 = *(int *)(a2 + 8);
      v30 = 0;
      v20 = *a5 + 24 * v19;
      if ( *(_QWORD *)(v20 + 8) )
        v17 = *(const char **)v20;
      v21 = sub_3CA1C0((unsigned __int64)&v30, v17, a4);
      v22 = v30;
      if ( v21 )
      {
        v23 = &v30[v31];
        if ( v23 != v30 )
        {
          v24 = v30;
          v25 = (__m128i)-1LL;
          do
          {
            v26 = *v24;
            v28 = v25;
            sub_3C8530((_QWORD *)a3, v28.m128i_i64, v26);
            ++v24;
            v25 = _mm_load_si128(&v28);
          }
          while ( v23 != v24 );
          v27 = v28.m128i_i64[0];
          v22 = v30;
          if ( v28.m128i_i64[1] != -1 )
            *(_QWORD *)(a2 + 64) = v28.m128i_i64[1];
          if ( v27 != -1 )
            *(_QWORD *)(a2 + 56) = v27;
        }
      }
      if ( v22 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
    }
    return 1;
  }
  return result;
}
