unsigned __int64 __fastcall sub_3C9920(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *i; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 j; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v3 = (__int64 *)a1[100];
  v4 = a1[101];
  v16 = __readfsqword(0x28u);
  for ( i = &v3[v4]; i != v3; *(_DWORD *)(v7 + 60) = a3 )
  {
    while ( 1 )
    {
      v7 = *v3;
      if ( (unsigned int)(*(_DWORD *)(*v3 + 60) - 1) <= 1 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v15 = 0;
        v14 = v8;
        if ( (unsigned __int8)sub_32F1B0(a2, &v14) )
          break;
      }
      if ( i == ++v3 )
        goto LABEL_7;
    }
    ++v3;
  }
LABEL_7:
  v9 = a1[109];
  for ( j = v9 + 8LL * a1[110]; j != v9; *(_DWORD *)(v11 + 60) = a3 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v9 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 64LL);
        if ( v11 )
        {
          if ( (unsigned int)(*(_DWORD *)(v11 + 60) - 1) <= 1 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            v15 = 0;
            v14 = v12;
            if ( (unsigned __int8)sub_32F1B0(a2, &v14) )
              break;
          }
        }
      }
      v9 += 8;
      if ( j == v9 )
        return v16 - __readfsqword(0x28u);
    }
    v9 += 8;
  }
  return v16 - __readfsqword(0x28u);
}
