__int64 __fastcall sub_7D6030(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 72) > 7u )
  {
    if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
    {
      LODWORD(qword_4AD2120[0]) = 0;
      qword_4AD2120[1] = 0;
      qword_4AD2120[3] = 0;
      __cxa_guard_release(&qword_4AD2108);
    }
    v3 = *(_QWORD *)(a1 + 72);
    if ( v3 <= 7 )
    {
      v4 = qword_4AD2120;
      goto LABEL_5;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = *(_QWORD *)(a1 + 72) & 6LL;
    if ( v5 == 2 )
    {
      v6 = v4[9];
      v4 = nullptr;
      if ( !v6 )
        goto LABEL_5;
      v4 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v6 & 6) != 4 || !v4 )
        goto LABEL_5;
    }
    else if ( v5 != 4 )
    {
      goto LABEL_5;
    }
    v4 = (__int64 *)v4[1];
LABEL_5:
    if ( (*(_DWORD *)v4 & 0x7FFFFFFFu) - 6 > 1 )
      return sub_AFFD30(v4);
    else
      return *(unsigned int *)((v4[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
  }
  return result;
}

