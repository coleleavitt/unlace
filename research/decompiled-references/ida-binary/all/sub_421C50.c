__int64 __fastcall sub_421C50(__int64 a1, const char *a2, void (__fastcall ***a3)(_QWORD, const char *, __int64 *))
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  (**a3)(a3, a2, &v5);
  LOBYTE(v3) = (unsigned __int64)v6 <= 1;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, a2);
  }
  return v3;
}
