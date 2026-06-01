__int64 __fastcall sub_56E170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edx
  char *v10; // rdi
  unsigned int i; // ebp
  volatile signed __int32 **v12; // rbx
  __int64 v13; // r15
  volatile signed __int32 *v14; // r14
  int v15; // eax
  int v16; // edx
  char *v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 212);
    if ( !v8 )
      __assert_fail("self->ref_count > 0", "lib/src/./stack.c", 0x55u, "stack_node_retain");
    *(_DWORD *)(v7 + 212) = v8 + 1;
    if ( v8 == -1 )
      sub_55D220(a1, a2, v7, a4, a5, a6);
  }
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(char **)a1;
  for ( i = 0; i < v9; ++i )
  {
    v12 = (volatile signed __int32 **)&v10[48 * i];
    if ( *v12 )
    {
      v13 = *(_QWORD *)(a1 + 72);
      if ( v12[3] )
        sub_56C9A0(*(_QWORD *)(a1 + 72), v12[3]);
      if ( v12[4] )
        sub_56C9A0(v13, v12[4]);
      v14 = v12[1];
      if ( v14 )
      {
        if ( *(_QWORD *)v14 )
        {
          off_8C52A0(*(void **)v14);
          *(_QWORD *)v14 = 0;
          *((_QWORD *)v14 + 1) = 0;
          v14 = v12[1];
        }
        off_8C52A0((void *)v14);
      }
      sub_56CDC0((__m128i *)*v12, a1 + 48, v13);
      v9 = *(_DWORD *)(a1 + 8);
      v10 = *(char **)a1;
    }
  }
  v15 = *(_DWORD *)(a1 + 12);
  v16 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v15 )
  {
    if ( v10 )
      v17 = (char *)off_8C52A8(v10, 0x180u);
    else
      v17 = (char *)off_8C52B8(0x180u);
    v18 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v17;
    *(_DWORD *)(a1 + 12) = 8;
    v16 = v18 + 1;
    v10 = &v17[48 * v18];
  }
  result = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 8) = v16;
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *(_QWORD *)v10 = result;
  *((_OWORD *)v10 + 2) = 0;
  return result;
}
