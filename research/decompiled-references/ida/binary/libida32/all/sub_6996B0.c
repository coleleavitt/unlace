unsigned __int64 __fastcall sub_6996B0(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  int v12; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a2 == a1[1] && (*(_BYTE *)(a2 + 32) & 0x10) != 0 )
  {
    if ( (unsigned __int8)netnode_inited() )
    {
      v6 = sub_698F20(a1, a3, 0, 0);
      if ( v6 != -1 )
      {
        if ( (get_merge_state(a1, a3) & 2) != 0 && !a4 )
          sub_3DDE70(a1, v6);
        sub_3DD870((__int64)a1, v6, v7, v8);
        sub_3DDD20((__int64)a1, v6, 0);
        v9 = sub_3B90A0(a1, v6);
        v10 = *a1;
        v12 = v9;
        sub_79BD70(&v12, v10, 0, 0);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

