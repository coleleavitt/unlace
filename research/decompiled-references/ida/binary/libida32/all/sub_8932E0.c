__int64 __fastcall sub_8932E0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int16 *v6; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // [rsp+0h] [rbp-58h]
  __int64 *v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  int v13[2]; // [rsp+18h] [rbp-40h]
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  *(_QWORD *)v13 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 > 0x147
    || (v6 = (unsigned __int16 *)byte_23A0320, *(_WORD *)&byte_23A0320[5 * a2] != 0xFFFF) )
  {
    if ( !under_debugger )
      interr(1473);
    BUG();
  }
  result = 0;
  if ( a2 )
  {
    v8 = 0;
    v11 = &v12;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v8;
        v6 = (unsigned __int16 *)((char *)v6 + 5);
        if ( v8 == 328 )
          return 1;
        v9 = *v6;
        if ( (_WORD)v9 == 0xFFFF )
          break;
        if ( a2 == v9 )
          goto LABEL_8;
      }
      if ( a2 == (_DWORD)v8 )
LABEL_8:
        rangeset_t_add(
          a1,
          (int)v11,
          a3,
          a4,
          a5,
          a6,
          v10,
          v11,
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(dword_23A09A0[2 * v8]), _mm_cvtsi32_si128(dword_23A09A0[2 * v8 + 1] + 1)).m128i_i64[0],
          v13[0],
          v14,
          v15,
          v16);
    }
  }
  return result;
}

