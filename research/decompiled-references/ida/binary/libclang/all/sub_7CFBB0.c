unsigned __int64 __fastcall sub_7CFBB0(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(unsigned int *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 72) > 7u && (*(_QWORD *)(a1 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
    {
      LODWORD(qword_4AD2120[0]) = 0;
      qword_4AD2120[1] = 0;
      qword_4AD2120[3] = 0;
      __cxa_guard_release(&qword_4AD2108);
    }
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 <= 7 )
    {
      v5 = qword_4AD2120;
    }
    else
    {
      v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      v6 = *(_QWORD *)(a1 + 72) & 6LL;
      if ( v6 == 2 )
      {
        v7 = v5[9];
        v5 = nullptr;
        if ( !v7 )
          goto LABEL_10;
        v5 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v7 & 6) != 4 || !v5 )
          goto LABEL_10;
        goto LABEL_16;
      }
      if ( v6 == 4 )
LABEL_16:
        v5 = (__int64 *)v5[1];
    }
LABEL_10:
    v2 = (unsigned __int64)sub_AFFD30(v5) >> 32;
  }
  return *(unsigned int *)(*(_QWORD *)(a1 + 56) + 8LL) | (v2 << 32);
}

