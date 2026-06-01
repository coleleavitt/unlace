__int64 __fastcall sub_9D0A70(_QWORD *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  __m128i v17; // xmm1
  __int64 *v18; // rsi
  __int64 result; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  double v22[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v23[6]; // [rsp+18h] [rbp-30h] BYREF

  v9 = a1[8];
  if ( a1[7] == v9 )
  {
    v20 = (__int64 *)(a1[3] & 0xFFFFFFFFFFFFFFFELL);
    v21 = *v20;
    v20[10] += 72;
    v10 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20[1] >= (unsigned __int64)(v10 + 72) && v21 )
      *v20 = v10 + 72;
    else
      v10 = sub_986170((__int64)v20, 72, 72, 3, a5, a6);
    v23[0] = v10;
  }
  else
  {
    v10 = *(_QWORD *)(v9 - 8);
    a1[8] = v9 - 8;
    v23[0] = v10;
  }
  if ( a2 )
  {
    v11 = 0;
    v12 = *(_DWORD *)(a2 + 40) & 0xFFFFFFF;
    if ( !a4 )
      goto LABEL_6;
  }
  else
  {
    v12 = 0;
    if ( !a4 )
    {
      v13 = 1;
      goto LABEL_8;
    }
  }
  v11 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
LABEL_6:
  if ( v11 >= v12 )
    v13 = (v11 + 1) & 0xFFFFFFF;
  else
    v13 = (v12 + 1) & 0xFFFFFFF;
LABEL_8:
  v14 = v13;
  v15 = *(_DWORD *)(v10 + 40);
  *(_QWORD *)&v22[0] = a2;
  *(_QWORD *)(v10 + 16) = a4;
  v16 = v14 & 0xFFFFFFF | v15 & 0xF0000000;
  *(_QWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 40) = v16;
  *(__m128 *)v10 = _mm_loadh_ps(v22);
  *(_QWORD *)(v10 + 32) = 0;
  *(_BYTE *)(v10 + 43) = HIBYTE(v16) & 0x8F | 0x10;
  v17 = _mm_loadu_si128(a3);
  *(_QWORD *)(v10 + 64) = 0;
  *(__m128i *)(v10 + 48) = v17;
  if ( a2 )
    ++*(_DWORD *)(a2 + 68);
  if ( a4 )
    ++*(_DWORD *)(a4 + 68);
  v18 = (__int64 *)a1[5];
  if ( v18 == (__int64 *)a1[6] )
  {
    sub_9D0920((__int64)(a1 + 4), v18, v23);
    return v23[0];
  }
  else
  {
    *v18 = v10;
    result = v23[0];
    a1[5] = v18 + 1;
  }
  return result;
}
