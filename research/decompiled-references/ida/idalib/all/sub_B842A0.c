__int64 __fastcall sub_B842A0(__int64 a1)
{
  __int64 *v2; // rax
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-98h]
  __int64 v11; // [rsp+88h] [rbp-20h] BYREF

  v8 = 1;
  v2 = &v9;
  do
  {
    *v2 = -1;
    v2 += 2;
  }
  while ( &v11 != v2 );
  v3 = sub_B816E0((__int64)&v8, a1, 7u) & 7;
  if ( (v8 & 1) == 0 )
    operator delete(v9, 16LL * v10, 8);
  if ( v3 == 3 || (result = 2, v3 == 6) )
  {
    v5 = *(_QWORD *)(sub_B8C330(a1) + 2320);
    result = 0;
    if ( (*(_BYTE *)(v5 + 1) & 8) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v6 = *(_QWORD *)v6;
      result = 1;
      if ( ((*(_BYTE *)(v6 + 8) + 70) & 0x7Fu) > 3 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
          return (unsigned __int8)sub_B8E4C0(*(_QWORD *)(v7 + 8)) ^ 1u;
        else
          return (unsigned __int8)sub_B8E4C0(v7) ^ 1u;
      }
    }
  }
  return result;
}
