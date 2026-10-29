__int64 __fastcall sub_20B6960(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // r12
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // r15
  unsigned int v9; // r9d
  __int64 v10; // rax
  unsigned __int8 v11; // dl
  __int64 *v12; // r13
  __int64 *v13; // r13
  __int64 result; // rax
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // r10
  int v24; // esi
  __int64 v25; // [rsp+0h] [rbp-88h]
  int v26; // [rsp+Ch] [rbp-7Ch]
  __int64 v27; // [rsp+10h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  __m128 v29; // [rsp+20h] [rbp-68h] BYREF
  __m128 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]

  v28 = a1;
  sub_209F620(&v30, a1);
  v3 = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( !v3 )
    goto LABEL_10;
  v5 = sub_20A4370((__int64 *)&v30);
  v6 = v3 - 1;
  v8 = v30.m128_i64[1];
  v7 = v30.m128_u64[0];
  v26 = 1;
  v9 = (v3 - 1) & v5;
  v25 = v31;
  v27 = v32;
  v10 = *(_QWORD *)(v4 + 8LL * v9);
  if ( v10 == -4096 )
  {
LABEL_9:
    v4 = *(_QWORD *)a2;
    v3 = *(_DWORD *)(a2 + 16);
LABEL_10:
    sub_2081AC0(&v29, (_QWORD *)(v4 + 8LL * v3), (_QWORD *)(v4 + 8LL * v3), a2, 1);
    v13 = (__int64 *)v29.m128_u64[0];
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( v10 != -8192 )
    {
      v11 = *(_BYTE *)(v10 - 16);
      v12 = (v11 & 2) != 0 ? *(__int64 **)(v10 - 32) : (__int64 *)(v10 + -16 - 8LL * ((v11 >> 2) & 0xF));
      if ( sub_209EE80(v7, *v12) && sub_209EE80(v8, v12[1]) && sub_209EE80(v25, v12[2]) && sub_209EE80(v27, v12[3]) )
        break;
    }
    v9 = v6 & (v26 + v9);
    v10 = *(_QWORD *)(v4 + 8LL * v9);
    if ( v10 == -4096 )
      goto LABEL_9;
    ++v26;
  }
  sub_2081AC0(&v29, v23, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v13 = (__int64 *)v29.m128_u64[0];
LABEL_11:
  sub_2081AC0(
    &v29,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v29.m128_u64[0] == v13 || (result = *v13) == 0 )
  {
    if ( (unsigned __int8)sub_207E370((__int64 *)a2, &v28, &v29) )
    {
      sub_2081AC0(&v30, v29.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v28;
    }
    v16 = (_QWORD *)v29.m128_u64[0];
    v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v18 = *(unsigned int *)(a2 + 16);
    v30.m128_u64[0] = v29.m128_u64[0];
    v19 = (unsigned int)(4 * v17);
    v20 = (unsigned int)(2 * v18);
    if ( (unsigned int)v19 >= 3 * (int)v18 )
    {
      v24 = 2 * v18;
    }
    else
    {
      v20 = (unsigned int)(v18 - *(_DWORD *)(a2 + 12) - v17);
      if ( (unsigned int)v20 > (unsigned int)v18 >> 3 )
      {
LABEL_16:
        v21 = *v16 == -4096;
        *(_DWORD *)(a2 + 8) = v17;
        if ( !v21 )
          --*(_DWORD *)(a2 + 12);
        *v16 = v28;
        v22 = *(_QWORD *)a2;
        v29.m128_u64[0] = (unsigned __int64)v16;
        sub_2081AC0(&v30, v16, (_QWORD *)(v22 + 8 * v18), a2, 1);
        return v28;
      }
      v24 = v18;
    }
    sub_20840E0(a2, v24, v17, v20, v19, v15);
    sub_207E370((__int64 *)a2, &v28, &v30);
    v18 = *(unsigned int *)(a2 + 16);
    v16 = (_QWORD *)v30.m128_u64[0];
    LODWORD(v17) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_16;
  }
  return result;
}
