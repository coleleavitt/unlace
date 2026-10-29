__int64 __fastcall sub_20B6C50(__int64 a1, __int64 a2)
{
  unsigned __int32 v3; // eax
  unsigned __int8 v4; // al
  __int64 *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  int v8; // ebp
  unsigned int v9; // eax
  __int32 v10; // ecx
  bool v11; // r8
  __int64 v12; // r9
  int v13; // edx
  __int64 *v14; // r14
  __int64 v15; // r15
  int i; // r10d
  __int64 v17; // rax
  int v18; // edi
  __int64 *v19; // r12
  __int64 result; // rax
  __int64 v21; // r9
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rdx
  char v29; // al
  unsigned __int8 v30; // al
  _QWORD *v31; // r15
  unsigned __int8 v32; // r11
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-90h]
  int v35; // [rsp+8h] [rbp-90h]
  __int32 v36; // [rsp+14h] [rbp-84h]
  int v37; // [rsp+18h] [rbp-80h]
  bool v38; // [rsp+1Fh] [rbp-79h]
  __int64 v39; // [rsp+20h] [rbp-78h]
  __int64 v40; // [rsp+28h] [rbp-70h] BYREF
  __m128 v41; // [rsp+30h] [rbp-68h] BYREF
  __m128 v42; // [rsp+40h] [rbp-58h] BYREF
  __int64 v43; // [rsp+50h] [rbp-48h] BYREF
  bool v44; // [rsp+58h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 24);
  v40 = a1;
  v42.m128_i32[2] = v3;
  if ( v3 > 0x40 )
    sub_2205510(&v42);
  else
    v42.m128_u64[0] = *(_QWORD *)(a1 + 16);
  v4 = *(_BYTE *)(a1 - 16);
  if ( (v4 & 2) != 0 )
    v5 = *(__int64 **)(a1 - 32);
  else
    v5 = (__int64 *)(a1 - 8LL * ((v4 >> 2) & 0xF) - 16);
  v6 = *(_QWORD *)a2;
  v43 = *v5;
  v7 = *(unsigned int *)(a2 + 16);
  v44 = *(_DWORD *)(a1 + 4) != 0;
  if ( !(_DWORD)v7 )
    goto LABEL_21;
  v8 = v7 - 1;
  v9 = sub_2078D30((__int64)&v42, &v43);
  v10 = v42.m128_i32[2];
  v11 = v44;
  v12 = v43;
  v13 = v8 & v9;
  v14 = (__int64 *)(v6 + 8LL * (v8 & v9));
  if ( v42.m128_i32[2] <= 0x40u )
  {
    v17 = *v14;
    v18 = 1;
    if ( *v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v17 != -8192
          && v42.m128_i32[2] == *(_DWORD *)(v17 + 24)
          && v42.m128_u64[0] == *(_QWORD *)(v17 + 16)
          && v44 == (*(_DWORD *)(v17 + 4) != 0) )
        {
          v32 = *(_BYTE *)(v17 - 16);
          v33 = (v32 & 2) != 0 ? *(_QWORD **)(v17 - 32) : (_QWORD *)(-16 - 8LL * ((v32 >> 2) & 0xF) + v17);
          if ( v43 == *v33 )
            goto LABEL_50;
        }
        v14 = (__int64 *)(v6 + 8LL * (v8 & (unsigned int)(v18 + v13)));
        v13 = v8 & (v18 + v13);
        v17 = *v14;
        if ( *v14 == -4096 )
          goto LABEL_20;
        ++v18;
      }
    }
    goto LABEL_20;
  }
  v15 = *v14;
  if ( *v14 == -4096 )
  {
LABEL_20:
    v6 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
LABEL_21:
    sub_2081C40(&v41, (_QWORD *)(v6 + 8 * v7), (_QWORD *)(v6 + 8 * v7), a2, 1);
    v19 = (__int64 *)v41.m128_u64[0];
    goto LABEL_22;
  }
  for ( i = 1; ; ++i )
  {
    if ( v15 != -8192 && v10 == *(_DWORD *)(v15 + 24) )
    {
      v39 = v12;
      v38 = v11;
      v37 = i;
      v36 = v10;
      v35 = v13;
      v29 = sub_2205D70(&v42, v15 + 16);
      v13 = v35;
      v10 = v36;
      i = v37;
      v11 = v38;
      v12 = v39;
      if ( v29 )
      {
        if ( v38 == (*(_DWORD *)(v15 + 4) != 0) )
        {
          v30 = *(_BYTE *)(v15 - 16);
          v31 = (v30 & 2) != 0 ? *(_QWORD **)(v15 - 32) : (_QWORD *)(-16 - 8LL * ((v30 >> 2) & 0xF) + v15);
          if ( v39 == *v31 )
            break;
        }
      }
    }
    v14 = (__int64 *)(v6 + 8LL * (v8 & (unsigned int)(v13 + i)));
    v13 = v8 & (v13 + i);
    v15 = *v14;
    if ( *v14 == -4096 )
      goto LABEL_20;
  }
LABEL_50:
  sub_2081C40(&v41, v14, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v19 = (__int64 *)v41.m128_u64[0];
LABEL_22:
  sub_2081C40(
    &v41,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v41.m128_u64[0] == v19 )
  {
    if ( v42.m128_i32[2] > 0x40u && v42.m128_u64[0] )
      operator delete[]((void *)v42.m128_u64[0]);
LABEL_31:
    if ( (unsigned __int8)sub_207E9F0((__int64 *)a2, &v40, &v41) )
    {
      sub_2081C40(&v42, v41.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v40;
    }
    v22 = (_QWORD *)v41.m128_u64[0];
    v23 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v24 = *(unsigned int *)(a2 + 16);
    v42.m128_u64[0] = v41.m128_u64[0];
    v25 = (unsigned int)(4 * v23);
    if ( (unsigned int)v25 >= 3 * (int)v24 )
    {
      sub_2084680(a2, 2 * v24, v23, (unsigned int)(2 * v24), v25, v21);
    }
    else
    {
      v26 = (unsigned int)(v24 - *(_DWORD *)(a2 + 12) - v23);
      if ( (unsigned int)v26 > (unsigned int)v24 >> 3 )
      {
LABEL_34:
        v27 = *v22 == -4096;
        *(_DWORD *)(a2 + 8) = v23;
        if ( !v27 )
          --*(_DWORD *)(a2 + 12);
        *v22 = v40;
        v28 = *(_QWORD *)a2;
        v41.m128_u64[0] = (unsigned __int64)v22;
        sub_2081C40(&v42, v22, (_QWORD *)(v28 + 8 * v24), a2, 1);
        return v40;
      }
      sub_2084680(a2, v24, v23, v26, v25, v21);
    }
    sub_207E9F0((__int64 *)a2, &v40, &v42);
    v24 = *(unsigned int *)(a2 + 16);
    v22 = (_QWORD *)v42.m128_u64[0];
    LODWORD(v23) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_34;
  }
  result = *v19;
  if ( v42.m128_i32[2] > 0x40u && v42.m128_u64[0] )
  {
    v34 = *v19;
    operator delete[]((void *)v42.m128_u64[0]);
    result = v34;
  }
  if ( !result )
    goto LABEL_31;
  return result;
}
