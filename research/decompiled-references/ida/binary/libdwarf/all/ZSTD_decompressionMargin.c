unsigned __int64 __fastcall ZSTD_decompressionMargin(char *a1, unsigned __int64 a2)
{
  char *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 result; // rax
  __m128i v10; // [rsp+10h] [rbp-98h] BYREF
  __int64 v11; // [rsp+20h] [rbp-88h]
  _BYTE v12[16]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-68h]
  int v14; // [rsp+44h] [rbp-64h]
  unsigned int v15; // [rsp+48h] [rbp-60h]
  int v16; // [rsp+50h] [rbp-58h]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  sub_621C0(&v10, a1, a2, 0);
  while ( 1 )
  {
    v7 = v10.m128i_u64[1];
    v8 = v11;
    result = ZSTD_getFrameHeader(v12, v2, v3, v6);
    if ( result > 0xFFFFFFFFFFFFFF88LL )
      break;
    if ( v8 == -2 || v7 > 0xFFFFFFFFFFFFFF88LL )
      return -20;
    if ( v14 )
    {
      v5 += v7;
      v2 += v7;
      v3 -= v7;
      if ( !v3 )
        return v5 + v4;
    }
    else
    {
      v5 += (v16 != 0 ? 4 : 0) + v15 + 3 * v10.m128i_i64[0];
      if ( v4 < v13 )
        v4 = v13;
      v2 += v7;
      v3 -= v7;
      if ( !v3 )
        return v5 + v4;
    }
    sub_621C0(&v10, v2, v3, 0);
  }
  return result;
}

