__int64 __fastcall sub_CB4830(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_C960B0(a2) )
  {
    if ( *(char *)(sub_CE6170(*(_QWORD *)(a1 + 1264)) + 1) >= 0 )
    {
      v8[0] = a2 | 4;
      result = sub_D00AB0(a1, v8);
      if ( !(_BYTE)result )
        return result;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(
            a1,
            *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return 0;
    v8[0] = a2 | 4;
    if ( !(unsigned __int8)sub_D067B0(a1, v2, v8) )
      return 0;
    if ( *(_BYTE *)(a1 + 1360) )
    {
      v8[0] = a2 | 4;
      return sub_D07CE0(a1, v8);
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 1360) )
    return 1;
  v5 = *(_QWORD *)(a2 + 16);
  v8[0] = a2 | 4;
  if ( (v5 & 4) != 0 )
    v6 = sub_C93DC0(a2, **(_QWORD ***)(a1 + 1264), a2 | 4, v3, v4);
  else
    v6 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return sub_D06770(
           a1,
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
           v2,
           v8);
}
