__int64 __fastcall sub_4C6AC0(_QWORD *a1, unsigned __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  _QWORD v10[133]; // [rsp+0h] [rbp-428h] BYREF

  v2 = a1[1] == -1;
  v10[129] = __readfsqword(0x28u);
  if ( v2 )
    sub_4C6950(a1);
  v3 = sub_4C6A30(a1);
  v4 = -1;
  if ( a2 < v3 )
  {
    v5 = v3 - a2 - 1;
    v6 = v5 & 0x7F;
    v7 = v5 >> 7;
    v8 = v6;
    if ( a1[1] == v7 )
    {
      return a1[v6 + 3];
    }
    else
    {
      netnode_supval(*a1, v7, v10, 1024, 83);
      return v10[v8];
    }
  }
  return v4;
}
