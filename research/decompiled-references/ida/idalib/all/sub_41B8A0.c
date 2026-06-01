_BOOL8 __fastcall sub_41B8A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r12
  unsigned __int8 v8; // bp
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int8 v13; // dl
  _BOOL8 result; // rax
  __int64 v15; // [rsp+8h] [rbp-A0h]
  __int64 v16; // [rsp+10h] [rbp-98h] BYREF
  __m128i si128; // [rsp+18h] [rbp-90h]
  unsigned __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v21[24]; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-48h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v16 = 0;
  v18 = 0;
  v5 = *(_QWORD *)(switch_dbctx(v3) + 1672);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v19 = 0;
  v6 = (unsigned __int8)sub_41B800(v5, (__m128i *)&v16, a3);
  v7 = si128.m128i_i64[0];
  v8 = v6;
  v9 = si128.m128i_i64[1];
  v10 = v18;
  v15 = v19;
  v11 = switch_dbctx(*(int *)(a2 + 8));
  v20 = 0;
  v12 = *(_QWORD *)(v11 + 1672);
  *(_QWORD *)&v21[16] = 0;
  v22 = 0;
  *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v13 = (unsigned __int8)sub_41B800(v12, (__m128i *)&v20, a3);
  result = 1;
  if ( v8 == v13 )
  {
    result = 0;
    if ( v8 )
    {
      result = 1;
      if ( ((v20 ^ v16) & 0xFFFFFFFF0000FFFFLL) == 0
        && v7 == *(_QWORD *)v21
        && __PAIR128__(v10, v9) == *(_OWORD *)&v21[8] )
      {
        return v22 != v15;
      }
    }
  }
  return result;
}
