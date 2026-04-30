__int64 __fastcall sub_20C420(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  char *v11; // [rsp+8h] [rbp-40h] BYREF
  char v12; // [rsp+13h] [rbp-35h] BYREF
  _BYTE v13[4]; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v3 = 1;
  v5 = *a1;
  v14 = __readfsqword(0x28u);
  LOBYTE(v11) = 0;
  qlread(v5, &v11, 1);
  v12 = (char)v11;
  if ( (char)v11 < 0 )
  {
    v9 = *a1;
    if ( (~(_BYTE)v11 & 0xC0) != 0 )
    {
      v3 = 2;
      qlread(v9, v13, 1);
    }
    else
    {
      v3 = 4;
      v10 = 3;
      if ( (~(_BYTE)v11 & 0xE0) == 0 )
      {
        v3 = 5;
        v10 = 4;
      }
      qlread(v9, v13, v10);
    }
  }
  v11 = &v12;
  v7 = (unsigned int)unpack_dd(&v11, &v13[v3 - 1]);
  result = 0;
  if ( v7 < a3 )
  {
    if ( v7 )
      qlread(*a1, a2, v7);
    *(_BYTE *)(a2 + v7) = 0;
    return 1;
  }
  return result;
}
