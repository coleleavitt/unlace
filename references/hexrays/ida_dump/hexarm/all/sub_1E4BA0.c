unsigned __int64 __fastcall sub_1E4BA0(__int64 a1, unsigned __int64 a2, const __m128i *a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 **v18; // [rsp+8h] [rbp-90h]
  __int8 v20; // [rsp+1Fh] [rbp-79h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  _DWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v4 = a3->m128i_i64[0];
  v5 = *(_QWORD *)(a2 + 24);
  v25 = __readfsqword(0x28u);
  v21 = _mm_loadu_si128(a3).m128i_i64[1];
  v6 = a4 + v4;
  v20 = a3->m128i_i8[8];
  v18 = (unsigned __int64 **)(a1 + 8);
  while ( 1 )
  {
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(a2 + 24);
    v9 = a2;
    v10 = *(int *)(a2 + 44);
    if ( (*(_QWORD *)a2 & 2) == 0 )
    {
      v11 = *(_QWORD *)(a2 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
        v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        v15 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v15 & 2) == 0 )
        {
          v16 = a2;
          do
          {
            if ( *(_QWORD *)(v9 + 16) != v16 )
              break;
            v16 = v9;
            v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
            v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
            v9 = v17;
          }
          while ( (v15 & 2) == 0 );
        }
      }
      else
      {
        do
        {
          v9 = v11;
          v11 = *(_QWORD *)(v11 + 8);
        }
        while ( (*(_BYTE *)v11 & 2) == 0 );
      }
    }
    sub_1E4150(v18, (__int64 *)a2);
    if ( *(_QWORD *)(a1 + 8) == v9 || *(_BYTE *)(v9 + 32) != v20 || *(_QWORD *)(v9 + 24) >= v6 )
      break;
    a2 = v9;
  }
  v22[0] = 0;
  if ( v5 > v4 )
    v5 = v4;
  v12 = v8 + v10;
  v23 = 0;
  v24 = 0;
  if ( v12 < v6 )
    LODWORD(v12) = v6;
  v22[1] = v12 - v5;
  sub_312F40(v22);
  v22[0] = 8;
  v13 = sub_1E4960((__m128i *)v18, v9, v5, v21, (__int64)v22);
  sub_312F40(v22);
  return v13;
}
