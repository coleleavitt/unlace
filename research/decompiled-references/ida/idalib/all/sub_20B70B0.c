__int64 __fastcall sub_20B70B0(_DWORD *a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rbx
  int v8; // ebx
  int v9; // r14d
  unsigned int i; // r15d
  _DWORD *v11; // r12
  _DWORD **v12; // rsi
  unsigned int v13; // edx
  unsigned __int64 v14; // rdx
  __int64 *v15; // r12
  __int64 result; // rax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  _DWORD *v26; // rax
  int v27; // [rsp+8h] [rbp-90h]
  _DWORD *v28; // [rsp+18h] [rbp-80h] BYREF
  __m128 v29; // [rsp+20h] [rbp-78h] BYREF
  __m128 v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+48h] [rbp-50h] BYREF
  int v33; // [rsp+4Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+54h] [rbp-44h]

  v28 = a1;
  v30.m128_i32[0] = (unsigned __int16)sub_206CE80((__int64)a1);
  v3 = *((_BYTE *)a1 - 16);
  if ( (v3 & 2) != 0 )
  {
    v30.m128_u64[1] = *(_QWORD *)(*((_QWORD *)a1 - 4) + 16LL);
    v4 = *((_QWORD *)a1 - 4);
  }
  else
  {
    v14 = *(_QWORD *)&a1[-2 * ((v3 >> 2) & 0xF)];
    v4 = (__int64)&a1[-2 * ((v3 >> 2) & 0xF) - 4];
    v30.m128_u64[1] = v14;
  }
  v31 = *(_QWORD *)(v4 + 24);
  v5 = sub_206CE70((__int64)a1);
  v6 = *(_QWORD *)a2;
  v32 = v5;
  v33 = a1[7];
  v34 = a1[6];
  v7 = *(unsigned int *)(a2 + 16);
  v35 = a1[5];
  if ( (_DWORD)v7 )
  {
    v8 = v7 - 1;
    v9 = 1;
    for ( i = v8 & sub_20A4B40(v30.m128_i32[0], &v30.m128_i64[1], &v31, &v32, &v33); ; i = v8 & v13 )
    {
      v11 = *(_DWORD **)(v6 + 8LL * i);
      if ( v11 != (_DWORD *)-8192LL && v11 != (_DWORD *)-4096LL )
      {
        v12 = (_DWORD **)(v6 + 8LL * i);
        if ( v30.m128_i32[0] == (unsigned __int16)sub_206CE80((__int64)v11) )
        {
          v25 = *((_BYTE *)v11 - 16);
          v26 = (v25 & 2) != 0 ? *((_DWORD **)v11 - 4) : (_DWORD *)((char *)v11 - 16 - 8LL * ((v25 >> 2) & 0xF));
          if ( v30.m128_u64[1] == *((_QWORD *)v26 + 2) && v31 == *((_QWORD *)v26 + 3) )
          {
            v27 = v32;
            v12 = (_DWORD **)(v6 + 8LL * i);
            if ( v27 == (unsigned int)sub_206CE70((__int64)v11) && v33 == v11[7] && v34 == v11[6] && v35 == v11[5] )
            {
              sub_2081CC0(
                &v29,
                (_QWORD *)(v6 + 8LL * i),
                (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
                a2,
                1);
              v15 = (__int64 *)v29.m128_u64[0];
              goto LABEL_14;
            }
          }
        }
        v11 = *v12;
      }
      if ( v11 == (_DWORD *)-4096LL )
      {
        v6 = *(_QWORD *)a2;
        v7 = *(unsigned int *)(a2 + 16);
        break;
      }
      v13 = i + v9++;
    }
  }
  sub_2081CC0(&v29, (_QWORD *)(v6 + 8 * v7), (_QWORD *)(v6 + 8 * v7), a2, 1);
  v15 = (__int64 *)v29.m128_u64[0];
LABEL_14:
  sub_2081CC0(
    &v29,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v29.m128_u64[0] == v15 || (result = *v15) == 0 )
  {
    if ( (unsigned __int8)sub_207EB80((__int64 *)a2, (__int64 *)&v28, &v29) )
    {
      sub_2081CC0(&v30, v29.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return (__int64)v28;
    }
    v18 = (_QWORD *)v29.m128_u64[0];
    v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v20 = *(unsigned int *)(a2 + 16);
    v30.m128_u64[0] = v29.m128_u64[0];
    v21 = (unsigned int)(4 * v19);
    if ( (unsigned int)v21 >= 3 * (int)v20 )
    {
      sub_20849C0(a2, 2 * v20, v19, (unsigned int)(2 * v20), v21, v17);
    }
    else
    {
      v22 = (unsigned int)(v20 - *(_DWORD *)(a2 + 12) - v19);
      if ( (unsigned int)v22 > (unsigned int)v20 >> 3 )
      {
LABEL_19:
        v23 = *v18 == -4096;
        *(_DWORD *)(a2 + 8) = v19;
        if ( !v23 )
          --*(_DWORD *)(a2 + 12);
        *v18 = v28;
        v24 = *(_QWORD *)a2;
        v29.m128_u64[0] = (unsigned __int64)v18;
        sub_2081CC0(&v30, v18, (_QWORD *)(v24 + 8 * v20), a2, 1);
        return (__int64)v28;
      }
      sub_20849C0(a2, v20, v19, v22, v21, v17);
    }
    sub_207EB80((__int64 *)a2, (__int64 *)&v28, &v30);
    v20 = *(unsigned int *)(a2 + 16);
    v18 = (_QWORD *)v30.m128_u64[0];
    LODWORD(v19) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_19;
  }
  return result;
}
