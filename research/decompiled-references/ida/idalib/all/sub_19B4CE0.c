__int64 __fastcall sub_19B4CE0(__int64 *a1, __int64 a2, char a3, __m128 a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-30h]
  void *v13; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-20h]
  char v15; // [rsp+1Ch] [rbp-1Ch]

  result = sub_1C02150(a1, a2);
  if ( a3 == 1 && result != 1 )
  {
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x20000) == 0 )
    {
      v11 = sub_C00A40(result & 0xFFFFFFFFFFFFFFFELL, a2, v7, v8, v9);
      result = sub_19B4A30((__int64)a1, v10, v11, 0, 1, 0, a4, a5);
      if ( result != 1 )
      {
        v14 = 1;
        v13 = nullptr;
        v15 = 0;
        result = sub_1915C50(a1, result & 0xFFFFFFFFFFFFFFFELL, (__int64)&v13, 3479, 0, a4, a5);
        if ( v14 > 0x40 )
        {
          if ( v13 )
          {
            v12 = result;
            operator delete[](v13);
            return v12;
          }
        }
      }
    }
  }
  return result;
}
