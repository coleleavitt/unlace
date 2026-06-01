__int64 __fastcall sub_1A5DB80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  int v17; // r11d
  __int64 v18; // r10
  int v19; // edx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  __int64 *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  __m128 v30[3]; // [rsp+10h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v8 = *(unsigned int *)(a1 + 16);
  v29 = v4;
  if ( (_DWORD)v8 )
  {
    v6 = *(_QWORD *)a1;
    v9 = (v8 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
    v10 = *(_QWORD *)a1 + 16LL * v9;
    v11 = *(_QWORD *)v10;
    if ( v4 == *(_QWORD *)v10 )
    {
LABEL_3:
      sub_17AC880(v30, (_QWORD *)v10, (_QWORD *)(v6 + 16LL * (unsigned int)v8), a1, 1);
      v12 = *(unsigned int *)(v30[0].m128_u64[0] + 8);
      goto LABEL_4;
    }
    v17 = 1;
    v18 = 0;
    if ( v11 != -4096 )
    {
      while ( 1 )
      {
        if ( !v18 && v11 == -8192 )
          v18 = v10;
        v9 = (v8 - 1) & (v17 + v9);
        v10 = v6 + 16LL * v9;
        v11 = *(_QWORD *)v10;
        if ( v4 == *(_QWORD *)v10 )
          goto LABEL_3;
        if ( v11 == -4096 )
        {
          if ( v18 )
            v10 = v18;
          break;
        }
        ++v17;
      }
    }
    v19 = *(_DWORD *)(a1 + 8);
    v30[0].m128_u64[0] = v10;
    v20 = v19 + 1;
    v5 = (unsigned int)(3 * v8);
    v7 = (unsigned int)(4 * v20);
    if ( (unsigned int)v7 < (unsigned int)v5 )
    {
      v21 = (unsigned int)(v8 - *(_DWORD *)(a1 + 12) - v20);
      v22 = (unsigned int)v8 >> 3;
      if ( (unsigned int)v21 <= (unsigned int)v22 )
      {
        sub_17E3690((__int64 *)a1, v8, v21, v8, v6, v22);
        sub_18C81F0((__int64 *)a1, &v29, v30);
        v4 = v29;
        v6 = *(_QWORD *)a1;
        v20 = *(_DWORD *)(a1 + 8) + 1;
        v10 = v30[0].m128_u64[0];
      }
      goto LABEL_16;
    }
  }
  else
  {
    v30[0].m128_u64[0] = 0;
  }
  sub_17E3690((__int64 *)a1, 2 * v8, v5, v8, v6, v7);
  sub_18C81F0((__int64 *)a1, &v29, v30);
  v4 = v29;
  v6 = *(_QWORD *)a1;
  v10 = v30[0].m128_u64[0];
  v20 = *(_DWORD *)(a1 + 8) + 1;
LABEL_16:
  v23 = *(_QWORD *)v10 == -4096;
  *(_DWORD *)(a1 + 8) = v20;
  if ( !v23 )
    --*(_DWORD *)(a1 + 12);
  *(_DWORD *)(v10 + 8) = 0;
  v24 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)v10 = v4;
  sub_17AC880(v30, (_QWORD *)v10, (_QWORD *)(v6 + 16 * v24), a1, 1);
  v25 = *(unsigned int *)(a1 + 32);
  v26 = v30[0].m128_u64[0];
  v27 = v29;
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v25 + 1, 16);
    v25 = *(unsigned int *)(a1 + 32);
  }
  v28 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * v25);
  *v28 = v27;
  v28[1] = 0;
  v12 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v12 + 1;
  *(_DWORD *)(v26 + 8) = v12;
LABEL_4:
  result = *(_QWORD *)(a1 + 24) + 16 * v12;
  v14 = *(_QWORD *)(result + 8);
  v15 = result;
  if ( v14 == a2 || !v14 )
  {
LABEL_10:
    *(_QWORD *)(v15 + 8) = a2;
  }
  else
  {
    v16 = sub_B8BF30(v14);
    result = sub_B8BF30(a2);
    while ( 1 )
    {
      result = *(_QWORD *)(result + 104);
      if ( (result & 3) != 0 )
        break;
      result &= 0xFFFFFFFFFFFFFFFCLL;
      if ( !result )
        break;
      if ( v16 == result )
        goto LABEL_10;
    }
  }
  return result;
}
