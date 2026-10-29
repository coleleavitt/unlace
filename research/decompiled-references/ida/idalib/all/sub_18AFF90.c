bool __fastcall sub_18AFF90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  _QWORD *v4; // rax
  __int64 v5; // rax

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (_BYTE)v2 == 36
    || (result = 0, a2 = *(_QWORD *)(a1 + 40) & 7LL, (_DWORD)a2 == 6)
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    {
      v4 = (_QWORD *)v4[4];
      if ( v4 )
      {
LABEL_7:
        v5 = *(_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v5 + 16) == 26 )
          return (*(_BYTE *)(v5 + 19) & 0x1E) == 0;
        else
          return (*(_BYTE *)(sub_F63050(v5, a2, v2, *(_QWORD *)(a1 + 56) & 4LL) + 19) & 0x1E) == 0;
      }
    }
    else if ( v4 )
    {
      goto LABEL_7;
    }
    return (_BYTE)v2 == 36;
  }
  return result;
}
