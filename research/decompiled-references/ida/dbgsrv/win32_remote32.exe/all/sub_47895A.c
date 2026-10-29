/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47895A
// Address: 0x0047895A

//----- (0047895A) --------------------------------------------------------
int __cdecl sub_47895A(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-20h] BYREF
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  char v8; // [esp+Ch] [ebp-14h]
  CHAR MultiByteStr; // [esp+10h] [ebp-10h] BYREF
  char v10; // [esp+11h] [ebp-Fh]
  char v11; // [esp+12h] [ebp-Eh]
  WORD CharType[2]; // [esp+14h] [ebp-Ch] BYREF
  __int16 v13; // [esp+18h] [ebp-8h]

  sub_467FF8((int)&v6, a3);
  if ( a1 >= -1 && a1 <= 255 )
  {
    v3 = *(unsigned __int16 *)(*(_DWORD *)v7 + 2 * a1);
    goto LABEL_12;
  }
  if ( *(__int16 *)(*(_DWORD *)v7 + 2 * BYTE1(a1)) >= 0 )
  {
    MultiByteStr = a1;
    v10 = 0;
    v4 = 1;
  }
  else
  {
    MultiByteStr = BYTE1(a1);
    v10 = a1;
    v11 = 0;
    v4 = 2;
  }
  *(_DWORD *)CharType = 0;
  v13 = 0;
  if ( sub_47E587(&v7, 1u, &MultiByteStr, v4, CharType, *(_DWORD *)(v7 + 8), 1) )
  {
    v3 = CharType[0];
LABEL_12:
    result = a2 & v3;
    if ( v8 )
      *(_DWORD *)(v6 + 848) &= ~2u;
    return result;
  }
  if ( v8 )
    *(_DWORD *)(v6 + 848) &= ~2u;
  return 0;
}
