__int64 __fastcall worklists_revert_action_t__::vfunc_1(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // r13
  const char *v8; // rdx
  const char *v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  const char *v11; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v13 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v10 = a2;
    v4 = 0;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a2 + 8);
  v4 = sub_449D00(a1, a2);
  if ( !(_BYTE)v4 )
    return v4;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !(_DWORD)v5 )
    return 1;
  v10 = a2;
  LOBYTE(v4) = (_DWORD)v5 != (_DWORD)v7;
  if ( *(_BYTE *)(a1 + 8) )
  {
LABEL_13:
    if ( !(unsigned __int8)sub_443870(*(__int64 **)a2, v5, *(_BYTE *)(a1 + 8)) )
      return v4;
    return 1;
  }
  sub_447E60((__int64)&v11, (__int64)&v10);
  v8 = &s1;
  if ( v12 )
    v8 = v11;
  if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to revert these files?\n%s", v8) == 1 )
  {
    if ( v11 )
    {
      v12 = 0;
      qfree(v11, "HIDECANCEL\nDo you really want to revert these files?\n%s", v9);
    }
LABEL_3:
    v5 = *(_QWORD *)(a2 + 8);
    if ( !v5 )
      return v4;
    goto LABEL_13;
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11, "HIDECANCEL\nDo you really want to revert these files?\n%s", v9);
  }
  return v4;
}
