unsigned __int64 __fastcall sub_5B8340(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  sub_3E5040(a1, (__int64 *)&ptr, a2, a3, a4);
  if ( (_QWORD)v8 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      sub_3A61A0(a1, *((_QWORD *)ptr + 2 * v5), *((_QWORD *)ptr + 2 * v5) + 1LL, 0x28u);
      v5 = ++v4;
    }
    while ( v4 < (unsigned __int64)v8 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
