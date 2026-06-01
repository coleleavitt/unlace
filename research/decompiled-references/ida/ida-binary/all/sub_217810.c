__int64 __fastcall sub_217810(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v3; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // [rsp+8h] [rbp-30h] BYREF
  char v8; // [rsp+13h] [rbp-25h] BYREF
  _BYTE v9[4]; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = 1;
  v10 = __readfsqword(0x28u);
  v3 = *a1;
  LOBYTE(v7) = 0;
  qlread(v3, &v7, 1);
  v8 = (char)v7;
  if ( (char)v7 < 0 )
  {
    v5 = *a1;
    if ( (~(_BYTE)v7 & 0xC0) != 0 )
    {
      v1 = 2;
      qlread(v5, v9, 1);
    }
    else
    {
      v1 = 4;
      v6 = 3;
      if ( (~(_BYTE)v7 & 0xE0) == 0 )
      {
        v1 = 5;
        v6 = 4;
      }
      qlread(v5, v9, v6);
    }
  }
  v7 = &v8;
  return unpack_dd(&v7, &v9[v1 - 1]);
}
