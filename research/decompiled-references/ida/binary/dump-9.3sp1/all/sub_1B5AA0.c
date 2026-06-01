__int64 __fastcall sub_1B5AA0(
        int *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD, void *, const char *),
        __int64 a3,
        unsigned int a4)
{
  const char *v4; // rcx
  unsigned int v5; // ebx
  const char *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_1B43D0(a1, (__int64)&v7, a3, a4);
  v4 = s1;
  if ( (_QWORD)v8 )
    v4 = v7;
  v5 = (**a2)(a2, 0, &unk_4190BD, v4);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree((__int64)v7);
  }
  return v5;
}
