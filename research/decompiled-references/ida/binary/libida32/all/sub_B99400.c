unsigned __int64 __fastcall sub_B99400(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 72);
  if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v1 >> 1) & 3) != 1 )
  {
    if ( !(_BYTE)byte_2CA2580 && __cxa_guard_acquire(&byte_2CA2580) )
    {
      qword_2CA25A0 &= 0xFFFFFFFE00000000LL;
      qword_2CA25A8 = 0;
      qword_2CA25B8 = 0;
      __cxa_guard_release(&byte_2CA2580);
    }
    v5 = *(_QWORD *)(a1 + 72);
    v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v7 = (v5 >> 1) & 3;
      if ( v7 == 1 )
      {
        v8 = v6[9];
        v6 = nullptr;
        if ( !v8 )
          return ((unsigned __int64)sub_EFA7D0(v6) >> 32 << 32) | *(unsigned int *)(a1 + 56);
        v6 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v8 >> 1) & 3) != 2 || !v6 )
          return ((unsigned __int64)sub_EFA7D0(v6) >> 32 << 32) | *(unsigned int *)(a1 + 56);
      }
      else if ( v7 != 2 )
      {
        return ((unsigned __int64)sub_EFA7D0(v6) >> 32 << 32) | *(unsigned int *)(a1 + 56);
      }
      v6 = (__int64 *)v6[1];
    }
    else
    {
      v6 = &qword_2CA25A0;
    }
    return ((unsigned __int64)sub_EFA7D0(v6) >> 32 << 32) | *(unsigned int *)(a1 + 56);
  }
  v2 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 40) )
    return ((unsigned __int64)v2 << 32) | v2;
  if ( !v2 )
    v2 = *(_DWORD *)(a1 + 24);
  return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | v2;
}

