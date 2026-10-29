unsigned __int64 __fastcall sub_59E0D0(_QWORD *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 v5; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  sub_3DF300((__int64)a1, (__int64 *)&ptr, a2, a3, a4);
  if ( (_QWORD)v8 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      sub_3A1A90(a1, *((_DWORD *)ptr + 2 * v5), *((_DWORD *)ptr + 2 * v5) + 1, 0x28u);
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

