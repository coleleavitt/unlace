__int64 __fastcall sub_9E2790(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  unsigned __int8 v15; // [rsp+Fh] [rbp-39h]
  __m128i v16; // [rsp+10h] [rbp-38h] BYREF
  __int64 v17; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (const __m128i *)sub_A1A5A0(v2, 24);
  v4 = _mm_loadu_si128(v3);
  v5 = v3[1].m128i_i64[0];
  v16 = v4;
  v17 = v5;
  sub_A1A5E0(v2, 24);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  result = sub_9E26A0(a1, a2, v6);
  if ( (_BYTE)result )
  {
    v8 = *(_QWORD *)(v6 + 24);
    if ( !*(_DWORD *)(v6 + 48) )
    {
      if ( !v8 )
      {
        v9 = 64;
        goto LABEL_6;
      }
      if ( !*(_DWORD *)(v6 + 32) )
      {
        v9 = *(_QWORD *)(v8 + 32);
        goto LABEL_6;
      }
      v15 = result;
      sub_A1DB00(v6);
      sub_A1C490(v6);
      v8 = *(_QWORD *)(v6 + 24);
      result = v15;
      if ( !*(_DWORD *)(v6 + 48) )
      {
        v9 = *(_QWORD *)(v8 + 32);
        v14 = *(unsigned int *)(v6 + 32);
        if ( *(_DWORD *)(v9 + 16) != (_DWORD)v14 && (_DWORD)v14 )
          v9 = *(_QWORD *)(v8 + v14 + 32);
LABEL_6:
        v10 = *(_QWORD *)v6;
        if ( *(_BYTE *)(v9 + 51) )
        {
          v11 = *(unsigned int *)(v6 + 32);
          v12 = v8 + v11 + 72;
          if ( v11 == v10 )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v10 = *(_QWORD *)v6;
LABEL_11:
    v12 = v8 + v10 + 40;
LABEL_12:
    v13 = _mm_load_si128(&v16);
    *(_BYTE *)(v12 + 16) = v17;
    *(__m128i *)v12 = v13;
  }
  return result;
}

