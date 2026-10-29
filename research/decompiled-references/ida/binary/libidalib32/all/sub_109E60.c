unsigned __int64 __fastcall sub_109E60(__int64 a1, const char *a2, const char *a3)
{
  char v4; // al
  __int64 v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = off_230778;
  *(_BYTE *)(a1 + 12) = 0;
  sub_109890((__int64)&v7, a2, a3);
  v4 = sub_10D810(v7, v8);
  v5 = v7;
  *(_BYTE *)(a1 + 12) = v4;
  if ( v5 )
  {
    v8 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

