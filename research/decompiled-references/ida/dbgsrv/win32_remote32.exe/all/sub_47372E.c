/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47372E
// Address: 0x0047372E

//----- (0047372E) --------------------------------------------------------
char *__cdecl sub_47372E(int a1, char *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  char *v6; // edx
  char *v7; // esi
  char v8; // al
  char *v9; // ecx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  char v13; // dl
  char *v14; // eax
  int v15; // ecx
  char v16; // al
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-18h] BYREF
  HANDLE hFile; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  char *v21; // [esp+1Ch] [ebp-Ch]
  char *v22; // [esp+20h] [ebp-8h]
  char Buffer; // [esp+27h] [ebp-1h] BYREF

  v3 = (int)a2;
  v4 = 56 * (a1 & 0x3F);
  v5 = (int)*(&dword_4B7B38 + (a1 >> 6));
  v20 = a1 >> 6;
  hFile = *(HANDLE *)(v5 + v4 + 24);
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v5 + v4 + 40) |= 4u;
  else
    *(_BYTE *)(v5 + v4 + 40) &= ~4u;
  v6 = a2;
  v21 = &a2[a3];
  v7 = a2;
  if ( a2 < &a2[a3] )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == 26 )
      {
        v15 = (int)*(&dword_4B7B38 + v20);
        v16 = *(_BYTE *)(v15 + v4 + 40);
        if ( (v16 & 0x40) != 0 )
          *v7++ = 26;
        else
          *(_BYTE *)(v15 + v4 + 40) = v16 | 2;
        return &v7[-v3];
      }
      v9 = v6 + 1;
      if ( v8 == 13 )
        break;
      *v7 = v8;
      ++v6;
      ++v7;
LABEL_28:
      if ( v6 >= v21 )
        return &v7[-v3];
    }
    if ( v9 < v21 )
    {
      v10 = *v9 == 10;
      v22 = v7 + 1;
      if ( v10 )
      {
        v8 = 10;
        v11 = 2;
      }
      else
      {
        v11 = 1;
      }
      v3 = (int)a2;
      v6 += v11;
      *v7 = v8;
      v7 = v22;
      goto LABEL_28;
    }
    v22 = v6 + 1;
    if ( ReadFile(hFile, &Buffer, 1u, &NumberOfBytesRead, nullptr) && NumberOfBytesRead )
    {
      v12 = v20;
      if ( (*((_BYTE *)&(*(&dword_4B7B38 + v20))[1].LockSemaphore + v4) & 0x48) != 0 )
      {
        v13 = Buffer;
        v14 = v7 + 1;
        if ( Buffer == 10 )
        {
          *v7 = 10;
        }
        else
        {
          *v7 = 13;
          *((_BYTE *)&(*(&dword_4B7B38 + v12))[1].LockSemaphore + v4 + 2) = v13;
          v14 = v7 + 1;
        }
        v7 = v14;
        goto LABEL_27;
      }
      if ( Buffer == 10 && v7 == (char *)v3 )
      {
        *v7 = 10;
LABEL_26:
        ++v7;
        goto LABEL_27;
      }
      sub_474CB1(v3, v4, a1, -1, -1, 1u);
      if ( Buffer == 10 )
      {
LABEL_27:
        v6 = v22;
        goto LABEL_28;
      }
    }
    *v7 = 13;
    goto LABEL_26;
  }
  return &v7[-v3];
}
