unsigned __int64 __fastcall sub_5B3440(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  const char *v9; // rcx
  _QWORD v11[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+10h] [rbp-50h] BYREF
  void *ptr; // [rsp+18h] [rbp-48h] BYREF
  __int128 v14; // [rsp+20h] [rbp-40h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v6 = *a2;
  v11[0] = a3;
  v15 = __readfsqword(0x28u);
  v14 = 0;
  ptr = nullptr;
  sub_7BEA80(v11, a1, &ptr, v6, 83);
  sub_7BE850(v11, a1, *a2, 65);
  sub_7BE850(v11, a1, *a2, 83);
  v8 = a4 + *a2;
  *a2 = v8;
  v12 = v8;
  sub_7BE7C0(v11, a1, a5 + 1, &v12, 8, 73);
  v9 = haystack;
  if ( (_QWORD)v14 )
    v9 = (const char *)ptr;
  sub_7BE7C0(v11, a1, *a2, v9, 0, 83);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v15 - __readfsqword(0x28u);
}
