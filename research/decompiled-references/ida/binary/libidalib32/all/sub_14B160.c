unsigned __int64 __fastcall sub_14B160(__int64 a1)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax
  char v8[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( ea2str() )
  {
    v3 = strlen(v8);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(void **)a1;
      v6 = v3 + 1;
      if ( *(_QWORD *)(a1 + 16) < v3 + 1 )
      {
        v7 = qvector_reserve();
        *(_QWORD *)a1 = v7;
        v5 = (void *)v7;
      }
      *(_QWORD *)(a1 + 8) = v6;
      memmove(v5, v8, v4);
      *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return v9 - __readfsqword(0x28u);
}

