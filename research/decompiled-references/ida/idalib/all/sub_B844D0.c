__int64 __fastcall sub_B844D0(_BYTE *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v8; // [rsp+10h] [rbp-98h]
  __int64 v9; // [rsp+88h] [rbp-20h] BYREF

  v6 = 1;
  v1 = &v7;
  do
  {
    *v1 = -1;
    v1 += 2;
  }
  while ( &v9 != v1 );
  v2 = sub_B816E0((__int64)&v6, (__int64)a1, 7u) & 7;
  if ( (v6 & 1) == 0 )
    operator delete(v7, 16LL * v8, 8);
  v3 = sub_B8DA40(a1);
  if ( (_BYTE)v2 == 6 && v3 )
  {
    v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1);
    if ( ((1LL << (*(_BYTE *)(v5 + 8) & 7)) & 0x19) == 0 && (unsigned __int8)sub_B8DA40(v5) )
      return 6;
    result = 5;
    if ( (a1[28] & 0x7F) == 0x18 )
      return 6;
  }
  else
  {
    result = 6;
    if ( (_BYTE)v2 != 3 )
    {
      result = 1;
      if ( (_BYTE)v2 != 4 )
        return (unsigned int)v2;
    }
  }
  return result;
}
