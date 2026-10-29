__int64 __fastcall sub_20B5F00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rsi
  int v7; // ebp
  size_t v8; // r12
  unsigned int v9; // r9d
  __int64 *v10; // r13
  __int64 v11; // rax
  int v12; // edx
  __int64 *v13; // r12
  __int64 result; // rax
  int v15; // r8d
  const void *v16; // rsi
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // eax
  int v26; // esi
  unsigned int v27; // [rsp+0h] [rbp-68h]
  int v28; // [rsp+4h] [rbp-64h]
  __int64 v29[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v30; // [rsp+18h] [rbp-50h] BYREF
  __m128 v31[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  v29[0] = a1;
  if ( !(_DWORD)v3 )
    goto LABEL_17;
  v5 = *(_QWORD **)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v3 - 1;
  v8 = v6 - (_QWORD)v5;
  v9 = v7 & sub_100C420(v5, v6);
  v10 = (__int64 *)(v4 + 8LL * v9);
  v11 = *v10;
  if ( v6 != (_QWORD)v5 )
  {
    v15 = 1;
    if ( v11 != -4096 )
    {
      while ( 1 )
      {
        if ( v11 != -8192 )
        {
          v16 = *(const void **)(v11 + 16);
          if ( v8 == *(_QWORD *)(v11 + 24) - (_QWORD)v16 )
          {
            v28 = v15;
            v27 = v9;
            v25 = memcmp(v5, v16, v8);
            v9 = v27;
            v15 = v28;
            if ( !v25 )
              goto LABEL_7;
          }
        }
        v10 = (__int64 *)(v4 + 8LL * (v7 & (v15 + v9)));
        v9 = v7 & (v15 + v9);
        v11 = *v10;
        if ( *v10 == -4096 )
          goto LABEL_16;
        ++v15;
      }
    }
    goto LABEL_16;
  }
  if ( v11 == -4096 )
  {
LABEL_16:
    v4 = *(_QWORD *)a2;
    v3 = *(unsigned int *)(a2 + 16);
LABEL_17:
    sub_20825C0(v31, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a2, 1);
    v13 = (__int64 *)v31[0].m128_u64[0];
    goto LABEL_8;
  }
  v12 = 1;
  while ( v11 == -8192 || *(_QWORD *)(v11 + 24) != *(_QWORD *)(v11 + 16) )
  {
    v9 = v7 & (v12 + v9);
    v10 = (__int64 *)(v4 + 8LL * v9);
    v11 = *v10;
    if ( *v10 == -4096 )
      goto LABEL_16;
    ++v12;
  }
LABEL_7:
  sub_20825C0(v31, v10, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v13 = (__int64 *)v31[0].m128_u64[0];
LABEL_8:
  sub_20825C0(
    v31,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v31[0].m128_u64[0] == v13 || (result = *v13) == 0 )
  {
    if ( (unsigned __int8)sub_2081160((__int64 *)a2, v29, &v30) )
    {
      sub_20825C0(v31, v30, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v29[0];
    }
    v18 = v30;
    v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v20 = *(unsigned int *)(a2 + 16);
    v31[0].m128_u64[0] = (unsigned __int64)v30;
    v21 = (unsigned int)(4 * v19);
    v22 = (unsigned int)(2 * v20);
    if ( (unsigned int)v21 >= 3 * (int)v20 )
    {
      v26 = 2 * v20;
    }
    else
    {
      v22 = (unsigned int)(v20 - *(_DWORD *)(a2 + 12) - v19);
      if ( (unsigned int)v22 > (unsigned int)v20 >> 3 )
      {
LABEL_21:
        v23 = *v18 == -4096;
        *(_DWORD *)(a2 + 8) = v19;
        if ( !v23 )
          --*(_DWORD *)(a2 + 12);
        *v18 = v29[0];
        v24 = *(_QWORD *)a2;
        v30 = v18;
        sub_20825C0(v31, v18, (_QWORD *)(v24 + 8 * v20), a2, 1);
        return v29[0];
      }
      v26 = v20;
    }
    sub_2089660(a2, v26, v19, v22, v21, v17);
    sub_2081160((__int64 *)a2, v29, v31);
    v20 = *(unsigned int *)(a2 + 16);
    v18 = (_QWORD *)v31[0].m128_u64[0];
    LODWORD(v19) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_21;
  }
  return result;
}
