unsigned __int64 __fastcall sub_2BB400(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 104);
  sub_385E40(&v5, a2, a3, a4, 0);
  sub_13B580(&v5, a2);
  return v6 - __readfsqword(0x28u);
}
