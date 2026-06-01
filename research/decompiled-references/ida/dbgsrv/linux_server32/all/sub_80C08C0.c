/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C08C0
// Address: 0x080C08C0

//----- (080C08C0) --------------------------------------------------------
int __cdecl sub_80C08C0(int *a1, int a2)
{
  __suseconds_t v3; // eax
  unsigned int v4; // edx
  int v5; // edx
  int v6; // eax
  __suseconds_t v7; // eax
  unsigned int v8; // edx
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  int v12; // eax
  __int32 v13; // eax
  const char *v14; // eax
  __m128i v16; // [esp+0h] [ebp-4Ch]
  __m128i v17; // [esp+10h] [ebp-3Ch] BYREF
  char v18; // [esp+2Bh] [ebp-21h] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-20h]

  v19 = __readgsdword(0x14u);
  v3 = sub_80D0330();
  v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v4));
  if ( (*(int (__cdecl **)(int))(dword_811E820 + 136))(a1[12]) > 0 )
  {
LABEL_18:
    a1[10] = -1;
    v5 = 1;
  }
  else
  {
    v17.m128i_i32[3] = (__int32)"";
    while ( 1 )
    {
      v5 = sub_80BBF60(a1[4]);
      if ( v5 <= 0 )
        break;
      a1[10] = a2;
      v6 = (*(int (__cdecl **)(int, char *, int))(dword_811E820 + 132))(a1[12], &v18, 1);
      if ( v6 >= 0 )
        goto LABEL_18;
      if ( v6 == -1 )
      {
        v17.m128i_i32[0] = -1;
        v12 = (*(int (__cdecl **)(int, int))(dword_811E820 + 116))(a1[12], -1);
        v5 = v17.m128i_i32[0];
        if ( v12 == 5 )
        {
          v14 = "irs";
LABEL_15:
          a1[8] = (int)v14;
          goto LABEL_16;
        }
        if ( v12 == 6 || v12 == 1 )
        {
          v14 = "openssl";
          goto LABEL_15;
        }
        v13 = v17.m128i_i32[3];
        a1[9] = 0;
        a1[8] = v13;
      }
      if ( a2 != -1 )
      {
        v7 = sub_80D0330();
        v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v8));
        v17.m128i_i64[0] = v9.m128i_i64[0];
        v10 = _mm_sub_epi64(v9, v16).m128i_u64[0] / 0x3E8;
        v11 = _mm_loadl_epi64(&v17);
        a2 -= v10;
        if ( a2 < 0 )
          a2 = 0;
        v16 = v11;
      }
    }
    a1[8] = (int)"irs";
  }
LABEL_16:
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80C08F1: variable 'v4' is possibly undefined
// 80C097F: variable 'v8' is possibly undefined
// 811E820: using guessed type int dword_811E820;
