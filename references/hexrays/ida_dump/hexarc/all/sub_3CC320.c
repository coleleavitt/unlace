unsigned __int64 __fastcall sub_3CC320(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  int v8; // r12d
  __int64 *i; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 j; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v6 = (__int64 *)a1[252];
  v7 = a1[253];
  v19 = __readfsqword(0x28u);
  v8 = a3;
  for ( i = &v6[v7]; i != v6; *(_DWORD *)(v10 + 60) = v8 )
  {
    while ( 1 )
    {
      v10 = *v6;
      if ( (unsigned int)(*(_DWORD *)(*v6 + 60) - 1) <= 1 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v18 = 0;
        v17 = v11;
        if ( (unsigned __int8)sub_32AFF0(a2, &v17, a3, a4, a5, a6) )
          break;
      }
      if ( i == ++v6 )
        goto LABEL_7;
    }
    ++v6;
  }
LABEL_7:
  v12 = a1[261];
  for ( j = v12 + 8LL * a1[262]; j != v12; *(_DWORD *)(v14 + 60) = v8 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v12 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)v12 + 64LL);
        if ( v14 )
        {
          if ( (unsigned int)(*(_DWORD *)(v14 + 60) - 1) <= 1 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            v18 = 0;
            v17 = v15;
            if ( (unsigned __int8)sub_32AFF0(a2, &v17, a3, a4, a5, a6) )
              break;
          }
        }
      }
      v12 += 8;
      if ( j == v12 )
        return v19 - __readfsqword(0x28u);
    }
    v12 += 8;
  }
  return v19 - __readfsqword(0x28u);
}
