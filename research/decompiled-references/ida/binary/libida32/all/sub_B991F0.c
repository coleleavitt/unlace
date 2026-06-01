__int64 __fastcall sub_B991F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 *v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 72);
  if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v4 >> 1) & 3) == 1 )
    return sub_B4E170(a1, a2, a3, a4);
  if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
  {
    qword_2CA2560 &= 0xFFFFFFFE00000000LL;
    qword_2CA2568 = 0;
    qword_2CA2578 = 0;
    __cxa_guard_release(&byte_2CA2540);
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v10 = (v7 >> 1) & 3;
    if ( v10 == 1 )
    {
      v11 = v8[9];
      v8 = nullptr;
      if ( !v11 )
        goto LABEL_7;
      v8 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v11 >> 1) & 3) != 2 || !v8 )
        goto LABEL_7;
    }
    else if ( v10 != 2 )
    {
      goto LABEL_7;
    }
    v8 = (__int64 *)v8[1];
  }
  else
  {
    v8 = &qword_2CA2560;
  }
LABEL_7:
  v9 = (unsigned __int64)sub_EFA7D0(v8) >> 32;
  return (v9 << 32) | (unsigned int)sub_B4F350(a1);
}

