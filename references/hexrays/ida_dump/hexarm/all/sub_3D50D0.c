__int64 __fastcall sub_3D50D0(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, double a6)
{
  int v7; // ecx
  __int64 result; // rax
  int v11; // edx
  __int64 v13; // rax
  int v14; // edx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 *v23; // rdi
  unsigned __int64 *v24; // r13
  unsigned __int64 *v25; // r12
  __m128i v26; // xmm0
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-68h] BYREF
  int v30; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v31; // [rsp+20h] [rbp-48h] BYREF
  __int128 v32; // [rsp+28h] [rbp-40h]
  unsigned __int64 v33; // [rsp+38h] [rbp-30h]

  v7 = *(_DWORD *)(a3 + 72);
  v33 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 16) == v7 )
  {
    v11 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 12);
    v13 = sub_3D2FF0((_QWORD *)a3, *(unsigned int *)(a2 + 20), v11, a6);
    v14 = *(_DWORD *)(a2 + 24);
    v15 = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a2 + 56) = v13;
    *(_QWORD *)(a2 + 64) = -1;
    *(_QWORD *)(a2 + 48) = -1;
    *(_DWORD *)(a2 + 32) = 73;
    v16 = sub_3D30A0(a3, v15, v14);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 24);
      v30 = -1;
      v18 = s1;
      *(_QWORD *)(a2 + 48) = v17;
      v19 = *(_DWORD *)v16;
      v32 = 0;
      *(_DWORD *)(a2 + 32) = v19;
      v20 = *(int *)(a2 + 8);
      v31 = nullptr;
      v21 = *a5 + 24 * v20;
      if ( *(_QWORD *)(v21 + 8) )
        v18 = *(const char **)v21;
      v22 = sub_3D4A00((unsigned __int64)&v31, v18, a4);
      v23 = v31;
      if ( v22 )
      {
        v24 = &v31[v32];
        if ( v24 != v31 )
        {
          v25 = v31;
          v26 = (__m128i)-1LL;
          do
          {
            v27 = *v25;
            v29 = v26;
            sub_3D2ED0((_QWORD *)a3, (__int64)&v29, v27, *(double *)v26.m128i_i64);
            ++v25;
            v26 = _mm_load_si128(&v29);
          }
          while ( v24 != v25 );
          v28 = v29.m128i_i64[0];
          v23 = v31;
          if ( v29.m128i_i64[1] != -1 )
            *(_QWORD *)(a2 + 64) = v29.m128i_i64[1];
          if ( v28 != -1 )
            *(_QWORD *)(a2 + 56) = v28;
        }
      }
      if ( v23 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v23);
      }
    }
    return 1;
  }
  return result;
}
