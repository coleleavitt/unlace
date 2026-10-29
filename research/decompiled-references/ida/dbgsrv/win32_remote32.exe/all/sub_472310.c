/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472310
// Address: 0x00472310

//----- (00472310) --------------------------------------------------------
__m128i *__cdecl sub_472310(unsigned int a1, _WORD *a2, int a3)
{
  int v4; // esi
  __m128i *v5; // esi
  int v6; // [esp+8h] [ebp-24h] BYREF
  int v7; // [esp+Ch] [ebp-20h]
  LPVOID v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+18h] [ebp-14h]
  char v11; // [esp+1Ch] [ebp-10h]
  __int64 FileName; // [esp+20h] [ebp-Ch] BYREF

  if ( a3 < 0 )
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a2, a3);
    return nullptr;
  }
  v4 = a1;
  if ( a1 )
  {
    if ( !sub_472573((int)a2, a3, a1) )
    {
      *sub_46B971() = 15;
      *sub_46B984() = 13;
LABEL_6:
      sub_467EF4((int)a2, a3);
      return nullptr;
    }
  }
  else
  {
    v4 = sub_47BF37();
  }
  if ( v4 )
  {
    LOWORD(FileName) = v4 + 64;
    wcscpy((wchar_t *)&FileName + 1, L":.");
  }
  else
  {
    wcscpy((wchar_t *)&FileName, L".");
  }
  if ( a2 )
  {
    if ( a3 > 0 )
    {
      v6 = (int)a2;
      *a2 = 0;
      v10 = 0;
      v11 = 0;
      v7 = a3;
      v8 = a2;
      v9 = a3;
      if ( !sub_47223E((LPCWSTR)&FileName, (int)&v6) )
        return (__m128i *)a2;
      return nullptr;
    }
    *sub_46B984() = 22;
    goto LABEL_6;
  }
  v6 = 0;
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_4724C3((int)&v6, a3);
  if ( sub_4722A7((LPCWSTR)&FileName, (int)&v6) )
  {
    if ( v11 )
      sub_46C918(v8);
    return nullptr;
  }
  v5 = sub_472521(&v6, 0);
  if ( v11 )
    sub_46C918(v8);
  return v5;
}
