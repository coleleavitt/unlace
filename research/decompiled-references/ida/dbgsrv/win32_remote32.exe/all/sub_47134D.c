/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47134D
// Address: 0x0047134D

//----- (0047134D) --------------------------------------------------------
char __thiscall sub_47134D(int this)
{
  unsigned __int8 *v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  v2 = *(unsigned __int8 **)(this + 8);
  v3 = *v2;
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x70 )
    {
      v8 = v3 - 115;
      if ( !v8 )
        goto LABEL_37;
      v9 = v8 - 2;
      if ( !v9 )
      {
        *(_DWORD *)(this + 40) = 5;
        goto LABEL_20;
      }
      if ( v9 == 3 )
      {
LABEL_31:
        *(_DWORD *)(this + 40) = 6;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v3 == 112 )
      {
        *(_DWORD *)(this + 32) = 9;
        goto LABEL_31;
      }
      if ( v3 <= 0x67 )
        goto LABEL_29;
      switch ( v3 )
      {
        case 'i':
          goto LABEL_10;
        case 'n':
          *(_DWORD *)(this + 40) = 9;
          goto LABEL_20;
        case 'o':
          *(_DWORD *)(this + 40) = 4;
          goto LABEL_20;
      }
    }
LABEL_35:
    *(_DWORD *)(this + 12) = 22;
    *(_DWORD *)(this + 16) = 0;
    *(_WORD *)(this + 20) = 0;
    *(_BYTE *)(this + 22) = 0;
    *(_DWORD *)(this + 24) = 0;
    *(_DWORD *)(this + 28) = 0;
    *(_DWORD *)(this + 32) = 0;
    *(_BYTE *)(this + 36) = 0;
    *(_DWORD *)(this + 40) = 0;
    return 0;
  }
  if ( v3 == 100 )
  {
    *(_DWORD *)(this + 40) = 3;
    goto LABEL_20;
  }
  if ( v3 > 0x53 )
  {
    v4 = v3 - 88;
    if ( v4 )
    {
      v5 = v4 - 3;
      if ( !v5 )
      {
        sub_47180C(this);
        ++*(_DWORD *)(this + 8);
        *(_DWORD *)(this + 40) = 8;
        return sub_4716D4(this);
      }
      v6 = v5 - 6;
      if ( !v6 )
        goto LABEL_29;
      if ( v6 != 2 )
        goto LABEL_35;
LABEL_15:
      if ( !*(_QWORD *)(this + 24) )
      {
        *(_DWORD *)(this + 24) = 1;
        *(_DWORD *)(this + 28) = 0;
      }
      sub_47180C(this);
      *(_DWORD *)(this + 40) = 0;
      goto LABEL_38;
    }
    goto LABEL_31;
  }
  switch ( v3 )
  {
    case 'S':
LABEL_37:
      sub_47180C(this);
      *(_DWORD *)(this + 40) = 1;
LABEL_38:
      ++*(_DWORD *)(this + 8);
      return 1;
    case 'A':
LABEL_29:
      *(_DWORD *)(this + 40) = 7;
      goto LABEL_20;
    case 'C':
      goto LABEL_15;
  }
  if ( v3 <= 0x44 )
    goto LABEL_35;
  if ( v3 <= 0x47 )
    goto LABEL_29;
  if ( v3 != 73 )
    goto LABEL_35;
LABEL_10:
  *(_DWORD *)(this + 40) = 2;
LABEL_20:
  *(_DWORD *)(this + 8) = v2 + 1;
  return 1;
}
