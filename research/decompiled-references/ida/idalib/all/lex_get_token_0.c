__int64 __fastcall lex_get_token_0(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm1
  __m128i v18; // [rsp+0h] [rbp-38h] BYREF
  int v19; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v7 = *(_BYTE *)(a1 + 336) == 0;
  v20 = __readfsqword(0x28u);
  if ( v7 )
    goto LABEL_10;
  while ( 1 )
  {
    v9 = sub_7A4180(a1, a2, 0, a3, a5, a6);
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( v9 )
        goto LABEL_4;
      v9 = sub_7A50E0(a1, a2, v10, v11, v12, v13);
    }
    v19 = v9;
    if ( v9 )
    {
LABEL_4:
      v14 = v9;
      return set_qerrno(v14);
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
    v16 = sub_7A2740(a1, &v19);
    v14 = (unsigned int)v19;
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( v19 == -1 || v19 == 34 )
      break;
    if ( v19 )
      return set_qerrno(v14);
    while ( *(_QWORD *)(a1 + 64) )
      sub_79F2A0(a1);
    v17 = _mm_load_si128(&v18);
    *(_BYTE *)(a1 + 336) = 1;
    *(__m128i *)a1 = v17;
  }
  *(_WORD *)(a2 + 24) = 1;
  return 0;
}
