__int64 __fastcall sub_188090(TView *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // edx
  __int64 result; // rax
  unsigned __int16 v5; // r12
  __int64 v6; // r12
  __int64 v7; // r13
  char v8; // al
  void (__fastcall *v9)(_QWORD, char *); // rax

  if ( *a2 != 256 )
    goto LABEL_7;
  v2 = a2[4];
  if ( v2 == 11 )
  {
    v3 = -7;
LABEL_6:
    result = sub_187F90((__int64 *)a1, (__int64)a2, v3);
    if ( !(_BYTE)result )
      return result;
    goto LABEL_7;
  }
  if ( v2 > 0xBu )
  {
    v3 = -6;
    if ( v2 != 13 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( v2 != 4 )
  {
    v3 = -2;
    if ( v2 != 10 )
      goto LABEL_7;
    goto LABEL_6;
  }
  result = sub_187F90((__int64 *)a1, (__int64)a2, 0xFFFFFFFD);
  if ( !(_BYTE)result )
    return result;
  if ( (*((_BYTE *)a1 + 29) & 2) != 0 )
  {
    (*(void (__fastcall **)(TView *, __int64))(*(_QWORD *)a1 + 144LL))(a1, 11);
    return TView::clearEvent(a1, a2);
  }
LABEL_7:
  TWindow::handleEvent();
  result = *a2;
  if ( (_WORD)result != 256 )
    goto LABEL_8;
  result = (unsigned __int16)word_250358;
  v5 = a2[4];
  if ( word_250358 == -1 )
  {
    word_250358 = sub_199DB0(a1);
    if ( v5 != word_250358 )
    {
      result = *a2;
LABEL_8:
      if ( (_WORD)result == 16 && a2[4] == 7178 )
        return message(a1, 0x100u, 0xAu, nullptr);
      return result;
    }
  }
  else if ( v5 != word_250358 )
  {
    return result;
  }
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 88LL);
  result = (unsigned int)v6;
  if ( (unsigned __int64)(unsigned int)v6 < *((_QWORD *)a1 + 26) )
  {
    v7 = *((_QWORD *)a1 + 25) + 72LL * (unsigned int)v6;
    TView::clearEvent(a1, a2);
    v8 = *(_BYTE *)(v7 + 52);
    if ( v8 == 66 || v8 == 107 )
    {
      v9 = *(void (__fastcall **)(_QWORD, char *))(v7 + 32);
      if ( v9 )
        v9(*(unsigned int *)(v7 + 48), (char *)a1 + 248);
    }
    else
    {
      sub_186620(a1, v6);
    }
    return sub_185490((__int64 *)a1, *(_DWORD *)(v7 + 56));
  }
  return result;
}

