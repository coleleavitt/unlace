/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4690AB
// Address: 0x004690AB

//----- (004690AB) --------------------------------------------------------
int __cdecl sub_4690AB(int a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  int v6; // [esp+4h] [ebp-1Ch] BYREF
  int v7[2]; // [esp+8h] [ebp-18h] BYREF
  char v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  WCHAR DestStr; // [esp+18h] [ebp-8h] BYREF
  char v11; // [esp+1Ah] [ebp-6h]
  CHAR MultiByteStr; // [esp+1Ch] [ebp-4h] BYREF
  char v13; // [esp+1Dh] [ebp-3h]
  char v14; // [esp+1Eh] [ebp-2h]

  v2 = -1;
  if ( a1 != -1 )
  {
    sub_467FF8((int)&v6, a2);
    if ( (unsigned int)a1 >= 0x100 )
    {
      v14 = 0;
      if ( *(int *)(v7[0] + 4) > 1 && (v9 = a1 >> 8, sub_478A25(BYTE1(a1), v7)) )
      {
        MultiByteStr = v9;
        v13 = a1;
        v14 = 0;
        v3 = 2;
      }
      else
      {
        *sub_46B984() = 42;
        MultiByteStr = a1;
        v3 = 1;
        v13 = 0;
      }
      DestStr = 0;
      v11 = 0;
      v4 = sub_478C49(
             v7,
             *(unsigned __int16 **)(v7[0] + 168),
             0x100u,
             &MultiByteStr,
             v3,
             &DestStr,
             3,
             *(_DWORD *)(v7[0] + 8),
             1);
      if ( v4 )
      {
        v2 = (unsigned __int8)DestStr;
        if ( v4 != 1 )
          v2 = HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
      }
      else
      {
        v2 = a1;
      }
      if ( v8 )
        *(_DWORD *)(v6 + 848) &= ~2u;
    }
    else
    {
      v2 = *(unsigned __int8 *)(*(_DWORD *)(v7[0] + 148) + (unsigned __int8)a1);
      if ( v8 )
        *(_DWORD *)(v6 + 848) &= ~2u;
    }
  }
  return v2;
}
