/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BFDB
// Address: 0x0047BFDB

//----- (0047BFDB) --------------------------------------------------------
BOOL __cdecl sub_47BFDB(LPCCH lpMultiByteStr, LPCCH a2)
{
  BOOL v2; // ebx
  WCHAR *v3; // esi
  UINT v4; // eax
  UINT v5; // eax
  int v6; // eax
  int v8[2]; // [esp+8h] [ebp-30h] BYREF
  LPCWSTR lpName; // [esp+10h] [ebp-28h]
  int v10; // [esp+14h] [ebp-24h]
  int v11; // [esp+18h] [ebp-20h]
  char v12; // [esp+1Ch] [ebp-1Ch]
  int v13[2]; // [esp+20h] [ebp-18h] BYREF
  LPCWSTR lpValue; // [esp+28h] [ebp-10h]
  int v15; // [esp+2Ch] [ebp-Ch]
  int v16; // [esp+30h] [ebp-8h]
  char v17; // [esp+34h] [ebp-4h]

  v2 = 0;
  v3 = nullptr;
  v8[0] = 0;
  v8[1] = 0;
  lpName = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13[0] = 0;
  v13[1] = 0;
  lpValue = nullptr;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v4 = sub_47246A();
  if ( !sub_46D18F(lpMultiByteStr, (int)v8, v4) )
  {
    v5 = sub_47246A();
    v6 = sub_46D18F(a2, (int)v13, v5);
    v3 = (WCHAR *)lpValue;
    if ( !v6 )
      v2 = SetEnvironmentVariableW(lpName, lpValue);
  }
  if ( v17 )
    sub_479216(v3);
  if ( v12 )
    sub_479216((LPVOID)lpName);
  return v2;
}
