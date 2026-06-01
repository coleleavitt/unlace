__int64 __fastcall sub_3F9E40(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 i; // rbp
  __int64 v3; // rbx
  _WORD *v4; // rcx
  _WORD *v5; // rax
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v1 = a1[1];
  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = (unsigned int)sub_893240(*(unsigned int *)(*a1 + 4 * i));
      if ( !(unsigned __int8)sub_893260(v3) && !(unsigned __int8)sub_8932A0((unsigned int)v3) )
      {
        v4 = (char *)ptr + 2 * v9;
        if ( ptr == v4 )
          goto LABEL_16;
        v5 = ptr;
        while ( (_WORD)v3 != *v5 )
        {
          if ( v4 == ++v5 )
            goto LABEL_16;
        }
        if ( v4 == v5 )
        {
LABEL_16:
          if ( *((_QWORD *)&v9 + 1) < (unsigned __int64)(v9 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v9 + 1, 2);
            v4 = (char *)ptr + 2 * v9;
          }
          *v4 = v3;
          *(_QWORD *)&v9 = v9 + 1;
        }
      }
    }
    v6 = -1;
    if ( (unsigned __int64)v9 <= 2 )
      v6 = 1;
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  else
  {
    return 1;
  }
  return v6;
}

