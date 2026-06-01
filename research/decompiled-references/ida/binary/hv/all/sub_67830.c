__int64 __fastcall sub_67830(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1050h]
  _BYTE v10[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  sub_94CC0((unsigned int)v10, 4096, a3, (unsigned int)".vault_cache", 0, a6, 0);
  v6 = 0;
  if ( !(unsigned int)sub_5A6F0(*(__int64 **)(a1 + 8), (__int64 *)&ptr, (__int64)v10, 0) && (_QWORD)v9 )
    v6 = sub_7F710(a2, &ptr);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    j__free(ptr);
  }
  return v6;
}

