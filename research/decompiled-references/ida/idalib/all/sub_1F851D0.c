_QWORD *__fastcall sub_1F851D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  unsigned int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *result; // rax
  int v13; // r10d
  _QWORD *v14; // r11
  int v15; // edi
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v17 = nullptr;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a6 = v8 - 1;
  a5 = *(_QWORD *)a1;
  v9 = a6 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v10 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v9);
  v11 = *v10;
  if ( *a2 == *v10 )
    return v10 + 1;
  v13 = 1;
  v14 = nullptr;
  if ( v11 != 1 )
  {
    while ( 1 )
    {
      if ( v11 == 2 && !v14 )
        v14 = v10;
      v9 = a6 & (v13 + v9);
      v10 = (_QWORD *)(a5 + 16LL * v9);
      v11 = *v10;
      if ( *a2 == *v10 )
        return v10 + 1;
      if ( v11 == 1 )
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
  v17 = v10;
  a3 = (unsigned int)(v15 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a4 )
    goto LABEL_11;
  a4 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3;
  if ( (unsigned int)a4 <= v8 >> 3 )
  {
LABEL_12:
    sub_1F84FE0(a1, v8, a3, a4, a5, a6);
    sub_1F72F80((__int64 *)a1, a2, &v17);
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v10 = v17;
  }
  *(_DWORD *)(a1 + 8) = a3;
  if ( *v10 != 1 )
    --*(_DWORD *)(a1 + 12);
  v16 = *a2;
  v10[1] = 0;
  result = v10 + 1;
  *(result - 1) = v16;
  return result;
}
