__int64 __fastcall sub_BBF0E0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  result = 0;
  if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
    {
      qword_2CCC420 &= 0xFFFFFFFE00000000LL;
      qword_2CCC428 = 0;
      qword_2CCC438 = 0;
      __cxa_guard_release(&byte_2CCC408);
    }
    v3 = (__int64 *)(*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v3 = &qword_2CCC420;
      goto LABEL_5;
    }
    v4 = (*(__int64 *)(a1 + 72) >> 1) & 3;
    if ( v4 == 1 )
    {
      v5 = v3[9];
      v3 = nullptr;
      if ( !v5 )
        goto LABEL_5;
      v3 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v5 >> 1) & 3) != 2 || !v3 )
        goto LABEL_5;
    }
    else if ( v4 != 2 )
    {
LABEL_5:
      if ( ((*(_DWORD *)v3 + 2147483642) & 0x7FFFFFFFu) <= 1 )
        return *(unsigned int *)((v3[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      else
        return sub_F1E510(v3);
    }
    v3 = (__int64 *)v3[1];
    goto LABEL_5;
  }
  return result;
}
