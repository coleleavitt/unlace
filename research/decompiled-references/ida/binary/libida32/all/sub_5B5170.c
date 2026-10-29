unsigned __int64 __fastcall sub_5B5170(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  unsigned int v7; // eax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  int v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v6 = *a4;
  v7 = *((_DWORD *)a4 + 1);
  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  v13 = -1;
  v11 = 0;
  if ( *(_DWORD *)a4 < v7 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
    *((_QWORD *)ptr + v11) = v6;
    *(_QWORD *)&v11 = v11 + 1;
  }
  sub_5B5070(a1, (__int64)&ptr, a2, a3, a5, a6);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v14 - __readfsqword(0x28u);
}

