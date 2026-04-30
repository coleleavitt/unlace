__int64 __fastcall sub_243000(
        char a1,
        const void *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char *a12)
{
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+0h] [rbp-2Ch]

  v12 = (unsigned int)dword_8CC5F0;
  result = 0;
  if ( dword_8CC5F0 < 0 )
  {
    if ( (_QWORD)xmmword_8CC438 )
    {
      v15 = 0;
      do
      {
        if ( !dbg )
          break;
        v16 = *(_DWORD *)(qword_8CC430 + (v15 << 8));
        if ( dword_8CC5F0 >= 0 )
          break;
        if ( !v16 )
          break;
        if ( !(unsigned __int8)sub_22D320(v16, a2) )
          break;
        ++v15;
      }
      while ( v15 < (unsigned __int64)xmmword_8CC438 );
    }
    result = sub_23E870((char)a2, *(double *)a3.m128_u64, (__int64)a2, v12, a12);
    if ( (_DWORD)result == 1 )
    {
      result = sub_2424A0(a1 == 0 ? 16 : 8, (__int64)a2, a3, a4, a5, a6, v21, v22, a9, a10, v17, v18, v19, v20);
      if ( (int)result > 0 )
      {
        dword_8CC55C |= 1u;
        v25 = result;
        sub_3E1200();
        v23 = qword_8CC390;
        qword_8BA5A8 = -1;
        qword_8BA5A0 = -1;
        v24 = qword_8CC390 + 56 * xmmword_8CC398;
        if ( qword_8CC390 != v24 )
        {
          if ( ((56 * (_BYTE)xmmword_8CC398) & 8) == 0 || (*(_BYTE *)(qword_8CC390 + 35) = 0, v23 += 56, v24 != v23) )
          {
            do
            {
              *(_BYTE *)(v23 + 35) = 0;
              v23 += 112;
              *(_BYTE *)(v23 - 21) = 0;
            }
            while ( v24 != v23 );
          }
        }
        sub_1E32C0(0xFFu);
        return v25;
      }
    }
  }
  return result;
}
