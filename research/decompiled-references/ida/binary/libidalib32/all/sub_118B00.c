__int64 __fastcall sub_118B00(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // ebx
  void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_118900((__int64)&src, 0, 0, "Add file to list");
  if ( v9 <= 1 )
  {
    v3 = 0;
  }
  else
  {
    reg_update_strlist();
    v2 = v9;
    if ( v9 > 1 )
    {
      v5 = src;
      v6 = (void *)a1[26];
      if ( a1[28] < v9 )
      {
        v7 = qvector_reserve();
        a1[26] = v7;
        v6 = (void *)v7;
      }
      a1[27] = v2;
      memmove(v6, v5, v2 - 1);
      *(_BYTE *)(a1[26] + v2 - 1) = 0;
    }
    else
    {
      a1[27] = 0;
    }
    v3 = 1;
  }
  if ( src )
  {
    v9 = 0;
    qfree();
  }
  return v3;
}

