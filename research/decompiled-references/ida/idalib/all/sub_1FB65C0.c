__int64 *__fastcall sub_1FB65C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v8; // esi
  unsigned int v9; // edx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *result; // rax
  int v13; // r10d
  __int64 *v14; // r11
  int v15; // ecx
  bool v16; // zf
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 *v19; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v19 = nullptr;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a6 = v8 - 1;
  a5 = *(__int64 **)a1;
  v9 = a6 & (((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2));
  v10 = (__int64 *)(*(_QWORD *)a1 + 56LL * v9);
  v11 = *v10;
  if ( *a2 == *v10 )
    return v10 + 1;
  v13 = 1;
  v14 = nullptr;
  if ( v11 != -1 )
  {
    while ( 1 )
    {
      if ( v11 == -2 && !v14 )
        v14 = v10;
      v9 = a6 & (v13 + v9);
      v10 = &a5[7 * v9];
      v11 = *v10;
      if ( *a2 == *v10 )
        return v10 + 1;
      if ( v11 == -1 )
      {
        if ( v14 )
          v10 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 8);
  v19 = v10;
  a3 = (unsigned int)(v15 + 1);
  a4 = 3 * v8;
  if ( 4 * (int)a3 >= (unsigned int)a4 )
    goto LABEL_11;
  a4 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3;
  if ( (unsigned int)a4 <= v8 >> 3 )
  {
LABEL_12:
    sub_1FB6270((__int64 **)a1, v8, a3, a4, (__int64)a5, a6);
    sub_1FB26C0((__int64 *)a1, a2, &v19);
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v10 = v19;
  }
  v16 = *v10 == -1;
  *(_DWORD *)(a1 + 8) = a3;
  if ( !v16 )
    --*(_DWORD *)(a1 + 12);
  v17 = *a2;
  v10[2] = 0x400000000LL;
  *v10 = v17;
  v18 = v10 + 3;
  result = v10 + 1;
  *result = (__int64)v18;
  return result;
}
