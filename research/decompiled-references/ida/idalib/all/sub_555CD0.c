__int64 __fastcall sub_555CD0(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  __int64 result; // rax
  unsigned __int8 v4; // al
  signed int v5; // r9d
  int v6; // edx

  if ( !(unsigned __int8)getinf(30) )
  {
    v1 = *(_DWORD *)(a1 + 144);
    v2 = v1 & 0x20;
LABEL_3:
    if ( !v2 )
      *(_DWORD *)(a1 + 144) = v1 | 0x40;
    return 0;
  }
  v4 = getinf(31);
  v5 = v4;
  if ( v4 == 0xFF )
    v5 = 0x7FFFFFFF;
  v6 = sub_380DC0(a1, *(_QWORD *)(a1 + 256), 1, " XREF:", 0xFu, v5, 1u, 0);
  result = 1;
  if ( v6 >= 0 )
  {
    v1 = *(_DWORD *)(a1 + 144);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 144) = v1 | 0x20;
      return 0;
    }
    v2 = *(_DWORD *)(a1 + 144) & 0x20;
    goto LABEL_3;
  }
  return result;
}
