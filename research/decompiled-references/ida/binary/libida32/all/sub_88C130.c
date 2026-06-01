__int64 __fastcall sub_88C130(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // rax
  const char *v6; // r13
  void *ptr; // [rsp+0h] [rbp-40h] BYREF
  __int128 v9; // [rsp+8h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v4 = *(_QWORD *)(a4 + 8) == 0;
  v5 = *(_QWORD *)(a3 + 8);
  v10 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = haystack;
    if ( !v5 )
      return 1;
    goto LABEL_9;
  }
  v6 = *(const char **)a4;
  if ( v5 )
  {
LABEL_9:
    if ( strcmp(*(const char **)a3, v6) )
      goto LABEL_4;
    return 1;
  }
  if ( !strcmp(haystack, *(const char **)a4) )
    return 1;
LABEL_4:
  if ( (debug & 0x200) != 0 )
  {
    ptr = nullptr;
    v9 = 0;
    sub_3573A0((char **)&ptr);
    sub_383DA0();
  }
  return 0;
}

