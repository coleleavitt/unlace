__int64 __fastcall sub_278EB0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // r9d
  int v11; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_374C40(a1, a2, &v11) )
  {
    if ( !v11 )
      return 0;
    if ( v11 <= 1 )
    {
      if ( a6 == -1 )
        return 0;
LABEL_5:
      if ( (int)set_tinfo_property4() < 0 )
        return 0;
      goto LABEL_6;
    }
  }
  if ( a6 != -1 )
    goto LABEL_5;
LABEL_6:
  if ( !a4 )
    return sub_381E90(a1, a2, (_DWORD)a3, 3, 0, v9);
  if ( sub_1EF510(a4, *(_QWORD *)(a1 + 112), a3, 0) )
  {
    sub_1EF8F0(a4, *(_QWORD *)(a1 + 112), a3, 0);
    return sub_381E90(a1, a2, (_DWORD)a3, 3, 0, v9);
  }
  return 0;
}
