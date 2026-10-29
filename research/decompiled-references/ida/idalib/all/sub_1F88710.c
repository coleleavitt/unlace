__int64 __fastcall sub_1F88710(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v9; // rbp
  __int64 *v10; // r12
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int *v14; // r12
  unsigned int v15; // eax
  char *v16; // rsi
  char *v17; // rsi
  __int64 v18; // rdi
  int v19; // r11d
  __int64 v20; // r13
  int v21; // edx
  bool v22; // zf
  int v23; // esi
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  __m128i v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+20h] [rbp-38h]

  result = 0;
  v24 = a2;
  if ( !a2 || (*(_BYTE *)(a2 + 36) & 0x10) != 0 )
    return result;
  v7 = *(unsigned int *)(a1 + 952);
  v9 = a3;
  v10 = (__int64 *)(a1 + 936);
  if ( !(_DWORD)v7 )
  {
    v25.m128i_i64[0] = 0;
LABEL_18:
    v23 = 2 * v7;
LABEL_19:
    sub_1F88510(v10, v23, a3, v7, a5, a6);
    sub_1F74A50(v10, &v24, &v25);
    v18 = v24;
    LODWORD(a3) = *(_DWORD *)(a1 + 944) + 1;
    v12 = v25.m128i_i64[0];
    goto LABEL_13;
  }
  a6 = *(_QWORD *)(a1 + 936);
  v11 = (v7 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = a6 + 16LL * v11;
  v13 = *(_QWORD *)v12;
  if ( a2 == *(_QWORD *)v12 )
    goto LABEL_6;
  v18 = a2;
  v19 = 1;
  v20 = 0;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( !v20 && v13 == -8192 )
        v20 = v12;
      v11 = (v7 - 1) & (v19 + v11);
      v12 = a6 + 16LL * v11;
      v13 = *(_QWORD *)v12;
      if ( a2 == *(_QWORD *)v12 )
        break;
      if ( v13 == -4096 )
      {
        if ( v20 )
          v12 = v20;
        goto LABEL_11;
      }
      ++v19;
    }
LABEL_6:
    v14 = (unsigned int *)(v12 + 8);
    result = *(unsigned int *)(v12 + 8);
    if ( (_DWORD)result )
      return result;
    goto LABEL_7;
  }
LABEL_11:
  v21 = *(_DWORD *)(a1 + 944);
  v25.m128i_i64[0] = v12;
  a3 = (unsigned int)(v21 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * (int)v7 )
    goto LABEL_18;
  a5 = (unsigned int)v7 >> 3;
  if ( (int)v7 - *(_DWORD *)(a1 + 948) - (int)a3 <= (unsigned int)a5 )
  {
    v23 = v7;
    goto LABEL_19;
  }
LABEL_13:
  v22 = *(_QWORD *)v12 == -4096;
  *(_DWORD *)(a1 + 944) = a3;
  if ( !v22 )
    --*(_DWORD *)(a1 + 948);
  *(_QWORD *)v12 = v18;
  v14 = (unsigned int *)(v12 + 8);
  a2 = v24;
  *(_DWORD *)(v12 + 8) = 0;
LABEL_7:
  v15 = *(_DWORD *)(a1 + 932);
  *(_DWORD *)(a1 + 932) = v15 + 1;
  *v14 = v15;
  v25.m128i_i64[1] = a2;
  v16 = *(char **)(a1 + 968);
  v25.m128i_i64[0] = v9;
  LODWORD(v26) = v15;
  if ( v16 == *(char **)(a1 + 976) )
  {
    sub_1F74B10(a1 + 960, v16, &v25);
  }
  else
  {
    v17 = v16 + 24;
    *(__m128i *)(v17 - 24) = _mm_load_si128(&v25);
    *((_QWORD *)v17 - 1) = v26;
    *(_QWORD *)(a1 + 968) = v17;
  }
  return *v14;
}
