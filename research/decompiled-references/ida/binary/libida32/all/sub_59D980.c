__int64 __fastcall sub_59D980(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char *v4; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  v3 = sub_6994A0(a1, &ptr, a3);
  if ( (_BYTE)v3 )
  {
    v4 = (char *)haystack;
    if ( (_QWORD)v7 )
      v4 = (char *)ptr;
    v3 = sub_59D8B0(a1, a2, v4);
  }
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v3;
}

