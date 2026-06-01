__int64 __fastcall sub_7CFCA0(__int64 a1)
{
  unsigned __int64 v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax

  if ( *(_QWORD *)(a1 + 72) <= 7u || (*(_QWORD *)(a1 + 72) & 6LL) == 2 )
    return sub_779400(a1);
  if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
  {
    LODWORD(qword_4AD2160[0]) = 0;
    qword_4AD2160[1] = 0;
    qword_4AD2160[3] = 0;
    __cxa_guard_release(&qword_4AD2140);
  }
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 <= 7 )
  {
    v4 = qword_4AD2160;
  }
  else
  {
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = *(_QWORD *)(a1 + 72) & 6LL;
    if ( v5 == 2 )
    {
      v7 = v4[9];
      v4 = nullptr;
      if ( !v7 )
        goto LABEL_10;
      v4 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v7 & 6) != 4 || !v4 )
        goto LABEL_10;
      goto LABEL_16;
    }
    if ( v5 == 4 )
LABEL_16:
      v4 = (__int64 *)v4[1];
  }
LABEL_10:
  v6 = (unsigned __int64)sub_AFFD30(v4) >> 32;
  return (v6 << 32) | (unsigned int)sub_77AF80(a1);
}

