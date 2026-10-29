__int64 __fastcall sub_144FD0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = -1;
  v8[0] = -1;
  result = sub_18C660(1154, (unsigned int)v8, (unsigned int)&v7, a4, a5, a6);
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

