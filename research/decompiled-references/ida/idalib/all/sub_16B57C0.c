__int64 __fastcall sub_16B57C0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned __int64 v4; // r8
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi

  v2 = a1;
  v3 = a2;
  v4 = HIDWORD(a2);
  if ( !BYTE4(a1) )
  {
    v11 = a2 - 1;
    if ( !(_BYTE)v4 )
      v3 = v11;
    v12 = a1 - 1;
    if ( (int)a1 - 1 < v3 )
      v12 = v3;
    v6 = 0;
    v2 = v12 + 2;
    return (v6 << 32) | v2;
  }
  v5 = BYTE4(a2) ^ 1;
  if ( !(_DWORD)a2 )
  {
    v6 = 1;
    if ( !BYTE4(a2) )
    {
      v7 = 0;
      v8 = 1;
LABEL_5:
      v9 = a2 - 1;
      if ( v9 < (unsigned int)a1 )
        v9 = a1;
      return (v6 << 32) | (v9 + v8 + v7);
    }
    return (v6 << 32) | v2;
  }
  v8 = v5;
  if ( !BYTE4(a2) )
  {
    v6 = 0;
    v7 = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)a2 < (unsigned int)a1 )
    LODWORD(a2) = a1;
  return v5 + (unsigned int)a2 + 1;
}
