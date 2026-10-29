__int64 __fastcall sub_20B3430(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // r9
  int v8; // r11d
  unsigned int v9; // eax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned int v17; // eax
  __m128i v18[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __m128i v20[4]; // [rsp+28h] [rbp-40h] BYREF

  v4 = sub_20A07F0(a2);
  result = 0;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
    {
      v7 = v4 + 24;
      v8 = 3;
      v9 = ((unsigned __int8)((unsigned int)v5 >> 9) ^ (unsigned __int8)((unsigned int)v5 >> 4)) & 3;
      v10 = (__int64 *)(v4
                      + 24
                      + 24LL
                      * (((unsigned __int8)((unsigned int)v5 >> 9) ^ (unsigned __int8)((unsigned int)v5 >> 4)) & 3));
      v11 = 96;
      v12 = *v10;
      if ( v5 == *v10 )
      {
LABEL_11:
        sub_20ABC20((__m128 *)&v19, v10, (__int64 *)(v7 + v11), v4 + 16, 1);
        v15 = v19;
LABEL_12:
        v16 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        *(_QWORD *)v15 = -8192;
        v17 = *(_DWORD *)(v4 + 16);
        ++*(_DWORD *)(v4 + 20);
        *(_DWORD *)(v4 + 16) = (2 * (v17 >> 1) - 2) | v17 & 1;
        v19 = a3;
        v20[0] = v16;
        sub_20B2D90(v18, v4 + 16, (__int64 *)&v19, v20);
        return 1;
      }
    }
    else
    {
      v14 = *(unsigned int *)(v4 + 32);
      if ( !(_DWORD)v14 )
        goto LABEL_14;
      v8 = v14 - 1;
      v7 = *(_QWORD *)(v4 + 24);
      v9 = (v14 - 1) & (((unsigned int)v5 >> 4) ^ ((unsigned int)v5 >> 9));
      v10 = (__int64 *)(v7 + 24LL * v9);
      v12 = *v10;
      if ( v5 == *v10 )
      {
LABEL_10:
        v11 = 24 * v14;
        goto LABEL_11;
      }
    }
    v13 = 1;
    if ( v12 != -4096 )
    {
      while ( 1 )
      {
        v9 = v8 & (v13 + v9);
        v10 = (__int64 *)(v7 + 24LL * v9);
        if ( v5 == *v10 )
          break;
        ++v13;
        if ( *v10 == -4096 )
          goto LABEL_14;
      }
      if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
      {
        v11 = 96;
        goto LABEL_11;
      }
      v14 = *(unsigned int *)(v4 + 32);
      goto LABEL_10;
    }
LABEL_14:
    v15 = sub_20ABC80(v4 + 16);
    goto LABEL_12;
  }
  return result;
}
