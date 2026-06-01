__int64 __fastcall sub_3B0A80(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = -1;
  v7 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 624LL) )
  {
    ptr = nullptr;
    v6 = 0;
    sub_35A790((char **)&ptr);
    v2 = haystack;
    v4 = -1;
    if ( (_QWORD)v6 )
      v2 = (const char *)ptr;
    netnode_check(&v4, v2, 0, 1);
    v1 = v4;
    if ( ptr )
    {
      *(_QWORD *)&v6 = 0;
      qfree(ptr);
    }
  }
  return v1;
}
