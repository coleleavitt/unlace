__int64 __fastcall sub_8C8F20(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  unsigned int v10; // ebx
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v13; // [rsp+8h] [rbp-1050h]
  _BYTE v14[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+1028h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  qmakepath((unsigned int)v14, 4096, a3, (unsigned int)".vault_cache", 0, a6);
  v10 = 0;
  if ( !(unsigned int)sub_8F41B0(*(_QWORD *)(a1 + 8), &ptr, v14, 0) && (_QWORD)v13 )
    v10 = sub_732F10(a2, (unsigned __int64 *)&ptr, v6, v7, v8, v9);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v10;
}
