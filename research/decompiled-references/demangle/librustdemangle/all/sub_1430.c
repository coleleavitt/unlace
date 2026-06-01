__int64 __fastcall sub_1430(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int16 v8; // ax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  if ( v1 < v3 && *(_BYTE *)(*(_QWORD *)a1 + v1) == 95 )
  {
    *(_QWORD *)(a1 + 32) = v1 + 1;
    return 0;
  }
  while ( 1 )
  {
    if ( v3 <= v1 )
    {
      if ( *(_DWORD *)(a1 + 40) )
        return v4 + 1;
LABEL_7:
      *(_DWORD *)(a1 + 40) = 1;
      v5 = 0;
      v6 = 0;
      goto LABEL_8;
    }
    LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)a1 + v1);
    if ( (_BYTE)v5 == 95 )
    {
      *(_QWORD *)(a1 + 32) = v1 + 1;
      return v4 + 1;
    }
    if ( *(_DWORD *)(a1 + 40) )
      return v4 + 1;
    if ( !(_BYTE)v5 )
      goto LABEL_7;
    v6 = (char)v5;
    v5 = (unsigned __int8)v5;
    *(_QWORD *)(a1 + 32) = v1 + 1;
LABEL_8:
    v7 = 62 * v4;
    v8 = *(_WORD *)&byte_4220[2 * v5];
    if ( (v8 & 4) != 0 )
    {
      v4 = v6 - 48 + v7;
      goto LABEL_4;
    }
    if ( (v8 & 8) != 0 )
    {
      v4 = v6 - 87 + v7;
      goto LABEL_4;
    }
    if ( (v8 & 0x80u) == 0 )
      break;
    v4 = v6 - 29 + v7;
LABEL_4:
    v1 = *(_QWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 40) = 1;
  return 0;
}
