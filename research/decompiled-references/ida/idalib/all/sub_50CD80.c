unsigned __int64 __fastcall sub_50CD80(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v6; // [rsp+408h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 24) == 8;
  v6 = __readfsqword(0x28u);
  if ( !v3 )
    a3 = (int)a3;
  if ( a3 <= 0 )
    a3 = -a3;
  btoa64(&v5, 1024, a3, 0);
  sub_35A910(a2);
  return v6 - __readfsqword(0x28u);
}
