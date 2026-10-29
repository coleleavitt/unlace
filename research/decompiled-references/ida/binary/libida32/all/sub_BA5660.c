__int64 __fastcall sub_BA5660(_BYTE *a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_DWORD *)(a2 + 40) == 1;
  v6 = a1;
  if ( v2
    || (result = (*(__int64 (__fastcall **)(_BYTE *, unsigned __int64))(*(_QWORD *)a1 + 96LL))(
                   a1,
                   *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL),
        (_BYTE)result) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    result = 1;
    if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v4 & 4) == 0 )
    {
      if ( v6[10] )
      {
        return sub_BA55A0(&v6, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v5 = sub_BEB460(a2 + 24);
        return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 152LL))(v6, v5);
      }
    }
  }
  return result;
}

