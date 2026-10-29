void __fastcall sub_56CDC0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int32 v5; // eax
  __int32 v6; // eax
  __int64 v7; // rax
  __m128i *v8; // rbx
  volatile signed __int32 **v9; // rbx
  volatile signed __int32 **v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  void *v15; // rdi
  unsigned int v16; // r14d
  volatile signed __int32 *v17; // [rsp+8h] [rbp-50h]

  while ( 1 )
  {
    v5 = a1[13].m128i_i32[1];
    if ( !v5 )
      __assert_fail("self->ref_count != 0", "lib/src/./stack.c", 0x60u, "stack_node_release");
    v6 = v5 - 1;
    a1[13].m128i_i32[1] = v6;
    if ( v6 )
      break;
    v7 = a1[13].m128i_u16[0];
    v8 = nullptr;
    if ( (_WORD)v7 )
    {
      if ( (unsigned __int16)v7 != 1 )
      {
        v9 = (volatile signed __int32 **)a1 + 3 * v7;
        v10 = (volatile signed __int32 **)a1
            + 3 * ((unsigned __int16)v7 - 1 - (unsigned __int64)((unsigned int)(unsigned __int16)v7 - 2));
        do
        {
          v11 = (__int64)*(v9 - 1);
          if ( *v9 )
            sub_56C9A0(a3, *v9);
          v9 -= 3;
          sub_56CDC0(v11, a2, a3);
        }
        while ( v9 != v10 );
      }
      v17 = (volatile signed __int32 *)_mm_loadu_si128(a1 + 1).m128i_i64[1];
      if ( a1[1].m128i_i64[1] )
        sub_56C9A0(a3, v17);
      v8 = (__m128i *)a1[1].m128i_i64[0];
    }
    v12 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)v12 <= 0x31 )
    {
      v13 = *(_DWORD *)(a2 + 12);
      v14 = v12 + 1;
      v15 = *(void **)a2;
      if ( v13 < (int)v12 + 1 )
      {
        v16 = 2 * v13;
        if ( 2 * v13 < v14 )
          v16 = v12 + 1;
        if ( v16 < 8 )
          v16 = 8;
        if ( v13 < v16 )
        {
          if ( v15 )
            v15 = off_8C52A8(v15, 8LL * v16);
          else
            v15 = off_8C52B8(8LL * v16);
          v12 = *(unsigned int *)(a2 + 8);
          *(_QWORD *)a2 = v15;
          *(_DWORD *)(a2 + 12) = v16;
          v14 = v12 + 1;
        }
      }
      *(_DWORD *)(a2 + 8) = v14;
      *((_QWORD *)v15 + v12) = a1;
      if ( !v8 )
        return;
    }
    else
    {
      off_8C52A0(a1);
      if ( !v8 )
        return;
    }
    a1 = v8;
  }
}
