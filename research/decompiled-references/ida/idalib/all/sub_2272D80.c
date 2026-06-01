__int64 __fastcall sub_2272D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  int v8; // r12d
  char *v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __m128i v15; // xmm1
  __int64 v16; // rax
  unsigned int v17; // r13d
  _BYTE *v18; // rdi
  char *v20; // rax
  __m128i v21; // [rsp+8h] [rbp-60h] BYREF
  void *v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  _BYTE v24[64]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 60);
  v9 = (char *)(v7 + 1);
  *(_QWORD *)(a1 + 40) = v7 + 1;
  *(_DWORD *)(a1 + 60) = v8 + 1;
  if ( *(_QWORD *)(a1 + 48) == v7 + 1 )
  {
    v12 = 1;
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 1);
    if ( (unsigned __int8)v10 <= 0x20u )
    {
      v11 = 0x100002600LL;
      v12 = 1;
      if ( _bittest64(&v11, v10) )
        goto LABEL_4;
      if ( (_BYTE)v10 == 9 || (_BYTE)v10 == 32 )
        goto LABEL_20;
      goto LABEL_15;
    }
    if ( (_BYTE)v10 != 60 )
    {
LABEL_15:
      v20 = sub_226DF60(a1, (char *)(v7 + 1));
      if ( v20 != v9 )
      {
        while ( *(char **)(a1 + 48) != v20 && *v20 != 32 && *v20 != 9 )
        {
          v20 = sub_226DF60(a1, v20);
          if ( v20 == v9 )
            goto LABEL_20;
        }
        goto LABEL_21;
      }
LABEL_20:
      v20 = v9;
LABEL_21:
      *(_QWORD *)(a1 + 40) = v20;
      v12 = (__int64)&v20[-v7];
      goto LABEL_4;
    }
    *(_QWORD *)(a1 + 40) = v7 + 2;
    *(_DWORD *)(a1 + 60) = v8 + 2;
    sub_226E600(a1);
    v17 = sub_226E6F0(a1, 0x3Eu);
    if ( !(_BYTE)v17 )
      return v17;
    v12 = *(_QWORD *)(a1 + 40) - v7;
  }
LABEL_4:
  v21.m128i_i64[1] = v12;
  v13 = *(_QWORD *)(a1 + 80);
  v21.m128i_i64[0] = v7;
  v22 = v24;
  v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v24[0] = 0;
  v23 = 0;
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v14 + 72) && v13 )
    *(_QWORD *)(a1 + 80) = v14 + 72;
  else
    v14 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
  *(_DWORD *)(v14 + 16) = 22;
  v15 = _mm_loadu_si128(&v21);
  *(_OWORD *)v14 = 0;
  *(_QWORD *)(v14 + 40) = v14 + 56;
  *(__m128i *)(v14 + 24) = v15;
  sub_226E090((_QWORD *)(v14 + 40), v22, (__int64)v22 + v23);
  v16 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v14 + 8) = a1 + 176;
  v17 = 1;
  *(_QWORD *)v14 = v16;
  *(_QWORD *)(v16 + 8) = v14;
  *(_QWORD *)(a1 + 176) = v14;
  sub_226E810(a1, v14, v8, 0);
  v18 = v22;
  *(_WORD *)(a1 + 73) = 0;
  if ( v18 != v24 )
    operator delete(v18);
  return v17;
}
