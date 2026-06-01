unsigned __int64 __fastcall sub_103C20(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  void *v4; // rdi
  size_t v5; // rbp
  size_t v6; // r13
  __int64 v7; // rax
  char v8[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  ea2str();
  v2 = strlen(v8);
  if ( v2 )
  {
    v4 = *(void **)a2;
    v5 = v2;
    v6 = v2 + 1;
    if ( *(_QWORD *)(a2 + 16) < v2 + 1 )
    {
      v7 = qvector_reserve();
      *(_QWORD *)a2 = v7;
      v4 = (void *)v7;
    }
    *(_QWORD *)(a2 + 8) = v6;
    memmove(v4, v8, v5);
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return v9 - __readfsqword(0x28u);
}

