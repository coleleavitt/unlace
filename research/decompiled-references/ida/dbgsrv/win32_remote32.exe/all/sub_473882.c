/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473882
// Address: 0x00473882

//----- (00473882) --------------------------------------------------------
unsigned int __cdecl sub_473882(int a1, __int16 *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  __int16 *v6; // edx
  __int16 *v7; // esi
  __int16 v8; // cx
  __int16 *v9; // eax
  __int16 v10; // ax
  int v11; // ecx
  __int16 v12; // dx
  __int16 *v13; // eax
  __int16 v14; // ax
  int v15; // ecx
  char v16; // al
  int v18; // [esp-4h] [ebp-34h]
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-1Ch] BYREF
  HANDLE hFile; // [esp+18h] [ebp-18h]
  int v21; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  __int16 *v23; // [esp+24h] [ebp-Ch]
  __int16 *v24; // [esp+28h] [ebp-8h]
  __int16 Buffer; // [esp+2Ch] [ebp-4h] BYREF

  v3 = (int)a2;
  v4 = 56 * (a1 & 0x3F);
  v22 = a1 >> 6;
  v5 = (int)*(&dword_4B7B38 + (a1 >> 6));
  hFile = *(HANDLE *)(v4 + v5 + 24);
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v4 + v5 + 40) |= 4u;
  else
    *(_BYTE *)(v4 + v5 + 40) &= ~4u;
  v6 = a2;
  v23 = &a2[a3];
  v7 = a2;
  if ( a2 < v23 )
  {
    v21 = 13;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == 26 )
      {
        v15 = (int)*(&dword_4B7B38 + v22);
        v16 = *(_BYTE *)(v15 + v4 + 40);
        if ( (v16 & 0x40) != 0 )
          *v7++ = 26;
        else
          *(_BYTE *)(v15 + v4 + 40) = v16 | 2;
        return ((unsigned int)v7 - v3) & 0xFFFFFFFE;
      }
      v9 = v6 + 1;
      if ( v8 == (_WORD)v21 )
        break;
      *v7 = v8;
      ++v6;
      ++v7;
LABEL_28:
      if ( v6 >= v23 )
        return ((unsigned int)v7 - v3) & 0xFFFFFFFE;
    }
    if ( v9 < v23 )
    {
      v24 = v7 + 1;
      if ( *v9 == 10 )
      {
        v10 = 10;
        v18 = 4;
      }
      else
      {
        v10 = v8;
        v18 = 2;
      }
      v3 = (int)a2;
      *v7 = v10;
      v6 = (__int16 *)((char *)v6 + v18);
      v7 = v24;
      goto LABEL_28;
    }
    v24 = v6 + 1;
    if ( ReadFile(hFile, &Buffer, 2u, &NumberOfBytesRead, nullptr) && NumberOfBytesRead )
    {
      v11 = v22;
      if ( (*((_BYTE *)&(*(&dword_4B7B38 + v22))[1].LockSemaphore + v4) & 0x48) != 0 )
      {
        v12 = Buffer;
        v13 = v7 + 1;
        if ( Buffer == 10 )
        {
          *v7 = 10;
        }
        else
        {
          *v7 = 13;
          *(_WORD *)((char *)&(*(&dword_4B7B38 + v11))[1].LockSemaphore + v4 + 2) = v12;
          *((_BYTE *)&(*(&dword_4B7B38 + v11))[1].SpinCount + v4) = 10;
          v13 = v7 + 1;
        }
        v7 = v13;
        goto LABEL_27;
      }
      v14 = 10;
      if ( Buffer == 10 && v7 == (__int16 *)v3 )
        goto LABEL_26;
      sub_474CB1(v3, v4, a1, -2, -1, 1u);
      if ( Buffer == 10 )
      {
LABEL_27:
        v6 = v24;
        goto LABEL_28;
      }
    }
    v14 = 13;
LABEL_26:
    *v7++ = v14;
    goto LABEL_27;
  }
  return ((unsigned int)v7 - v3) & 0xFFFFFFFE;
}
