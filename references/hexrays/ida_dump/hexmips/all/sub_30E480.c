unsigned __int64 __fastcall sub_30E480(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v4 = sub_30DCE0(a1, a3);
  v5 = v4;
  switch ( a2 )
  {
    case 0:
      sub_30DE00(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( !v5 )
      {
        v16 = *(_DWORD *)(a1 + 4);
        v17 = -1;
        if ( v16 == 8 )
          goto LABEL_27;
        goto LABEL_25;
      }
      v31.m128i_i64[1] = v5;
      v31.m128i_i64[0] = 0;
      sub_311E30(a1 + 8, &v31);
      v16 = *(_DWORD *)(a1 + 4);
      v17 = -1;
      if ( v16 != 8 )
LABEL_25:
        v17 = (1LL << (8 * (unsigned __int8)v16)) - 1;
      if ( v5 == v17 )
        return v32 - __readfsqword(0x28u);
LABEL_27:
      v31.m128i_i64[0] = v5 + 1;
      v31.m128i_i64[1] = v17 - v5;
      sub_311E30(a1 + 8, &v31);
      return v32 - __readfsqword(0x28u);
    case 1:
      sub_30DE00(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v31.m128i_i64[0] = v5;
      v31.m128i_i64[1] = 1;
      sub_311E30(a1 + 8, &v31);
      return v32 - __readfsqword(0x28u);
    case 2:
      goto LABEL_5;
    case 3:
      if ( !v4 )
        goto LABEL_44;
      v8 = *(_DWORD *)(a1 + 4);
      if ( v8 == 8 )
        goto LABEL_43;
      v5 = v4 - 1;
LABEL_40:
      v25 = (1LL << (8 * (unsigned __int8)v8)) - 1;
LABEL_41:
      if ( v25 == v5 )
        goto LABEL_6;
      ++v5;
LABEL_43:
      sub_30DE00(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v31.m128i_i64[0] = 0;
      v31.m128i_i64[1] = v5;
      sub_311E30(a1 + 8, &v31);
      return v32 - __readfsqword(0x28u);
    case 4:
      v6 = *(_DWORD *)(a1 + 4);
      if ( v6 == 8 )
      {
        if ( v4 == -1 )
          goto LABEL_44;
        v5 = v4 + 1;
      }
      else
      {
        if ( v4 == (1LL << (8 * (unsigned __int8)v6)) - 1 )
          goto LABEL_44;
        v5 = v4 + 1;
LABEL_5:
        if ( !v5 )
        {
LABEL_6:
          *(_DWORD *)a1 = 1;
          return v32 - __readfsqword(0x28u);
        }
      }
      sub_30DE00(a1);
      v26 = *(_DWORD *)(a1 + 4);
      v22 = a1 + 8;
      *(_DWORD *)a1 = 2;
      v23 = -1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( v26 != 8 )
        v23 = (1LL << (8 * (unsigned __int8)v26)) - 1;
      goto LABEL_36;
    case 5:
      v8 = *(_DWORD *)(a1 + 4);
      v25 = -1;
      if ( v8 != 8 )
        goto LABEL_40;
      goto LABEL_41;
    case 6:
      v18 = *(_DWORD *)(a1 + 4);
      if ( v18 == 8 )
      {
        if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_44:
          *(_DWORD *)a1 = 0;
          return v32 - __readfsqword(0x28u);
        }
        v5 = v4 + 1;
      }
      else
      {
        v19 = 1LL << (8 * (unsigned __int8)v18 - 1);
        if ( v5 == v19 - 1 )
          goto LABEL_44;
        v5 = ~(-1LL << (8 * (unsigned __int8)v18)) & (v5 + 1);
LABEL_32:
        if ( v19 == v5 )
          goto LABEL_6;
      }
      sub_30DE00(a1);
      v20 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( v20 == 8 )
      {
        if ( v5 >= 0 )
        {
          v23 = 0x7FFFFFFFFFFFFFFFLL;
          v22 = a1 + 8;
          goto LABEL_36;
        }
        v21 = 0x8000000000000000LL;
      }
      else
      {
        v21 = 1LL << (8 * (unsigned __int8)v20 - 1);
        if ( (v5 & v21) == 0 )
        {
          v22 = a1 + 8;
          v23 = v21 - 1;
LABEL_36:
          v31.m128i_i64[0] = v5;
          v31.m128i_i64[1] = v23 - v5 + 1;
          sub_311E30(v22, &v31);
          return v32 - __readfsqword(0x28u);
        }
      }
      v31.m128i_i64[1] = v21;
      v31.m128i_i64[0] = 0;
      sub_311E30(a1 + 8, &v31);
      v29 = *(_DWORD *)(a1 + 4);
      v30 = -1;
      if ( v29 != 8 )
        v30 = (1LL << (8 * (unsigned __int8)v29)) - 1;
      v31.m128i_i64[0] = v5;
      v31.m128i_i64[1] = v30 - v5 + 1;
      sub_311E30(a1 + 8, &v31);
      return v32 - __readfsqword(0x28u);
    case 7:
      v19 = 0x8000000000000000LL;
      v24 = *(_DWORD *)(a1 + 4);
      if ( v24 != 8 )
        v19 = 1LL << (8 * (unsigned __int8)v24 - 1);
      goto LABEL_32;
    case 8:
      v9 = *(_DWORD *)(a1 + 4);
      if ( v9 == 8 )
      {
        if ( v4 == 0x8000000000000000LL )
          goto LABEL_44;
        v12 = v4;
        v5 = v4 - 1;
      }
      else
      {
        v10 = 1LL << (8 * (unsigned __int8)v9 - 1);
        if ( v5 == v10 )
          goto LABEL_44;
        v5 = ~(-1LL << (8 * (unsigned __int8)v9)) & (v5 - 1);
LABEL_14:
        v11 = v10 - 1;
LABEL_15:
        if ( v5 == v11 )
          goto LABEL_6;
        v12 = v5 + 1;
      }
      sub_30DE00(a1);
      v13 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      v14 = 0x8000000000000000LL;
      *(_OWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      if ( v13 != 8 )
        v14 = 1LL << (8 * (unsigned __int8)v13 - 1);
      if ( (v5 & v14) != 0 )
      {
        v31.m128i_i64[0] = v14;
        v31.m128i_i64[1] = v12 - v14;
        sub_311E30(a1 + 8, &v31);
      }
      else
      {
        v31.m128i_i64[1] = v12;
        v31.m128i_i64[0] = 0;
        sub_311E30(a1 + 8, &v31);
        v27 = *(_DWORD *)(a1 + 4);
        v28 = 0x8000000000000000LL;
        if ( v27 != 8 )
          v28 = 1LL << (8 * (unsigned __int8)v27 - 1);
        v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
        sub_311E30(a1 + 8, &v31);
      }
      return v32 - __readfsqword(0x28u);
    case 9:
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      v15 = *(_DWORD *)(a1 + 4);
      if ( v15 == 8 )
        goto LABEL_15;
      v10 = 1LL << (8 * (unsigned __int8)v15 - 1);
      goto LABEL_14;
    default:
      if ( !under_debugger )
        sub_37E160(51744);
      BUG();
  }
}
