unsigned __int64 __fastcall sub_6999E0(__int64 *a1, const char *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  const char *v8; // rsi
  const char *v9; // rsi
  int v10; // r14d
  __int64 v11; // rax
  _DWORD *v12; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned int v16; // r15d
  unsigned int v17; // eax
  const char *v18; // rdx
  unsigned int v19; // [rsp+Ch] [rbp-6Ch]
  int v20; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 28) & 0x3F) == 0x2D )
  {
    if ( !a2 || !*a2 )
    {
      if ( !under_debugger )
        interr(2846);
      BUG();
    }
    if ( (unsigned int)sub_698F20(a1, a2, 0, 0) == -1 )
    {
      netnode_check(&v20, a2, 0, 0);
      if ( v20 == -1
        || (v15 = *a1,
            ptr = nullptr,
            sub_6141A0(v15, 26, &ptr, 8u, v14),
            v16 = (unsigned int)ptr,
            v19 = HIDWORD(ptr),
            v17 = sub_3B9110(a1, v20),
            v17 < v16)
        || v17 >= v19 )
      {
        sub_698F20(a1, a2, 1, 1u);
      }
      else
      {
        sub_698E00((__int64 *)&ptr, a2);
        v18 = haystack;
        if ( (_QWORD)v22 )
          v18 = (const char *)ptr;
        sub_79BD70(&v20, *a1, v18, 0);
        sub_698F20(a1, a2, 0, 0);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
      }
    }
    v5 = *(_QWORD *)(a3 + 32);
    v6 = *(_QWORD *)(a3 + 40);
    ptr = nullptr;
    v22 = 0;
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
          if ( (unsigned int)sub_698F20(a1, v8, 0, 0) == -1 )
            break;
          v5 += 32;
          if ( v7 == v5 )
            goto LABEL_16;
        }
        v9 = haystack;
        if ( *(_QWORD *)(v5 + 8) )
          v9 = *(const char **)v5;
        v10 = sub_698F20(a1, v9, 1, 1u);
        v11 = v22;
        v12 = ptr;
        if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v22 + 1, 4);
          v12 = ptr;
          v11 = v22;
        }
        v5 += 32;
        v12[v11] = v10;
        *(_QWORD *)&v22 = v22 + 1;
      }
      while ( v7 != v5 );
LABEL_16:
      if ( ptr )
      {
        *(_QWORD *)&v22 = 0;
        qfree(ptr);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

