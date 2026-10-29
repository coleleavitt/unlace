/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gxx_personality_v0
// Address: 0x00000000000CFC80

//----- (00000000000CFC80) ----------------------------------------------------
__int64 __fastcall _gxx_personality_v0(int a1, char a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  __m128i v18; // [rsp+18h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+30h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  result = 3;
  if ( a1 == 1 && a4 && a5 )
  {
    v8 = a3 & 0xFFFFFFFFFFFFFF00LL;
    if ( (a2 & 1) != 0 )
    {
      sub_CFE40((__int64)&v16, a2, v8 == 0x434C4E47432B2B00LL, a4, a5);
      result = v19;
      if ( v19 == 6 && v8 == 0x434C4E47432B2B00LL )
      {
        *((_DWORD *)a4 - 11) = v16;
        *(_OWORD *)(a4 - 40) = v17;
        *(__m128i *)(a4 - 24) = _mm_loadu_si128(&v18);
        return 6;
      }
    }
    else
    {
      result = 3;
      if ( (a2 & 2) == 0 )
        return result;
      if ( (a2 & 4) != 0 )
      {
        if ( v8 == 0x434C4E47432B2B00LL )
        {
          v13 = *((int *)a4 - 11);
          v16 = v13;
          v17 = *(_OWORD *)(a4 - 40);
          v18 = _mm_loadu_si128((const __m128i *)(a4 - 24));
          v14 = v18.m128i_i64[0];
        }
        else
        {
          sub_CFE40((__int64)&v16, a2, 0, a4, a5);
          if ( v19 != 6 )
            sub_D0500(0, a4);
          v13 = v16;
          v14 = v18.m128i_i64[0];
        }
        Unwind_SetGR(a5, 0, (__int64)a4, (__int64)a4);
        Unwind_SetGR(a5, 1, v13, v15);
        v12 = a5;
        v11 = v14;
      }
      else
      {
        sub_CFE40((__int64)&v16, a2, v8 == 0x434C4E47432B2B00LL, a4, a5);
        result = v19;
        if ( v19 != 6 )
          return result;
        Unwind_SetGR(a5, 0, (__int64)a4, v9);
        Unwind_SetGR(a5, 1, v16, v10);
        v11 = v18.m128i_i64[0];
        v12 = a5;
      }
      Unwind_SetIP(v12, v11);
      return 7;
    }
  }
  return result;
}
// CFD1D: variable 'v9' is possibly undefined
// CFD2E: variable 'v10' is possibly undefined
// CFDEC: variable 'a4' is possibly undefined
// CFDFC: variable 'v15' is possibly undefined
