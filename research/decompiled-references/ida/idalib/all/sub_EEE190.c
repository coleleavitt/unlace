__int64 __fastcall sub_EEE190(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  v1 = sub_BFBAE0(*(_QWORD *)(a1 + 16));
  v2 = 0;
  if ( (*(_WORD *)v1 & 0x1FF) == 0x7F )
    return *(_QWORD *)(v1 + 24);
  return v2;
}
