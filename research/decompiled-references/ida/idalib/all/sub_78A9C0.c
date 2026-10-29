__int64 __fastcall sub_78A9C0(__int64 a1, __int64 *a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  void *v10; // r13
  void *v11; // rdi
  __int64 v12; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v6 = (unsigned int)a2;
  sub_78A680((__int64)&src, a1, a3, a4, a5, a6);
  v7 = v14;
  if ( a2 )
  {
    if ( v14 && (v8 = v14 - 1, v14 != 1) )
    {
      v10 = src;
      v11 = (void *)*a2;
      if ( a2[2] < v14 )
      {
        v12 = qvector_reserve(a2, *a2, v14, 1);
        *a2 = v12;
        v11 = (void *)v12;
      }
      a2[1] = v7;
      memmove(v11, v10, v7 - 1);
      *(_BYTE *)(*a2 + v8) = 0;
      v7 = v14;
    }
    else
    {
      a2[1] = 0;
    }
  }
  if ( src )
  {
    v14 = 0;
    qfree(src);
  }
  LOBYTE(v6) = v7 <= 1;
  return v6;
}
