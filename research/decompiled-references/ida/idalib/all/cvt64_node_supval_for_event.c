__int64 __fastcall cvt64_node_supval_for_event(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r9d
  int v11; // r11d
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned int *v15; // rbx
  __int64 *v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 *v22; // rsi
  _DWORD *v23; // rdx
  _QWORD *v24; // rdi
  unsigned int **v25; // rdx
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+8h] [rbp-50h] BYREF
  __m128i v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+20h] [rbp-38h]
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = a2;
  v30 = _mm_loadu_si128(a1);
  v5 = a1[1].m128i_i64[0];
  v6 = _mm_cvtsi128_si32(v30);
  v31 = v5;
  if ( v6 > 0x2F )
  {
    v22 = (__int64 *)v30.m128i_i64[1];
    v23 = (_DWORD *)(v30.m128i_i64[1] + 8);
    v30.m128i_i64[1] += 8;
    v8 = *v22;
LABEL_23:
    v24 = v23 + 2;
    v30.m128i_i64[1] = (__int64)(v23 + 2);
    v10 = *v23;
    v11 = *v23;
LABEL_24:
    v25 = (unsigned int **)(v24 + 1);
    v30.m128i_i64[1] = (__int64)(v24 + 1);
    v13 = *v24;
LABEL_25:
    v16 = (__int64 *)(v25 + 1);
    v30.m128i_i64[1] = (__int64)(v25 + 1);
    v15 = *v25;
    goto LABEL_26;
  }
  v7 = v6 + 8;
  v30.m128i_i32[0] = v7;
  v8 = *(_QWORD *)(v5 + v6);
  if ( (unsigned int)v7 > 0x2F )
  {
    v23 = (_DWORD *)v30.m128i_i64[1];
    goto LABEL_23;
  }
  v9 = v6 + 16;
  v30.m128i_i32[0] = v9;
  v10 = *(_DWORD *)(v5 + v7);
  LOBYTE(v11) = v10;
  if ( (unsigned int)v9 > 0x2F )
  {
    v24 = (_QWORD *)v30.m128i_i64[1];
    goto LABEL_24;
  }
  v12 = v6 + 24;
  v30.m128i_i32[0] = v12;
  v13 = *(_QWORD *)(v5 + v9);
  if ( (unsigned int)v12 > 0x2F )
  {
    v25 = (unsigned int **)v30.m128i_i64[1];
    goto LABEL_25;
  }
  v14 = v6 + 32;
  v30.m128i_i32[0] = v14;
  v15 = *(unsigned int **)(v5 + v12);
  if ( (unsigned int)v14 <= 0x2F )
  {
    v16 = (__int64 *)(v5 + v14);
    v30.m128i_i32[0] = v6 + 40;
    goto LABEL_8;
  }
  v16 = (__int64 *)v30.m128i_i64[1];
LABEL_26:
  v30.m128i_i64[1] = (__int64)(v16 + 1);
LABEL_8:
  if ( !a3 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v4 != v8 )
      goto LABEL_10;
    v18 = *(_DWORD *)(v4 + 8);
    if ( (_BYTE)v11 != (_BYTE)v18 )
      goto LABEL_10;
    v19 = *(_QWORD *)(v4 + 16);
    if ( !v19 && (v18 & 0x800000) == 0 )
      break;
    if ( (unsigned int)v19 == v13 )
      goto LABEL_16;
LABEL_10:
    ++v17;
    v4 += 24;
    if ( a3 == v17 )
      return 0;
  }
  v19 = v13;
LABEL_16:
  if ( (v18 & 0x200) != 0 )
  {
    v20 = *v15;
    if ( (v18 & 0x2000) != 0 && v20 == 0xFFFFFFFFLL )
      v20 = -1;
    v28 = v8;
    v29 = v20;
    sub_7BE7C0(&v28, qword_2CCB598, v19, &v29, 8, (unsigned __int8)v10);
  }
  else if ( (v18 & 0x1000) != 0 )
  {
    v26 = *(_BYTE *)v15;
    v29 = v8;
    LOBYTE(v28) = v26;
    sub_7BE7C0(&v29, qword_2CCB598, v19, &v28, 1, (unsigned __int8)v10);
  }
  else
  {
    v27 = *v16;
    v29 = v8;
    sub_7BE7C0(&v29, qword_2CCB598, v19, v15, (int)v27, (unsigned __int8)v10);
  }
  return 1;
}
