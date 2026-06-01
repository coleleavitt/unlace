__int64 sub_41A680()
{
  __int64 v0; // r9
  int v1; // edx
  unsigned int v2; // eax
  unsigned int *v3; // rcx
  unsigned int v4; // esi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+18h] [rbp-30h]
  int v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  v11 = -1;
  v9 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
  *((_QWORD *)ptr + v9) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v9 = v9 + 1;
  rangeset_t_sub2((int)&ptr);
  v0 = 0;
  v1 = v9;
  v2 = 0;
  while ( v1 )
  {
    v3 = (unsigned int *)((char *)ptr + 8 * --v1);
    v4 = v3[1];
    v5 = *v3;
    if ( v4 - v5 >= (unsigned int)v0 - v2 )
    {
      v0 = v4;
      v2 = v5;
    }
  }
  v6 = (v0 << 32) | v2;
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return v6;
}

