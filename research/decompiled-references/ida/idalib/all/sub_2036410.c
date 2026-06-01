void __fastcall sub_2036410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rcx
  unsigned int v8; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // r11d
  unsigned __int64 v14; // rbp
  int v15; // edi
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  bool v19; // zf
  __int64 *v20; // [rsp+0h] [rbp-38h]
  __int64 v21; // [rsp+8h] [rbp-30h] BYREF
  __m128 v22[2]; // [rsp+10h] [rbp-28h] BYREF

  v6 = (__int64 *)(a1 + 200);
  v8 = *(_DWORD *)(a1 + 216);
  v21 = a2;
  if ( !v8 )
  {
    v22[0].m128_u64[0] = 0;
LABEL_11:
    v20 = v6;
    sub_2036210(v6, 2 * v8, a3, (__int64)v6, a5, a6);
LABEL_12:
    sub_2033220(v20, &v21, v22);
    a5 = *(_QWORD *)(a1 + 200);
    v11 = v22[0].m128_u64[0];
    v6 = v20;
    v16 = *(_DWORD *)(a1 + 208) + 1;
    goto LABEL_7;
  }
  a5 = *(_QWORD *)(a1 + 200);
  v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = a5 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a2 == *(_QWORD *)v11 )
  {
LABEL_3:
    sub_2033680(v22, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v8), (__int64)v6, 1);
    return;
  }
  v13 = 1;
  v14 = 0;
  if ( v12 != -4 )
  {
    while ( 1 )
    {
      if ( v12 == -8 && !v14 )
        v14 = v11;
      v10 = (v8 - 1) & (v13 + v10);
      v11 = a5 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a2 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4 )
      {
        if ( v14 )
          v11 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 208);
  a3 = 3 * v8;
  v22[0].m128_u64[0] = v11;
  v16 = v15 + 1;
  a6 = (unsigned int)(4 * v16);
  if ( (unsigned int)a6 >= (unsigned int)a3 )
    goto LABEL_11;
  v17 = v8 - *(_DWORD *)(a1 + 212) - v16;
  v18 = v8 >> 3;
  if ( (unsigned int)v17 <= (unsigned int)v18 )
  {
    v20 = v6;
    sub_2036210(v6, v8, v17, (__int64)v6, a5, v18);
    goto LABEL_12;
  }
LABEL_7:
  v19 = *(_QWORD *)v11 == -4;
  *(_DWORD *)(a1 + 208) = v16;
  if ( !v19 )
    --*(_DWORD *)(a1 + 212);
  *(_QWORD *)v11 = v21;
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(a1 + 224);
  sub_2033680(v22, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * *(unsigned int *)(a1 + 216)), (__int64)v6, 1);
  ++*(_DWORD *)(a1 + 224);
}
