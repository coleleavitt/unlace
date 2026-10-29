unsigned __int64 __fastcall sub_676F50(int a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v4; // r13
  __int64 v5; // rbx
  unsigned int v7; // eax
  unsigned int *v8; // rbx
  char *v9; // r12
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-40h]
  int v14; // [rsp+28h] [rbp-38h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 1624);
  v5 = *a3;
  v15 = __readfsqword(0x28u);
  v7 = *((_DWORD *)a3 + 1);
  v12 = 0;
  ptr = nullptr;
  v13 = 0;
  v14 = -1;
  if ( *(_DWORD *)a3 < v7 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
    *((_QWORD *)ptr + v12) = v5;
    *(_QWORD *)&v12 = v12 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v8 = (unsigned int *)ptr;
  v9 = (char *)ptr + 8 * v12;
  if ( v9 != ptr )
  {
    do
    {
      sub_676540(v4, *v8, *v8 + a4, v8[1] - *v8);
      v8 += 2;
    }
    while ( v9 != (char *)v8 );
  }
  sub_698450(*(_QWORD *)(a2 + 1480));
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v15 - __readfsqword(0x28u);
}

