unsigned __int64 __fastcall sub_7265D0(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // bx
  _WORD *v4; // rbx
  size_t v6; // [rsp+8h] [rbp-30h] BYREF
  size_t v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = unpack_dd(a2);
  if ( *a1 < v2 )
  {
    if ( !under_debugger )
      interr(1685);
    BUG();
  }
  sub_725320(&v6, (char *)a1 + v2 + 2, 516 - v2, a2);
  v3 = v6 + v2;
  *a1 = v3;
  v4 = (unsigned __int16 *)((char *)a1 + v3 + 2);
  sub_725320(&v7, v4 + 1, 0x404u, a2);
  *v4 = v7;
  return v8 - __readfsqword(0x28u);
}

