__int64 __fastcall sub_9FCBB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // r8
  int v14; // r11d
  __int64 *v15; // r10
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rbp
  __m128 v22[2]; // [rsp+0h] [rbp-28h] BYREF

  v8 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v8 )
  {
    v22[0].m128_u64[0] = 0;
LABEL_13:
    sub_9FC950(a1, 2 * v8, a3, a4, a5, a6);
LABEL_14:
    sub_9F4410((__int64 *)a1, a2, v22);
    a4 = *a2;
    v9 = *(_QWORD *)a1;
    v8 = *(unsigned int *)(a1 + 16);
    LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
    v11 = (__int64 *)v22[0].m128_u64[0];
    goto LABEL_7;
  }
  a4 = *a2;
  v9 = *(_QWORD *)a1;
  v10 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = (__int64 *)(v9 + 8LL * v10);
  v12 = *v11;
  if ( a4 == *v11 )
  {
LABEL_3:
    sub_9FC8E0(v22, v11, (_QWORD *)(v9 + 8 * v8), a1, 1);
    return 0;
  }
  v14 = 1;
  v15 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v15 )
        v15 = v11;
      v10 = (v8 - 1) & (v14 + v10);
      v11 = (__int64 *)(v9 + 8LL * v10);
      v12 = *v11;
      if ( a4 == *v11 )
        goto LABEL_3;
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
  a5 = (unsigned int)(3 * v8);
  v22[0].m128_u64[0] = (unsigned __int64)v11;
  a3 = (unsigned int)(v16 + 1);
  a6 = (unsigned int)(4 * a3);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_13;
  v17 = (unsigned int)(v8 - *(_DWORD *)(a1 + 12) - a3);
  v18 = (unsigned int)v8 >> 3;
  if ( (unsigned int)v17 <= (unsigned int)v18 )
  {
    sub_9FC950(a1, v8, a3, a4, v17, v18);
    goto LABEL_14;
  }
LABEL_7:
  v19 = *v11 == -4096;
  *(_DWORD *)(a1 + 8) = a3;
  if ( !v19 )
    --*(_DWORD *)(a1 + 12);
  *v11 = a4;
  sub_9FC8E0(v22, v11, (_QWORD *)(v9 + 8 * v8), a1, 1);
  v20 = *(unsigned int *)(a1 + 32);
  v21 = *a2;
  if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v20 + 1, 8);
    v20 = *(unsigned int *)(a1 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v20) = v21;
  ++*(_DWORD *)(a1 + 32);
  return 1;
}
