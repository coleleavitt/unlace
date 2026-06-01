/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40210
// Address: 0x00040210

//----- (00040210) --------------------------------------------------------
char __cdecl sub_40210(int a1, int *a2, unsigned int a3)
{
  unsigned int v3; // eax
  _QWORD *v4; // ecx
  _BYTE *v5; // eax
  char v6; // dl
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // edx
  bool v10; // dl
  int v11; // edi
  void (__cdecl *v12)(int *, unsigned int, int, int); // eax
  int v13; // edx
  char v14; // al
  int v15; // edi
  _BYTE *v16; // ecx
  void (__cdecl *v17)(int *, unsigned int, int, _DWORD); // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edi
  _DWORD *v21; // edx
  _DWORD *v22; // ecx
  _DWORD *v23; // eax
  _DWORD *v24; // edi
  int *v25; // edx
  int v26; // edx
  bool v27; // zf
  void (__cdecl *v28)(int *, unsigned int, int, _DWORD); // ecx
  char v30; // [esp+Bh] [ebp-21h]
  int v31; // [esp+Ch] [ebp-20h]
  unsigned int v32; // [esp+Ch] [ebp-20h]
  _BYTE *v33; // [esp+10h] [ebp-1Ch]
  _DWORD *v34; // [esp+14h] [ebp-18h]
  unsigned int v35; // [esp+18h] [ebp-14h]

  if ( *(_DWORD *)(a3 + 4) > 1u )
    goto LABEL_69;
  v3 = a2[53];
  if ( v3 > a3 || v3 + 68 * a2[54] < a3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20086);
    BUG();
  }
  v4 = a2 + 65;
  if ( -252645135 * ((int)(a3 - v3) >> 2) < (unsigned int)a2[56] )
    v4 = a2 + 57;
  sub_3C8A0(a2, (void **)a3, v4, *(_DWORD *)(a3 + 24));
  if ( *(_DWORD *)(a3 + 4) )
  {
LABEL_69:
    v5 = *(_BYTE **)a3;
    if ( *(_DWORD *)a3 )
    {
      if ( *v5 == 36 )
      {
        if ( v5[1] )
        {
          v6 = v5[2];
          if ( v6 == 46 || !v6 )
          {
            v7 = (char)v5[1] - 97;
            if ( v7 <= 0x17 )
            {
              v8 = 8945707;
              if ( _bittest(&v8, v7) )
              {
                *(_BYTE *)(a1 + 36) = 1;
                LOBYTE(v5) = v5[1];
                if ( (unsigned __int8)((_BYTE)v5 - 97) <= 0x17u )
                {
                  v9 = 8912897;
                  if ( _bittest(&v9, (unsigned __int8)((_BYTE)v5 - 97)) )
                  {
                    v10 = (_BYTE)v5 == 97 || (_BYTE)v5 == 120;
                    if ( (_BYTE)v5 == 116 )
                      *(_BYTE *)(a3 + 66) |= 1u;
                    v11 = 2 - v10;
                    v12 = *(void (__cdecl **)(int *, unsigned int, int, int))(a1 + 28);
                    if ( v12 )
                      v12(a2, a3, 2 - v10, 1);
                    LOBYTE(v5) = a1;
                    if ( *(_BYTE *)(a1 + 37) )
                      LOBYTE(v5) = sub_40540(a1, (_DWORD *)a3, v11);
                  }
                }
                return (char)v5;
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v5) = *(_BYTE *)(a3 + 28);
  v13 = 40964;
  if ( !_bittest(&v13, (unsigned __int8)v5 & 0xF) || *(_BYTE *)(a3 + 64) > 2u )
    return (char)v5;
  *(_BYTE *)(a3 + 56) &= ~1u;
  v14 = (unsigned __int8)v5 & 0xF;
  v15 = a1;
  if ( v14 != 15 )
  {
    if ( v14 == 13 )
    {
      *(_BYTE *)(a3 + 65) = 2;
    }
    else if ( (*(_BYTE *)(a3 + 32) & 1) == 0 )
    {
      v16 = (_BYTE *)(a3 + 66);
      goto LABEL_33;
    }
  }
  v16 = (_BYTE *)(a3 + 66);
  *(_BYTE *)(a3 + 66) |= 1u;
  v17 = *(void (__cdecl **)(int *, unsigned int, int, _DWORD))(a1 + 28);
  if ( v17 )
  {
    v17(a2, a3, 2, 0);
    v16 = (_BYTE *)(a3 + 66);
    v15 = a1;
  }
LABEL_33:
  LOBYTE(v5) = *v16;
  if ( (*v16 & 1) != 0 )
    goto LABEL_57;
  if ( !*(_BYTE *)(v15 + 37) )
    goto LABEL_57;
  v18 = *(_DWORD *)(v15 + 8);
  if ( !v18 )
    goto LABEL_57;
  v33 = v16;
  v30 = *v16;
  v19 = v15 + 8;
  v20 = *(_DWORD *)(a3 + 60);
  v31 = v19;
  do
  {
    if ( *(_DWORD *)(v18 + 16) >= v20 )
      v19 = v18;
    v18 = *(_DWORD *)(v18 + 4 * (*(_DWORD *)(v18 + 16) < v20));
  }
  while ( v18 );
  if ( v19 == v31
    || v20 < *(_DWORD *)(v19 + 16)
    || (v21 = *(_DWORD **)(v19 + 20), v22 = (_DWORD *)(v19 + 24), v22 == v21) )
  {
LABEL_57:
    if ( ((unsigned __int8)v5 & 1) != 0 )
      return (char)v5;
    goto LABEL_58;
  }
  v32 = *(_DWORD *)(a3 + 32);
  v35 = *(_DWORD *)(a3 + 36);
  if ( __PAIR64__(v35, v32) >= *((_QWORD *)v21 + 2) )
  {
    v23 = v21;
    do
    {
      v34 = v23;
      v24 = (_DWORD *)v21[1];
      if ( v24 )
      {
        do
        {
          v23 = v24;
          v24 = (_DWORD *)*v24;
        }
        while ( v24 );
      }
      else
      {
        v23 = (_DWORD *)v21[2];
        if ( (_DWORD *)*v23 != v21 )
        {
          v25 = v21 + 2;
          do
          {
            v26 = *v25;
            v23 = *(_DWORD **)(v26 + 8);
            v27 = *v23 == v26;
            v25 = (int *)(v26 + 8);
          }
          while ( !v27 );
        }
      }
      if ( v22 == v23 )
        break;
      v21 = v23;
    }
    while ( __PAIR64__(v35, v32) >= *((_QWORD *)v23 + 2) );
    if ( v34[6] == 2 )
    {
      *v33 = v30 | 1;
      v28 = *(void (__cdecl **)(int *, unsigned int, int, _DWORD))(a1 + 28);
      LOBYTE(v5) = v30 | 1;
      if ( v28 )
      {
        v28(a2, a3, 2, 0);
        LOBYTE(v5) = *(_BYTE *)(a3 + 66);
        if ( ((unsigned __int8)v5 & 1) != 0 )
          return (char)v5;
        goto LABEL_58;
      }
      goto LABEL_57;
    }
  }
  LOBYTE(v5) = v30;
  if ( (v30 & 1) != 0 )
    return (char)v5;
LABEL_58:
  v5 = *(_BYTE **)(a1 + 28);
  if ( v5 )
    LOBYTE(v5) = ((int (__cdecl *)(int *, unsigned int, int, _DWORD))v5)(a2, a3, 1, 0);
  return (char)v5;
}
// 13E34C: using guessed type int under_debugger;
