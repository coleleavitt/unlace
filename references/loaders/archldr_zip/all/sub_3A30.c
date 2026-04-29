__int64 __fastcall sub_3A30(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  char v13[20]; // [rsp+20h] [rbp-238h] BYREF
  char v14[88]; // [rsp+34h] [rbp-224h] BYREF
  char v15[4]; // [rsp+8Ch] [rbp-1CCh] BYREF
  __m128i v16[4]; // [rsp+90h] [rbp-1C8h] BYREF
  char nptr[60]; // [rsp+D4h] [rbp-184h] BYREF
  _BYTE v18[264]; // [rsp+110h] [rbp-148h] BYREF
  unsigned __int64 v19; // [rsp+218h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v3 = sub_3850(v16, a1);
  result = 2;
  if ( v3 )
  {
    v5 = strtoll(nptr, nullptr, 10);
    while ( 1 )
    {
      do
      {
        if ( !v5 )
          return 0;
        qlseek(a1, v5, 0);
        if ( !sub_39A0((__int64)v13, v16, a1) )
          return 2;
        v5 = strtoll(v14, nullptr, 10);
        v6 = strtol(v15, nullptr, 10);
      }
      while ( !v6 );
      if ( v6 > 0xFF )
        break;
      v7 = v6;
      v8 = qlread(a1, v18, v6);
      if ( v8 != v7 )
        return 2;
      v18[v8] = 0;
      v9 = qlseek(a1, 2, 1);
      v10 = v9;
      if ( (v9 & 1) != 0 )
      {
        v10 = v9 + 1;
        qlseek(a1, v9 + 1, 0);
      }
      v11 = strtoll(v13, nullptr, 10);
      result = a2(a3, v10, 0, v11, v11, 0, v18);
      if ( (_DWORD)result )
        return result;
    }
    return 3;
  }
  return result;
}
