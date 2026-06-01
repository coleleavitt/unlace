__int64 __fastcall sub_1E85CD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // r8d
  unsigned int v5; // eax

  if ( a2 == 24 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x69766972745F7369LL | *(_QWORD *)(a1 + 8) ^ 0x6C65725F796C6C61LL)
      && *(_QWORD *)(a1 + 16) == 0x656C62617461636FLL )
    {
      v3 = 1;
      goto LABEL_4;
    }
LABEL_3:
    v3 = 0;
LABEL_4:
    v4 = 36;
    goto LABEL_24;
  }
  if ( a2 != 14 )
  {
    if ( a2 == 21 )
    {
      if ( *(_QWORD *)a1 ^ 0x69766972745F7369LL | *(_QWORD *)(a1 + 8) ^ 0x706F635F796C6C61LL
        || *(_DWORD *)(a1 + 16) != 1818386809
        || (v3 = 1, v4 = 28, *(_BYTE *)(a1 + 20) != 101) )
      {
        v3 = 0;
        v4 = 36;
      }
      goto LABEL_10;
    }
    if ( a2 == 13 )
    {
      if ( *(_QWORD *)a1 != 0x67697373615F7369LL
        || *(_DWORD *)(a1 + 8) != 1818386798
        || (v3 = 1, v4 = 67, *(_BYTE *)(a1 + 12) != 101) )
      {
        v3 = 0;
        v4 = 36;
      }
      goto LABEL_18;
    }
    goto LABEL_3;
  }
  if ( *(_QWORD *)a1 != 0x616C7065725F7369LL
    || *(_DWORD *)(a1 + 8) != 1650550115
    || (v3 = 1, v4 = 39, *(_WORD *)(a1 + 12) != 25964) )
  {
    v3 = 0;
    v4 = 39;
  }
LABEL_24:
  if ( !((unsigned __int8)v3 | (a2 != 8)) )
  {
    if ( *(_QWORD *)a1 == 0x7974706D655F7369LL )
    {
      v5 = 20;
      return v5 | 0x100000000LL;
    }
    goto LABEL_18;
  }
LABEL_10:
  if ( a2 == 18 && !v3 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x646E6174735F7369LL | *(_QWORD *)(a1 + 8) ^ 0x6F79616C5F647261LL)
      && *(_WORD *)(a1 + 16) == 29813 )
    {
      v5 = 26;
      return v5 | 0x100000000LL;
    }
    return (unsigned int)result;
  }
LABEL_18:
  if ( !((unsigned __int8)v3 | (a2 != 16)) )
  {
    if ( !(*(_QWORD *)a1 ^ 0x74736E6F635F7369LL | *(_QWORD *)(a1 + 8) ^ 0x656C626974637572LL) )
    {
      v5 = 82;
      return v5 | 0x100000000LL;
    }
    return (unsigned int)result;
  }
  if ( !v3 )
    return (unsigned int)result;
  v5 = v4;
  return v5 | 0x100000000LL;
}
