unsigned __int64 __fastcall sub_690FD0(__int64 a1, __int64 a2)
{
  void *v4; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 40) == -1 )
  {
    sub_7BF040(a1 + 40, a2, 0, 0);
    ptr = nullptr;
    v6 = 0;
    sub_690B30((__int64 *)a1, (__int64 *)&ptr);
    sub_7BE7C0(a1 + 40, a2, 0, ptr, v6, 83);
    *(_QWORD *)&v6 = 0;
    sub_690BD0(a1, a2, (__int64 *)&ptr);
    sub_7BEF30(a1 + 40, a2, ptr, v6, 0, 115);
    v4 = ptr;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v4 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v4);
    }
  }
  return v7 - __readfsqword(0x28u);
}
