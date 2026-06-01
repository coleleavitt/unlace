__int64 *__fastcall sub_13FFC60(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 *result; // rax
  int v14; // r10d
  __int64 *v15; // r11
  int v16; // edi
  bool v17; // zf
  __int64 *v18; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v18 = nullptr;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a4 = *a2;
  a6 = v8 - 1;
  v9 = *(_QWORD *)a1;
  v10 = a6 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = (__int64 *)(*(_QWORD *)a1 + 16LL * v10);
  v12 = *v11;
  if ( *a2 == *v11 )
    return v11 + 1;
  v14 = 1;
  v15 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v15 )
        v15 = v11;
      v10 = a6 & (v14 + v10);
      v11 = (__int64 *)(v9 + 16LL * v10);
      v12 = *v11;
      if ( a4 == *v11 )
        return v11 + 1;
      if ( v12 == -4096 )
      {
        if ( v15 )
          v11 = v15;
        break;
      }
      ++v14;
    }
  }
  v16 = *(_DWORD *)(a1 + 8);
  v18 = v11;
  a3 = (unsigned int)(v16 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_11;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_12:
    sub_13FFA60((__int64 *)a1, v8, a3, a4, a5, a6);
    sub_13F7CF0((__int64 *)a1, a2, &v18);
    a4 = *a2;
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v11 = v18;
  }
  v17 = *v11 == -4096;
  *(_DWORD *)(a1 + 8) = a3;
  if ( !v17 )
    --*(_DWORD *)(a1 + 12);
  *v11 = a4;
  result = v11 + 1;
  *(_DWORD *)result = 0;
  return result;
}
