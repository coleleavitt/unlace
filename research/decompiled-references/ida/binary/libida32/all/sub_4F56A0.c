unsigned __int64 __fastcall sub_4F56A0(__int64 *a1, int a2)
{
  __int64 v3; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  if ( a2 <= 0 )
    a2 = -a2;
  btoa32(&v3, 1024, (unsigned int)a2, 0);
  sub_357520(a1);
  return v4 - __readfsqword(0x28u);
}

