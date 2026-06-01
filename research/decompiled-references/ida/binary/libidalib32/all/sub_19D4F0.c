unsigned __int64 __fastcall sub_19D4F0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !a1[1] )
  {
    v4 = 0;
    v5 = 0;
    sub_19D430(&v4, a2, a3);
    sub_19B1B0(a1, (__int64)&v4);
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree();
    }
  }
  return v6 - __readfsqword(0x28u);
}

