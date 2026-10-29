__int64 __fastcall sub_84F320(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, unsigned int a5)
{
  char v7; // r8
  __int64 v9; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rsi
  __m128i *v15; // rdi
  unsigned __int32 v16; // r13d
  __int64 v17; // rax
  unsigned __int32 v18; // ebx
  __m128i v19; // xmm0
  int v20; // ebp
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __m128i **v26; // rax
  __m128i **v27; // rdx
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  unsigned __int32 v32; // r13d
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+10h] [rbp-98h]
  unsigned int v36; // [rsp+18h] [rbp-90h]
  unsigned int v37; // [rsp+1Ch] [rbp-8Ch]
  int v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+24h] [rbp-84h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __m128i v41; // [rsp+30h] [rbp-78h] BYREF
  __m128i **v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  _QWORD v44[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v45; // [rsp+60h] [rbp-48h]
  __int64 v46; // [rsp+68h] [rbp-40h]

  v7 = 1;
  v9 = a3;
  if ( a5 == 7 )
    v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 42 <= 1;
  if ( !(unsigned __int8)sub_84E640(a2, (_DWORD *)a3, a4, a5, v7) || (a4[1].m128i_i8[8] & 1) != 0 )
    goto LABEL_5;
  v12 = sub_B0E910(*(_QWORD *)(a4[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
  v13 = v12;
  if ( !v12
    || (v14 = *(_QWORD *)(v12 + 104), sub_8226C0((__int64 *)(v14 + 96), v14), *(_DWORD *)(*(_QWORD *)(v13 + 128) + 20LL))
    || (v15 = (__m128i *)a4[3].m128i_i64[0],
        v16 = (unsigned __int32)a4[1].m128i_i32[2] >> 4,
        v17 = v16,
        a4[3].m128i_i32[2] < v16) )
  {
LABEL_26:
    sub_A2E130(a2, v9, 110, 0);
LABEL_5:
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v34 = a4[3].m128i_i64[0];
  v37 = a4[3].m128i_u32[2];
  v40 = v9;
  v35 = a1;
  v18 = (unsigned __int32)a4[1].m128i_i32[2] >> 4;
LABEL_11:
  v19 = _mm_loadu_si128(a4);
  v43 = v17;
  v20 = *(_DWORD *)(a2 + 888);
  v42 = (__m128i **)v34;
  v41 = v19;
  if ( v20 )
  {
    v21 = *(_QWORD *)(a2 + 872);
    v22 = sub_69F620(v15, v14);
    v45 = nullptr;
    v44[0] = v22;
    v44[1] = v23;
    v46 = 0;
    v38 = 1;
    v39 = v20 - 1;
    v36 = (v20 - 1) & sub_84A6B0(v41.m128i_i64, (__int64)&v42);
    while ( 1 )
    {
      v15 = &v41;
      v24 = v21 + 40LL * v36;
      if ( (unsigned __int8)sub_69F550(&v41, (_QWORD *)v24) && v43 == *(_QWORD *)(v24 + 24) )
      {
        v26 = v42;
        v14 = (__int64)&v42[v43];
        if ( v42 == (__m128i **)v14 )
        {
LABEL_22:
          v28 = *(_DWORD *)(v24 + 32);
          if ( !v28 || (unsigned int)(v28 - 2) <= 2 )
            break;
          v17 = v18 + 1;
          v18 = v17;
          if ( v37 < (unsigned int)v17 )
          {
            a1 = v35;
            v9 = v40;
            goto LABEL_26;
          }
          goto LABEL_11;
        }
        v27 = *(__m128i ***)(v24 + 16);
        while ( 1 )
        {
          v15 = *v27;
          if ( *v26 != *v27 )
            break;
          ++v26;
          ++v27;
          if ( (__m128i **)v14 == v26 )
            goto LABEL_22;
        }
      }
      if ( (unsigned __int8)sub_69F550((_QWORD *)v24, v44) )
      {
        v25 = *(_QWORD *)(v24 + 24);
        if ( v25 == v46 )
        {
          v29 = *(_QWORD **)(v24 + 16);
          v30 = &v29[v25];
          if ( v29 == v30 )
            break;
          v31 = v45;
          while ( *v29 == *v31 )
          {
            ++v29;
            ++v31;
            if ( v30 == v29 )
              goto LABEL_31;
          }
        }
      }
      v36 = (v38 + v36) & v39;
      ++v38;
    }
  }
LABEL_31:
  v32 = v18;
  a1 = v35;
  if ( (unsigned __int32)a4[1].m128i_i32[2] >> 4 == v32 )
  {
    v33 = sub_B0E910(*(_QWORD *)(a4[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
  }
  else
  {
    v33 = *(_QWORD *)(a4[3].m128i_i64[0] + 8LL * (v32 - 1)) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a4[3].m128i_i64[0] + 8LL * (v32 - 1)) <= 7u )
    {
      v33 = 0;
    }
    else if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 57 >= 3 )
    {
      v33 = 0;
    }
  }
  *(_QWORD *)v35 = v33;
  *(_DWORD *)(v35 + 8) = v32;
  *(_BYTE *)(v35 + 16) = 1;
  return a1;
}

