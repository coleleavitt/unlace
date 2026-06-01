__int64 __fastcall qvfprintf(__int64 a1, const char *a2)
{
  size_t v2; // rax
  void *v3; // rsp
  _BYTE v5[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( a1 )
  {
    v2 = strlen(a2);
    v3 = alloca(v2 + 108);
    sub_82A690(a2, v5, v2 + 100);
    return __vfprintf_chk();
  }
  else
  {
    set_qerrno(1, a2);
    *__errno_location() = 9;
    set_qerrno(1, a2);
    return 0xFFFFFFFFLL;
  }
}

