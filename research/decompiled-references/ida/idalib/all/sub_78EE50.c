__int64 __fastcall sub_78EE50(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  result = 0;
  if ( a3 )
  {
    v5[1] = a2;
    v5[0] = &off_2B39F68;
    return compile_idc_snippet(a1, a3, a4, (__int64)v5, 0);
  }
  return result;
}
