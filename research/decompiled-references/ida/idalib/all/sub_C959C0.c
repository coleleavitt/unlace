unsigned __int64 __fastcall sub_C959C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
    return sub_A73030(a2, *(_QWORD *)(a1 + 8), 1u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v4 + 8) & 7LL | (*(__int64 *)(v4 + 8) >> 3) & 1 )
    return sub_F64F00(v3) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v4 & 0xFFFFFFFFFFFFFFF0LL;
}
