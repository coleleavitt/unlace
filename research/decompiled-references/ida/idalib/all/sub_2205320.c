unsigned __int64 *__fastcall sub_2205320(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  char v5; // cl
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned int v8; // edi
  size_t v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r15
  int v12; // esi
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r14

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = (v3 - 1) & 0x3F;
  if ( (unsigned int)v3 > 0x40 )
    v4 = *(_QWORD *)(v4 + 8LL * ((unsigned int)(v3 - 1) >> 6));
  v6 = v4 & (1LL << v5);
  v7 = (unsigned __int64)(v3 + 63) >> 6;
  v8 = a2 >> 6;
  v9 = 8 * (a2 >> 6);
  v10 = v7 - (a2 >> 6);
  if ( (_DWORD)v7 != a2 >> 6 )
  {
    v11 = (unsigned int)(v7 - 1);
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) = (__int64)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v11) << (63 - v5)) >> (63 - v5);
    v12 = a2 & 0x3F;
    if ( v12 )
    {
      if ( v10 == 1 )
      {
        v16 = 0;
      }
      else
      {
        v13 = 0;
        v14 = v8;
        do
        {
          v15 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v14);
          v14 = ++v8;
          *(_QWORD *)(*(_QWORD *)a1 + v13) = (*(_QWORD *)(*(_QWORD *)a1 + 8LL * v8) << (64 - (unsigned __int8)v12))
                                           | (v15 >> v12);
          v13 += 8;
        }
        while ( v8 != (_DWORD)v11 );
        v16 = 8LL * (v10 - 1);
      }
      *(_QWORD *)(*(_QWORD *)a1 + v16) = *(__int64 *)(*(_QWORD *)a1 + 8 * v11) >> v12;
    }
    else
    {
      memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v9), 8 * v10);
    }
  }
  memset((void *)(*(_QWORD *)a1 + 8LL * v10), -(v6 != 0), v9);
  return sub_CF8100((unsigned __int64 *)a1);
}
