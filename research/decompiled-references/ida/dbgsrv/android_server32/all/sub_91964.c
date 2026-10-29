/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91964
// Address: 0x00091964

//----- (00091964) --------------------------------------------------------
int __fastcall sub_91964(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v10; // zf
  int v11; // r11
  int v12; // r0
  unsigned int v13; // r11
  unsigned int v14; // r5
  _DWORD *v15; // r5
  int v16; // r9
  unsigned int v17; // r11
  __int64 v18; // r0
  bool v19; // zf
  bool v20; // zf
  int v21; // [sp+8h] [bp-20h]

  if ( sub_91274(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    result = *(_DWORD *)(a2 + 4);
    if ( result == a3 )
    {
      result = *(_DWORD *)(a2 + 28);
      if ( result != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
  }
  else if ( sub_91274(a1, *(_DWORD *)a2, a5) )
  {
    result = *(_DWORD *)(a2 + 16);
    v10 = result == a3;
    if ( result != a3 )
    {
      result = *(_DWORD *)(a2 + 20);
      v10 = result == a3;
    }
    if ( v10 )
    {
      if ( a4 == 1 )
      {
        result = 1;
        *(_DWORD *)(a2 + 32) = 1;
      }
    }
    else
    {
      result = *(_DWORD *)(a2 + 44);
      *(_DWORD *)(a2 + 32) = a4;
      if ( result != 4 )
      {
        v15 = (_DWORD *)(a1 + 16);
        v16 = 0;
        v17 = a1 + 16 + 8 * *(_DWORD *)(a1 + 12);
        v21 = 0;
        while ( (unsigned int)v15 < v17 )
        {
          *(_WORD *)(a2 + 52) = 0;
          sub_91B02(v15, a2);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          if ( *(_BYTE *)(a2 + 53) )
          {
            if ( *(_BYTE *)(a2 + 52) )
            {
              if ( *(_DWORD *)(a2 + 24) == 1 || (*(_BYTE *)(a1 + 8) & 2) == 0 )
                goto LABEL_37;
              v16 = 1;
              v21 = 1;
            }
            else
            {
              v16 = 1;
              if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
                break;
            }
          }
          v15 += 2;
        }
        if ( !(v21 << 31) )
        {
          v18 = *(_QWORD *)(a2 + 36);
          *(_DWORD *)(a2 + 20) = a3;
          *(_DWORD *)(a2 + 40) = HIDWORD(v18) + 1;
          v19 = (_DWORD)v18 == 1;
          if ( (_DWORD)v18 == 1 )
            v19 = *(_DWORD *)(a2 + 24) == 2;
          if ( v19 )
            *(_BYTE *)(a2 + 54) = 1;
        }
        if ( v16 << 31 )
        {
LABEL_37:
          result = 3;
          goto LABEL_50;
        }
        result = 4;
LABEL_50:
        *(_DWORD *)(a2 + 44) = result;
      }
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 12);
    result = sub_91B3C(a1 + 16);
    if ( v11 >= 2 )
    {
      v12 = *(_DWORD *)(a1 + 8);
      v13 = a1 + 16 + 8 * v11;
      v14 = a1 + 24;
      if ( (v12 & 2) != 0 || *(_DWORD *)(a2 + 36) == 1 )
      {
        do
        {
          result = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          result = sub_91B3C(v14);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
      else if ( v12 << 31 )
      {
        do
        {
          result = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          result = *(_DWORD *)(a2 + 36);
          v20 = result == 1;
          if ( result == 1 )
          {
            result = *(_DWORD *)(a2 + 24);
            v20 = result == 1;
          }
          if ( v20 )
            break;
          result = sub_91B3C(v14);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
      else
      {
        do
        {
          result = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          result = *(_DWORD *)(a2 + 36);
          if ( result == 1 )
            break;
          result = sub_91B3C(v14);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
    }
  }
  return result;
}
