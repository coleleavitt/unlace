__int64 __fastcall sub_4F9C00(__int64 a1, __int64 *a2, unsigned int a3, int a4, int a5)
{
  void *v9; // rsi
  __int64 v10; // rbx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned int)sub_4F8950(a1, a4, (__int64 (__fastcall *)(unsigned int *, __int64))sub_4F5780, (__int64)&ptr) == -1 )
    return -1;
  v9 = ptr;
  if ( !ptr )
    return -1;
  ptr = nullptr;
  v13 = 0;
  get_segm_name(&ptr, v9, 1);
  sub_357520(a2);
  sub_4EE820(a1 + 1552, a3);
  sub_4F5740(a1, a2, a5 - a4);
  v10 = (a2[1] == 0) + a2[1] - 1;
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v10;
}

