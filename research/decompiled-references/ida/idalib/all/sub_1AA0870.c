_WORD *__fastcall sub_1AA0870(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  _WORD *v2; // rax
  _WORD *v3; // rbx
  __int16 v4; // ax

  v1 = sub_BFBAE0(a1);
  if ( ((*(_WORD *)v1 + 452) & 0x1FFu) <= 1 )
    v1 = *(_QWORD *)(v1 + 16);
  v2 = (_WORD *)sub_BFBAE0(v1);
  v3 = v2;
  if ( !v2 )
    return v3;
  v4 = *v2 & 0x1FF;
  if ( v4 == 71 )
    return *((_WORD **)v3 + 2);
  if ( v4 == 46 && (*(_WORD *)sub_BFBAE0(*((_QWORD *)v3 + 2)) & 0x1FF) == 0x62 )
    return *((_WORD **)v3 + 3);
  else
    return nullptr;
}
