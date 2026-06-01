unsigned __int64 __fastcall sub_1FB4AA0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *a1;
  v7 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*a1 & 1) == 0 )
  {
    v9 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v6 & 2;
      result = (unsigned __int64)v9;
      if ( !(_DWORD)v10 )
        return result;
      v7 = sub_6E2500(v9, a2, v10, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      *a1 = v7 | 1;
    }
  }
  v12[0] = v7;
  return sub_B7BB70(v12);
}
