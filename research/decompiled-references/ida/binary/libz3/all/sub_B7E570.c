void __fastcall sub_B7E570(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned int *i; // [rsp+8h] [rbp-40h]

  v1 = *(unsigned int **)(a1 + 1360);
  if ( v1 )
  {
    v2 = 4LL * *(v1 - 1);
    for ( i = &v1[v2]; i != v1; v1 += 4 )
    {
      v3 = *(_QWORD *)(a1 + 16);
      v4 = *v1;
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8840) + 8 * v4);
      if ( !(unsigned int)sub_8E7030(v3)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 7488) + 56LL))(
             *(_QWORD *)(v3 + 7488),
             v5) )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( ((*(_BYTE *)(*(_QWORD *)(v6 + 8848) + (unsigned int)(2 * v4)) + 1) & 0xFD) == 0 )
          sub_B7E3B0(a1, *(_QWORD *)(*(_QWORD *)(v6 + 8840) + 8 * v4));
      }
    }
  }
}

