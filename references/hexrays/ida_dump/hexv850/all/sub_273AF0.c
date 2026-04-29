__int64 __fastcall sub_273AF0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // r9d
  int v12; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_36EBC0(a1, a2, &v12) )
  {
    if ( !v12 )
      return 0;
    if ( v12 <= 1 )
    {
      if ( a6 == -1 )
        return 0;
LABEL_5:
      if ( (int)set_tinfo_property4(a5, 12, a6, a3, 0, 0) < 0 )
        return 0;
      goto LABEL_6;
    }
  }
  if ( a6 != -1 )
    goto LABEL_5;
LABEL_6:
  if ( !a4 )
    return sub_37BE10(a1, a2, (_DWORD)a3, 3, 0, v10);
  if ( sub_1EA150(a4, *(_QWORD *)(a1 + 112), a3, 0) )
  {
    sub_1EA530(a4, *(_QWORD *)(a1 + 112), a3, 0);
    return sub_37BE10(a1, a2, (_DWORD)a3, 3, 0, v10);
  }
  return 0;
}
