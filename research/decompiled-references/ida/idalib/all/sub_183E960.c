__int64 __fastcall sub_183E960(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-48h] BYREF
  int v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]

  v2 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v2 = (__int64 *)v2[4];
  if ( !v2 )
    return 0;
  result = 0;
  v4 = *v2;
  if ( !(*v2 & 7 | (*v2 >> 3) & 1) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && v4 )
    {
      v13 = 16777472;
      v12 = off_2C54F08;
      v14 = a1;
      if ( (*(_BYTE *)(v4 + 20) & 1) != 0 )
      {
        sub_F6C520(*(_QWORD *)(v4 + 24));
        if ( !(unsigned __int8)sub_BC8430((__int64)&v12, *(_QWORD *)(v4 + 24)) )
          return 1;
      }
      if ( (unsigned __int8)sub_183E600(a1, a2) )
        return 1;
      v10 = *(_QWORD *)(a2 + 56);
      if ( (v10 & 4) != 0
        && (v11 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 40)) != 0
        && !(unsigned __int8)sub_BC97E0((__int64 *)&v12, v11) )
      {
        return 1;
      }
      else
      {
        return sub_183E800(a1, a2, v6, v7, v8, v9);
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
