/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4579C0
// Address: 0x004579C0

//----- (004579C0) --------------------------------------------------------
LPWSTR *__thiscall sub_4579C0(LPWSTR *this, LPCCH lpMultiByteStr)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  WCHAR *v6; // edi
  int v7; // ecx
  WCHAR *v8; // edx
  LPWSTR lpWideCharStr; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-1Ch]
  WCHAR *v12; // [esp+18h] [ebp-18h]
  LPWSTR *v13; // [esp+1Ch] [ebp-14h]
  int v14; // [esp+20h] [ebp-10h]
  int v15; // [esp+2Ch] [ebp-4h]

  v13 = this;
  *this = nullptr;
  *(this + 1) = nullptr;
  *(this + 2) = nullptr;
  v15 = 0;
  v3 = MultiByteToWideChar(0xFDE9u, 8u, lpMultiByteStr, -1, nullptr, 0);
  if ( v3 > 0 )
  {
    lpWideCharStr = nullptr;
    v11 = 0;
    v12 = nullptr;
    v4 = v3 + 1;
    LOBYTE(v15) = 1;
    v5 = v3 + 2;
    lpWideCharStr = (LPWSTR)sub_453B00((int)&lpWideCharStr, nullptr, v3 + 2, 2u);
    sub_464890((__m128i *)&lpWideCharStr[v11], 0, 2 * (v5 - v11));
    v11 = v4 + 1;
    v14 = 0;
    lpWideCharStr[v4] = 0;
    if ( MultiByteToWideChar(0xFDE9u, 8u, lpMultiByteStr, -1, lpWideCharStr, v11) <= 0 )
    {
      v6 = lpWideCharStr;
    }
    else
    {
      v6 = *this;
      v7 = (int)*(this + 1);
      v8 = *(this + 2);
      *this = lpWideCharStr;
      *(this + 1) = (LPWSTR)v11;
      *(this + 2) = v12;
      lpWideCharStr = v6;
      v11 = v7;
      v12 = v8;
    }
    LOBYTE(v15) = 2;
    if ( v6 )
    {
      v11 = 0;
      sub_453A20(v6);
    }
  }
  return this;
}
// 457A3E: conditional instruction was optimized away because eax.4>=1
// 457A45: conditional instruction was optimized away because eax.4>=1
