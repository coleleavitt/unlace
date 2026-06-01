void __fastcall sub_1B5B800(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 i; // rcx
  __int64 v6; // rdx
  void **v7; // rbp
  void **v8; // r13

  v2 = *(unsigned int *)(a1 + 8);
  if ( a2 != v2 )
  {
    v3 = 144 * a2;
    if ( a2 < v2 )
    {
      v7 = (void **)(*(_QWORD *)a1 + 144 * v2);
      v8 = (void **)(*(_QWORD *)a1 + v3);
      while ( v8 != v7 )
      {
        while ( 1 )
        {
          v7 -= 18;
          if ( *v7 == v7 + 2 )
            break;
          free(*v7);
          if ( v8 == v7 )
            goto LABEL_7;
        }
      }
    }
    else
    {
      if ( a2 > *(unsigned int *)(a1 + 12) )
      {
        sub_1B5B6F0(a1, a2);
        v2 = *(unsigned int *)(a1 + 8);
      }
      v4 = *(_QWORD *)a1 + 144 * v2;
      for ( i = v3 + *(_QWORD *)a1; i != v4; *(_DWORD *)(v4 - 132) = 8 )
      {
        v6 = v4 + 16;
        *(_DWORD *)(v4 + 8) = 0;
        v4 += 144;
        *(_QWORD *)(v4 - 144) = v6;
      }
    }
LABEL_7:
    *(_DWORD *)(a1 + 8) = a2;
  }
}
