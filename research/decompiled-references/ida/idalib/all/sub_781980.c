__int64 __fastcall sub_781980(__int64 a1)
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
  v1 = *(unsigned __int16 *)(a1 + 64);
  v10[0] = 2;
  memset(v11, 0, sizeof(v11));
  switch ( v1 )
  {
    case 3:
    case 5:
      *(_QWORD *)v11 = *(_QWORD *)(a1 + 72);
      break;
    case 4:
      free_idcv(v10);
      v10[0] = 7;
      memset(v11, 0, sizeof(v11));
      sub_781790((__int64 *)v11, a1 + 40);
      break;
    case 7:
      free_idcv(v10);
      v8 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      v10[0] = 3;
      *(__m128i *)v11 = v8;
      break;
    case 8:
      v7 = *(_QWORD *)(a1 + 88);
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
  v3 = *(_QWORD *)(a1 + 432);
  v4 = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(a1 + 440) < (unsigned __int64)(v3 + 1) )
  {
    v9 = qvector_reserve(a1 + 424, v4, v3 + 1, 32);
    *(_QWORD *)(a1 + 424) = v9;
    v4 = v9;
    v3 = *(_QWORD *)(a1 + 432);
  }
  v5 = v4 + 32 * v3;
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  copy_idcv(v5);
  ++*(_QWORD *)(a1 + 432);
  free_idcv(v12);
  free_idcv(v10);
  return 0;
}
