__int64 __fastcall sub_7D5A00(__int64 a1)
{
  unsigned __int64 v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *(_QWORD *)(a1 + 72) <= 7u )
    return 0;
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
    return sub_AFFD30(v4);
  }
  v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = *(_QWORD *)(a1 + 72) & 6LL;
  if ( v5 == 2 )
  {
    v6 = v4[9];
    v4 = nullptr;
    if ( !v6 )
      return sub_AFFD30(v4);
    v4 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v6 & 6) != 4 || !v4 )
      return sub_AFFD30(v4);
    goto LABEL_7;
  }
  if ( v5 == 4 )
LABEL_7:
    v4 = (__int64 *)v4[1];
  return sub_AFFD30(v4);
}

