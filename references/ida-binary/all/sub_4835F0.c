unsigned __int64 __fastcall sub_4835F0(_QWORD *a1, __int64 *a2)
{
  const char *v2; // rcx
  bool v3; // zf
  const char *v4; // rdx
  size_t v5; // rax
  size_t v6; // rbp
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax
  char v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v2 = &s1;
  v3 = a1[4] == 0;
  v12 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (const char *)a1[3];
  v4 = &s1;
  if ( a1[7] )
    v4 = (const char *)a1[6];
  qmakepath(v11, 4096, v4, v2, 0);
  v5 = strlen(v11);
  v6 = v5;
  if ( v5 )
  {
    v8 = (void *)*a2;
    v9 = v5 + 1;
    if ( a2[2] < v5 + 1 )
    {
      v10 = qvector_reserve(a2, *a2, v5 + 1, 1);
      *a2 = v10;
      v8 = (void *)v10;
    }
    a2[1] = v9;
    memmove(v8, v11, v6);
    *(_BYTE *)(*a2 + v6) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return v12 - __readfsqword(0x28u);
}
