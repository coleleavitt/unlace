__int64 __fastcall sub_A38D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a2 && (v4 = a2, (unsigned __int8)sub_11BB80(a3, *(_QWORD *)(a2 + 8), 0)) )
  {
    sub_121360(v6, a1, a2, 1);
    LOBYTE(v4) = sub_A36D0(a1, v6, *(_QWORD *)(a2 + 8), a3, 1u) == 0;
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
    }
    qfree(v6[0]);
  }
  else
  {
    return 1;
  }
  return v4;
}
