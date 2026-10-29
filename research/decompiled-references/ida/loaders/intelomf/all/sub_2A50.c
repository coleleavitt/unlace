bool __fastcall sub_2A50(__int64 a1)
{
  bool result; // al
  __int64 v2; // rax
  char v3; // [rsp+Fh] [rbp-B9h] BYREF
  _DWORD v4[42]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+B8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  result = qlread(a1, &v3, 1) == 1 && qlread(a1, v4, 163) == 163 && (v2 = qlsize(a1), v3 == -80) && v4[0] < v2;
  return result;
}

