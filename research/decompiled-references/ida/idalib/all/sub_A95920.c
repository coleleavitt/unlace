_QWORD *__fastcall sub_A95920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 *)(a1 + 1704);
  v19 = a2;
  v8 = *(_DWORD *)(a1 + 1720);
  if ( !v8 )
  {
    v20 = nullptr;
    goto LABEL_13;
  }
  a4 = v19;
  a6 = v8 - 1;
  v9 = *(_QWORD *)(a1 + 1704);
  v10 = a6 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v19 == *v11 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v12 == -4096 )
  {
LABEL_6:
    v17 = *(_DWORD *)(a1 + 1712);
    v20 = v11;
    a3 = (unsigned int)(v17 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      a5 = v8 >> 3;
      if ( v8 - *(_DWORD *)(a1 + 1716) - (unsigned int)a3 > (unsigned int)a5 )
      {
LABEL_8:
        v18 = *v11 == -4096;
        *(_DWORD *)(a1 + 1712) = a3;
        if ( !v18 )
          --*(_DWORD *)(a1 + 1716);
        *v11 = a4;
        v13 = v11 + 1;
        v11[1] = 0;
        goto LABEL_11;
      }
LABEL_14:
      sub_A95710((__int64)v6, v8, a3, a4, a5, a6);
      sub_A6E4D0(v6, &v19, &v20);
      a4 = v19;
      LODWORD(a3) = *(_DWORD *)(a1 + 1712) + 1;
      v11 = v20;
      goto LABEL_8;
    }
LABEL_13:
    v8 *= 2;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v12 == -8192 && !v16 )
      v16 = v11;
    v10 = a6 & (v15 + v10);
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v19 == *v11 )
      break;
    if ( v12 == -4096 )
    {
      if ( v16 )
        v11 = v16;
      goto LABEL_6;
    }
    ++v15;
  }
LABEL_3:
  v13 = v11 + 1;
  result = (_QWORD *)v11[1];
  if ( !result )
  {
LABEL_11:
    result = (_QWORD *)sub_A794A0((__int64 *)(a1 + 2352), 48, 3u);
    result[1] = 0x400000000LL;
    *result = result + 2;
    *v13 = result;
  }
  return result;
}
