bool __fastcall sub_18B0030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 v5; // dl
  bool result; // al
  int v7; // edx
  unsigned __int64 v8; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 26 )
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v5 = *(_BYTE *)(v4 + 19);
  result = 1;
  v7 = (v5 >> 1) & 0xF;
  if ( v7 != 11 )
  {
    result = 0;
    if ( v7 == 9 )
    {
      v8 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v8 = *(_QWORD *)(v8 + 8);
      result = 0;
      if ( ((*(_BYTE *)(v8 + 8) + 70) & 0x7Fu) <= 3 )
        return (*(_BYTE *)(v8 + 10) & 2) != 0;
    }
  }
  return result;
}
