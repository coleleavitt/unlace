bool sub_19F870()
{
  __int64 v0; // rbx
  _QWORD v2[5]; // [rsp+0h] [rbp-28h] BYREF

  v2[3] = __readfsqword(0x28u);
  v2[1] = 0;
  v2[2] = 0;
  v2[0] = off_2356D0;
  v0 = sub_175450((__int64)v2, 0, 0);
  v2[0] = &off_235C80;
  qsem_free();
  return v0 != 0;
}

