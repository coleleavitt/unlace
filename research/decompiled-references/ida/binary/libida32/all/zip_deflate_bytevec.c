bool __fastcall zip_deflate_bytevec(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v3[0] = a1;
  v3[1] = a2;
  v3[2] = 0;
  return (unsigned int)zip_deflate(v3, sub_812580, sub_812640) == 0;
}

