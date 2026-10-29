/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411D20
// Address: 0x00411D20

//----- (00411D20) --------------------------------------------------------
char __userpurge sub_411D20@<al>(
        _DWORD *a1@<ecx>,
        __m128i a2@<xmm0>,
        unsigned __int16 *lpBuffer,
        SIZE_T nSize,
        LPVOID lpBaseAddress,
        char a6,
        int a7)
{
  int v8; // ecx
  char *v9; // eax
  char *v10; // eax
  unsigned __int8 *v12; // ebx
  _BYTE *v13; // eax
  bool v14; // bl
  LPVOID v15; // [esp+10h] [ebp-20h] BYREF
  char *v16; // [esp+14h] [ebp-1Ch] BYREF
  int v17; // [esp+18h] [ebp-18h]
  int v18; // [esp+1Ch] [ebp-14h]
  int v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-4h]
  int v21; // [esp+30h] [ebp+0h] BYREF
  char v22[272]; // [esp+34h] [ebp+4h] BYREF
  int v23; // [esp+144h] [ebp+114h]
  unsigned __int16 v24[1024]; // [esp+258h] [ebp+228h] BYREF
  CHAR Buffer[260]; // [esp+A58h] [ebp+A28h] BYREF
  CHAR MultiByteStr[260]; // [esp+B5Ch] [ebp+B2Ch] BYREF

  v8 = a7;
  v19 = a7;
  *(_BYTE *)lpBuffer = 0;
  if ( lpBaseAddress )
  {
    if ( sub_40C190((int)a1, a2, lpBaseAddress, &v15, 4u, 0, 0) == 4
      && v15
      && sub_40C190((int)a1, a2, v15, lpBuffer, nSize, 0, 0) == nSize )
    {
      if ( a6 )
        sub_4178E0((unsigned int)lpBuffer, nSize, lpBuffer);
      if ( sub_4567D0((unsigned __int8 *)lpBuffer) )
        return 1;
    }
    v8 = v19;
  }
  if ( dword_4B69E0 && dword_4B69E0(a1[113], v8, v24, 1024) )
  {
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v20 = 0;
    if ( sub_4173F0(a2, (int)&v16, v24) )
    {
      v9 = (char *)::MultiByteStr;
      if ( v17 )
        v9 = v16;
      sub_45ACB0((unsigned int)lpBuffer, v9, nSize);
      v20 = 1;
LABEL_23:
      if ( v16 )
      {
        v17 = 0;
        sub_453A20(v16);
      }
      return 1;
    }
    v20 = 2;
    if ( v16 )
    {
      v17 = 0;
      sub_453A20(v16);
    }
    v20 = -1;
  }
  if ( dword_4B69E4 && dword_4B69E4(a1[113], v19, v24, 1024) )
  {
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v20 = 3;
    sub_45A700((int)&v16, v24, -1);
    v10 = (char *)::MultiByteStr;
    if ( v17 )
      v10 = v16;
    sub_45ACB0((unsigned int)lpBuffer, v10, nSize);
    v20 = 4;
    goto LABEL_23;
  }
  sub_412170((int)a1, a2, (char *)v19, lpBuffer, nSize);
  if ( a1[123] )
    v12 = (unsigned __int8 *)a1[122];
  else
    v12 = (unsigned __int8 *)::MultiByteStr;
  if ( *(_BYTE *)lpBuffer && !sub_4567D0((unsigned __int8 *)lpBuffer) )
  {
    if ( (GetSystemDirectoryA(Buffer, 0x104u),
          sub_4569C0(MultiByteStr, 260, Buffer, lpBuffer, 0),
          sub_457B00(MultiByteStr))
      || *v12
      && !sub_4567D0(v12)
      && (sub_4565E0(Buffer, 0x104u, v12), sub_4569C0(MultiByteStr, 260, Buffer, lpBuffer, 0), sub_457B00(MultiByteStr))
      || GetCurrentDirectoryA(0x104u, Buffer)
      && (sub_4569C0(MultiByteStr, 260, Buffer, lpBuffer, 0), sub_457B00(MultiByteStr)) )
    {
      sub_45ACB0((unsigned int)lpBuffer, MultiByteStr, nSize);
    }
  }
  v23 = 0;
  v20 = 5;
  if ( !sub_45C230((int)v12, nSize, (LPCCH)lpBuffer, (int)&v21, 0) )
  {
    v13 = sub_456590(lpBuffer);
    sub_45ACB0((unsigned int)v13, v22, nSize + (char *)lpBuffer - v13);
  }
  v14 = *(_BYTE *)lpBuffer != 0;
  v20 = 6;
  sub_45C180((int)&v21);
  return v14;
}
// 4B69E0: using guessed type int (__stdcall *dword_4B69E0)(_DWORD, _DWORD, _DWORD, _DWORD);
// 4B69E4: using guessed type int (__stdcall *dword_4B69E4)(_DWORD, _DWORD, _DWORD, _DWORD);
