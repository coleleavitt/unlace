__int64 __fastcall sub_209D410(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  int v15; // r10d
  unsigned __int64 v16; // r11
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rbp
  __int64 *v24; // rax
  __m128 v25[2]; // [rsp+0h] [rbp-28h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v25[0].m128_u64[0] = 0;
LABEL_14:
    sub_209D210((__int64 *)a1, 2 * v8, a3, a4, a5, a6);
LABEL_15:
    sub_2098080((__int64 *)a1, a2, v25);
    a3 = *a2;
    v9 = *(_QWORD *)a1;
    v11 = v25[0].m128_u64[0];
    LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_8;
  }
  a3 = *a2;
  v9 = *(_QWORD *)a1;
  v10 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = v9 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a3 == *(_QWORD *)v11 )
  {
LABEL_3:
    sub_2098F30(v25, (_QWORD *)v11, (_QWORD *)(v9 + 16LL * v8), a1, 1);
    v13 = *(unsigned int *)(v25[0].m128_u64[0] + 8);
    return *(_QWORD *)(a1 + 24) + 16 * v13 + 8;
  }
  v15 = 1;
  v16 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v16 )
        v16 = v11;
      v10 = (v8 - 1) & (v15 + v10);
      v11 = v9 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a3 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v16 )
          v11 = v16;
        break;
      }
      ++v15;
    }
  }
  v17 = *(_DWORD *)(a1 + 8);
  a5 = 3 * v8;
  v25[0].m128_u64[0] = v11;
  a4 = (unsigned int)(v17 + 1);
  a6 = (unsigned int)(4 * a4);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_14;
  v18 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a4;
  v19 = v8 >> 3;
  if ( (unsigned int)v18 <= (unsigned int)v19 )
  {
    sub_209D210((__int64 *)a1, v8, a3, a4, v18, v19);
    goto LABEL_15;
  }
LABEL_8:
  v20 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a1 + 8) = a4;
  if ( !v20 )
    --*(_DWORD *)(a1 + 12);
  *(_QWORD *)v11 = a3;
  *(_DWORD *)(v11 + 8) = 0;
  sub_2098F30(v25, (_QWORD *)v11, (_QWORD *)(v9 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v21 = *(unsigned int *)(a1 + 32);
  v22 = v25[0].m128_u64[0];
  v23 = *a2;
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v21 + 1, 16);
    v21 = *(unsigned int *)(a1 + 32);
  }
  v24 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * v21);
  *v24 = v23;
  v24[1] = 0;
  v13 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v13 + 1;
  *(_DWORD *)(v22 + 8) = v13;
  return *(_QWORD *)(a1 + 24) + 16 * v13 + 8;
}
