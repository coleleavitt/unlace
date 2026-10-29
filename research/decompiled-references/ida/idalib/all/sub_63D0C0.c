__int64 __fastcall sub_63D0C0(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 result; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // [rsp+7h] [rbp-49h]
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v9; // [rsp+10h] [rbp-40h]
  unsigned __int64 v10; // [rsp+20h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v6 = ea2node(a1[2]);
    if ( netnode_qsupstr(v6, &ptr, a2, 83) < 0 )
      break;
    v3 = v9;
    if ( (unsigned __int64)v9 > 1 )
    {
      tag_remove(&ptr, ptr, 0x3FFFFFFF);
      v3 = v9;
    }
    v4 = haystack;
    if ( v3 )
      v4 = (const char *)ptr;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v4, 21);
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, 0);
    if ( (_BYTE)result )
      goto LABEL_10;
    ++a2;
  }
  result = 0;
LABEL_10:
  if ( ptr )
  {
    v7 = result;
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
    return v7;
  }
  return result;
}
