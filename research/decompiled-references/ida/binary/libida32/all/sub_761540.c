__int64 __fastcall sub_761540(const __m128i *a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rbp
  __m128i v8; // xmm0
  __int64 v9; // rax
  char v10[8]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+8h] [rbp-60h] BYREF
  char v12[8]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v1 = a1[4].m128i_u16[0];
  v10[0] = 2;
  memset(v11, 0, sizeof(v11));
  switch ( v1 )
  {
    case 3:
    case 5:
      *(_DWORD *)v11 = a1[4].m128i_i32[1];
      break;
    case 4:
      free_idcv(v10);
      v10[0] = 7;
      memset(v11, 0, sizeof(v11));
      sub_761350((__int64 *)v11, (__int64)&a1[2].m128i_i64[1]);
      break;
    case 7:
      free_idcv(v10);
      v8 = _mm_loadu_si128(a1 + 5);
      v10[0] = 3;
      *(__m128i *)v11 = v8;
      break;
    case 8:
      v7 = a1[5].m128i_i64[0];
      free_idcv(v10);
      v10[0] = 9;
      *(_QWORD *)v11 = v7;
      break;
    default:
      if ( !under_debugger )
        interr(1438);
      BUG();
  }
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  copy_idcv(v12);
  v3 = a1[26].m128i_i64[1];
  v4 = a1[26].m128i_i64[0];
  if ( a1[27].m128i_i64[0] < (unsigned __int64)(v3 + 1) )
  {
    v9 = qvector_reserve(&a1[26], v4, v3 + 1, 32);
    a1[26].m128i_i64[0] = v9;
    v4 = v9;
    v3 = a1[26].m128i_i64[1];
  }
  v5 = v4 + 32 * v3;
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  copy_idcv(v5);
  ++a1[26].m128i_i64[1];
  free_idcv(v12);
  free_idcv(v10);
  return 0;
}

