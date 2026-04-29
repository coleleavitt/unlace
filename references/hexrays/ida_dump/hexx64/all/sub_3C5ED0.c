__int64 __fastcall sub_3C5ED0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  const char *v5; // rax
  const char *v7; // [rsp+0h] [rbp-50h] BYREF
  __int128 v8; // [rsp+8h] [rbp-48h]
  _QWORD v9[7]; // [rsp+18h] [rbp-38h] BYREF

  v9[2] = __readfsqword(0x28u);
  v7 = nullptr;
  v9[0] = 0;
  v8 = 0;
  v4 = sub_3C5C20((__int64 *)&v7, a2, a3, a4);
  if ( (_BYTE)v4 )
  {
    v5 = s1;
    if ( (_QWORD)v8 )
      v5 = v7;
    print_tinfo(a1, 0, 0, 0, 0, v9, v5, 0);
  }
  clear_tinfo_t(v9);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v4;
}
