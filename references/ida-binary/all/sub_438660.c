__int64 __fastcall sub_438660(char *a1)
{
  unsigned __int8 (__fastcall **v2[3])(_QWORD, __int64 *); // [rsp+0h] [rbp-18h] BYREF

  v2[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))__readfsqword(0x28u);
  v2[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))file_history_action_t___vtable;
  return sub_438030(v2, a1, 0x81u);
}
