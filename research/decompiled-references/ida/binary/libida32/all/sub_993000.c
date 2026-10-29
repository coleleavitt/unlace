__int64 __fastcall sub_993000(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  _WORD *v8; // rcx
  __m128i si128; // xmm0

  v2 = *(__m128i **)(a2 + 32);
  v4 = a2;
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 > 0x15u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384C70);
    v2[1].m128i_i32[0] = 1145664627;
    v2[1].m128i_i16[2] = 8250;
    *v2 = si128;
    *(_QWORD *)(a2 + 32) += 22LL;
  }
  else
  {
    v4 = sub_22581D0(a2, "AssignOrigin (DestID: ", 22);
  }
  v5 = sub_2257BD0(v4, *(unsigned int *)(a1 + 12));
  v6 = *(_QWORD *)(v5 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v6) > 8 )
  {
    *(_BYTE *)(v6 + 8) = 32;
    *(_QWORD *)v6 = 0x3A4449637253202CLL;
    *(_QWORD *)(v5 + 32) += 9LL;
  }
  else
  {
    v5 = sub_22581D0(v5, ", SrcID: ", 9);
  }
  result = sub_2257BD0(v5, *(unsigned int *)(a1 + 16));
  v8 = *(_WORD **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v8 <= 1u )
    return sub_22581D0(result, ")\n", 2);
  *v8 = 2601;
  *(_QWORD *)(result + 32) += 2LL;
  return result;
}

