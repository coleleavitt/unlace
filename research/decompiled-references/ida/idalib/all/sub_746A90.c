unsigned __int64 __fastcall sub_746A90(_WORD *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  _WORD *v3; // rbx
  size_t v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_745860(&v5, a1 + 1, 0x204u, a2);
  v2 = v5;
  *a1 = v5;
  v3 = (_WORD *)((char *)a1 + v2 + 2);
  sub_745860(&v5, (char *)a1 + v2 + 4, 0x404u, a2);
  *v3 = v5;
  return v6 - __readfsqword(0x28u);
}
