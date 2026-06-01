/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26C34
// Address: 0x00026C34

//----- (00026C34) --------------------------------------------------------
int __fastcall sub_26C34(int result, int *a2, int a3)
{
  int v4; // r1
  _DWORD *v5; // r5
  int v6; // r2
  int v7; // r1
  void **v8; // r7
  unsigned int v9; // r6
  void *v10; // r0
  void **v11; // r7
  unsigned int v12; // r2
  void *v13; // r0
  unsigned int v14; // [sp+4h] [bp-4h]

  v4 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 3 )
    return (*(int (__fastcall **)(int, int *, _DWORD))(result + 8))(a3, a2, *(_DWORD *)(result + 16));
  v5 = (_DWORD *)(a3 + *(_DWORD *)(result + 8));
  switch ( v4 )
  {
    case 2:
      v8 = (void **)(a2 + 2);
      v9 = *(_DWORD *)(result + 12);
      if ( *a2 >= -1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          a2[3] = 0;
          qfree(v10);
          a2[4] = 0;
          a2[2] = 0;
        }
        *a2 = -2;
      }
      sub_26D34((int)(a2 + 2), v5, v9);
      result = 0;
      goto LABEL_18;
    case 1:
      v11 = (void **)(a2 + 2);
      v12 = *(_DWORD *)(result + 12);
      if ( *a2 >= -1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = v12;
          a2[3] = 0;
          qfree(v13);
          a2[4] = 0;
          a2[2] = 0;
          v12 = v14;
        }
        *a2 = -2;
      }
      sub_26D34((int)(a2 + 2), v5, v12);
      result = -1;
LABEL_18:
      *a2 = result;
      return result;
    case 0:
      v6 = 0;
      v7 = 0;
      switch ( *(_DWORD *)(result + 12) )
      {
        case 1:
          v7 = *(unsigned __int8 *)v5;
          v6 = 0;
          break;
        case 2:
          v7 = *(unsigned __int16 *)v5;
          v6 = 0;
          break;
        case 4:
          v7 = *v5;
          v6 = 0;
          break;
        case 8:
          v7 = *v5;
          v6 = v5[1];
          break;
        default:
          break;
      }
      result = *(_DWORD *)(result + 16);
      if ( result != 4 )
      {
        if ( result == 2 )
        {
          result = 0xFFFF;
        }
        else
        {
          if ( result != 1 )
          {
LABEL_30:
            a2[2] = v7;
            a2[3] = v6;
            return result;
          }
          result = 255;
        }
        v7 &= result;
      }
      v6 = 0;
      goto LABEL_30;
  }
  return result;
}
