/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EF80
// Address: 0x0043EF80

//----- (0043EF80) --------------------------------------------------------
char __thiscall sub_43EF80(_DWORD *this, int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned __int8 *v5; // edi
  _BYTE *v6; // ebp
  unsigned int v7; // edx
  _BYTE *v8; // esi
  int v9; // ecx
  unsigned __int8 v10; // bh
  unsigned __int8 v11; // bl
  int v12; // eax
  unsigned __int8 v13; // al
  bool v14; // zf
  _DWORD *v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+18h] [ebp+4h]
  int v18; // [esp+1Ch] [ebp+8h]
  char v19; // [esp+20h] [ebp+Ch]

  v16 = this;
  v5 = (unsigned __int8 *)(a4 + *a3);
  if ( a3[4] )
    v6 = (_BYTE *)(a4 + a3[3]);
  else
    v6 = nullptr;
  v7 = a5;
  v18 = 0;
  if ( !a5 )
    return 1;
  v17 = a2 - (_DWORD)v6;
  v8 = v6;
  while ( 1 )
  {
    v9 = *(this + 4);
    v10 = *v5;
    v19 = v9;
    v11 = v8[v17];
    v12 = v18;
    if ( (v9 & 1) == 0 )
    {
      v11 = sub_4692E4(v11);
      v13 = sub_4692E4(v10);
      LOBYTE(v9) = v19;
      v10 = v13;
      v12 = v18;
      v7 = a5;
    }
    if ( !v6 )
      break;
    if ( (v9 & 0x20) != 0 )
    {
      v14 = ((unsigned __int8)(v10 ^ v11) & *v8) == 0;
      goto LABEL_16;
    }
    if ( v6 == (_BYTE *)255 )
    {
      if ( v10 == 0xFF )
        goto LABEL_17;
      break;
    }
    if ( *v8 )
      break;
LABEL_17:
    this = v16;
    ++v8;
    v18 = v12 + 1;
    ++v5;
    if ( v12 + 1 >= v7 )
      return 1;
  }
  v14 = v11 == v10;
LABEL_16:
  if ( v14 )
    goto LABEL_17;
  return 0;
}
