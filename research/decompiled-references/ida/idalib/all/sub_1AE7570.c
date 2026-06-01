unsigned __int64 __fastcall sub_1AE7570(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  __int64 v4; // rax

  v1 = sub_BFD550(a1);
  v2 = sub_BFB900(v1);
  if ( ((*(_WORD *)v2 + 423) & 0x1FFu) <= 4
    && (v4 = sub_BFBC70(*(_QWORD *)(v2 + 32))) != 0
    && (*(_BYTE *)(v4 + 28) & 0x7Fu) - 34 <= 5 )
  {
    return v2;
  }
  else
  {
    return 0;
  }
}
