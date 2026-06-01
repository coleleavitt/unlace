__int64 __fastcall sub_CD66D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // [rsp-10h] [rbp-68h]
  __int64 v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  if ( *(_BYTE *)(a1 + 1360) )
    return sub_CDA710(a1, *(_QWORD *)(a2 + 32));
  if ( *(_BYTE *)(a1 + 1362) )
  {
    result = sub_CD6B90(a1, *(_QWORD *)(a2 + 32));
    if ( (_BYTE)result )
    {
      v11[0] = a2 | 4;
      return sub_D00E60(a1, v11);
    }
    return result;
  }
  v5 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
  if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
  {
    if ( BYTE4(v5) && ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
      return sub_CDF950(a1, v2);
    v8 = sub_E2EAA0(*(_QWORD *)(a1 + 1272), a2);
    result = HIDWORD(v8);
    if ( !BYTE4(v8) )
      return result;
    v7 = a2 | 4;
    v11[0] = a2 | 4;
    if ( (unsigned __int8)sub_D06300(a1, (unsigned int)v8, v11) )
    {
      if ( BYTE4(v5) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v2) )
        {
          v11[0] = a2 | 4;
          return sub_D474E0(a1, (unsigned int)v5, (unsigned int)v8, v11);
        }
        return 0;
      }
      result = sub_CD6B90(a1, v2);
      if ( !(_BYTE)result )
        return result;
LABEL_27:
      v11[0] = v7;
      return sub_D00E60(a1, v11);
    }
    return 0;
  }
  if ( !BYTE4(v5) )
  {
    v11[0] = v2 | 2;
    v6 = sub_CBCD40(a1, v11, 0, 0, 1, 0);
    result = HIDWORD(v6);
    if ( !BYTE4(v6) )
      return result;
    v7 = a2 | 4;
    v11[0] = v7;
    if ( (unsigned __int8)sub_CFF720(a1, v6, v11) )
    {
      result = sub_CD6B90(a1, v2);
      if ( !(_BYTE)result )
        return result;
      goto LABEL_27;
    }
    return 0;
  }
  if ( ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
    return sub_CDF950(a1, v2);
  v11[0] = v2 | 2;
  v9 = sub_CD2220(a1, v11, v5, 0, 0, 1, 0);
  v11[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CFF720(a1, v9, v11) )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v2, v10);
  if ( (_BYTE)result )
  {
    v11[0] = a2 | 4;
    return sub_D25C40(a1, (unsigned int)v5, v11);
  }
  return result;
}
