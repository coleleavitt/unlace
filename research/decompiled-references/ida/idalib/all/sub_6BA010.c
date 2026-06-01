unsigned __int64 __fastcall sub_6BA010(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  void *v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a2 == a1[1] && (*(_BYTE *)(a2 + 32) & 0x10) != 0 )
  {
    if ( (unsigned __int8)netnode_inited() )
    {
      v6 = (void *)sub_6B9860(a1, a3, 0, 0);
      if ( v6 != (void *)-1LL )
      {
        if ( (get_merge_state(a1, a3) & 2) != 0 && !a4 )
          sub_3E3B20(a1, v6);
        sub_3E34B0((__int64)a1, (unsigned __int64)v6);
        sub_3E39C0((__int64)a1, (__int64)v6, 0);
        v7 = sub_3BDD60(a1, (__int64)v6);
        v8 = *a1;
        v10 = v7;
        sub_7BF170(&v10, v8, 0, 0);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
