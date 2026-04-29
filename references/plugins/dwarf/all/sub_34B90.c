unsigned __int64 __fastcall sub_34B90(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  int v3; // ebp
  __int64 *v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  const char *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = 0x7E83B8DEDDE45EC6LL;
  v1 = (__int64 *)sub_85700(&v10, a1 + 40);
  v2 = *v1;
  if ( *(_QWORD *)(a1 + 64) != *v1 )
  {
    *(_QWORD *)(a1 + 64) = v2;
    v3 = v2;
    if ( (debug & 0x400000) != 0 )
    {
      v5 = sub_34340(a1);
      v9 = src;
      if ( v5[1] )
        v9 = (const char *)*v5;
      sub_88B80((unsigned int)"%s name_hash -> %llx\n", (_DWORD)v9, v3, v6, v7, v8);
    }
  }
  return v11 - __readfsqword(0x28u);
}
