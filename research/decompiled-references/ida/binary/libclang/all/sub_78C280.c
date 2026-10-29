bool __fastcall sub_78C280(_QWORD *a1)
{
  __int64 (*v1)(void); // rax
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(__int64 (**)(void))(*a1 + 64LL);
  if ( (char *)v1 == (char *)sub_5F7E00 )
  {
    if ( !(unsigned __int8)sub_78B990(a1, v6) )
      return 0;
    v2 = v6[0];
    if ( (*(_BYTE *)(v6[0] + 128) & 1) != 0 )
    {
      v5 = sub_798D40(a1);
      *(_QWORD *)(v2 + 128) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 18200) + 40LL))(
                                *(_QWORD *)(v5 + 18200),
                                *(_QWORD *)(v2 + 128) >> 1);
    }
    else if ( !*(_QWORD *)(v6[0] + 128) )
    {
      return 0;
    }
    v3 = *(_QWORD *)(v2 + 128);
  }
  else
  {
    v3 = v1();
  }
  if ( v3 && (*(_WORD *)v3 & 0x1FF) == 0xF7 )
    return *(_DWORD *)(v3 + 4) == 0;
  return 0;
}

