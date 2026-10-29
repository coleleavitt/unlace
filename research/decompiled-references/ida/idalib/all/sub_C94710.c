__int64 __fastcall sub_C94710(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = (unsigned __int16 *)sub_BFB9F0(*(_QWORD *)(a1 + 32));
  v5 = *v2;
  LOWORD(v5) = v5 & 0x1FF;
  if ( (_WORD)v5 != 46 )
  {
    if ( (((_WORD)v5 + 394) & 0x1FFu) > 1 )
      return 0;
    v5 = (v2[1] >> 3) & 0x3F;
    if ( ((v2[1] >> 3) & 0x3Fu) > 1 )
      return 0;
  }
  v6 = *((_QWORD *)v2 + 2);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
    v7 = *(_QWORD *)(sub_F68450(v7, a2, v5, v3, v4) & 0xFFFFFFFFFFFFFFF0LL);
  return sub_F63270(v7);
}
