unsigned __int64 __fastcall sub_3E70C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int dtype_size; // ebx
  __int64 _0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  dtype_size = get_dtype_size();
  sub_328FE0(&_0, a2, dtype_size, a5);
  sub_32BC70(a1, a3, dtype_size, &_0);
  clear_tinfo_t();
  return vars8 - __readfsqword(0x28u);
}
