/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4716D4
// Address: 0x004716D4

//----- (004716D4) --------------------------------------------------------
char __thiscall sub_4716D4(int this)
{
  _BYTE *v3; // edi
  _BYTE *v4; // eax
  char v5; // cl
  unsigned __int8 v6; // dl
  _BYTE *v7; // ebx
  _BYTE *v8; // eax
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // bh
  unsigned __int8 v11; // al
  char v12; // cl
  char v13; // bl
  char v14; // dl
  int v15; // ecx
  _BYTE *v16; // [esp+8h] [ebp-8h]
  char v17; // [esp+Eh] [ebp-2h]

  if ( this == -44 )
  {
    MEMORY[0xFFFFFFE0] = 12;
    MEMORY[0xFFFFFFE8] = 0;
LABEL_3:
    *(_DWORD *)(this + 40) = 0;
    *(_BYTE *)(this + 36) = 0;
    *(_DWORD *)(this + 32) = 0;
    *(_DWORD *)(this + 28) = 0;
    *(_DWORD *)(this + 24) = 0;
    *(_BYTE *)(this + 22) = 0;
    *(_DWORD *)(this + 16) = 0;
    return 0;
  }
  memset((void *)(this + 44), 0, 0x20u);
  v3 = *(_BYTE **)(this + 8);
  v4 = v3;
  v5 = *v3;
  v17 = *v3;
  v6 = *v3;
  if ( *v3 == 94 )
  {
    v4 = ++v3;
    *(_DWORD *)(this + 8) = v3;
    v6 = *v3;
  }
  if ( v6 == 93 )
  {
    v4 = v3 + 1;
    *(_DWORD *)(this + 8) = v3 + 1;
    v3 = v4;
    *(_BYTE *)(this + 55) |= 0x20u;
    v6 = *v4;
  }
  v16 = nullptr;
  if ( v6 != 93 )
  {
    v7 = v3;
    do
    {
      if ( !v6 )
        break;
      if ( v6 != 45 || v7 - 1 == v16 || v7 == v3 || (v8 = v7 + 1, v9 = v7[1], v9 == 93) )
      {
        *(_BYTE *)((v6 >> 3) + this + 44) |= 1 << (v6 & 7);
      }
      else
      {
        v10 = *(v7 - 1);
        v16 = v8;
        if ( v10 > v9 )
        {
          v11 = v10;
          v10 = v9;
          v9 = v11;
        }
        v12 = v9 + 1;
        if ( v10 != v12 )
        {
          v13 = v12;
          do
          {
            v14 = v10 & 7;
            v15 = v10++ >> 3;
            *(_BYTE *)(v15 + this + 44) |= 1 << v14;
          }
          while ( v10 != v13 );
        }
      }
      v4 = (_BYTE *)(*(_DWORD *)(this + 8) + 1);
      v7 = v4;
      *(_DWORD *)(this + 8) = v4;
      v6 = *v4;
    }
    while ( *v4 != 93 );
    v5 = v17;
  }
  if ( !*v4 )
  {
    *(_WORD *)(this + 20) = 0;
    *(_DWORD *)(this + 12) = 22;
    goto LABEL_3;
  }
  if ( v5 == 94 )
  {
    sub_470F95((_BYTE *)(this + 44));
    v4 = *(_BYTE **)(this + 8);
  }
  *(_DWORD *)(this + 8) = v4 + 1;
  return 1;
}
