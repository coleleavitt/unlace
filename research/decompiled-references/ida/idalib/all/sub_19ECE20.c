__int64 __fastcall sub_19ECE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r13
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15[2]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    sub_19EC960((__int64)v15, v5, 1, a4, a5);
    v7 = v15[0];
    v8 = *(_DWORD *)(a2 + 40);
    if ( (*(_BYTE *)(v15[0] + 28) & 0x7Fu) - 34 <= 5 )
    {
      v9 = sub_B75A50(v15[0], 0);
      if ( v9 )
      {
        if ( !sub_19E9EE0(v9) )
          return 1;
      }
      else if ( (unsigned __int8)sub_B74ED0(v7, 0, v10, v11)
             && ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 232LL) + 1LL) & 8) == 0 || sub_19EA510(
                                                                                               v7,
                                                                                               0,
                                                                                               v12,
                                                                                               v13)) )
      {
        return 1;
      }
    }
    sub_19EB530(*(_QWORD *)(a1 + 16), *(__int64 **)(a1 + 24), (__int64)v15, v8, *(_QWORD *)(a1 + 40), v6);
    return 1;
  }
  return 1;
}
