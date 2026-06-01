__int64 __fastcall sub_B843B0(_BYTE *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // edx
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v9; // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+88h] [rbp-20h] BYREF

  v7 = 1;
  v1 = &v8;
  do
  {
    *v1 = -1;
    v1 += 2;
  }
  while ( &v10 != v1 );
  v2 = sub_B816E0((__int64)&v7, (__int64)a1, 7u) & 7;
  if ( (v7 & 1) == 0 )
    operator delete(v8, 16LL * v9, 8);
  LOBYTE(v3) = sub_B8DA40(a1) & ((_BYTE)v2 == 6);
  v4 = v3;
  if ( (_BYTE)v3 )
  {
LABEL_14:
    v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1);
    if ( (((1LL << (*(_BYTE *)(v6 + 8) & 7)) & 0x19) != 0 || !(unsigned __int8)sub_B8DA40(v6))
      && (a1[28] & 0x7F) != 0x18 )
    {
      return v4;
    }
    return 1;
  }
  if ( (_BYTE)v2 != 3 )
  {
    if ( (_BYTE)v2 == 4 )
      return v4;
    if ( (_BYTE)v2 != 2 )
    {
      if ( (unsigned __int8)v2 <= 2u )
      {
        if ( (_BYTE)v2 == 1 )
          return v4;
      }
      else if ( (((_BYTE)v2 + 3) & 7u) <= 1 )
      {
        return 1;
      }
      goto LABEL_14;
    }
  }
  return 1;
}
