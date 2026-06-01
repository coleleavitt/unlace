__int64 __fastcall sub_1F80CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v7; // eax
  __int64 *v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edi
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // r12
  __int64 *v21; // rax
  int v22; // r11d
  unsigned __int64 v23; // rbp
  int v24; // edi
  __int64 v25; // rdx
  __int64 *v26; // [rsp+0h] [rbp-38h]
  __int64 v27; // [rsp+8h] [rbp-30h] BYREF
  __m128 v28[2]; // [rsp+10h] [rbp-28h] BYREF

  result = 0;
  v27 = a2;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a1 + 904);
    v9 = (__int64 *)(a1 + 888);
    if ( v7 )
    {
      a6 = *(_QWORD *)(a1 + 888);
      a5 = a2;
      v10 = (v7 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v11 = a6 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a5 == *(_QWORD *)v11 )
      {
LABEL_4:
        sub_1ED8660(v28, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * v7), (__int64)v9, 1);
        v13 = *(unsigned int *)(v28[0].m128_u64[0] + 8);
LABEL_5:
        v14 = *(_QWORD *)(a1 + 912) + 16 * v13;
        result = *(_QWORD *)(v14 + 8);
        if ( !result )
        {
          result = *(_QWORD *)(a1 + 880);
          *(_QWORD *)(a1 + 880) = result + 1;
          *(_QWORD *)(v14 + 8) = result;
        }
        return result;
      }
      v22 = 1;
      v23 = 0;
      if ( v12 != -4096 )
      {
        while ( 1 )
        {
          if ( v12 == -8192 && !v23 )
            v23 = v11;
          v10 = (v7 - 1) & (v22 + v10);
          v11 = a6 + 16LL * v10;
          v12 = *(_QWORD *)v11;
          if ( a5 == *(_QWORD *)v11 )
            goto LABEL_4;
          if ( v12 == -4096 )
          {
            if ( v23 )
              v11 = v23;
            break;
          }
          ++v22;
        }
      }
      v24 = *(_DWORD *)(a1 + 896);
      a3 = 3 * v7;
      v28[0].m128_u64[0] = v11;
      v15 = v24 + 1;
      if ( 4 * v15 < (unsigned int)a3 )
      {
        v25 = v7 - *(_DWORD *)(a1 + 900) - v15;
        if ( (unsigned int)v25 > v7 >> 3 )
          goto LABEL_11;
        v26 = v9;
        sub_1EDA030(v9, v7, v25, (__int64)v9, a5, a6);
LABEL_10:
        sub_1EB0D20(v26, &v27, v28);
        a5 = v27;
        a6 = *(_QWORD *)(a1 + 888);
        v11 = v28[0].m128_u64[0];
        v9 = v26;
        v15 = *(_DWORD *)(a1 + 896) + 1;
LABEL_11:
        v16 = *(_QWORD *)v11 == -4096;
        *(_DWORD *)(a1 + 896) = v15;
        if ( !v16 )
          --*(_DWORD *)(a1 + 900);
        *(_DWORD *)(v11 + 8) = 0;
        v17 = *(unsigned int *)(a1 + 904);
        *(_QWORD *)v11 = a5;
        sub_1ED8660(v28, (_QWORD *)v11, (_QWORD *)(a6 + 16 * v17), (__int64)v9, 1);
        v18 = *(unsigned int *)(a1 + 920);
        v19 = v28[0].m128_u64[0];
        v20 = v27;
        if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 924) )
        {
          sub_2237220(a1 + 912, a1 + 928, v18 + 1, 16);
          v18 = *(unsigned int *)(a1 + 920);
        }
        v21 = (__int64 *)(*(_QWORD *)(a1 + 912) + 16 * v18);
        *v21 = v20;
        v21[1] = 0;
        v13 = *(unsigned int *)(a1 + 920);
        *(_DWORD *)(a1 + 920) = v13 + 1;
        *(_DWORD *)(v19 + 8) = v13;
        goto LABEL_5;
      }
    }
    else
    {
      v28[0].m128_u64[0] = 0;
    }
    v26 = v9;
    sub_1EDA030(v9, 2 * v7, a3, (__int64)v9, a5, a6);
    goto LABEL_10;
  }
  return result;
}
