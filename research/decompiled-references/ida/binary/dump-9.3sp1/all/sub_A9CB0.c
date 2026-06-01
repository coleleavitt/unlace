__int64 __fastcall sub_A9CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int128 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a3 == a4 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v5 = a3;
    v9 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v8 = 0;
    sub_123EA0(a1, v7, a2, 1, 4294901760LL);
    LOBYTE(v5) = sub_A9AA0(a1, v7, v5, a4, 1u) != 0;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
    qfree(v7[0]);
  }
  return (unsigned int)v5;
}
