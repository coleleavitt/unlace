_QWORD *__fastcall sub_1A3D750(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *result; // rax
  __int64 v10; // rcx
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-10h] BYREF

  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  v7 = v6;
  if ( (unsigned int)v6 - 40 <= 6 )
  {
    v8 = sub_B8C330(a1);
    return (_QWORD *)sub_B7D8D0(a1, v8);
  }
  v10 = (unsigned int)v6 - 34;
  if ( (unsigned int)v10 > 5 )
  {
    v12 = (unsigned int)v6 - 58;
    if ( (unsigned int)v12 <= 4 )
      return sub_B7E870(a1, a2, v6, v12, a5, a6);
    if ( v6 == 20 )
    {
      v13 = *(_QWORD *)(a1 + 120);
      if ( !v13 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v7, v12, a5, a6);
        v13 = *(_QWORD *)(a1 + 120);
      }
    }
    else
    {
      if ( v6 != 19 )
      {
        if ( (unsigned int)v6 - 68 <= 6 && *(_QWORD *)(a1 + 48) )
          return (_QWORD *)sub_1A3D750();
        return nullptr;
      }
      v13 = *(_QWORD *)(a1 + 104);
      if ( !v13 )
      {
        sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v7, v12, a5, a6);
        v13 = *(_QWORD *)(a1 + 104);
      }
    }
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14 )
      return *(_QWORD **)v14;
    return nullptr;
  }
  v11 = sub_B7D390(a1, (__int64)&v15, 0, v10);
  result = nullptr;
  if ( v11 )
    return (_QWORD *)v15;
  return result;
}
