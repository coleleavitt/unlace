__int64 __fastcall sub_4CBF10(__int64 *a1, _DWORD *a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  result = 0;
  if ( a5 - 1 <= 0xFFFFFFFD )
  {
    v10[3] = (unsigned __int8)get_reftype_by_size(a6);
    v10[1] = a4;
    v10[0] = -1;
    v10[2] = 0;
    return (unsigned __int8)sub_4CBD80(a1, a2, nullptr, a3, (__int64)v10, a5);
  }
  return result;
}

