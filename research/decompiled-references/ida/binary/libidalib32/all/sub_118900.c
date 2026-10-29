__int64 __fastcall sub_118900(__int64 a1, unsigned __int8 a2, __int64 a3, const char *a4)
{
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r13
  void *v11; // rdi
  size_t v12; // r14
  __int64 v13; // rax
  char v14[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+1038h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a3 )
    for_all_extlangs();
  qsnprintf();
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = (const char *)sub_9DAF0(a2, (__int64)&unk_251E40, (__int64)"FILTER %s\n%s", v14, a4);
  v7 = v6;
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = v8;
    if ( v8 )
    {
      v11 = *(void **)a1;
      v12 = v8 + 1;
      if ( *(_QWORD *)(a1 + 16) < v8 + 1 )
      {
        v13 = qvector_reserve();
        *(_QWORD *)a1 = v13;
        v11 = (void *)v13;
      }
      *(_QWORD *)(a1 + 8) = v12;
      memmove(v11, v7, v9);
      *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    qdirname();
  }
  return a1;
}

