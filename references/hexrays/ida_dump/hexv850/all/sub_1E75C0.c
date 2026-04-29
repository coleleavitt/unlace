__int64 __fastcall sub_1E75C0(__int64 a1)
{
  _BYTE *v1; // rdi
  _QWORD v3[5]; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+28h] [rbp-20h]
  unsigned __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *(_BYTE **)(a1 + 24);
  v5 = __readfsqword(0x28u);
  if ( (*(_DWORD *)v1 & 0xFFFFFFF7) == 0x36 )
  {
    v3[1] = 0;
    v3[2] = 0;
    v3[4] = 0;
    v4 = 0;
    v3[0] = &off_4B2558;
    v3[3] = v1;
    sub_119D40(v1, (__int64)v3);
  }
  return 0;
}
