unsigned __int64 *__fastcall sub_AB1F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r13
  __int64 v8; // rbp
  unsigned __int8 v9; // bl
  unsigned int v10; // esi
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *result; // rax
  int v16; // r10d
  __int64 *v17; // r11
  int v18; // edi
  int v19; // edi
  bool v20; // zf
  __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 1240);
  v8 = a3;
  v9 = a4;
  v21 = a2;
  v10 = *(_DWORD *)(a1 + 1256);
  if ( !v10 )
  {
    v22 = nullptr;
    goto LABEL_11;
  }
  a3 = v21;
  v11 = *(_QWORD *)(a1 + 1240);
  a6 = v10 - 1;
  v12 = a6 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v21 == *v13 )
    goto LABEL_3;
  v16 = 1;
  v17 = nullptr;
  if ( v14 == -4096 )
  {
LABEL_5:
    v18 = *(_DWORD *)(a1 + 1248);
    a4 = 3 * v10;
    v22 = v13;
    v19 = v18 + 1;
    a5 = (unsigned int)(4 * v19);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      a4 = v10 - *(_DWORD *)(a1 + 1252) - v19;
      a5 = v10 >> 3;
      if ( (unsigned int)a4 > (unsigned int)a5 )
      {
LABEL_7:
        v20 = *v13 == -4096;
        *(_DWORD *)(a1 + 1248) = v19;
        if ( !v20 )
          --*(_DWORD *)(a1 + 1252);
        *v13 = a3;
        v13[1] = 0;
        goto LABEL_3;
      }
LABEL_12:
      sub_AB1D50((__int64)v6, v10, a3, a4, a5, a6);
      sub_A6ED90(v6, &v21, &v22);
      a3 = v21;
      v19 = *(_DWORD *)(a1 + 1248) + 1;
      v13 = v22;
      goto LABEL_7;
    }
LABEL_11:
    v10 *= 2;
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( v14 == -8192 && !v17 )
      v17 = v13;
    v12 = a6 & (v16 + v12);
    v13 = (__int64 *)(v11 + 16LL * v12);
    v14 = *v13;
    if ( v21 == *v13 )
      break;
    if ( v14 == -4096 )
    {
      if ( v17 )
        v13 = v17;
      goto LABEL_5;
    }
    ++v16;
  }
LABEL_3:
  result = (unsigned __int64 *)(v13 + 1);
  *result = (2LL * v9) | v8 & 0xFFFFFFFFFFFFFFFDLL;
  return result;
}
