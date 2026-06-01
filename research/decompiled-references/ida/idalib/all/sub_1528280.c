bool __fastcall sub_1528280(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( *(_DWORD *)v2 == 3 )
  {
    if ( *(_WORD *)(v2 + 16) != *(_WORD *)a2 || (v4 = 0, *(_BYTE *)(v2 + 18) != *(_BYTE *)(a2 + 2)) )
      v4 = 1;
    return v4 == 0;
  }
  return result;
}
