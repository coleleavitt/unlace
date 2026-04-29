bool __fastcall sub_366A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  v5[2] = a3;
  v3 = *(unsigned int *)(a2 + 88);
  v5[1] = a1;
  v5[0] = &off_4B2940;
  return (unsigned int)for_all_arglocs(v5, a2, v3, 0) == 0;
}
