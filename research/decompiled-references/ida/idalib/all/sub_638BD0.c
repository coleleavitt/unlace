unsigned __int64 __fastcall sub_638BD0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  const char *v13; // rdi
  char v14; // bl
  unsigned int v15; // eax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v5 = *(int *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  switch_dbctx(v5);
  if ( a3 >= *(_QWORD *)(a1 + 120) )
    sub_629990();
  v10 = *(_QWORD *)(a1 + 112) + (a3 << 6);
  v11 = *(_QWORD *)(v10 + 8);
  if ( (*(_BYTE *)(v10 + 56) & 0xF) != 0 )
  {
    if ( v11 == 1350 )
      *(_BYTE *)(a1 + 128) = 1;
    return sub_638B10(a1, a2, a3, v7, v8, v9);
  }
  if ( v11 == 6 )
  {
    sub_633CD0((__int64)&ptr, a2, *(_QWORD *)(a1 + 112) + (a3 << 6), v7, v8, v9);
    v13 = haystack;
    if ( v17 )
      v13 = (const char *)ptr;
    v14 = set_processor_type(v13, 0);
    if ( ptr )
    {
      v17 = 0;
      qfree(ptr);
    }
    if ( !v14 )
    {
      if ( !under_debugger )
        interr(1892);
LABEL_24:
      BUG();
    }
  }
  else
  {
    if ( v11 != 38 )
    {
      if ( (unsigned __int64)(v11 - 256) <= 0xF )
      {
        *(_BYTE *)(a1 + 128) = 1;
        v11 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 == 272 )
        *(_BYTE *)(a1 + 129) = 1;
      return sub_638B10(a1, a2, a3, v7, v8, v9);
    }
    v15 = sub_633C30(a2, v10, 1, v7, v8, v9);
    if ( !(unsigned __int8)set_target_assembler(v15) )
    {
      if ( !under_debugger )
        interr(1893);
      goto LABEL_24;
    }
  }
  return v18 - __readfsqword(0x28u);
}
