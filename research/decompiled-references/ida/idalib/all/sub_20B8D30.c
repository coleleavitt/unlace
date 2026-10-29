__int64 __fastcall sub_20B8D30(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // ebp
  unsigned int v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  int v14; // r9d
  int v15; // r12d
  __int64 v16; // r10
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  __int64 v19; // rdx
  unsigned __int8 v20; // di
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 result; // rax
  __int64 v24; // r9
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  _BYTE *v32; // [rsp+8h] [rbp-60h] BYREF
  __m128 v33; // [rsp+10h] [rbp-58h] BYREF
  __m128 v34; // [rsp+20h] [rbp-48h] BYREF
  int v35[14]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1;
  v3 = (__int64)a1;
  v5 = *(a1 - 16);
  v32 = a1;
  if ( (v5 & 2) != 0 )
    v6 = *((_QWORD *)a1 - 4);
  else
    v6 = (__int64)&a1[-8 * ((v5 >> 2) & 0xF) - 16];
  v7 = *(_QWORD *)(v6 + 8);
  v34.m128_u64[0] = v7;
  if ( *a1 != 16 )
    v3 = sub_209E6C0((__int64)a1);
  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(_QWORD *)a2;
  v34.m128_u64[1] = v3;
  v35[0] = *((_DWORD *)v2 + 1);
  if ( (_DWORD)v8 )
  {
    v10 = v8 - 1;
    v11 = sub_20A1DF0(v7, &v34.m128_i64[1], v35);
    v13 = v34.m128_u64[1];
    v12 = v34.m128_u64[0];
    v14 = 1;
    v15 = v35[0];
    v16 = -16;
    v17 = v10 & v11;
    v18 = (__int64 *)(v9 + 8LL * (v10 & v11));
    v19 = *v18;
    if ( *v18 != -4096 )
    {
      while ( 1 )
      {
        if ( v19 == -8192 )
          goto LABEL_10;
        v20 = *(_BYTE *)(v19 - 16);
        v21 = v19;
        if ( (v20 & 2) != 0 )
        {
          if ( v12 != *(_QWORD *)(*(_QWORD *)(v19 - 32) + 8LL) )
            goto LABEL_10;
        }
        else if ( v12 != *(_QWORD *)(v19 + v16 - 8LL * ((v20 >> 2) & 0xF) + 8) )
        {
          goto LABEL_10;
        }
        if ( *(_BYTE *)v19 != 16 )
          v21 = sub_209E6C0(v19);
        if ( v13 == v21 && v15 == *(_DWORD *)(v19 + 4) )
        {
          sub_2082140(&v33, v18, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v22 = (__int64 *)v33.m128_u64[0];
          goto LABEL_15;
        }
LABEL_10:
        v17 = v10 & (v14 + v17);
        v18 = (__int64 *)(v9 + 8LL * v17);
        v19 = *v18;
        if ( *v18 == -4096 )
          break;
        ++v14;
      }
    }
    v9 = *(_QWORD *)a2;
    v8 = *(unsigned int *)(a2 + 16);
  }
  sub_2082140(&v33, (_QWORD *)(v9 + 8 * v8), (_QWORD *)(v9 + 8 * v8), a2, 1);
  v22 = (__int64 *)v33.m128_u64[0];
LABEL_15:
  sub_2082140(
    &v33,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( v22 == (__int64 *)v33.m128_u64[0] || (result = *v22) == 0 )
  {
    if ( (unsigned __int8)sub_2080330((__int64 *)a2, (__int64 *)&v32, &v33) )
    {
      sub_2082140(&v34, v33.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return (__int64)v32;
    }
    v25 = (_QWORD *)v33.m128_u64[0];
    v26 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v27 = *(unsigned int *)(a2 + 16);
    v34.m128_u64[0] = v33.m128_u64[0];
    v28 = (unsigned int)(4 * v26);
    if ( (unsigned int)v28 >= 3 * (int)v27 )
    {
      sub_2087880((__int64 **)a2, 2 * v27, v26, (unsigned int)(2 * v27), v28, v24);
    }
    else
    {
      v29 = (unsigned int)(v27 - *(_DWORD *)(a2 + 12) - v26);
      if ( (unsigned int)v29 > (unsigned int)v27 >> 3 )
      {
LABEL_20:
        v30 = *v25 == -4096;
        *(_DWORD *)(a2 + 8) = v26;
        if ( !v30 )
          --*(_DWORD *)(a2 + 12);
        *v25 = v32;
        v31 = *(_QWORD *)a2;
        v33.m128_u64[0] = (unsigned __int64)v25;
        sub_2082140(&v34, v25, (_QWORD *)(v31 + 8 * v27), a2, 1);
        return (__int64)v32;
      }
      sub_2087880((__int64 **)a2, v27, v26, v29, v28, v24);
    }
    sub_2080330((__int64 *)a2, (__int64 *)&v32, &v34);
    v27 = *(unsigned int *)(a2 + 16);
    LODWORD(v26) = *(_DWORD *)(a2 + 8) + 1;
    v25 = (_QWORD *)v34.m128_u64[0];
    goto LABEL_20;
  }
  return result;
}
