__int64 __fastcall sub_6B2FB0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v2 + 16) - 34 <= 1 )
    return v2 + 8LL * ((*(_WORD *)(v2 + 18) >> 3) & 0x7F) + 48;
  sub_B0D320(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 34 > 1 )
    v4 = sub_B0D320(v4);
  return v4 + 8LL * ((*(_WORD *)(v4 + 18) >> 3) & 0x7F) + 48;
}

