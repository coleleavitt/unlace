__int64 __fastcall sub_14C5FE0(__int64 a1, __m128i a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v2 = *(_DWORD *)(a1 + 40);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 21) <= 0x2Du )
  {
    v3 = 0x260000000015LL;
    if ( _bittest64(&v3, (unsigned int)*(unsigned __int16 *)(a1 + 32) - 21) )
      return sub_19C0A70(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v2, 0);
  }
  v4 = sub_14BDAD0(a1, 0, a2);
  if ( v4 == 1 )
    return 1;
  else
    return sub_19C0A70(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v2, v4 & 0xFFFFFFFFFFFFFFFELL);
}
