__int64 __fastcall dwarf_arrayorder(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  result = sub_52350(a1, 9, v4, a3);
  *a2 = v4[0];
  return result;
}

