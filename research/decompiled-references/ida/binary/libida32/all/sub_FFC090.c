char __fastcall sub_FFC090(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbp
  _DWORD *v5; // rdx
  _DWORD *v6; // rax

  v4 = (unsigned int)(a2 + 1);
  if ( (unsigned int)v4 <= 1 )
  {
    v5 = *(_DWORD **)(a1 + 184);
    if ( a3 >= (*v5 & 0x7FFFFFFFu) )
    {
LABEL_4:
      if ( (_DWORD)v4 != *(_DWORD *)(a1 + 192) )
      {
        if ( (int)v4 >= 0 )
        {
          v6 = &v5[6 * v4];
          return a3 < (*v6 & 0x7FFFFFFFu);
        }
LABEL_15:
        v6 = (_DWORD *)sub_FFBCE0(a1, (unsigned int)(-2 - v4), nullptr);
        return a3 < (*v6 & 0x7FFFFFFFu);
      }
      return *(_DWORD *)(a1 + 312) > a3;
    }
    return 0;
  }
  if ( a2 >= 0 )
  {
    v5 = *(_DWORD **)(a1 + 184);
    if ( a3 >= (v5[6 * a2] & 0x7FFFFFFFu) )
      goto LABEL_4;
    return 0;
  }
  if ( a3 < (*(_DWORD *)sub_FFBCE0(a1, (unsigned int)(-2 - a2), nullptr) & 0x7FFFFFFFu) )
    return 0;
  if ( a2 == -2 )
    return 1;
  if ( *(_DWORD *)(a1 + 192) != (_DWORD)v4 )
    goto LABEL_15;
  return *(_DWORD *)(a1 + 312) > a3;
}

