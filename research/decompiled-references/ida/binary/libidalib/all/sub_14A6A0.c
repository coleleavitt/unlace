__int64 __fastcall sub_14A6A0(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128 v10; // xmm0
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a1 == -1 )
    return -1;
  v12 = 0;
  v1 = qword_252590 + ((__int64)a1 << 8);
  v13 = 0;
  sub_14A080((int *)v1, &v12);
  v2 = *(_QWORD *)(v1 + 96);
  v3 = *(_QWORD *)(v1 + 88);
  v4 = v13;
  if ( v2 <= (unsigned __int64)v13 )
    v4 = *(_QWORD *)(v1 + 96);
  if ( v4 )
  {
    v5 = 1;
    v6 = v3 + 32 * v2;
    v7 = v12 + 32 * v13;
    while ( *(_QWORD *)(v6 - 32) == *(_QWORD *)(v7 - 32)
         && *(_QWORD *)(v6 - 24) == *(_QWORD *)(v7 - 24)
         && *(_BYTE *)(v6 - 8) == *(_BYTE *)(v7 - 8)
         && *(_QWORD *)(v6 - 16) == *(_QWORD *)(v7 - 16) )
    {
      ++v5;
      v6 -= 32LL;
      v7 -= 32;
      if ( v4 < v5 )
        goto LABEL_16;
    }
    v8 = -1;
    if ( v5 != 1 )
      v8 = *(_QWORD *)(32 * (v2 - v5) + v3 + 48);
  }
  else
  {
LABEL_16:
    v8 = -1;
  }
  v9 = *(_QWORD *)(v1 + 104);
  *(_QWORD *)(v1 + 88) = v12;
  v10 = _mm_loadh_ps((const double *)&v13 + 1);
  v12 = v3;
  *((_QWORD *)&v13 + 1) = v9;
  *(_BYTE *)(v1 + 112) = 0;
  *(__m128 *)(v1 + 96) = v10;
  if ( v3 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v8;
}

