_BOOL8 __fastcall sub_5CD7D0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 *v8; // rax
  int v9; // eax

  v2 = (__int64)(a1 + 213);
  v3 = *(_QWORD *)(*a1 + 1616);
  v4 = sub_505D70((__int64)(a1 + 213), a2);
  if ( v4 )
  {
    v5 = (__int64 *)v4;
    v6 = v4[2];
    if ( (v6 & 0x8000) == 0 )
    {
      if ( (v6 & 0x200) == 0 )
        return (v6 & 1) == 0;
LABEL_7:
      if ( sub_503DF0(v2, v5) )
      {
        v9 = *(_DWORD *)(v3 + 52);
        if ( v9 <= 511 )
        {
          *(_DWORD *)(v3 + 52) = v9 + 1;
          sub_5CD440(*a1, v5);
          --*(_DWORD *)(v3 + 52);
        }
      }
      v6 = v5[2];
      return (v6 & 1) == 0;
    }
    v8 = sub_505D70(v2, v5[3]);
    v5 = (__int64 *)v8;
    if ( v8 )
    {
      v6 = v8[2];
      if ( (v6 & 0x200) == 0 )
        return (v6 & 1) == 0;
      goto LABEL_7;
    }
  }
  return (get_aflags(a2) & 0x400000) == 0;
}
