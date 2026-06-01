__int64 __fastcall sub_C9F760(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // [rsp-10h] [rbp-68h]
  __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  if ( *(_BYTE *)(a1 + 584) )
    return sub_CA37C0(a1, *(_QWORD *)(a2 + 32));
  if ( *(_BYTE *)(a1 + 586) )
  {
    result = sub_C9FC20(a1, *(_QWORD *)(a2 + 32));
    if ( (_BYTE)result )
    {
      v13[0] = a2 | 4;
      return sub_C7D470(a1, v13);
    }
    return result;
  }
  v5 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
  {
    if ( BYTE4(v5) && ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
      return sub_CA89D0(a1, v2);
    v10 = sub_E0AD60(*(_QWORD *)(a1 + 496), a2);
    result = HIDWORD(v10);
    if ( !BYTE4(v10) )
      return result;
    v9 = a2 | 4;
    v13[0] = a2 | 4;
    if ( (unsigned __int8)sub_C80E30(a1, v10, v13) )
    {
      if ( BYTE4(v5) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v2) )
        {
          v13[0] = a2 | 4;
          return sub_C813A0(a1, v5, v10, v13);
        }
        return 0;
      }
      result = sub_C9FC20(a1, v2);
      if ( !(_BYTE)result )
        return result;
LABEL_27:
      v13[0] = v9;
      return sub_C7D470(a1, v13);
    }
    return 0;
  }
  if ( !BYTE4(v5) )
  {
    v13[0] = v2 | 2;
    v6 = sub_C986D0(a1, v13, 0, 0, 1, 0);
    v7 = v6;
    v8 = HIDWORD(v6);
    result = HIDWORD(v6);
    if ( !(_BYTE)v8 )
      return result;
    v9 = a2 | 4;
    v13[0] = v9;
    if ( (unsigned __int8)sub_C80E60(a1, v7, v13) )
    {
      result = sub_C9FC20(a1, v2);
      if ( !(_BYTE)result )
        return result;
      goto LABEL_27;
    }
    return 0;
  }
  if ( ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
    return sub_CA89D0(a1, v2);
  v13[0] = v2 | 2;
  v11 = sub_C9B2B0(a1, v13, v5, 0, 0, 1, 0);
  v13[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C80E60(a1, v11, v13) )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v2, v12);
  if ( (_BYTE)result )
  {
    v13[0] = a2 | 4;
    return sub_C7E180(a1, v5, v13);
  }
  return result;
}

