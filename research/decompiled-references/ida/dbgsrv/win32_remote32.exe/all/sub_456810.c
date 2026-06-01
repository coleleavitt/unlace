/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456810
// Address: 0x00456810

//----- (00456810) --------------------------------------------------------
char *__stdcall sub_456810(char *a1, int a2, CHAR *lpMultiByteStr)
{
  unsigned int v3; // esi
  LPWSTR v4; // eax
  unsigned __int16 *v5; // ebx
  DWORD FullPathNameW; // eax
  char *v7; // eax
  char v8; // bl
  LPCWSTR lpFileName; // [esp+10h] [ebp-30h] BYREF
  unsigned int v11; // [esp+14h] [ebp-2Ch]
  char *v12; // [esp+1Ch] [ebp-24h] BYREF
  int v13; // [esp+20h] [ebp-20h]
  int v14; // [esp+24h] [ebp-1Ch]
  LPWSTR lpBuffer; // [esp+28h] [ebp-18h] BYREF
  int v16; // [esp+2Ch] [ebp-14h]
  int v17; // [esp+30h] [ebp-10h]
  int v18; // [esp+3Ch] [ebp-4h]

  v3 = a2;
  if ( a2 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  sub_4579C0((LPWSTR *)&lpFileName, lpMultiByteStr);
  v4 = nullptr;
  v18 = 1;
  lpBuffer = nullptr;
  v16 = 0;
  v17 = 0;
  a2 = 0;
  if ( v3 != -2 )
  {
    sub_456550((int)&lpBuffer, v3 + 2, &a2);
    v4 = lpBuffer;
  }
  v4[v3 + 1] = 0;
  if ( v11 <= 1 )
    goto LABEL_18;
  v5 = (unsigned __int16 *)&dword_48A0F4;
  FullPathNameW = GetFullPathNameW(lpFileName, v16 != 0 ? v16 - 1 : 0, lpBuffer, nullptr);
  if ( !FullPathNameW || FullPathNameW >= v3 )
    goto LABEL_18;
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  if ( v16 )
    v5 = lpBuffer;
  LOBYTE(v18) = 2;
  if ( sub_45A700((int)&v12, v5, FullPathNameW) && ((v13 - 1) & (unsigned int)-(v13 != 0)) < v3 )
  {
    v7 = (char *)MultiByteStr;
    if ( v13 )
      v7 = v12;
    v8 = 1;
    sub_45A4D0(a1, v7, v3);
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v18) = 3;
  if ( v12 )
  {
    v13 = 0;
    sub_453A20(v12);
  }
  LOBYTE(v18) = 1;
  if ( !v8 )
LABEL_18:
    sub_45A4D0(a1, lpMultiByteStr, v3);
  LOBYTE(v18) = 4;
  if ( lpBuffer )
  {
    v16 = 0;
    sub_453A20(lpBuffer);
    lpBuffer = nullptr;
    v17 = 0;
  }
  v18 = 5;
  if ( lpFileName )
  {
    v11 = 0;
    sub_453A20((void *)lpFileName);
  }
  return a1;
}
// 4568AE: conditional instruction was optimized away because %var_2C.4>=2u
// 48A0F4: using guessed type int dword_48A0F4;
// 4B70F0: using guessed type char byte_4B70F0;
