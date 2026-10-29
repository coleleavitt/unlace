__int64 __fastcall sub_BBEB00(__int64 a1)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
  {
    qword_2CCC460 &= 0xFFFFFFFE00000000LL;
    qword_2CCC468 = 0;
    qword_2CCC478 = 0;
    __cxa_guard_release(&byte_2CCC440);
  }
  v3 = *(_QWORD *)(a1 + 72);
  v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v5 = (v3 >> 1) & 3;
    if ( v5 == 1 )
    {
      v6 = v4[9];
      v4 = nullptr;
      if ( !v6 )
        return sub_F1E510(v4);
      v4 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v6 >> 1) & 3) != 2 || !v4 )
        return sub_F1E510(v4);
    }
    else if ( v5 != 2 )
    {
      return sub_F1E510(v4);
    }
    v4 = (__int64 *)v4[1];
  }
  else
  {
    v4 = &qword_2CCC460;
  }
  return sub_F1E510(v4);
}
