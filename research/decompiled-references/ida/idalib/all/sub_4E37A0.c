__int64 __fastcall sub_4E37A0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  int reftype_by_size; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  result = 0;
  if ( (unsigned __int64)(a5 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    reftype_by_size = (unsigned __int8)get_reftype_by_size(a6);
    v10[1] = a4;
    v10[0] = -1;
    v10[2] = 0;
    return (unsigned __int8)sub_4E35F0(a1, a2, nullptr, a3, (__int64)v10, a5);
  }
  return result;
}
