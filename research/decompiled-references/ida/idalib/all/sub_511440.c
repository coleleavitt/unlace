unsigned __int64 __fastcall sub_511440(__int64 a1)
{
  __int64 v1; // r12
  int v2; // ebx
  unsigned int v3; // r14d
  unsigned __int64 *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char *v9; // rbx
  char *v10; // r13
  __int64 v11; // rbp
  _BYTE *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // rbx
  char *v16; // rbp
  __int64 v18; // [rsp+0h] [rbp-98h]
  void *v19; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  int v21[4]; // [rsp+18h] [rbp-80h]
  int v22; // [rsp+28h] [rbp-70h]
  void *v23; // [rsp+30h] [rbp-68h] BYREF
  int v24[4]; // [rsp+38h] [rbp-60h]
  int v25[2]; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  int v27[2]; // [rsp+58h] [rbp-40h]

  *(_QWORD *)v27 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1672);
  LODWORD(v26) = -1;
  v23 = nullptr;
  *(_QWORD *)v25 = 0;
  *(_OWORD *)v24 = 0;
  v2 = sub_503DD0(v1 + 1624);
  v3 = 0;
  if ( v2 > 0 )
  {
    do
    {
      v4 = sub_505DE0(v1 + 1624, v3);
      if ( v4 )
        rangeset_t_add((int)&v23, (int)v4, v5, v6, v7, v8, v18, v19, (__int64)ptr, v21[0], v21[2], v22, (__int64)v23);
      ++v3;
    }
    while ( v2 != v3 );
  }
  rangeset_t_sub2((int)&v23);
  if ( *(_QWORD *)v24 )
  {
    v9 = (char *)v23;
    ptr = nullptr;
    *(_OWORD *)v21 = 0;
    v10 = (char *)v23 + 16 * *(_QWORD *)v24;
    if ( v23 != v10 )
    {
      while ( 1 )
      {
        sub_35A910((__int64 *)&ptr);
        v9 += 16;
        v11 = *(_QWORD *)v21;
        if ( v10 == v9 )
          break;
        if ( *(_QWORD *)v21 > 1u )
        {
          v12 = ptr;
          v13 = *(_QWORD *)v21 - 1LL;
          v14 = *(_QWORD *)v21 + 2LL;
          if ( *(_QWORD *)&v21[2] < (unsigned __int64)(*(_QWORD *)v21 + 2LL) )
          {
            LODWORD(v19) = v21[0] - 1;
            v18 = *(_QWORD *)v21 + 2LL;
            ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
            v13 = v11 - 1;
            v12 = ptr;
            v14 = v11 + 2;
          }
          *(_QWORD *)v21 = v14;
          v12[v11 + 1] = 0;
          *(_WORD *)((char *)ptr + v13) = 8236;
        }
      }
    }
    sub_84F5B0(
      "missed ranges %s, fixing them\n",
      v18,
      (int)v19,
      (int)ptr,
      v21[0],
      v21[2],
      v22,
      (int)v23,
      v24[0],
      v24[2],
      v25[0],
      v26);
    v15 = (unsigned __int64 *)v23;
    v16 = (char *)v23 + 16 * *(_QWORD *)v24;
    if ( v16 != v23 )
    {
      do
      {
        sub_3C0380(v1, v15, 1, 0);
        v15 += 2;
      }
      while ( v16 != (char *)v15 );
    }
    if ( ptr )
    {
      *(_QWORD *)v21 = 0;
      qfree(ptr);
    }
  }
  if ( v23 )
  {
    *(_QWORD *)v24 = 0;
    qfree(v23);
  }
  return *(_QWORD *)v27 - __readfsqword(0x28u);
}
