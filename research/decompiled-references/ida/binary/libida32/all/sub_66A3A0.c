__int64 __fastcall sub_66A3A0(__int64 a1, __int64 a2, const char *a3)
{
  char v3; // al
  void *v4; // rbp
  const char *v5; // rdi
  __m128i *v6; // rdi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return -1;
  ptr = nullptr;
  v12 = 0;
  v3 = sub_66A120((__int64 *)&ptr, a3);
  v4 = ptr;
  if ( !v3 )
    goto LABEL_11;
  v5 = (const char *)ptr;
  if ( !(_QWORD)v12 )
    v5 = haystack;
  v6 = (__m128i *)sub_7F28A0(v5);
  if ( v6 )
  {
    v7 = *(_QWORD *)a2;
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v6[3].m128i_i64[1];
    *(_QWORD *)(a2 + 8) = v6[4].m128i_i64[0];
    *(_QWORD *)(a2 + 16) = v6[4].m128i_i64[1];
    v6[3].m128i_i64[1] = v7;
    v6[4] = v8;
    v9 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
    free_idasgn(v6);
  }
  else
  {
LABEL_11:
    v9 = -1;
  }
  if ( v4 )
    qfree(v4);
  return v9;
}

