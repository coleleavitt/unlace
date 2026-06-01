__int64 sub_12A0A0()
{
  __int16 v0; // bx
  unsigned __int16 v1; // bp
  __int64 ph; // r12
  int v3; // eax
  __int16 v5; // [rsp+Eh] [rbp-43Ah] BYREF
  _BYTE v6[1024]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v7; // [rsp+418h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v0 = (unsigned __int8)getinf_flag();
  v5 = v0 | (2 * (unsigned __int8)getinf_flag());
  v1 = getinf();
  itext();
  qstpncpy();
  ph = get_ph();
  v3 = *(_DWORD *)(ph + 12);
  if ( (v3 & 2) != 0 )
  {
    itext();
    qstpncpy();
    if ( (*(_DWORD *)(ph + 12) & 1) == 0 )
      goto LABEL_3;
LABEL_6:
    itext();
    qstpncpy();
    goto LABEL_3;
  }
  if ( (v3 & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  qstrncpy();
  if ( (unsigned int)sub_8F730((__int64)v6, &v5, sub_12C5D0, sub_12C5D0, sub_12C5D0, sub_12C5D0, sub_12C5D0, sub_12C5D0) )
  {
    setinf_flag();
    setinf_flag();
    if ( (int)(getinf() & ~v1) < 0 )
    {
      getinf();
      getinf();
      auto_mark_range();
    }
  }
  return 1;
}

