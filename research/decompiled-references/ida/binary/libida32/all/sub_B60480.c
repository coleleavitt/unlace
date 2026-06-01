__int64 __fastcall sub_B60480(__int64 a1)
{
  __int64 *v1; // rax
  char v2; // bl
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+88h] [rbp-20h] BYREF

  v6 = 1;
  v1 = &v7;
  do
  {
    *v1 = -1;
    v1 += 2;
  }
  while ( &v8 != v1 );
  v2 = sub_B5D9A0((__int64)&v6, a1, 7u) & 7;
  if ( (v6 & 1) == 0 )
    operator delete();
  if ( v2 == 3 || (result = 2, v2 == 6) )
  {
    v4 = *(_QWORD *)(sub_B685F0(a1) + 2320);
    result = 0;
    if ( (*(_BYTE *)(v4 + 1) & 8) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      result = 1;
      if ( ((*(_BYTE *)(v5 + 8) + 70) & 0x7Fu) > 3 )
        return (unsigned __int8)sub_B50F80(*(_QWORD *)(a1 + 112)) ^ 1u;
    }
  }
  return result;
}

