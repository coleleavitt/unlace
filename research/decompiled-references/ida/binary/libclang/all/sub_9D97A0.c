__int64 __fastcall sub_9D97A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // rbx
  _QWORD v10[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a3 + 48) )
    return 1;
  v6 = sub_8E8FB0(a3);
  v7 = v6;
  if ( (v6 & 4) == 0 && (byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    return 1;
  v10[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
  {
    v8 = (unsigned __int8 **)sub_A2E0C0(a1, v10, 2175, 0);
    v9 = v8;
    if ( v8 )
    {
      sub_9B5410(v8, a4);
      sub_9B5660(v9, v7);
    }
    return 0;
  }
  else
  {
    sub_A2E0C0(a1, v10, 110, 0);
    return 0;
  }
}

