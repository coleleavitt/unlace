__int64 __fastcall sub_3AC350(__int64 a1)
{
  unsigned int v1; // ebx
  const char *v2; // rsi
  int v4; // [rsp+Ch] [rbp-2Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = -1;
  v7 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 536LL) )
  {
    ptr = nullptr;
    v6 = 0;
    sub_3573A0((char **)&ptr);
    v4 = -1;
    v2 = haystack;
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

