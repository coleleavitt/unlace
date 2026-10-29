__int64 __fastcall sub_2150110(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 v4; // rdi
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF
  __int64 v6; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+40h] [rbp-18h]

  if ( !(unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v5) )
  {
    v2 = *(_DWORD ***)(a1 + 8);
    if ( *v2[6] != 26 )
    {
      v8 = 259;
      v7[0] = "expected a comma";
      return sub_21543E0(v2, v7, 0, 0);
    }
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    if ( !(unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v6) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 288LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v5,
        v6);
      return 0;
    }
  }
  v4 = *(_QWORD *)(a1 + 8);
  v7[0] = "expected identifier";
  v8 = 259;
  return sub_21543E0(v4, v7, 0, 0);
}
