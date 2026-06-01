__int64 __fastcall sub_4D4180(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( !a3 )
    return -1;
  v6 = sub_4CC610(a1, (__int64)a3);
  v7 = v6;
  if ( v6 == -1 )
  {
    if ( a2 != -1 )
      goto LABEL_4;
  }
  else
  {
    if ( (sub_3BE900(a1, v6, 4) & 0xC000) == 0x8000 )
      return v7;
    if ( a2 != -1 )
    {
LABEL_4:
      v8 = sub_5CAA10(a1);
      v7 = sub_63F6C0(a1, v8, a3);
      if ( v7 != -1 )
        return v7;
    }
  }
  netnode_check(v11, a3, 0, 0);
  v9 = sub_3BDE50(a1, v11[0]);
  v7 = v9;
  if ( v9 == -1 || !sub_3BD540((__int64)a1, v9) )
  {
    if ( a4 && a1[97] )
      return sub_4D4080(a1, a3);
    return -1;
  }
  return v7;
}
