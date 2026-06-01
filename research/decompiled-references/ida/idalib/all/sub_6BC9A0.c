__int64 __fastcall sub_6BC9A0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  char v8; // dl
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  const char *v12; // rax
  const char *v13; // rbx
  size_t v14; // rax
  size_t v15; // rbp
  void *v16; // rdi
  size_t v17; // r12
  __int64 v18; // rax
  __int64 *v19; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h]
  __int128 v21; // [rsp+10h] [rbp-58h]
  __int128 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v4 = 0;
  if ( a4 < *(_QWORD *)(a3 + 8) )
  {
    v19 = (__int64 *)a3;
    v8 = *(_BYTE *)(a3 + 45) & 1;
    v21 = 0;
    ptr = nullptr;
    v22 = 0;
    v9 = sub_534DB0(&v19, a4, v8);
    if ( v9 == 5 )
    {
      v10 = 0;
      if ( a4 )
      {
        do
        {
          v11 = sub_534DB0(&v19, v10, *(_BYTE *)(a3 + 45) & 1);
          sub_538040((__int64)&v19, v11, v10++);
        }
        while ( a4 != v10 );
      }
      v9 = sub_534DB0(&v19, a4, *(_BYTE *)(a3 + 45) & 1);
    }
    v12 = sub_538040((__int64)&v19, v9, a4);
    v13 = v12;
    if ( v12 )
    {
      v14 = strlen(v12);
      v15 = v14;
      if ( v14 )
      {
        v16 = (void *)*a2;
        v17 = v14 + 1;
        if ( a2[2] < v14 + 1 )
        {
          v18 = qvector_reserve(a2, *a2, v14 + 1, 1);
          *a2 = v18;
          v16 = (void *)v18;
        }
        a2[1] = v17;
        memmove(v16, v13, v15);
        *(_BYTE *)(*a2 + v15) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      v4 = 1;
    }
    else
    {
      v4 = 0;
    }
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
  }
  return v4;
}
