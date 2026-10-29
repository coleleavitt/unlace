__int64 __fastcall sub_173EE0(__int64 a1)
{
  unsigned int v2; // ebx
  size_t v4; // rax
  size_t v5; // r13
  void *v6; // rdi
  size_t v7; // r14
  __int64 v8; // rax
  Dl_info v9; // [rsp+0h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  memset(&v9, 0, sizeof(v9));
  if ( dladdr(sub_173EE0, &v9) && (v2 = qdirname(), (_BYTE)v2) )
  {
    v4 = strlen(s);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(void **)a1;
      v7 = v4 + 1;
      if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
      {
        v8 = qvector_reserve();
        *(_QWORD *)a1 = v8;
        v6 = (void *)v8;
      }
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v6, s, v5);
      *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

