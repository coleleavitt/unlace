__int64 __fastcall sub_8118E0(_WORD *a1)
{
  __int64 v1; // rax

  if ( (*a1 & 0x1FF) == 0x5D && (v1 = sub_8C3180()) != 0 && (*(_BYTE *)(v1 + 28) & 0x7F) == 0x23 )
    return sub_8C3120(a1);
  else
    return (__int64)a1;
}

