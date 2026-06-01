/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4796DB
// Address: 0x004796DB

//----- (004796DB) --------------------------------------------------------
int __cdecl sub_4796DB(int *a1, __m128i *lpMultiByteStr, unsigned int cbMultiByte, WCHAR WideCharStr, _DWORD *a5)
{
  int v6; // esi
  UINT v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  char v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h] BYREF

  if ( lpMultiByteStr || !cbMultiByte )
  {
    if ( a1 )
      *a1 = -1;
    if ( cbMultiByte > 0x7FFFFFFF )
    {
      v6 = 22;
      *sub_46B984() = 22;
      sub_467EF4((int)a1, (int)lpMultiByteStr);
      return v6;
    }
    sub_467FF8((int)&v10, a5);
    v6 = 0;
    v7 = *(_DWORD *)(v11 + 8);
    if ( v7 == 65001 )
    {
      v13 = 0;
      v14 = 0;
      v8 = sub_47F04B(lpMultiByteStr, WideCharStr, &v13);
      if ( a1 )
        *a1 = v8;
      if ( v8 > 4 )
        v6 = *sub_46B984();
      goto LABEL_21;
    }
    if ( *(_DWORD *)(v11 + 168) )
    {
      v14 = 0;
      v9 = sub_47B467(v7, 0, &WideCharStr, 1, lpMultiByteStr->m128i_i8, cbMultiByte, nullptr, &v14);
      if ( v9 )
      {
        if ( !v14 )
        {
          if ( a1 )
            *a1 = v9;
          goto LABEL_21;
        }
        goto LABEL_20;
      }
      if ( GetLastError() != 122 )
      {
LABEL_20:
        v6 = 42;
        *sub_46B984() = 42;
        goto LABEL_21;
      }
      if ( lpMultiByteStr && cbMultiByte )
        sub_464890(lpMultiByteStr, 0, cbMultiByte);
    }
    else
    {
      if ( WideCharStr > 0xFFu )
      {
        if ( lpMultiByteStr && cbMultiByte )
          sub_464890(lpMultiByteStr, 0, cbMultiByte);
        goto LABEL_20;
      }
      if ( !lpMultiByteStr )
      {
LABEL_27:
        if ( a1 )
          *a1 = 1;
        goto LABEL_21;
      }
      if ( cbMultiByte )
      {
        lpMultiByteStr->m128i_i8[0] = WideCharStr;
        goto LABEL_27;
      }
    }
    v6 = 34;
    *sub_46B984() = 34;
    sub_467EF4((int)a1, (int)lpMultiByteStr);
LABEL_21:
    if ( v12 )
      *(_DWORD *)(v10 + 848) &= ~2u;
    return v6;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}
