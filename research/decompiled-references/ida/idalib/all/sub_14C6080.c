__int64 __fastcall sub_14C6080(__int64 a1, __m128i a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 24 )
    result = sub_14EE310(a1);
  else
    result = sub_14BDAD0(a1, 0, a2);
  if ( result != 1 )
    return sub_178CF00(
             *(_QWORD *)(a1 + 96),
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
             v2,
             result & 0xFFFFFFFFFFFFFFFELL);
  return result;
}
