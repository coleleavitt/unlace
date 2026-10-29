char __fastcall sub_72C300(__int64 a1)
{
  int v1; // edx
  char result; // al
  unsigned int v3; // ecx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 712);
  result = 1;
  *(_QWORD *)(a1 + 600) = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)sub_72B100(a1, *(_QWORD *)(a1 + 704)) )
    {
      v3 = *(_DWORD *)(a1 + 712);
      if ( !v3 )
      {
        v6 = *(_QWORD *)(a1 + 600);
        if ( !v6 )
          return sub_836AD0(a1, *(_QWORD *)(a1 + 640), *(_QWORD *)(a1 + 592), v6, 1) == v6;
        v6 = 0;
        v4 = 0;
        goto LABEL_12;
      }
      if ( v3 <= 0x1FFFFFFF )
      {
        v4 = v3;
        v5 = *(_QWORD *)(a1 + 600);
        v6 = 8 * v4;
        if ( v5 < v4 )
        {
          v7 = *(_QWORD *)(a1 + 592);
          if ( *(_QWORD *)(a1 + 608) < v4 )
          {
            v8 = qvector_reserve(a1 + 592, v7, v4, 8);
            v5 = *(_QWORD *)(a1 + 600);
            *(_QWORD *)(a1 + 592) = v8;
            v7 = v8;
          }
          memset((void *)(v7 + 8 * v5), 0, 8 * (v4 - v5));
          *(_QWORD *)(a1 + 600) = v4;
          return sub_836AD0(a1, *(_QWORD *)(a1 + 640), *(_QWORD *)(a1 + 592), v6, 1) == v6;
        }
        if ( v4 == v5 )
          return sub_836AD0(a1, *(_QWORD *)(a1 + 640), *(_QWORD *)(a1 + 592), v6, 1) == v6;
LABEL_12:
        *(_QWORD *)(a1 + 600) = v4;
        return sub_836AD0(a1, *(_QWORD *)(a1 + 640), *(_QWORD *)(a1 + 592), v6, 1) == v6;
      }
      sub_35A790((char **)a1);
    }
    return 0;
  }
  return result;
}
