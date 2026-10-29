unsigned __int64 __fastcall sub_61EEC0(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // r13
  int v4; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  v3 = fopenRT(v2);
  if ( v3 )
  {
    v4 = 0;
    sub_61C0F0(*(void **)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = a1 + 32;
    *(_QWORD *)(a1 + 56) = a1 + 32;
    *(_QWORD *)(a1 + 64) = 0;
    ptr = nullptr;
    v7 = 0;
    while ( qgetline(&ptr) >= 0 )
    {
      ++v4;
      if ( qcleanline(&ptr, 59, 7) > 0 )
        sub_61E950((_QWORD *)a1, (const char *)ptr);
    }
    qfclose(v3);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
  }
  return v8 - __readfsqword(0x28u);
}
