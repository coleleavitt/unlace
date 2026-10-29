__int64 __fastcall get_segm_by_sel(int a1)
{
  int v1; // edx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = sub_4F8950(
         *(_QWORD *)(qword_2CA1698 + 1480),
         a1,
         (__int64 (__fastcall *)(unsigned int *, __int64))sub_4F5780,
         (__int64)v3);
  result = 0;
  if ( v1 != -1 )
    return v3[0];
  return result;
}

