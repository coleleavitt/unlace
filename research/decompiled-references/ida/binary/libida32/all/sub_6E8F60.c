unsigned __int64 __fastcall sub_6E8F60(_QWORD *a1, unsigned __int64 a2)
{
  const char *v2; // rdx
  const char *v3; // rcx
  void *v4; // rdi
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_6B7B10((__int64)&ptr, (__int64)a1, a2, 1);
  if ( v8 <= 1 )
  {
LABEL_11:
    v4 = ptr;
    if ( !ptr )
      return v9 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  *(_WORD *)(a2 + 72) &= 0xFE7Fu;
  sub_6B9AB0((__int64)a1, (__int64)&ptr);
  v6 = 0;
  v2 = haystack;
  if ( v8 )
    v2 = (const char *)ptr;
  if ( !(unsigned __int8)sub_6BC100((__int64)a1, &v6, v2) )
  {
    clear_tinfo_t(&v6);
    goto LABEL_11;
  }
  v3 = haystack;
  if ( v8 )
    v3 = (const char *)ptr;
  sub_6E54E0(a1, a2, &v6, v3);
  clear_tinfo_t(&v6);
  v4 = ptr;
  if ( ptr )
  {
LABEL_8:
    v8 = 0;
    qfree(v4);
  }
  return v9 - __readfsqword(0x28u);
}

