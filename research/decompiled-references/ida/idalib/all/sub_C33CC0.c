__int64 __fastcall sub_C33CC0(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // r13d
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r11
  __int64 v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int8 **v43; // rax
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  char v49[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+28h] [rbp-50h]
  char v51; // [rsp+30h] [rbp-48h]

  if ( !(unsigned __int8)sub_C32EA0(a1, a2, a3, 4 * (unsigned int)((*(_BYTE *)(a4 + 28) & 0x7F) == 36) + 5, 1) )
    return 0;
  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v10 = (_QWORD *)a1;
  sub_C2FC60((__int64)v49, a1, (__int64)a2, a3);
  if ( !v51 )
    return 0;
  v12 = v50;
  if ( v50 > a3[3].m128i_i32[2] )
  {
LABEL_15:
    v8 = a4;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v12 )
      {
        v10 = (_QWORD *)sub_F63270(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
      }
      else
      {
        v13 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (v12 - 1)) & 0xFFFFFFFFFFFFFFF8LL;
        v10 = (_QWORD *)v13;
        if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 59 >= 3 )
          v10 = nullptr;
      }
      v8 = sub_B97A50(a4, (__int64)v10, 0);
      if ( v8 )
        break;
      if ( ++v12 > a3[3].m128i_i32[2] )
        goto LABEL_15;
    }
  }
  if ( (*(_BYTE *)(v8 + 82) & 8) != 0 )
  {
    v43 = (unsigned __int8 **)sub_E33C10(a1, a2, 2481, 1);
    if ( v43 )
      sub_AE9DF0(v43, v8, 0xAu);
    sub_E33DB0(a1, *(unsigned int *)(v8 + 24), 103);
    return 0;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 25;
  if ( (unsigned int)v15 > 1 )
    v14 = sub_F63050(v14, v10, v15, v11);
  v16 = *(_QWORD *)(v14 + 24);
  v17 = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 25;
  if ( (unsigned int)v18 > 1 )
    v17 = sub_F63050(v17, v10, v18, v11);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 25;
    if ( (unsigned int)v22 > 1 )
      v21 = sub_F63050(v21, v10, v22, v11);
    v23 = *(_QWORD *)(v21 + 24);
    v24 = *(unsigned int *)(a5 + 8);
    v25 = *(unsigned int *)(a5 + 12);
    if ( v24 + 1 > v25 )
    {
      v10 = (_QWORD *)(a5 + 16);
      sub_2237220(a5, a5 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v24) = v23;
    v26 = v12 + 1;
    v27 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v27;
    if ( v12 + 1 != a3[3].m128i_i32[2] )
    {
      do
      {
        while ( 1 )
        {
          if ( v26 == (unsigned __int32)a3[1].m128i_i32[2] >> 4 )
          {
            v10 = (_QWORD *)sub_F63270(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
          }
          else
          {
            v28 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (v26 - 1)) & 0xFFFFFFFFFFFFFFF8LL;
            v10 = (_QWORD *)v28;
            if ( v28 && (*(_BYTE *)(v28 + 28) & 0x7Fu) - 59 >= 3 )
              v10 = nullptr;
          }
          v29 = sub_B97A50(a4, (__int64)v10, 0);
          v30 = v29;
          if ( v29 )
          {
            v10 = (_QWORD *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - 8);
            v31 = *(_QWORD *)(*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v32 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 25;
            if ( (unsigned int)v32 > 1 )
            {
              v48 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - 8;
              v45 = v30;
              v31 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v30 + 48) & 0xFFFFFFFFFFFFFFF0LL), v10, v30, v32);
              v10 = (_QWORD *)v48;
              v30 = v45;
            }
            v25 = *(_QWORD *)&byte_8[*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
            if ( *(_QWORD *)v25 != *(_QWORD *)(*(_QWORD *)&byte_8[*v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              break;
          }
          if ( ++v26 == a3[3].m128i_i32[2] )
            goto LABEL_50;
        }
        v33 = *(_QWORD *)(*(_QWORD *)(v30 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v34 = (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25;
        if ( (unsigned int)v34 > 1 )
          v33 = sub_F63050(v33, v10, v34, v25);
        v35 = *(_QWORD *)(v33 + 24);
        v36 = *(unsigned int *)(a5 + 8);
        v25 = *(unsigned int *)(a5 + 12);
        if ( v36 + 1 > v25 )
        {
          v10 = (_QWORD *)(a5 + 16);
          v46 = v35;
          sub_2237220(a5, a5 + 16, v36 + 1, 8);
          v36 = *(unsigned int *)(a5 + 8);
          v35 = v46;
        }
        ++v26;
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v36) = v35;
        ++*(_DWORD *)(a5 + 8);
      }
      while ( v26 != a3[3].m128i_i32[2] );
LABEL_50:
      v27 = *(unsigned int *)(a5 + 8);
    }
    v37 = (_QWORD *)(*(_QWORD *)a5 + 8 * v27 - 8);
    v38 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v39 = (unsigned int)*(unsigned __int8 *)(v38 + 16) - 25;
    if ( (unsigned int)v39 > 1 )
      v38 = sub_F63050(v38, v10, v39, v25);
    v40 = (_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v38 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *v40 != *(_QWORD *)(*(_QWORD *)&byte_8[*v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v41 = sub_C1D490(a4, (__int64)v10, (__int64)v40, v25);
      v42 = *(unsigned int *)(a5 + 8);
      if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        v47 = v41;
        sub_2237220(a5, a5 + 16, v42 + 1, 8);
        v42 = *(unsigned int *)(a5 + 8);
        v41 = v47;
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v42) = v41;
      ++*(_DWORD *)(a5 + 8);
    }
  }
  v19 = *(_QWORD *)(sub_B8C1B0(v8 + 72) + 16);
  if ( (v19 & 4) != 0 )
    v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v20 )
    v20 -= 64LL;
  if ( !(unsigned __int8)sub_C26D60(a1, (__int64)a2, (__int64)a3, v20, v12) )
    return 0;
  return v8;
}
