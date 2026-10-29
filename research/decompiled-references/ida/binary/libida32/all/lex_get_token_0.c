__int64 __fastcall lex_get_token_0(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v8; // zf
  int *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // [rsp+0h] [rbp-38h] BYREF
  int v21; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v8 = *(_BYTE *)(a1 + 336) == 0;
  v22 = __readfsqword(0x28u);
  if ( v8 )
    goto LABEL_10;
  while ( 1 )
  {
    v10 = (int *)a2;
    v11 = sub_783E80(a1, a2, 0, a3, a5, a6);
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( v11 )
        goto LABEL_4;
      v10 = (int *)a2;
      v11 = sub_784DF0(a1, a2, v12, v13, v14, v15);
    }
    v21 = v11;
    if ( v11 )
    {
LABEL_4:
      v16 = v11;
      return set_qerrno(v16, v10);
    }
    if ( *(_WORD *)(a2 + 24) == 1 )
    {
      *(_BYTE *)(a1 + 336) = 0;
    }
    else if ( *(_BYTE *)(a1 + 336) )
    {
      return 0;
    }
LABEL_10:
    v10 = &v21;
    v18 = sub_782440(a1, &v21);
    v16 = (unsigned int)v21;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    if ( v21 == -1 || v21 == 34 )
      break;
    if ( v21 )
      return set_qerrno(v16, v10);
    while ( *(_QWORD *)(a1 + 64) )
      sub_77EF90(a1);
    v19 = _mm_load_si128(&v20);
    *(_BYTE *)(a1 + 336) = 1;
    *(__m128i *)a1 = v19;
  }
  *(_WORD *)(a2 + 24) = 1;
  return 0;
}

