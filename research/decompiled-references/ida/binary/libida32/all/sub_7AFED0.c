__int64 __fastcall sub_7AFED0(__int64 a1)
{
  const char *v1; // rdx
  unsigned int v2; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v5 = 0;
  sub_3573A0((char **)&ptr);
  v1 = haystack;
  if ( (_QWORD)v5 )
    v1 = (const char *)ptr;
  v2 = sub_7AF570(a1, 2, v1);
  if ( ptr )
  {
    *(_QWORD *)&v5 = 0;
    qfree(ptr);
  }
  return v2;
}

