__int64 __fastcall sub_20B98F0(_QWORD *a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  unsigned __int8 v5; // dl
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  int v10; // ebp
  int v11; // r14d
  unsigned int i; // r15d
  _QWORD *v13; // r13
  unsigned int v14; // edx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // r12
  __int64 result; // rax
  __int64 v19; // r9
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  _QWORD *v28; // rax
  _QWORD *v29; // [rsp+8h] [rbp-90h]
  _QWORD *v30; // [rsp+18h] [rbp-80h] BYREF
  __m128 v31; // [rsp+20h] [rbp-78h] BYREF
  __m128 v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  char v34[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v35[9]; // [rsp+50h] [rbp-48h] BYREF

  v30 = a1;
  v4 = sub_206CE80((__int64)a1);
  v5 = *((_BYTE *)a1 - 16);
  v6 = v4;
  v32.m128_i32[0] = v4;
  if ( (v5 & 2) != 0 )
  {
    v32.m128_u64[1] = *(_QWORD *)*(a1 - 4);
    v33 = *(_QWORD *)(*(a1 - 4) + 8LL);
    v7 = (_QWORD *)*(a1 - 4);
  }
  else
  {
    v15 = &a1[-((v5 >> 2) & 0xF)];
    v16 = *(v15 - 2);
    v7 = v15 - 2;
    v32.m128_u64[1] = v16;
    v33 = v7[1];
  }
  v34[0] = (unsigned __int8)BYTE1(*a1) >> 7;
  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(_QWORD *)a2;
  v35[0] = v7[2];
  if ( (_DWORD)v8 )
  {
    v10 = v8 - 1;
    v11 = 1;
    for ( i = v10 & sub_20ACC00(v6, &v32.m128_i64[1], &v33, v34, v35); ; i = v10 & v14 )
    {
      v13 = *(_QWORD **)(v9 + 8LL * i);
      v29 = (_QWORD *)(v9 + 8LL * i);
      if ( v13 != (_QWORD *)-8192LL && v13 != (_QWORD *)-4096LL )
      {
        if ( v32.m128_i32[0] == (unsigned __int16)sub_206CE80((__int64)v13) )
        {
          v27 = *((_BYTE *)v13 - 16);
          v28 = (v27 & 2) != 0 ? (_QWORD *)*(v13 - 4) : (_QWORD *)((char *)v13 - 16 - 8LL * ((v27 >> 2) & 0xF));
          if ( v32.m128_u64[1] == *v28
            && v33 == v28[1]
            && v34[0] == (unsigned __int8)BYTE1(*v13) >> 7
            && v35[0] == v28[2] )
          {
            sub_20823C0(&v31, v29, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
            v17 = (__int64 *)v31.m128_u64[0];
            goto LABEL_14;
          }
        }
        v13 = (_QWORD *)*v29;
      }
      if ( v13 == (_QWORD *)-4096LL )
      {
        v9 = *(_QWORD *)a2;
        v8 = *(unsigned int *)(a2 + 16);
        break;
      }
      v14 = i + v11++;
    }
  }
  sub_20823C0(&v31, (_QWORD *)(v9 + 8 * v8), (_QWORD *)(v9 + 8 * v8), a2, 1);
  v17 = (__int64 *)v31.m128_u64[0];
LABEL_14:
  sub_20823C0(
    &v31,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v31.m128_u64[0] == v17 || (result = *v17) == 0 )
  {
    if ( (unsigned __int8)sub_2080A50((__int64 *)a2, (__int64 *)&v30, &v31) )
    {
      sub_20823C0(&v32, v31.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return (__int64)v30;
    }
    v20 = (_QWORD *)v31.m128_u64[0];
    v21 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v22 = *(unsigned int *)(a2 + 16);
    v32.m128_u64[0] = v31.m128_u64[0];
    v23 = (unsigned int)(4 * v21);
    if ( (unsigned int)v23 >= 3 * (int)v22 )
    {
      sub_20886E0(a2, 2 * v22, v21, (unsigned int)(2 * v22), v23, v19);
    }
    else
    {
      v24 = (unsigned int)(v22 - *(_DWORD *)(a2 + 12) - v21);
      if ( (unsigned int)v24 > (unsigned int)v22 >> 3 )
      {
LABEL_19:
        v25 = *v20 == -4096;
        *(_DWORD *)(a2 + 8) = v21;
        if ( !v25 )
          --*(_DWORD *)(a2 + 12);
        *v20 = v30;
        v26 = *(_QWORD *)a2;
        v31.m128_u64[0] = (unsigned __int64)v20;
        sub_20823C0(&v32, v20, (_QWORD *)(v26 + 8 * v22), a2, 1);
        return (__int64)v30;
      }
      sub_20886E0(a2, v22, v21, v24, v23, v19);
    }
    sub_2080A50((__int64 *)a2, (__int64 *)&v30, &v32);
    v22 = *(unsigned int *)(a2 + 16);
    v20 = (_QWORD *)v32.m128_u64[0];
    LODWORD(v21) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_19;
  }
  return result;
}
