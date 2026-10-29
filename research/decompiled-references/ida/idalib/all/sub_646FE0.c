__int64 __fastcall sub_646FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned __int8 (__fastcall ***v6)(_QWORD, void **, void **, __int64 *, __int64 *, __int64); // rdi
  int v7; // r12d
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  void *v11; // [rsp+10h] [rbp-68h] BYREF
  __int128 v12; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v4 = a3;
  v6 = *(unsigned __int8 (__fastcall ****)(_QWORD, void **, void **, __int64 *, __int64 *, __int64))(a1 + 544);
  v15 = __readfsqword(0x28u);
  v7 = a4;
  v9 = a3;
  v12 = 0;
  v11 = nullptr;
  ptr = nullptr;
  v14 = 0;
  v10 = a4;
  if ( (**v6)(v6, &v11, &ptr, &v9, &v10, a2) )
  {
    sub_646EC0(a1 + 552, v4 - *(_DWORD *)(a1 + 528), v9 - v4, (__int64 *)&v11);
    if ( v10 )
      sub_646EC0(a1 + 576, v7 - *(_DWORD *)(a1 + 536), v10 - v7, (__int64 *)&ptr);
    ++*(_DWORD *)(a1 + 520);
  }
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return 0;
}
