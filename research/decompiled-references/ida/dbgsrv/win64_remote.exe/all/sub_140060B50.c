/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060B50
// Address: 0x0000000140060B50

//----- (0000000140060B50) ----------------------------------------------------
__int64 __fastcall sub_140060B50(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4, int a5)
{
  int v6; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx

  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 || (v6 = *(_DWORD *)(a1 + 40), (v6 & 1) != 0) )
  {
    if ( a5 < 4 )
      goto LABEL_4;
    v10 = *a2;
    if ( (unsigned __int16)(v10 + 10240) <= 0x3FFu )
      v10 = (a2[1] & 0x3FF) + 0x10000 + ((v10 & 0x3FF) << 10);
    if ( *(_DWORD *)a1 == 12000 )
    {
      *(_DWORD *)a4 = v10;
      return 4;
    }
    else
    {
      if ( *(_DWORD *)a1 == 12001 )
      {
        *(_BYTE *)(a4 + 3) = v10;
        *(_BYTE *)a4 = HIBYTE(v10);
        *(_BYTE *)(a4 + 1) = BYTE2(v10);
        *(_BYTE *)(a4 + 2) = BYTE1(v10);
      }
      return 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v6 | 1;
    if ( a5 < 4 )
    {
LABEL_4:
      *errno() = 7;
      return 0xFFFFFFFFLL;
    }
    if ( *(_DWORD *)a1 == 12000 )
    {
      *(_DWORD *)a4 = 65279;
    }
    else if ( *(_DWORD *)a1 == 12001 )
    {
      *(_DWORD *)a4 = -131072;
    }
    v8 = sub_140060B50(a1, (_DWORD)a2, a3, (int)a4 + 4, a5 - 4);
    v9 = v8 + 4;
    if ( v8 == -1 )
      return (unsigned int)-1;
    return v9;
  }
}
