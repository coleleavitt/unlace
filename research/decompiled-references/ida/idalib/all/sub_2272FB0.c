__int64 __fastcall sub_2272FB0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // r10
  int v8; // ebp
  char *v9; // r11
  char v10; // dl
  char *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // r12
  __m128i v15; // xmm1
  __int64 v16; // rax
  _BYTE *v17; // rdi
  __int64 v19; // rax
  const char *v20; // [rsp+0h] [rbp-68h] BYREF
  __m128i v21; // [rsp+8h] [rbp-60h] BYREF
  void *v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  _BYTE v24[64]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(char **)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 60);
  v9 = v7 + 1;
  *(_QWORD *)(a1 + 40) = v7 + 1;
  *(_DWORD *)(a1 + 60) = v8 + 1;
  if ( v7 + 1 == *(char **)(a1 + 48) )
    goto LABEL_19;
  v10 = v7[1];
  if ( (((v10 & 0xDF) - 91) & 0xFD) == 0 || v10 == 58 || v10 == 44 )
    goto LABEL_19;
  v11 = v7 + 1;
  do
  {
    if ( v10 == 32 )
      break;
    if ( v10 == 9 )
      break;
    v11 = sub_226DF60(a1, v11);
    if ( *(char **)(a1 + 40) == v11 )
      break;
    *(_QWORD *)(a1 + 40) = v11;
    ++*(_DWORD *)(a1 + 60);
    if ( *(char **)(a1 + 48) == v11 )
      break;
    v10 = *v11;
    if ( (((*v11 & 0xDF) - 91) & 0xFD) == 0 )
      break;
  }
  while ( v10 != 58 && v10 != 44 );
  if ( v9 == v11 )
  {
LABEL_19:
    LOWORD(v23) = 259;
    v20 = "Got empty alias or anchor";
    sub_226E270(a1, (__int64)&v20, v7);
    return 0;
  }
  else
  {
    v24[0] = 0;
    v21.m128i_i64[0] = (__int64)v7;
    v22 = v24;
    v23 = 0;
    v21.m128i_i64[1] = v11 - v7;
    v12 = *(_QWORD *)(a1 + 80);
    v13 = (a2 == 0) + 20;
    LODWORD(v20) = v13;
    *(_QWORD *)(a1 + 160) += 72LL;
    v14 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 88) >= v14 + 72 && v12 )
    {
      *(_QWORD *)(a1 + 80) = v14 + 72;
    }
    else
    {
      v19 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
      v13 = (int)v20;
      v14 = v19;
    }
    v15 = _mm_loadu_si128(&v21);
    *(_DWORD *)(v14 + 16) = v13;
    *(_OWORD *)v14 = 0;
    *(__m128i *)(v14 + 24) = v15;
    *(_QWORD *)(v14 + 40) = v14 + 56;
    sub_226E090((_QWORD *)(v14 + 40), v22, (__int64)v22 + v23);
    v16 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)(v14 + 8) = a1 + 176;
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v16 + 8) = v14;
    *(_QWORD *)(a1 + 176) = v14;
    sub_226E810(a1, v14, v8, 0);
    v17 = v22;
    *(_WORD *)(a1 + 73) = 0;
    if ( v17 != v24 )
      operator delete(v17);
    return 1;
  }
}
