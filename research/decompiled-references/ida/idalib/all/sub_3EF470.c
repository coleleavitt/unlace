__int64 __fastcall sub_3EF470(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r12d
  void *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rsi
  const char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( !a3 )
  {
    v4 = a1[3];
    v6 = *(_QWORD *)(v4 + 1672);
    v7 = v6 + 2328;
    sub_7BF040(v6 + 2328, v4, "$ imports", 0);
    sub_624200(a1[3]);
    v8 = a1[3];
    ptr = (void *)*(unsigned int *)(v6 + 2392);
    sub_7BE7C0(v6 + 2328, v8, -1, &ptr, 8, 65);
    if ( *(_DWORD *)(v6 + 2392) )
    {
      v9 = 0;
      do
      {
        v11 = -1;
        if ( (unsigned __int8)sub_7BEFD0(v7, a1[3], &ptr, (int)v9, 65) )
          v11 = (__int64)ptr;
        v12 = a1[3];
        ptr = (void *)v11;
        sub_7BE7C0(v7, v12, (int)v9, &ptr, 8, 65);
        v13 = a1[3];
        ptr = nullptr;
        v19 = 0;
        if ( sub_7BEA80(v7, v13, &ptr, (int)v9, 83) > 0 )
        {
          v14 = haystack;
          if ( (_QWORD)v19 )
            v14 = (const char *)ptr;
          sub_7BE7C0(v7, a1[3], (int)v9, v14, 0, 83);
        }
        v15 = a1[9];
        v16 = a1[8];
        if ( a1[10] < (unsigned __int64)(v15 + 1) )
        {
          v17 = qvector_reserve(a1 + 8, v16, v15 + 1, 8);
          a1[8] = v17;
          v16 = v17;
          v15 = a1[9];
        }
        *(_QWORD *)(v16 + 8 * v15) = v11;
        v10 = ptr;
        ++a1[9];
        if ( v10 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v10);
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(v6 + 2392) );
    }
  }
  return 1;
}
