__int64 __fastcall sub_1DBAC30(_BYTE *a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  int v7; // esi
  int v8; // r9d
  int v9; // r10d
  unsigned int i; // edx
  __int64 v11; // rcx
  unsigned int v12; // edx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 11312LL) + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 11320LL) << 6) - 64;
  if ( !a1[9] )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      v6 = *(_DWORD *)(v2 + 12368);
      v7 = *(_DWORD *)v3;
      if ( v6 )
      {
        v8 = v6 - 1;
        v9 = 1;
        for ( i = (v6 - 1)
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)(37 * v7)
                    | ((unsigned __int64)(((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4)) << 32))) >> 31)
                 ^ (756364221 * v7)); ; i = v8 & v12 )
        {
          v11 = *(_QWORD *)(v2 + 12352) + 16LL * i;
          if ( v5 == *(_QWORD *)v11 && v7 == *(_DWORD *)(v11 + 8) )
            break;
          if ( *(_QWORD *)v11 == -4096 && *(_DWORD *)(v11 + 8) == -1 )
            goto LABEL_10;
          v12 = v9 + i;
          ++v9;
        }
        *(_QWORD *)v11 = -8192;
        *(_DWORD *)(v11 + 8) = -2;
        --*(_DWORD *)(v2 + 12360);
        ++*(_DWORD *)(v2 + 12364);
      }
LABEL_10:
      v2 = *(_QWORD *)a1;
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 11312LL)
         + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 11320LL) << 6)
         - 64;
    }
  }
  v13 = *(_QWORD **)(v2 + 12608);
  v14 = *(_QWORD **)(v2 + 12616);
  if ( v13 != v14 )
  {
    do
    {
      if ( *v13 )
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*v13 + 40LL))(*v13, v2, v3);
      ++v13;
    }
    while ( v14 != v13 );
    v2 = *(_QWORD *)a1;
  }
  result = sub_1DBAAE0(v2);
  a1[8] = 1;
  return result;
}
