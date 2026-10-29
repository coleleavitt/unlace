__int64 __fastcall sub_20B8A00(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // ebp
  unsigned int v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  int v14; // r9d
  int v15; // r12d
  int v16; // r14d
  __int64 v17; // r10
  unsigned int v18; // ecx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 v21; // di
  __int64 v22; // rax
  __int64 *v23; // r12
  __int64 result; // rax
  __int64 v25; // r9
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rdx
  _BYTE *v33; // [rsp+8h] [rbp-70h] BYREF
  __m128 v34; // [rsp+10h] [rbp-68h] BYREF
  __m128 v35; // [rsp+20h] [rbp-58h] BYREF
  int v36; // [rsp+30h] [rbp-48h] BYREF
  int v37[17]; // [rsp+34h] [rbp-44h] BYREF

  v2 = a1;
  v3 = (__int64)a1;
  v5 = *(a1 - 16);
  v33 = a1;
  if ( (v5 & 2) != 0 )
    v6 = *((_QWORD *)a1 - 4);
  else
    v6 = (__int64)&a1[-8 * ((v5 >> 2) & 0xF) - 16];
  v7 = *(_QWORD *)(v6 + 8);
  v35.m128_u64[0] = v7;
  if ( *a1 != 16 )
    v3 = sub_209E6C0((__int64)a1);
  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(_QWORD *)a2;
  v35.m128_u64[1] = v3;
  v36 = *((_DWORD *)v2 + 1);
  v37[0] = *((unsigned __int16 *)v2 + 8);
  if ( (_DWORD)v8 )
  {
    v10 = v8 - 1;
    v11 = sub_20A1720(v7, &v35.m128_i64[1], &v36, v37);
    v13 = v35.m128_u64[1];
    v12 = v35.m128_u64[0];
    v14 = 1;
    v15 = v36;
    v16 = v37[0];
    v17 = -16;
    v18 = v10 & v11;
    v19 = (__int64 *)(v9 + 8LL * (v10 & v11));
    v20 = *v19;
    if ( *v19 != -4096 )
    {
      while ( 1 )
      {
        if ( v20 == -8192 )
          goto LABEL_10;
        v21 = *(_BYTE *)(v20 - 16);
        v22 = v20;
        if ( (v21 & 2) != 0 )
        {
          if ( v12 != *(_QWORD *)(*(_QWORD *)(v20 - 32) + 8LL) )
            goto LABEL_10;
        }
        else if ( v12 != *(_QWORD *)(v20 + v17 - 8LL * ((v21 >> 2) & 0xF) + 8) )
        {
          goto LABEL_10;
        }
        if ( *(_BYTE *)v20 != 16 )
          v22 = sub_209E6C0(v20);
        if ( v13 == v22 && v15 == *(_DWORD *)(v20 + 4) && v16 == *(unsigned __int16 *)(v20 + 16) )
        {
          sub_20820C0(&v34, v19, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v23 = (__int64 *)v34.m128_u64[0];
          goto LABEL_15;
        }
LABEL_10:
        v18 = v10 & (v14 + v18);
        v19 = (__int64 *)(v9 + 8LL * v18);
        v20 = *v19;
        if ( *v19 == -4096 )
          break;
        ++v14;
      }
    }
    v9 = *(_QWORD *)a2;
    v8 = *(unsigned int *)(a2 + 16);
  }
  sub_20820C0(&v34, (_QWORD *)(v9 + 8 * v8), (_QWORD *)(v9 + 8 * v8), a2, 1);
  v23 = (__int64 *)v34.m128_u64[0];
LABEL_15:
  sub_20820C0(
    &v34,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( v23 == (__int64 *)v34.m128_u64[0] || (result = *v23) == 0 )
  {
    if ( (unsigned __int8)sub_20801D0((__int64 *)a2, (__int64 *)&v33, &v34) )
    {
      sub_20820C0(&v35, v34.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return (__int64)v33;
    }
    v26 = (_QWORD *)v34.m128_u64[0];
    v27 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v28 = *(unsigned int *)(a2 + 16);
    v35.m128_u64[0] = v34.m128_u64[0];
    v29 = (unsigned int)(4 * v27);
    if ( (unsigned int)v29 >= 3 * (int)v28 )
    {
      sub_2087550(a2, 2 * v28, v27, (unsigned int)(2 * v28), v29, v25);
    }
    else
    {
      v30 = (unsigned int)(v28 - *(_DWORD *)(a2 + 12) - v27);
      if ( (unsigned int)v30 > (unsigned int)v28 >> 3 )
      {
LABEL_20:
        v31 = *v26 == -4096;
        *(_DWORD *)(a2 + 8) = v27;
        if ( !v31 )
          --*(_DWORD *)(a2 + 12);
        *v26 = v33;
        v32 = *(_QWORD *)a2;
        v34.m128_u64[0] = (unsigned __int64)v26;
        sub_20820C0(&v35, v26, (_QWORD *)(v32 + 8 * v28), a2, 1);
        return (__int64)v33;
      }
      sub_2087550(a2, v28, v27, v30, v29, v25);
    }
    sub_20801D0((__int64 *)a2, (__int64 *)&v33, &v35);
    v28 = *(unsigned int *)(a2 + 16);
    LODWORD(v27) = *(_DWORD *)(a2 + 8) + 1;
    v26 = (_QWORD *)v35.m128_u64[0];
    goto LABEL_20;
  }
  return result;
}
