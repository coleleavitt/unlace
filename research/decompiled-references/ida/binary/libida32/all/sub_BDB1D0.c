bool __fastcall sub_BDB1D0(unsigned __int64 a1)
{
  _WORD *v1; // rax
  __int16 v2; // dx
  _WORD *v3; // rcx
  bool result; // al
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v1 = (_WORD *)sub_BD7DA0(a1);
  v2 = *v1;
  v3 = v1;
  result = 0;
  if ( (v2 & 0x1FF) == 0x47 )
  {
    v5 = *((_QWORD *)v3 + 2);
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x2D )
    {
      v6 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
      {
        v6 = *(_QWORD *)v6;
        result = 0;
        if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x12 )
          return result;
      }
      else
      {
        result = 0;
        if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x12 )
          return result;
      }
      if ( v6 != 48 )
        return *(_QWORD *)(v6 + 72) == v5;
    }
  }
  return result;
}

