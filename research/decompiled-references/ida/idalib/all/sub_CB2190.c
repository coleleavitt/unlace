__int64 __fastcall sub_CB2190(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_CE6180(a1[61], *(_QWORD *)(a2 + 8));
  if ( !BYTE4(v2) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 14
      && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a2) )
    {
      return sub_CB1F60((__int64)a1, a2, v4, v5);
    }
    return 0;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a2);
  if ( !(_BYTE)result )
    return 0;
  if ( (_DWORD)v2 != 10 )
  {
    v8[0] = a2 | 4;
    if ( (_DWORD)v2 == 13 )
    {
      return sub_CAB3E0((__int64)a1, v8);
    }
    else if ( (_DWORD)v2 == 12 )
    {
      v6 = sub_CE6170(a1[61]);
      v7 = sub_BFE5A0(a2, v6);
      return sub_CA4280((__int64)a1, v7, v8);
    }
    else
    {
      return sub_CA0510((__int64)a1, v2, 10, v8);
    }
  }
  return result;
}
