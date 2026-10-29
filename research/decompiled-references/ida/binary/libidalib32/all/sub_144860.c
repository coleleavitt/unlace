__int64 __fastcall sub_144860(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-18h] BYREF
  int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = -1;
  v8 = -1;
  result = sub_18BA90(1154, (unsigned int)&v8, (unsigned int)&v7, a4, a5, a6);
  if ( (_DWORD)result )
  {
    set_selector();
    getinf();
    getinf();
    auto_mark_range();
    return 1;
  }
  return result;
}

