__int64 __fastcall sub_8E79E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 i; // rax
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rcx
  char v11; // r15
  __int64 v12; // rdx
  int v13; // eax
  int v15; // eax

  v1 = *a1;
  v2 = a1[4];
  v3 = a1[6];
  v4 = a1[5];
  v5 = (a1[1] - *a1) >> 3;
  if ( (_DWORD)v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    for ( i = 0; ; i = v8 )
    {
      _BitScanReverse(&v9, *(_DWORD *)(v1 + 8 * i));
      v10 = *(unsigned __int16 *)(v1 + 8 * i + 4);
      v11 = 31 - (v9 ^ 0x1F);
      v12 = *(unsigned __int16 *)(v1 + 8 * i + 6);
      if ( (unsigned int)v10 > 0x3F )
      {
        _BitScanReverse((unsigned int *)&v10, v10);
        *(_BYTE *)(v2 + i) = 50 - (v10 ^ 0x1F);
        *(_BYTE *)(v3 + i) = v11;
        if ( (unsigned int)v12 > 0x7F )
          goto LABEL_4;
      }
      else
      {
        *(_BYTE *)(v2 + i) = byte_23B2760[v10];
        *(_BYTE *)(v3 + i) = v11;
        if ( (unsigned int)v12 > 0x7F )
        {
LABEL_4:
          _BitScanReverse((unsigned int *)&v12, v12);
          *(_BYTE *)(v4 + i) = 67 - (v12 ^ 0x1F);
          v8 = i + 1;
          if ( i == v6 )
            goto LABEL_9;
          continue;
        }
      }
      *(_BYTE *)(v4 + i) = byte_23B26E0[v12];
      v8 = i + 1;
      if ( i == v6 )
      {
LABEL_9:
        v13 = *((_DWORD *)a1 + 18);
        if ( v13 == 1 )
        {
          *(_BYTE *)(v2 + *((unsigned int *)a1 + 19)) = 35;
          v13 = *((_DWORD *)a1 + 18);
        }
        if ( v13 == 2 )
          *(_BYTE *)(v4 + *((unsigned int *)a1 + 19)) = 52;
        return 0;
      }
    }
  }
  v15 = *((_DWORD *)a1 + 18);
  if ( v15 == 1 )
  {
    *(_BYTE *)(v2 + *((unsigned int *)a1 + 19)) = 35;
    v15 = *((_DWORD *)a1 + 18);
  }
  if ( v15 == 2 )
    *(_BYTE *)(v4 + *((unsigned int *)a1 + 19)) = 52;
  return 0;
}

