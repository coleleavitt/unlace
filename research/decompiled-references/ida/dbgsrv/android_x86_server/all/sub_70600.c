/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70600
// Address: 0x00070600

//----- (00070600) --------------------------------------------------------
unsigned __int8 *__cdecl sub_70600(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // edi
  int v3; // ebx
  _BOOL4 v4; // ecx
  unsigned __int8 *v5; // esi
  unsigned __int8 v6; // dh
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  bool v9; // al
  unsigned __int8 v10; // ah
  int v11; // edx
  unsigned __int8 v12; // cf
  int v13; // eax
  unsigned __int8 v14; // dl
  char v15; // al
  unsigned __int8 v16; // bl
  int v17; // ecx
  unsigned __int8 *v18; // edx
  unsigned __int8 v20; // [esp+3h] [ebp-19h]
  int v21; // [esp+4h] [ebp-18h]

  v2 = a2;
  if ( !*a2 )
  {
    v5 = a2;
    goto LABEL_44;
  }
  v3 = a1;
  v21 = 1;
  v4 = 0;
  v5 = a2;
  v6 = *a2;
  while ( *(_BYTE *)(v3 + 68) )
  {
    if ( v6 == 42 )
    {
      v14 = v2[1];
      if ( v14 != 41 )
      {
        if ( v14 != 47 || (*(_BYTE *)(v3 + 276) & 1) == 0 )
          goto LABEL_36;
LABEL_20:
        ++v2;
        *(_BYTE *)(v3 + 68) = 0;
        goto LABEL_36;
      }
      if ( (*(_BYTE *)(v3 + 276) & 2) != 0 )
        goto LABEL_20;
    }
LABEL_36:
    v6 = *++v2;
    if ( !v6 )
      goto LABEL_37;
  }
  if ( v6 == 34 )
  {
    v21 = 1;
    v4 = !v4;
    v6 = 34;
    goto LABEL_18;
  }
  if ( v4 )
    goto LABEL_18;
  if ( v6 == 40 )
  {
    v15 = 40;
    if ( (*(_BYTE *)(v3 + 276) & 2) != 0 )
    {
      v18 = v2 + 1;
      if ( v2[1] == 42 )
      {
LABEL_31:
        v3 = a1;
        *(_BYTE *)(a1 + 68) = 1;
        v4 = 0;
        v2 = v18;
        goto LABEL_36;
      }
    }
LABEL_33:
    if ( v21 )
    {
      v4 = 0;
      if ( (unsigned __int8)(v15 - 9) < 5u || (v6 = v15, v15 == 32) )
      {
        v3 = a1;
        goto LABEL_36;
      }
    }
    else
    {
      v6 = v15;
      v7 = v15 - 9;
      if ( v7 < 0x18u )
      {
        v8 = v7;
        v9 = 1;
        v10 = v6;
        v11 = 8388639;
        v12 = _bittest(&v11, v8);
        v6 = v10;
        if ( v12 )
          goto LABEL_8;
      }
    }
    v20 = v6;
    v13 = __strchr_chk((char *)&qword_13ACD8 - 329266, v6, 29);
    v6 = v20;
    v9 = v13 != 0;
LABEL_8:
    v21 = v9;
    v4 = 0;
    v3 = a1;
LABEL_18:
    *v5++ = v6;
    goto LABEL_36;
  }
  if ( v6 == 59 )
  {
    v15 = 59;
    if ( (*(_BYTE *)(v3 + 276) & 8) != 0 )
      goto LABEL_37;
    goto LABEL_33;
  }
  v15 = v6;
  if ( v6 != 47 )
    goto LABEL_33;
  v16 = v2[1];
  v17 = *(_DWORD *)(a1 + 276);
  if ( v16 != 47 || (v17 & 4) == 0 )
  {
    if ( (v17 & 1) != 0 )
    {
      v18 = v2 + 1;
      if ( v16 == 42 )
        goto LABEL_31;
    }
    goto LABEL_33;
  }
LABEL_37:
  while ( v5 > a2 )
  {
    if ( (unsigned __int8)(*(v5 - 1) - 9) >= 5u && *(v5 - 1) != 32 )
      break;
    --v5;
  }
LABEL_44:
  *v5 = 0;
  return v5;
}
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
