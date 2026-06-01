__int64 __fastcall sub_41A560(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int *v3; // rdx
  unsigned int v4; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  int v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  v9 = -1;
  v7 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
  *((_QWORD *)ptr + v7) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v7 = v7 + 1;
  rangeset_t_sub2((int)&ptr);
  v2 = v7;
  while ( v2 )
  {
    v3 = (unsigned int *)((char *)ptr + 8 * --v2);
    v4 = *v3;
    if ( v3[1] - *v3 >= a2 )
      goto LABEL_5;
  }
  v4 = -1;
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v4;
}

