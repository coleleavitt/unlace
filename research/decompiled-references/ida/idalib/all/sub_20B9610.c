_QWORD *__fastcall sub_20B9610(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r13
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  _QWORD *v13; // rsi
  _QWORD *v14; // rdx
  unsigned __int8 v15; // cl
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // r12
  _QWORD *result; // rax
  __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  _QWORD *v28; // [rsp+8h] [rbp-60h] BYREF
  __m128 v29; // [rsp+10h] [rbp-58h] BYREF
  __m128 v30; // [rsp+20h] [rbp-48h] BYREF
  char v31[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_BYTE *)a1 - 16);
  v28 = a1;
  if ( (v4 & 2) != 0 )
  {
    v5 = *(_QWORD *)*(a1 - 4);
    v30.m128_u64[0] = v5;
    v6 = (_QWORD *)*(a1 - 4);
  }
  else
  {
    v17 = &a1[-((v4 >> 2) & 0xF)];
    v5 = *(v17 - 2);
    v6 = v17 - 2;
    v30.m128_u64[0] = v5;
  }
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v30.m128_u64[1] = v6[1];
  v31[0] = (unsigned __int8)BYTE1(*a1) >> 7;
  if ( (_DWORD)v7 )
  {
    v9 = v7 - 1;
    v10 = sub_20AC470(v5, &v30.m128_i64[1], v31);
    v11 = 1;
    v12 = v9 & v10;
    v13 = (_QWORD *)(v8 + 8LL * v12);
    v14 = (_QWORD *)*v13;
    if ( *v13 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == (_QWORD *)-8192LL )
          goto LABEL_8;
        v15 = *((_BYTE *)v14 - 16);
        if ( (v15 & 2) != 0 )
        {
          v16 = (_QWORD *)*(v14 - 4);
          if ( v30.m128_u64[0] != *v16 )
            goto LABEL_8;
        }
        else
        {
          v16 = (_QWORD *)((char *)v14 - 16 - 8LL * ((v15 >> 2) & 0xF));
          if ( v30.m128_u64[0] != *v16 )
            goto LABEL_8;
        }
        if ( v30.m128_u64[1] == v16[1] && v31[0] == (unsigned __int8)BYTE1(*v14) >> 7 )
        {
          sub_2082340(&v29, v13, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v18 = (_QWORD *)v29.m128_u64[0];
          goto LABEL_13;
        }
LABEL_8:
        v12 = v9 & (v11 + v12);
        v13 = (_QWORD *)(v8 + 8LL * v12);
        v14 = (_QWORD *)*v13;
        if ( *v13 == -4096 )
          break;
        ++v11;
      }
    }
    v8 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
  }
  sub_2082340(&v29, (_QWORD *)(v8 + 8 * v7), (_QWORD *)(v8 + 8 * v7), a2, 1);
  v18 = (_QWORD *)v29.m128_u64[0];
LABEL_13:
  sub_2082340(
    &v29,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (_QWORD *)v29.m128_u64[0] == v18 || (result = (_QWORD *)*v18) == nullptr )
  {
    if ( (unsigned __int8)sub_2080910((__int64 *)a2, &v28, &v29) )
    {
      sub_2082340(&v30, v29.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v28;
    }
    v21 = (_QWORD *)v29.m128_u64[0];
    v22 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v23 = *(unsigned int *)(a2 + 16);
    v30.m128_u64[0] = v29.m128_u64[0];
    v24 = (unsigned int)(4 * v22);
    if ( (unsigned int)v24 >= 3 * (int)v23 )
    {
      sub_20883D0((__m128i **)a2, 2 * v23, v22, (unsigned int)(2 * v23), v24, v20);
    }
    else
    {
      v25 = (unsigned int)(v23 - *(_DWORD *)(a2 + 12) - v22);
      if ( (unsigned int)v25 > (unsigned int)v23 >> 3 )
      {
LABEL_18:
        v26 = *v21 == -4096;
        *(_DWORD *)(a2 + 8) = v22;
        if ( !v26 )
          --*(_DWORD *)(a2 + 12);
        *v21 = v28;
        v27 = *(_QWORD *)a2;
        v29.m128_u64[0] = (unsigned __int64)v21;
        sub_2082340(&v30, v21, (_QWORD *)(v27 + 8 * v23), a2, 1);
        return v28;
      }
      sub_20883D0((__m128i **)a2, v23, v22, v25, v24, v20);
    }
    sub_2080910((__int64 *)a2, &v28, &v30);
    v23 = *(unsigned int *)(a2 + 16);
    v21 = (_QWORD *)v30.m128_u64[0];
    LODWORD(v22) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_18;
  }
  return result;
}
