unsigned __int64 __fastcall sub_4460(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = a1;
    v3 = a2;
    if ( a2 < a1 )
    {
      v2 = a2;
      v3 = a1;
    }
    if ( netnode_altval(qword_144A8, v2, 65) )
    {
      if ( netnode_altval(qword_144A8, v3, 65) )
      {
        v5 = netnode_altval(qword_144A8, v2, 65);
        if ( netnode_altval(qword_144A8, v3, 65) != v5 )
        {
          v6 = v3;
          v7 = 1;
          v8 = netnode_altval(qword_144A8, v6, 65);
          do
          {
            if ( v8 == netnode_altval(qword_144A8, v7, 65) )
            {
              v9 = netnode_altval(qword_144A8, v2, 65);
              netnode_supset(qword_144A8, v7, &v9, 8, 65);
            }
            v7 = netnode_supnext(qword_144A8, v7, 65);
          }
          while ( v7 != -1 );
        }
      }
      else
      {
        v9 = netnode_altval(qword_144A8, v2, 65);
        netnode_supset(qword_144A8, v3, &v9, 8, 65);
      }
    }
    else
    {
      if ( !netnode_altval(qword_144A8, v3, 65) )
      {
        v9 = dword_144B0++;
        netnode_supset(qword_144A8, v3, &v9, 8, 65);
      }
      v9 = netnode_altval(qword_144A8, v3, 65);
      netnode_supset(qword_144A8, v2, &v9, 8, 65);
    }
  }
  return v10 - __readfsqword(0x28u);
}
