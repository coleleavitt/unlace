__int64 __fastcall get_segm_by_sel(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = sub_510290(
         *(_QWORD *)(qword_2CCB598 + 1672),
         a1,
         (__int64 (__fastcall *)(unsigned __int64 *, __int64))sub_50CE90,
         (__int64)v3);
  result = 0;
  if ( v1 != -1 )
    return v3[0];
  return result;
}
