__int64 __fastcall sub_20B61E0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // ebp
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r12
  __int64 result; // rax
  __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  int v28; // esi
  __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  _QWORD *v30; // [rsp+10h] [rbp-38h] BYREF
  __int64 v31; // [rsp+18h] [rbp-30h] BYREF
  __m128 v32[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a1 - 16);
  v29 = a1;
  if ( (v4 & 2) != 0 )
  {
    v5 = **(_QWORD ***)(a1 - 32);
    v30 = v5;
    v6 = *(_QWORD *)(a1 - 32);
  }
  else
  {
    v17 = a1 - 8LL * ((v4 >> 2) & 0xF);
    v5 = *(_QWORD **)(v17 - 16);
    v6 = v17 - 16;
    v30 = v5;
  }
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v31 = *(_QWORD *)(v6 + 8);
  if ( (_DWORD)v7 )
  {
    v9 = v7 - 1;
    v10 = sub_20A2580((__int64)v5, &v31);
    v11 = 1;
    v12 = v9 & v10;
    v13 = (__int64 *)(v8 + 8LL * v12);
    v14 = *v13;
    if ( *v13 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 )
          goto LABEL_8;
        v15 = *(_BYTE *)(v14 - 16);
        if ( (v15 & 2) != 0 )
        {
          v16 = *(_QWORD *)(v14 - 32);
          if ( v30 != *(_QWORD **)v16 )
            goto LABEL_8;
        }
        else
        {
          v16 = -16 - 8LL * ((v15 >> 2) & 0xF) + v14;
          if ( v30 != *(_QWORD **)v16 )
            goto LABEL_8;
        }
        if ( v31 == *(_QWORD *)(v16 + 8) )
        {
          sub_20827B0(v32, v13, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v18 = (__int64 *)v32[0].m128_u64[0];
          goto LABEL_13;
        }
LABEL_8:
        v12 = v9 & (v11 + v12);
        v13 = (__int64 *)(v8 + 8LL * v12);
        v14 = *v13;
        if ( *v13 == -4096 )
          break;
        ++v11;
      }
    }
    v8 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
  }
  sub_20827B0(v32, (_QWORD *)(v8 + 8 * v7), (_QWORD *)(v8 + 8 * v7), a2, 1);
  v18 = (__int64 *)v32[0].m128_u64[0];
LABEL_13:
  sub_20827B0(
    v32,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( v18 == (__int64 *)v32[0].m128_u64[0] || (result = *v18) == 0 )
  {
    if ( (unsigned __int8)sub_2081240((__int64 *)a2, &v29, &v30) )
    {
      sub_20827B0(v32, v30, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v29;
    }
    v21 = v30;
    v22 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v23 = *(unsigned int *)(a2 + 16);
    v32[0].m128_u64[0] = (unsigned __int64)v30;
    v24 = (unsigned int)(4 * v22);
    v25 = (unsigned int)(2 * v23);
    if ( (unsigned int)v24 >= 3 * (int)v23 )
    {
      v28 = 2 * v23;
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
        *v21 = v29;
        v27 = *(_QWORD *)a2;
        v30 = v21;
        sub_20827B0(v32, v21, (_QWORD *)(v27 + 8 * v23), a2, 1);
        return v29;
      }
      v28 = v23;
    }
    sub_2089B70(a2, v28, v22, v25, v24, v20);
    sub_2081240((__int64 *)a2, &v29, v32);
    v23 = *(unsigned int *)(a2 + 16);
    v21 = (_QWORD *)v32[0].m128_u64[0];
    LODWORD(v22) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_18;
  }
  return result;
}
