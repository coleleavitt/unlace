unsigned __int64 __fastcall sub_6BA340(__int64 *a1, const char *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  const char *v8; // rsi
  const char *v9; // rsi
  unsigned __int64 v10; // r14
  void *v11; // rax
  _QWORD *v12; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  void *v16; // r15
  unsigned __int64 v17; // rax
  const char *v18; // rdx
  void *v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 32) & 0x3F) == 0x2D )
  {
    if ( !a2 || !*a2 )
    {
      if ( !under_debugger )
        interr(2846);
      BUG();
    }
    if ( sub_6B9860(a1, a2, 0, 0) == -1 )
    {
      netnode_check(&v20, a2, 0, 0);
      if ( v20 == -1
        || (v15 = *a1,
            *(_OWORD *)ptr = 0,
            sub_630CA0(v15, 26, ptr, 0x10u, v14),
            v16 = ptr[0],
            v19 = ptr[1],
            v17 = sub_3BDE50(a1, v20),
            v17 < (unsigned __int64)v16)
        || v17 >= (unsigned __int64)v19 )
      {
        sub_6B9860(a1, a2, 1, 1u);
      }
      else
      {
        sub_6B9740((__int64 *)ptr, a2);
        v18 = haystack;
        if ( ptr[1] )
          v18 = (const char *)ptr[0];
        sub_7BF170(&v20, *a1, v18, 0);
        sub_6B9860(a1, a2, 0, 0);
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
        }
      }
    }
    v5 = *(_QWORD *)(a3 + 40);
    v6 = *(_QWORD *)(a3 + 48);
    memset(ptr, 0, sizeof(ptr));
    v7 = v5 + 32 * v6;
    if ( v7 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v8 = haystack;
          if ( *(_QWORD *)(v5 + 8) )
            v8 = *(const char **)v5;
          if ( sub_6B9860(a1, v8, 0, 0) == -1 )
            break;
          v5 += 32;
          if ( v7 == v5 )
            goto LABEL_16;
        }
        v9 = haystack;
        if ( *(_QWORD *)(v5 + 8) )
          v9 = *(const char **)v5;
        v10 = sub_6B9860(a1, v9, 1, 1u);
        v11 = ptr[1];
        v12 = ptr[0];
        if ( ptr[2] < (char *)ptr[1] + 1 )
        {
          ptr[0] = (void *)qvector_reserve(ptr, ptr[0], (char *)ptr[1] + 1, 8);
          v12 = ptr[0];
          v11 = ptr[1];
        }
        v5 += 32;
        v12[(_QWORD)v11] = v10;
        ++ptr[1];
      }
      while ( v7 != v5 );
LABEL_16:
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}
