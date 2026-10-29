__int64 __fastcall sub_1591D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // r8d
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rax
  int v18; // r11d
  unsigned __int64 v19; // rbx
  int v20; // ebx
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // [rsp+8h] [rbp-40h]
  __int64 v29; // [rsp+18h] [rbp-30h] BYREF
  __m128 v30[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (__int64 *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 32);
  v29 = a2;
  if ( !v8 )
  {
    v30[0].m128_u64[0] = 0;
LABEL_16:
    v28 = v6;
    sub_AB37A0(v6, 2 * v8, a3, (__int64)v6, a5, a6);
LABEL_17:
    sub_A6F430(v28, &v29, v30);
    v9 = v29;
    a6 = *(_QWORD *)(a1 + 16);
    v11 = v30[0].m128_u64[0];
    LODWORD(a5) = *(_DWORD *)(a1 + 24) + 1;
    v6 = v28;
    goto LABEL_10;
  }
  v9 = a2;
  a6 = *(_QWORD *)(a1 + 16);
  v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = a6 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( v9 == *(_QWORD *)v11 )
  {
LABEL_3:
    sub_A8BEF0(v30, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * v8), (__int64)v6, 1);
    v13 = *(unsigned int *)(v30[0].m128_u64[0] + 8);
    goto LABEL_4;
  }
  v18 = 1;
  v19 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v19 )
        v19 = v11;
      v10 = (v8 - 1) & (v18 + v10);
      v11 = a6 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( v9 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v19 )
          v11 = v19;
        break;
      }
      ++v18;
    }
  }
  v20 = *(_DWORD *)(a1 + 24);
  a3 = 3 * v8;
  v30[0].m128_u64[0] = v11;
  a5 = (unsigned int)(v20 + 1);
  if ( 4 * (int)a5 >= (unsigned int)a3 )
    goto LABEL_16;
  v21 = v8 - *(_DWORD *)(a1 + 28) - (unsigned int)a5;
  if ( (unsigned int)v21 <= v8 >> 3 )
  {
    v28 = v6;
    sub_AB37A0(v6, v8, v21, (__int64)v6, a5, a6);
    goto LABEL_17;
  }
LABEL_10:
  v22 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a1 + 24) = a5;
  if ( !v22 )
    --*(_DWORD *)(a1 + 28);
  *(_DWORD *)(v11 + 8) = 0;
  v23 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)v11 = v9;
  sub_A8BEF0(v30, (_QWORD *)v11, (_QWORD *)(a6 + 16 * v23), (__int64)v6, 1);
  v24 = *(unsigned int *)(a1 + 48);
  v25 = v30[0].m128_u64[0];
  v26 = v29;
  if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 52) )
  {
    sub_2237220(a1 + 40, a1 + 56, v24 + 1, 16);
    v24 = *(unsigned int *)(a1 + 48);
  }
  v27 = (__int64 *)(*(_QWORD *)(a1 + 40) + 16 * v24);
  *v27 = v26;
  v27[1] = 0;
  v13 = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = v13 + 1;
  *(_DWORD *)(v25 + 8) = v13;
LABEL_4:
  v14 = *(_QWORD *)(a1 + 40) + 16 * v13;
  v15 = *(_QWORD *)(v14 + 8);
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v17 = operator new(0x90u);
    *(_QWORD *)(v17 + 8) = 0x200000000LL;
    *(_QWORD *)v17 = v17 + 16;
    v15 = *(_QWORD *)(v14 + 8) & 7LL | v17;
  }
  result = v15 | 4;
  *(_QWORD *)(v14 + 8) = result;
  return result;
}
