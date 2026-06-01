__int64 __fastcall sub_217D20(__int64 a1, __int64 *a2)
{
  bool v3; // cc
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rdx
  char *v9; // [rsp+8h] [rbp-40h] BYREF
  char v10; // [rsp+13h] [rbp-35h] BYREF
  _BYTE v11[4]; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_BYTE *)a1 <= 7u;
  v12 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v4 = (unsigned int)sub_217810(a2);
    result = v4 | (sub_217810(a2) << 32);
    if ( result != *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) )
      return result;
    return -1;
  }
  v6 = *a2;
  LOBYTE(v9) = 0;
  v7 = 1;
  qlread(v6, &v9, 1);
  v10 = (char)v9;
  if ( (char)v9 < 0 )
  {
    if ( (~(_BYTE)v9 & 0xC0) != 0 )
    {
      v7 = 2;
      v8 = 1;
    }
    else
    {
      v7 = 4;
      v8 = 3;
      if ( (~(_BYTE)v9 & 0xE0) == 0 )
      {
        v7 = 5;
        v8 = 4;
      }
    }
    qlread(*a2, v11, v8);
  }
  v9 = &v10;
  result = (unsigned int)unpack_dd(&v9, &v11[v7 - 1]);
  if ( (unsigned int)result == *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) )
    return -1;
  return result;
}
