_QWORD *__fastcall sub_1587BC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  unsigned int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *result; // rax
  int v13; // r10d
  _QWORD *v14; // r11
  int v15; // edi
  bool v16; // zf
  __int64 v17; // rdx
  _QWORD *v18; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v18 = nullptr;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a6 = v8 - 1;
  a5 = *(_QWORD *)a1;
  v9 = a6 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v10 = (_QWORD *)(*(_QWORD *)a1 + 32LL * v9);
  v11 = *v10;
  if ( *a2 == *v10 )
    return v10 + 1;
  v13 = 1;
  v14 = nullptr;
  if ( v11 != -4096 )
  {
    while ( 1 )
    {
      if ( v11 == -8192 && !v14 )
        v14 = v10;
      v9 = a6 & (v13 + v9);
      v10 = (_QWORD *)(a5 + 32LL * v9);
      v11 = *v10;
      if ( *a2 == *v10 )
        return v10 + 1;
      if ( v11 == -4096 )
      {
        if ( v14 )
          v10 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 8);
  a4 = 3 * v8;
  v18 = v10;
  a3 = (unsigned int)(v15 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a4 )
    goto LABEL_11;
  a4 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3;
  if ( (unsigned int)a4 <= v8 >> 3 )
  {
LABEL_12:
    sub_1587800(a1, v8, a3, a4, a5, a6);
    sub_15823C0((__int64 *)a1, a2, &v18);
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v10 = v18;
  }
  v16 = *v10 == -4096;
  *(_DWORD *)(a1 + 8) = a3;
  if ( !v16 )
    --*(_DWORD *)(a1 + 12);
  v17 = *a2;
  v10[1] = 0;
  result = v10 + 1;
  result[1] = 0;
  *(result - 1) = v17;
  result[2] = 0;
  return result;
}
