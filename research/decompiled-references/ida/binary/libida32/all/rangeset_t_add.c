__int64 __fastcall rangeset_t_add(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rdx
  char v5; // al
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+18h] [rbp-40h]
  int v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = 0;
  if ( a1 && *a2 < a2[1] )
  {
    v4 = *(unsigned int *)(a1 + 32);
    v5 = 0;
    ptr = nullptr;
    v7 = 0;
    v8 = v4;
    if ( (_DWORD)v4 != -1 )
      v5 = must_journal(a1, a2, v4);
    v9 = v5;
    v2 = sub_821AC0((__int64 *)a1, a2, (__int64)&ptr);
    if ( (_BYTE)v2 )
      sub_8218C0((__int64 *)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
  }
  return v2;
}

