bool __fastcall sub_A8BFF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  bool result; // al
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned __int64 v12; // rbp
  __int64 v13; // rbp
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 17448);
  v3 = *(_DWORD *)(v2 + 260);
  if ( v3 != 1 )
  {
    if ( ((v3 - 5) & 0xFFFFFFFB) != 0 && (unsigned int)(v3 - 27) > 4 )
      return 0;
    if ( v3 == 5 )
    {
      if ( (unsigned int)sub_2293DC0(v2 + 216) <= 6 )
        goto LABEL_13;
    }
    else
    {
      if ( v3 != 27 )
      {
LABEL_7:
        if ( (v3 & 0xFFFFFFF7) != 1 )
          return 0;
        goto LABEL_10;
      }
      if ( (unsigned int)sub_2293DC0(v2 + 216) <= 6 )
        goto LABEL_13;
    }
    v3 = *(_DWORD *)(v2 + 260);
    goto LABEL_7;
  }
LABEL_10:
  v8 = sub_2293DC0(v2 + 216);
  if ( (unsigned int)v8 > 9 )
  {
    v4 = HIDWORD(v8) & 0x7FFFFFFF;
    if ( (_DWORD)v8 != 10 || (unsigned int)v4 > 8 )
      return 0;
  }
LABEL_13:
  v9 = (__int64 *)(sub_F44710(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                     a2,
                     v4,
                     v5,
                     v6)
                 & 0xFFFFFFFFFFFFFFF0LL);
  sub_A8A610((__int64)v14, a1, *v9);
  v10 = v14[0];
  sub_A73FE0(a1, *v9);
  v12 = v11 / (unsigned __int64)sub_A74290(a1);
  result = 1;
  if ( v10 == v12 )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 287LL);
    return v13 < sub_A74290(a1) * v10;
  }
  return result;
}

