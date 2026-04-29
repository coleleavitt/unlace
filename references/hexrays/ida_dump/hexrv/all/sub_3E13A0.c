unsigned __int64 __fastcall sub_3E13A0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  qstrncat(a1 + 32, ";", 1024);
  if ( !(unsigned __int8)parse_decl(&v7, a3, 0, a1 + 32, 10) )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = "Bad pattern type declaration";
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  v5 = *a2;
  *a2 = v7;
  v7 = v5;
  clear_tinfo_t(&v7);
  return v8 - __readfsqword(0x28u);
}
