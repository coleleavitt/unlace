__int64 __fastcall sub_388E60(int a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __m128 v13; // xmm0
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( a1 == -1 )
    return -1;
  v15 = 0;
  v4 = qword_8CC430 + ((__int64)a1 << 8);
  v16 = 0;
  sub_388840((int *)v4, &v15, a3, a4, 0.0);
  v7 = *(_QWORD *)(v4 + 96);
  v8 = *(_QWORD *)(v4 + 88);
  v9 = (const char *)v16;
  if ( v7 <= (unsigned __int64)v16 )
    v9 = *(const char **)(v4 + 96);
  if ( v9 )
  {
    v10 = 1;
    v6 = v8 + 32 * v7;
    v5 = v15 + 32 * v16;
    while ( *(_QWORD *)(v6 - 32) == *(_QWORD *)(v5 - 32)
         && *(_QWORD *)(v6 - 24) == *(_QWORD *)(v5 - 24)
         && *(_BYTE *)(v6 - 8) == *(_BYTE *)(v5 - 8)
         && *(_QWORD *)(v6 - 16) == *(_QWORD *)(v5 - 16) )
    {
      ++v10;
      v6 -= 32LL;
      v5 -= 32;
      if ( (unsigned __int64)v9 < v10 )
        goto LABEL_16;
    }
    v11 = -1;
    if ( v10 != 1 )
    {
      v7 = 32 * (v7 - v10);
      v11 = *(_QWORD *)(v7 + v8 + 48);
    }
  }
  else
  {
LABEL_16:
    v11 = -1;
  }
  v12 = *(_QWORD *)(v4 + 104);
  *(_QWORD *)(v4 + 88) = v15;
  v13 = _mm_loadh_ps((const double *)&v16 + 1);
  v15 = v8;
  *((_QWORD *)&v16 + 1) = v12;
  *(_BYTE *)(v4 + 112) = 0;
  *(__m128 *)(v4 + 96) = v13;
  if ( v8 )
    qfree(v8, v9, v5, v6, v7, v8, v15, 0, *((_QWORD *)&v16 + 1));
  return v11;
}
