__int64 __fastcall sub_20B9310(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  int v5; // ebp
  unsigned int v6; // eax
  int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  unsigned __int8 v12; // di
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 *v15; // r13
  __int64 result; // rax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  int v26; // esi
  __int64 v27; // [rsp+8h] [rbp-80h] BYREF
  __m128 v28; // [rsp+10h] [rbp-78h] BYREF
  __m128 v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32[2]; // [rsp+40h] [rbp-48h] BYREF
  int v33; // [rsp+50h] [rbp-38h]
  char v34; // [rsp+54h] [rbp-34h]

  v27 = a1;
  sub_20A0300((__int64)&v29, a1);
  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( (_DWORD)v3 )
  {
    v5 = v3 - 1;
    v6 = sub_20AACE0(v29.m128_i64[1], &v30, &v31, v32);
    v7 = 1;
    v8 = -16;
    v9 = v5 & v6;
    v10 = (__int64 *)(v4 + 8LL * (v5 & v6));
    v11 = *v10;
    if ( *v10 != -4096 )
    {
      while ( 1 )
      {
        if ( v11 == -8192 )
          goto LABEL_6;
        v12 = *(_BYTE *)(v11 - 16);
        v13 = v11;
        if ( (v12 & 2) != 0 )
        {
          v14 = *(_QWORD **)(v11 - 32);
          if ( v29.m128_u64[1] != v14[1] )
            goto LABEL_6;
        }
        else
        {
          v14 = (_QWORD *)(v11 + v8 - 8LL * ((v12 >> 2) & 0xF));
          if ( v29.m128_u64[1] != v14[1] )
            goto LABEL_6;
        }
        if ( v14[2] == v30 && v31 == v14[3] && v32[0] == v14[4] && v32[1] == v14[5] )
        {
          v25 = v29.m128_u64[0];
          if ( *(_BYTE *)v11 != 16 )
            v13 = sub_209E6C0(v11);
          if ( v25 == v13 && v33 == *(_DWORD *)(v11 + 4) && v34 == (unsigned __int8)BYTE1(*(_QWORD *)v11) >> 7 )
          {
            sub_20822C0(&v28, v10, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
            v15 = (__int64 *)v28.m128_u64[0];
            goto LABEL_10;
          }
        }
LABEL_6:
        v9 = v5 & (v7 + v9);
        v10 = (__int64 *)(v4 + 8LL * v9);
        v11 = *v10;
        if ( *v10 == -4096 )
          break;
        ++v7;
      }
    }
    v4 = *(_QWORD *)a2;
    v3 = *(unsigned int *)(a2 + 16);
  }
  sub_20822C0(&v28, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a2, 1);
  v15 = (__int64 *)v28.m128_u64[0];
LABEL_10:
  sub_20822C0(
    &v28,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v28.m128_u64[0] == v15 || (result = *v15) == 0 )
  {
    if ( (unsigned __int8)sub_2080730((__int64 *)a2, &v27, &v28) )
    {
      sub_20822C0(&v29, v28.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v27;
    }
    v18 = (_QWORD *)v28.m128_u64[0];
    v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v20 = *(unsigned int *)(a2 + 16);
    v29.m128_u64[0] = v28.m128_u64[0];
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
LABEL_15:
        v23 = *v18 == -4096;
        *(_DWORD *)(a2 + 8) = v19;
        if ( !v23 )
          --*(_DWORD *)(a2 + 12);
        *v18 = v27;
        v24 = *(_QWORD *)a2;
        v28.m128_u64[0] = (unsigned __int64)v18;
        sub_20822C0(&v29, v18, (_QWORD *)(v24 + 8 * v20), a2, 1);
        return v27;
      }
      v26 = v20;
    }
    sub_20881F0(a2, v26, v19, v22, v21, v17);
    sub_2080730((__int64 *)a2, &v27, &v29);
    v20 = *(unsigned int *)(a2 + 16);
    v18 = (_QWORD *)v29.m128_u64[0];
    LODWORD(v19) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_15;
  }
  return result;
}
