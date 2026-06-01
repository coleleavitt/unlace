unsigned __int64 __fastcall sub_2DCE60(__int64 a1, __int64 *a2, __int64 a3)
{
  size_t v3; // rax
  void *v5; // rdi
  size_t v6; // rbp
  size_t v7; // r13
  __int64 v8; // rax
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  ea2str(v9, 1024, a3);
  v3 = strlen(v9);
  if ( v3 )
  {
    v5 = (void *)*a2;
    v6 = v3;
    v7 = v3 + 1;
    if ( a2[2] < v3 + 1 )
    {
      v8 = qvector_reserve(a2, *a2, v3 + 1, 1);
      *a2 = v8;
      v5 = (void *)v8;
    }
    a2[1] = v7;
    memmove(v5, v9, v6);
    *(_BYTE *)(*a2 + v6) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return v10 - __readfsqword(0x28u);
}
