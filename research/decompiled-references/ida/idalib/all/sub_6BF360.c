unsigned __int64 __fastcall sub_6BF360(__int64 *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    sub_6BF220(a1, a2, 1);
    sub_3E34B0((__int64)a1, a2);
    sub_3E39C0((__int64)a1, a2, 1);
    if ( a3 )
    {
      v5 = sub_3BDD60(a1, a2);
      sub_7BF0F0((int)&v5);
    }
  }
  return v6 - __readfsqword(0x28u);
}
