__int64 __fastcall sub_97DE10(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 *v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax

  v2 = *(unsigned __int8 *)(a2 + 3) + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
  v3 = (__int64 *)(a2 + v2);
  v4 = 8LL * *(unsigned int *)(a2 + 16);
  v5 = (__int64 *)(a2 + v2 + v4);
  if ( v4 )
  {
    v7 = 0;
    do
    {
      v9 = *v3;
      if ( (*(_BYTE *)(*v3 + 1) & 6) != 0 )
        v8 = (unsigned int)((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8)
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                     + 8LL)
                                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                                             + 16LL)
                          - 25 < 2)
           + 13;
      else
        v8 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v9 + 8));
      ++v3;
      v7 += (sub_A24BE0(v8) + 7) & 0xFFFFFFF8;
    }
    while ( v5 != v3 );
  }
  else
  {
    return 0;
  }
  return v7;
}

