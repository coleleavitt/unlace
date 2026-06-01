__int64 __fastcall qgethostname(__int64 *a1)
{
  int v2; // edx
  __int64 result; // rax
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax
  char v9[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = gethostname(v9, 0x1000u);
  result = 0;
  if ( !v2 )
  {
    v9[4095] = 0;
    v4 = strlen(v9);
    v5 = v4;
    if ( v4 )
    {
      v6 = (void *)*a1;
      v7 = v4 + 1;
      if ( a1[2] < v4 + 1 )
      {
        v8 = qvector_reserve(a1, *a1, v4 + 1, 1);
        *a1 = v8;
        v6 = (void *)v8;
      }
      a1[1] = v7;
      memmove(v6, v9, v5);
      *(_BYTE *)(*a1 + v5) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    return 1;
  }
  return result;
}

