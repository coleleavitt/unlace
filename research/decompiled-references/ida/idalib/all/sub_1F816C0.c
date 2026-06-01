__int64 __fastcall sub_1F816C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  int v18; // r11d
  unsigned __int64 v19; // r12
  int v20; // edi
  int v21; // edi
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  __int64 *v27; // rax
  __int64 *v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+18h] [rbp-40h] BYREF
  __m128 v30[3]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 36);
    if ( v9 <= 7 )
    {
      result = 1LL << v9;
      if ( ((1LL << v9) & 0xBC) != 0 )
        return result;
    }
  }
  v10 = *(_DWORD *)(a1 + 904);
  v29 = a3;
  v11 = a1 + 888;
  if ( !v10 )
  {
    v30[0].m128_u64[0] = 0;
    goto LABEL_31;
  }
  a5 = *(_QWORD *)(a1 + 888);
  v12 = (v10 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v13 = a5 + 16LL * v12;
  v14 = *(_QWORD *)v13;
  if ( a3 != *(_QWORD *)v13 )
  {
    v18 = 1;
    v19 = 0;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v19 )
          v19 = v13;
        v12 = (v10 - 1) & (v18 + v12);
        v13 = a5 + 16LL * v12;
        v14 = *(_QWORD *)v13;
        if ( a3 == *(_QWORD *)v13 )
          goto LABEL_5;
        if ( v14 == -4096 )
        {
          if ( v19 )
            v13 = v19;
          break;
        }
        ++v18;
      }
    }
    v20 = *(_DWORD *)(a1 + 896);
    a6 = 3 * v10;
    v30[0].m128_u64[0] = v13;
    v21 = v20 + 1;
    if ( 4 * v21 < (unsigned int)a6 )
    {
      v22 = v10 - *(_DWORD *)(a1 + 900) - v21;
      if ( (unsigned int)v22 > v10 >> 3 )
      {
LABEL_16:
        v23 = *(_QWORD *)v13 == -4096;
        *(_DWORD *)(a1 + 896) = v21;
        if ( !v23 )
          --*(_DWORD *)(a1 + 900);
        *(_QWORD *)v13 = a3;
        *(_DWORD *)(v13 + 8) = 0;
        sub_1ED8660(v30, (_QWORD *)v13, (_QWORD *)(a5 + 16LL * *(unsigned int *)(a1 + 904)), v11, 1);
        v24 = *(unsigned int *)(a1 + 920);
        v25 = v30[0].m128_u64[0];
        v26 = v29;
        if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 924) )
        {
          sub_2237220(a1 + 912, a1 + 928, v24 + 1, 16);
          v24 = *(unsigned int *)(a1 + 920);
        }
        v27 = (__int64 *)(*(_QWORD *)(a1 + 912) + 16 * v24);
        *v27 = v26;
        v27[1] = 0;
        v15 = *(unsigned int *)(a1 + 920);
        *(_DWORD *)(a1 + 920) = v15 + 1;
        *(_DWORD *)(v25 + 8) = v15;
        goto LABEL_6;
      }
      v28 = (__int64 *)(a1 + 888);
      sub_1EDA030((__int64 *)(a1 + 888), v10, a3, v11, a5, v22);
LABEL_32:
      sub_1EB0D20(v28, &v29, v30);
      a3 = v29;
      a5 = *(_QWORD *)(a1 + 888);
      v13 = v30[0].m128_u64[0];
      v21 = *(_DWORD *)(a1 + 896) + 1;
      v11 = (__int64)v28;
      goto LABEL_16;
    }
LABEL_31:
    v28 = (__int64 *)(a1 + 888);
    sub_1EDA030((__int64 *)(a1 + 888), 2 * v10, a3, v11, a5, a6);
    goto LABEL_32;
  }
LABEL_5:
  sub_1ED8660(v30, (_QWORD *)v13, (_QWORD *)(a5 + 16LL * v10), v11, 1);
  v15 = *(unsigned int *)(v30[0].m128_u64[0] + 8);
LABEL_6:
  result = *(_QWORD *)(a1 + 912) + 16 * v15;
  v17 = *(_QWORD *)(result + 8);
  if ( (HIDWORD(v17) || !v17) && v17 < a2 )
    *(_QWORD *)(result + 8) = a2;
  return result;
}
