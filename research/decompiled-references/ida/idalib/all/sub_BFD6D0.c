__int64 __fastcall sub_BFD6D0(_WORD *a1)
{
  __int64 v1; // rax

  if ( (*a1 & 0x1FF) == 0x5C && (v1 = sub_C946E0(a1)) != 0 && (*(_BYTE *)(v1 + 28) & 0x7F) == 0x25 )
    return sub_C94680(a1);
  else
    return (__int64)a1;
}
