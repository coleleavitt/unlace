unsigned __int64 __fastcall sub_437DE0(_QWORD *a1, unsigned int a2, const char *a3, char a4, const char *a5)
{
  void *v8; // rdi
  int v10; // eax
  const char *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  ptr = nullptr;
  if ( sub_3BE050((__int64)a1, (__int64)&ptr, a2, 1) <= 0 )
  {
    v10 = sub_3B9AA0((__int64)a1, a2, 4);
    if ( (~(_WORD)v10 & 0x600) != 0
      || (v10 & 0x10000000) == 0
      || (v12 = sub_5AFCE0(a1), sub_4ECB80(&ptr, a1 + 203, v12, 1) <= 0) )
    {
      if ( !a4 )
      {
        sub_3CB5F0(a1, a2, a3, 1u);
        v8 = ptr;
        if ( !ptr )
          return v15 - __readfsqword(0x28u);
        goto LABEL_6;
      }
    }
    else if ( (unsigned __int8)sub_436A00((__int64 *)&ptr, a3, a4, a5) )
    {
      v11 = haystack;
      if ( (_QWORD)v14 )
        v11 = (const char *)ptr;
      sub_4F0D50(a1 + 203, v12, v11, 1);
    }
  }
  else if ( (unsigned __int8)sub_436A00((__int64 *)&ptr, a3, a4, a5) )
  {
    if ( (_QWORD)v14 )
      sub_3CB5F0(a1, a2, (const char *)ptr, 1u);
    else
      sub_3CB5F0(a1, a2, haystack, 1u);
  }
  v8 = ptr;
  if ( ptr )
  {
LABEL_6:
    *(_QWORD *)&v14 = 0;
    qfree(v8);
  }
  return v15 - __readfsqword(0x28u);
}

