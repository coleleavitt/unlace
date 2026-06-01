unsigned __int64 __fastcall sub_16B67E0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int16 v2; // dx
  _WORD *v4; // rbp
  _WORD *v5; // rax

  v1 = sub_BFD550(a1);
  v2 = *(_WORD *)v1 & 0x1FF;
LABEL_2:
  if ( ((v2 + 394) & 0x1FFu) <= 1 )
  {
    while ( ((*(_WORD *)(v1 + 2) >> 3) & 0x3Fu) - 5 <= 1 )
    {
      v4 = (_WORD *)sub_BFD550(*(_QWORD *)(v1 + 24));
      v5 = (_WORD *)sub_BFD550(*(_QWORD *)(v1 + 16));
      v2 = *v4 & 0x1FF;
      if ( v2 != 52 )
      {
        if ( (*v5 & 0x1FF) != 0x34 )
          return v1;
        v1 = (unsigned __int64)v4;
        goto LABEL_2;
      }
      v1 = (unsigned __int64)v5;
      if ( ((*v5 + 394) & 0x1FFu) > 1 )
        return v1;
    }
  }
  return v1;
}
