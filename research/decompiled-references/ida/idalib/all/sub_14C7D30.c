__int64 __fastcall sub_14C7D30(__int64 a1, unsigned __int64 a2, __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v3 = a2;
  if ( a2 >= 2 && *(_WORD *)(a1 + 32) == 27 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v6 + 2944);
    if ( v7 >= *(unsigned int *)(v6 + 2912) )
      v8 = sub_14180A0(v6, 1u);
    else
      v8 = *(_QWORD *)(v6 + 2904) + 24 * v7;
    if ( *(_WORD *)(v8 + 16) == 20 )
      return sub_14C7C00(a1, a2, a3);
  }
  return v3;
}
