__int64 __fastcall sub_438400(unsigned __int8 (__fastcall **a1)(_QWORD, __int64 *))
{
  unsigned __int8 (__fastcall **v2[5])(_QWORD, __int64 *); // [rsp+0h] [rbp-28h] BYREF

  v2[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))__readfsqword(0x28u);
  v2[1] = a1;
  v2[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))map_to_other_filesystem_t___vtable;
  return sub_438030(v2, (char *)a1, 1u);
}
