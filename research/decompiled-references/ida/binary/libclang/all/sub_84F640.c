__int64 __fastcall sub_84F640(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned int v18; // r13d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r11
  _QWORD *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  _QWORD *v36; // rcx
  unsigned __int8 **v38; // rax
  __int64 v41; // [rsp+10h] [rbp-68h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+18h] [rbp-60h]
  _BYTE v44[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-50h]
  char v46; // [rsp+30h] [rbp-48h]

  sub_84F320((__int64)v44, a1, a2, a3, 4 * ((*(_BYTE *)(a4 + 28) & 0x7F) == 34) + 5);
  if ( !v46 )
    return 0;
  v8 = v45;
  if ( a3[3].m128i_i32[2] < v45 )
  {
LABEL_12:
    v11 = a4;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v8 )
      {
        v10 = sub_B0E910(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
      }
      else
      {
        v9 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (v8 - 1));
        v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 <= 7 )
        {
          v10 = 0;
        }
        else if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 57 >= 3 )
        {
          v10 = 0;
        }
      }
      v11 = sub_7A4F50(a4, v10, 0);
      if ( v11 )
        break;
      if ( a3[3].m128i_i32[2] < ++v8 )
        goto LABEL_12;
    }
  }
  if ( (*(_BYTE *)(v11 + 82) & 8) != 0 )
  {
    v38 = (unsigned __int8 **)sub_A2E130(a1, a2, 2279, 1);
    if ( v38 )
      sub_8356A0(v38, v11, 0xAu);
    sub_A2DD70(a1, *(unsigned int *)(v11 + 24), 105);
    return 0;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 25 > 1 )
    v12 = sub_B0D320(v12);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 25 > 1 )
    v14 = sub_B0D320(v14);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 25 > 1 )
      v15 = sub_B0D320(v15);
    v16 = *(unsigned int *)(a5 + 8);
    v17 = *(_QWORD *)(v15 + 24);
    if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v16 + 1) )
    {
      sub_25D6060(a5, a5 + 16, v16 + 1, 8);
      v16 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v16) = v17;
    v18 = v8 + 1;
    v19 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v19;
    if ( v8 + 1 != a3[3].m128i_i32[2] )
    {
      do
      {
        if ( v18 == (unsigned __int32)a3[1].m128i_i32[2] >> 4 )
        {
          v21 = sub_B0E910(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
        }
        else
        {
          v20 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (v18 - 1));
          v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 <= 7 )
          {
            v21 = 0;
          }
          else if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 57 >= 3 )
          {
            v21 = 0;
          }
        }
        v22 = sub_7A4F50(a4, v21, 0);
        v23 = v22;
        if ( v22 )
        {
          v24 = (_QWORD *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - 8);
          v25 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25 > 1 )
          {
            v43 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - 8;
            v41 = v22;
            v26 = sub_B0D320(v25);
            v24 = (_QWORD *)v43;
            v23 = v41;
            v25 = v26;
          }
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
          {
            v27 = *(_QWORD *)(*(_QWORD *)(v23 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 25 > 1 )
              v27 = sub_B0D320(v27);
            v28 = *(unsigned int *)(a5 + 8);
            v29 = *(_QWORD *)(v27 + 24);
            if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v28 + 1) )
            {
              v42 = *(_QWORD *)(v27 + 24);
              sub_25D6060(a5, a5 + 16, v28 + 1, 8);
              v28 = *(unsigned int *)(a5 + 8);
              v29 = v42;
            }
            *(_QWORD *)(*(_QWORD *)a5 + 8 * v28) = v29;
            ++*(_DWORD *)(a5 + 8);
          }
        }
        ++v18;
      }
      while ( v18 != a3[3].m128i_i32[2] );
      v19 = *(unsigned int *)(a5 + 8);
    }
    v30 = (_QWORD *)(*(_QWORD *)a5 + 8 * v19 - 8);
    v31 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v31 + 16) - 25 > 1 )
      v31 = sub_B0D320(v31);
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v32 + 16) - 25 > 1 )
        v32 = sub_B0D320(v32);
      v33 = *(unsigned int *)(a5 + 8);
      v34 = *(_QWORD *)(v32 + 24);
      if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v33 + 1) )
      {
        sub_25D6060(a5, a5 + 16, v33 + 1, 8);
        v33 = *(unsigned int *)(a5 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v33) = v34;
      ++*(_DWORD *)(a5 + 8);
    }
  }
  v35 = *(_QWORD *)(sub_79A2E0(v11 + 72) + 16);
  v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v35 & 4) != 0 )
    v36 = (_QWORD *)*v36;
  if ( v36 )
    v36 -= 8;
  if ( !(unsigned __int8)sub_82B240(a1, a2, (__int64)a3, (unsigned __int64)v36, v8) )
    return 0;
  return v11;
}

