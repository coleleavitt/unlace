__int64 __fastcall sub_3EA860(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  const char **v6; // rax
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  v4 = sub_1D2AB0((__int64 *)&v7, a2, 0, 0);
  if ( (_BYTE)v4 && (v6 = sub_333280(v7)) != nullptr )
    copy_tinfo_t(a3, v6 + 4);
  else
    v4 = 0;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v4;
}
