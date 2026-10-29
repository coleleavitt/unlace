unsigned __int64 __fastcall sub_BB3C50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    return a2;
  v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v4 & 8) == 0 )
    return a2;
  v5 = a2 & 7
     | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
     | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_DWORD *)((_BYTE *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    return a2;
  if ( *(_QWORD *)(v2 + 8) & 7LL | (*(__int64 *)(v2 + 8) >> 3) & 1 )
    v2 = sub_F64F00(a2);
  v6 = v2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v5 & 0xFFFFFFFFFFFFFE38LL) != 0 )
    return sub_A70C40(a1, v6, v5 & 0xFFFFFFFFFFFFFE3FLL);
  else
    return v6 | (unsigned int)v5 & 0xFFFFFE3F;
}
