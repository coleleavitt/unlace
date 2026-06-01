unsigned __int64 __fastcall sub_B99300(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(unsigned int *)(a1 + 24);
  if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v2 >> 1) & 3) != 1 )
  {
    if ( !(_BYTE)byte_2CA2510 && __cxa_guard_acquire(&byte_2CA2510) )
    {
      qword_2CA2520 &= 0xFFFFFFFE00000000LL;
      qword_2CA2528 = 0;
      qword_2CA2538 = 0;
      __cxa_guard_release(&byte_2CA2510);
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
          goto LABEL_7;
        v6 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v8 >> 1) & 3) != 2 || !v6 )
          goto LABEL_7;
      }
      else if ( v7 != 2 )
      {
        goto LABEL_7;
      }
      v6 = (__int64 *)v6[1];
    }
    else
    {
      v6 = &qword_2CA2520;
    }
LABEL_7:
    v3 = (unsigned __int64)sub_EFA7D0(v6) >> 32;
  }
  return *(unsigned int *)(*(_QWORD *)(a1 + 56) + 8LL) | (v3 << 32);
}

