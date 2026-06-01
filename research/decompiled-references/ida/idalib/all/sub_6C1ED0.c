__int64 __fastcall sub_6C1ED0(_QWORD *a1, __int64 a2, _QWORD *a3, char a4, double a5, double a6)
{
  unsigned int v6; // r13d
  __int64 v8; // rsi
  __int64 tinfo_property; // rax
  const char *v13; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v6 = 0;
  v16 = __readfsqword(0x28u);
  v8 = *a3;
  ptr = nullptr;
  v15 = 0;
  if ( (v8 & 0x100) != 0 )
  {
    if ( get_tinfo_pdata(&ptr, v8, 0)
      && (unsigned __int64)v15 > 1
      && (tinfo_property = get_tinfo_property(*a3, 309)) != 0 )
    {
      v13 = haystack;
      if ( (_QWORD)v15 )
        v13 = (const char *)ptr;
      sub_6C1860(a2, a1, v13, tinfo_property, a4, 0.0, a6);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
  }
  return v6;
}
