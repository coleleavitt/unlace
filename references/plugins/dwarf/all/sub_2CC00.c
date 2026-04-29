__int64 __fastcall sub_2CC00(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // rax
  __int64 v7; // rax
  char *s2; // [rsp+8h] [rbp-30h]

  v2 = a2 + 8;
  if ( *(_WORD *)(a1 + 40) != (unsigned __int16)sub_97BF0(a2 + 8) )
    return 0;
  v4 = sub_97AE0(a2 + 8);
  if ( v4 != -1 )
    v4 >>= 3;
  if ( *(_QWORD *)(a1 + 56) != v4 )
    return 0;
  v5 = *(_QWORD *)(a2 + 232);
  if ( (v5 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v5 == -1 )
    goto LABEL_14;
  if ( !(unsigned int)sub_849A0(a2 + 232, a1 + 8) )
    return 0;
  if ( !(unsigned __int8)sub_84C30(v2) )
    return 0;
  s2 = *(char **)(a1 + 48);
  v6 = (const char *)sub_9AC00(v2);
  if ( strcmp(v6, s2) )
    return 0;
  v7 = *(_QWORD *)(a2 + 232);
  if ( (v7 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v7 == -1 )
  {
LABEL_14:
    if ( !under_debugger )
      interr(30478);
    BUG();
  }
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 232));
  return 1;
}
