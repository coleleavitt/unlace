unsigned __int64 __fastcall sub_417FF0(int a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int *v7; // rbx
  char *v8; // r12
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-38h]
  unsigned __int64 v14; // [rsp+30h] [rbp-30h]

  v4 = *a3;
  v5 = *((_DWORD *)a3 + 1);
  v14 = __readfsqword(0x28u);
  v13 = -1;
  ptr = nullptr;
  v12 = 0;
  v11 = 0;
  if ( *(_DWORD *)a3 < v5 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
    *((_QWORD *)ptr + v11) = v4;
    *(_QWORD *)&v11 = v11 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v7 = (unsigned int *)ptr;
  v8 = (char *)ptr + 8 * v11;
  if ( v8 != ptr )
  {
    do
    {
      sub_3D24E0(*(_QWORD *)(a2 + 1480), *v7, *v7 + a4, v7[1] - *v7);
      v7 += 2;
    }
    while ( v8 != (char *)v7 );
    v7 = (unsigned int *)ptr;
  }
  if ( v7 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v7);
  }
  return v14 - __readfsqword(0x28u);
}

