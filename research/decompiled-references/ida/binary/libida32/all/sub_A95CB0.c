void __fastcall sub_A95CB0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 *v10; // rsi
  __int64 v11; // r9
  int v12; // edi
  bool v13; // zf
  int v14; // ebp
  __int64 *v15; // r11
  int v16; // edi
  __int64 v17; // r9
  __int64 *v18; // [rsp+0h] [rbp-40h]
  __int64 v19; // [rsp+10h] [rbp-30h] BYREF
  __m128 v20[2]; // [rsp+18h] [rbp-28h] BYREF

  if ( !a3 )
    return;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = *(unsigned int *)(a1 + 1376);
  v8 = a1 + 1360;
  v19 = v4;
  if ( !(_DWORD)v7 )
  {
    v20[0].m128_u64[0] = 0;
LABEL_7:
    v18 = (__int64 *)(a1 + 1360);
    sub_A95880(a1 + 1360, 2 * v7, v7, v8, v5, v6);
    goto LABEL_8;
  }
  v5 = *(_QWORD *)(a1 + 1360);
  v9 = (v7 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
  v10 = (__int64 *)(v5 + 8LL * v9);
  v11 = *v10;
  if ( v4 == *v10 )
  {
LABEL_4:
    sub_A67EE0(v20, v10, (_QWORD *)(v5 + 8 * v7), v8, 1);
    return;
  }
  v14 = 1;
  v15 = nullptr;
  if ( v11 != -4096 )
  {
    while ( 1 )
    {
      if ( v11 == -8192 && !v15 )
        v15 = v10;
      v9 = (v7 - 1) & (v14 + v9);
      v10 = (__int64 *)(v5 + 8LL * v9);
      v11 = *v10;
      if ( v4 == *v10 )
        goto LABEL_4;
      if ( v11 == -4096 )
      {
        if ( v15 )
          v10 = v15;
        break;
      }
      ++v14;
    }
  }
  v16 = *(_DWORD *)(a1 + 1368);
  v6 = (unsigned int)(3 * v7);
  v20[0].m128_u64[0] = (unsigned __int64)v10;
  v12 = v16 + 1;
  if ( 4 * v12 >= (unsigned int)v6 )
    goto LABEL_7;
  v17 = (unsigned int)(v7 - *(_DWORD *)(a1 + 1372) - v12);
  if ( (unsigned int)v17 > (unsigned int)v7 >> 3 )
    goto LABEL_9;
  v18 = (__int64 *)(a1 + 1360);
  sub_A95880(a1 + 1360, v7, v7, v8, v5, v17);
LABEL_8:
  sub_A62850(v18, &v19, v20);
  v4 = v19;
  v5 = *(_QWORD *)(a1 + 1360);
  v7 = *(unsigned int *)(a1 + 1376);
  v12 = *(_DWORD *)(a1 + 1368) + 1;
  v10 = (__int64 *)v20[0].m128_u64[0];
  v8 = (__int64)v18;
LABEL_9:
  v13 = *v10 == -4096;
  *(_DWORD *)(a1 + 1368) = v12;
  if ( !v13 )
    --*(_DWORD *)(a1 + 1372);
  *v10 = v4;
  sub_A67EE0(v20, v10, (_QWORD *)(v5 + 8 * v7), v8, 1);
}

