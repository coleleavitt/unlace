__int64 __fastcall sub_8C31B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = sub_80F230(*(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1));
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( v3 != 47 && (((v3 + 393) & 0x1FFu) > 1 || ((*(_WORD *)(v2 + 2) >> 3) & 0x3Fu) > 1) )
    return 0;
  v4 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x21 )
    v5 = *(_QWORD *)(sub_B167E0(v5, a2) & 0xFFFFFFFFFFFFFFF0LL);
  return sub_B0E910(v5);
}

