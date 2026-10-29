/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gxx_personality_v0
// Address: 0x000BDD20

//----- (000BDD20) --------------------------------------------------------
int __cdecl _gxx_personality_v0(int a1, char a2, __int64 a3, _QWORD *a4, int a5)
{
  int result; // eax
  int v6; // ecx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // edi
  int v11; // esi
  int v12; // edi
  int v13; // [esp-8h] [ebp-44h]
  int v14; // [esp+0h] [ebp-3Ch]
  __int64 v15; // [esp+8h] [ebp-34h] BYREF
  __m128i v16; // [esp+10h] [ebp-2Ch] BYREF
  int v17; // [esp+20h] [ebp-1Ch]

  result = 3;
  if ( a1 == 1 )
  {
    if ( a4 )
    {
      v6 = a5;
      if ( a5 )
      {
        v7 = a3 & 0xFFFFFFFFFFFFFF00LL;
        if ( (a2 & 1) != 0 )
        {
          v9 = v7 ^ 0x434C4E47432B2B00LL;
          sub_BDF10(&v15, a2, v9 == 0, a4, a5);
          result = v17;
          if ( v17 == 6 && !v9 )
          {
            *((_DWORD *)a4 - 6) = v15;
            *(__m128i *)((char *)a4 - 20) = _mm_loadu_si128(&v16);
            return 6;
          }
        }
        else
        {
          result = 3;
          if ( (a2 & 2) == 0 )
            return result;
          LODWORD(v8) = v7 ^ 0x432B2B00;
          HIDWORD(v8) = HIDWORD(a3) ^ 0x434C4E47;
          if ( (a2 & 4) != 0 )
          {
            if ( v8 )
            {
              v10 = a4;
              sub_BDF10(&v15, a2, 0, a4, a5);
              if ( v17 != 6 )
                sub_BE5C0(0, a4);
              v11 = v15;
              v14 = v16.m128i_i32[2];
              v6 = a5;
            }
            else
            {
              v10 = a4;
              v11 = *((_DWORD *)a4 - 6);
              v15 = v11;
              v16 = _mm_loadu_si128((const __m128i *)((char *)a4 - 20));
              v14 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v16, 78));
            }
            v13 = (int)v10;
            v12 = v6;
            Unwind_SetGR(v6, 0, v13);
            Unwind_SetGR(v12, 2, v11);
            Unwind_SetIP(v12, v14);
          }
          else
          {
            sub_BDF10(&v15, a2, v8 == 0, a4, a5);
            result = v17;
            if ( v17 != 6 )
              return result;
            Unwind_SetGR(a5, 0, (int)a4);
            Unwind_SetGR(a5, 2, v15);
            Unwind_SetIP(a5, v16.m128i_i32[2]);
          }
          return 7;
        }
      }
    }
  }
  return result;
}
