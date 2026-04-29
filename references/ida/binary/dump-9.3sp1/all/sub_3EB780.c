char __fastcall sub_3EB780(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // ebx
  bool v4; // zf
  int v5; // eax

  result = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 144LL);
  if ( !result )
  {
    v3 = *(_DWORD *)(a2 + 20);
    v4 = (getinf() & 0xF) == 7;
    v5 = 112;
    if ( !v4 )
      v5 = 48;
    return v3 == v5;
  }
  return result;
}
