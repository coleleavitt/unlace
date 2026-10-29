__int64 __fastcall sub_20BA020(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // r12
  unsigned int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rcx
  int v8; // r9d
  unsigned __int8 v9; // di
  _QWORD *v10; // rdi
  __int64 *v11; // r13
  __int64 result; // rax
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // [rsp+28h] [rbp-90h] BYREF
  __m128 v23; // [rsp+30h] [rbp-88h] BYREF
  __m128 v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  int v26; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  int v28; // [rsp+68h] [rbp-50h] BYREF
  int v29[3]; // [rsp+6Ch] [rbp-4Ch] BYREF
  __int64 v30[8]; // [rsp+78h] [rbp-40h] BYREF

  v22 = a1;
  sub_20A0550((__int64)&v24, a1);
  v3 = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( v3 )
  {
    v5 = (v3 - 1) & sub_20A6950(v24.m128_i64[0], &v24.m128_i64[1], &v25, &v26, &v27, &v28, v29, v30);
    v6 = (__int64 *)(v4 + 8LL * v5);
    v7 = *v6;
    v8 = 1;
    if ( *v6 != -4096 )
    {
      while ( 1 )
      {
        if ( v7 == -8192 )
          goto LABEL_6;
        v9 = *(_BYTE *)(v7 - 16);
        if ( (v9 & 2) != 0 )
        {
          v10 = *(_QWORD **)(v7 - 32);
          if ( v24.m128_u64[0] != *v10 )
            goto LABEL_6;
        }
        else
        {
          v10 = (_QWORD *)(v7 + -16 - 8LL * ((v9 >> 2) & 0xF));
          if ( v24.m128_u64[0] != *v10 )
            goto LABEL_6;
        }
        if ( v10[1] == v24.m128_u64[1]
          && v25 == v10[2]
          && v26 == *(_DWORD *)(v7 + 16)
          && v27 == v10[3]
          && v28 == *(unsigned __int16 *)(v7 + 20)
          && v29[0] == *(_DWORD *)(v7 + 24)
          && v29[1] == *(_DWORD *)(v7 + 4)
          && v30[0] == v10[4] )
        {
          sub_20824C0(&v23, v6, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v11 = (__int64 *)v23.m128_u64[0];
          goto LABEL_10;
        }
LABEL_6:
        v5 = (v3 - 1) & (v8 + v5);
        v6 = (__int64 *)(v4 + 8LL * v5);
        v7 = *v6;
        if ( *v6 == -4096 )
          break;
        ++v8;
      }
    }
    v4 = *(_QWORD *)a2;
    v3 = *(_DWORD *)(a2 + 16);
  }
  sub_20824C0(&v23, (_QWORD *)(v4 + 8LL * v3), (_QWORD *)(v4 + 8LL * v3), a2, 1);
  v11 = (__int64 *)v23.m128_u64[0];
LABEL_10:
  sub_20824C0(
    &v23,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v23.m128_u64[0] == v11 || (result = *v11) == 0 )
  {
    if ( (unsigned __int8)sub_2080E10((__int64 *)a2, &v22, &v23) )
    {
      sub_20824C0(&v24, v23.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v22;
    }
    v14 = (_QWORD *)v23.m128_u64[0];
    v15 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v16 = *(unsigned int *)(a2 + 16);
    v24.m128_u64[0] = v23.m128_u64[0];
    v17 = (unsigned int)(4 * v15);
    v18 = (unsigned int)(2 * v16);
    if ( (unsigned int)v17 >= 3 * (int)v16 )
    {
      v21 = 2 * v16;
    }
    else
    {
      v18 = (unsigned int)(v16 - *(_DWORD *)(a2 + 12) - v15);
      if ( (unsigned int)v18 > (unsigned int)v16 >> 3 )
      {
LABEL_15:
        v19 = *v14 == -4096;
        *(_DWORD *)(a2 + 8) = v15;
        if ( !v19 )
          --*(_DWORD *)(a2 + 12);
        *v14 = v22;
        v20 = *(_QWORD *)a2;
        v23.m128_u64[0] = (unsigned __int64)v14;
        sub_20824C0(&v24, v14, (_QWORD *)(v20 + 8 * v16), a2, 1);
        return v22;
      }
      v21 = v16;
    }
    sub_2088C10(a2, v21, v15, v18, v17, v13);
    sub_2080E10((__int64 *)a2, &v22, &v24);
    v16 = *(unsigned int *)(a2 + 16);
    v14 = (_QWORD *)v24.m128_u64[0];
    LODWORD(v15) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_15;
  }
  return result;
}
