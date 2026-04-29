__int64 __fastcall sub_2850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  void *v6; // rbx
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-40h] BYREF
  __int128 v10; // [rsp+8h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v6 = a5;
  v9 = nullptr;
  v10 = 0;
  if ( !(unsigned __int8)is_valid_utf8(a5) )
  {
    if ( (unsigned __int8)idb_utf8(&v9, v6, 0xFFFFFFFFLL, 0) )
    {
      v6 = &unk_6308;
      if ( (_QWORD)v10 )
        v6 = v9;
    }
  }
  v7 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD, void *))(a1 + 8))(
         *(_QWORD *)(a1 + 16),
         a2,
         0,
         a4,
         a4,
         0,
         v6);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v7;
}
