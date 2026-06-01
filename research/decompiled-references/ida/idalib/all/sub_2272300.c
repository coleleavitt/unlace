__int64 __fastcall sub_2272300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int8 v10; // dl
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __m128i v13; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // rdi
  bool v17; // cc
  __m128i v18; // [rsp+8h] [rbp-60h] BYREF
  void *v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  _BYTE v21[64]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(unsigned __int8 **)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 72) = 0;
  v9 = v8 - (_QWORD)v7;
  if ( !v9 )
    goto LABEL_8;
  v10 = *v7;
  if ( *v7 == 0xEF )
  {
    v17 = v9 <= 2;
    v9 = 0;
    if ( !v17 && v7[1] == 0xBB )
      v9 = 3LL * (v7[2] == 0xBF);
  }
  else
  {
    if ( v10 > 0xEFu )
    {
      if ( v10 == 0xFE )
      {
        if ( v9 != 1 )
        {
          v9 = 2LL * (v7[1] == 0xFF);
          goto LABEL_8;
        }
      }
      else if ( v10 == 0xFF )
      {
        if ( v9 > 3 )
        {
          v9 = 0;
          if ( v7[1] == 0xFE )
          {
            v9 = 2;
            if ( !v7[2] )
              v9 = v7[3] == 0 ? 4LL : 2LL;
          }
          goto LABEL_8;
        }
        if ( v9 != 1 )
        {
          v9 = 2LL * (v7[1] == 0xFE);
          goto LABEL_8;
        }
      }
LABEL_20:
      v9 = 0;
      goto LABEL_8;
    }
    if ( v10 )
      goto LABEL_20;
    v17 = v9 <= 3;
    v9 = 0;
    if ( !v17 && !v7[1] && v7[2] == 0xFE )
      v9 = 4LL * (v7[3] == 0xFF);
  }
LABEL_8:
  v18.m128i_i64[0] = (__int64)v7;
  v11 = *(_QWORD *)(a1 + 80);
  v21[0] = 0;
  v19 = v21;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v20 = 0;
  v18.m128i_i64[1] = v9;
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= v12 + 72 && v11 )
    *(_QWORD *)(a1 + 80) = v12 + 72;
  else
    v12 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
  *(_DWORD *)(v12 + 16) = 1;
  v13 = _mm_loadu_si128(&v18);
  *(_OWORD *)v12 = 0;
  *(_QWORD *)(v12 + 40) = v12 + 56;
  *(__m128i *)(v12 + 24) = v13;
  sub_226E090((_QWORD *)(v12 + 40), v19, (__int64)v19 + v20);
  v14 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v12 + 8) = a1 + 176;
  *(_QWORD *)v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  v15 = v19;
  *(_QWORD *)(a1 + 176) = v12;
  *(_QWORD *)(a1 + 40) += v9;
  if ( v15 != v21 )
    operator delete(v15);
  return 1;
}
