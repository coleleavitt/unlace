__int64 __fastcall sub_61FF60(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned __int8 v7; // [rsp+7h] [rbp-49h]
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v9; // [rsp+10h] [rbp-40h]
  unsigned __int64 v10; // [rsp+20h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v6 = ea2node(a1[4]);
    if ( netnode_qsupstr(v6, &ptr, a2, 83) < 0 )
      break;
    v3 = v9;
    if ( (unsigned __int64)v9 > 1 )
    {
      tag_remove();
      v3 = v9;
    }
    v4 = haystack;
    if ( v3 )
      v4 = (const char *)ptr;
    (*(void (__fastcall **)(unsigned int *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 21);
    result = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, 0);
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

