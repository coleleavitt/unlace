__int64 __fastcall sub_F99C00(__int64 *a1, unsigned int a2, __int64 *a3)
{
  int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 i; // rcx
  char *v8; // rdi
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+8h] [rbp-30h]
  int v17; // [rsp+8h] [rbp-30h]
  char *endptr[4]; // [rsp+18h] [rbp-20h] BYREF

  v4 = *((_DWORD *)a1 + 42);
  if ( a2 < v4 + 1499 )
  {
    v5 = *a1;
    if ( a2 > 0x5DA )
    {
      v5 = a1[7];
      a2 -= 1499;
    }
  }
  else
  {
    v5 = a1[14];
    a2 = a2 - 1499 - v4;
  }
  v6 = *(_QWORD *)(v5 + 16);
  for ( i = a2; a2 >= v6; i = a2 )
  {
    v5 += 40;
    a2 -= v6;
    v6 = *(_QWORD *)(v5 + 16);
  }
  v8 = strchr((const char *)(**(_QWORD **)v5 + *(unsigned int *)(*(_QWORD *)(v5 + 8) + 20 * i + 8)), 67);
  result = 0;
  if ( v8 )
  {
    v10 = strtol(v8 + 2, endptr, 10);
    v11 = *((unsigned int *)a3 + 2);
    if ( v11 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      v17 = v10;
      sub_22134E0(a3, a3 + 2, v11 + 1, 4);
      v11 = *((unsigned int *)a3 + 2);
      v10 = v17;
    }
    *(_DWORD *)(*a3 + 4 * v11) = v10;
    v12 = endptr[0];
    ++*((_DWORD *)a3 + 2);
    for ( ; *v12 == 44; ++*((_DWORD *)a3 + 2) )
    {
      v13 = strtol(v12 + 1, endptr, 10);
      v14 = *((unsigned int *)a3 + 2);
      if ( v14 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
      {
        v16 = v13;
        sub_22134E0(a3, a3 + 2, v14 + 1, 4);
        v14 = *((unsigned int *)a3 + 2);
        v15 = *a3;
        v13 = v16;
      }
      else
      {
        v15 = *a3;
      }
      *(_DWORD *)(v15 + 4 * v14) = v13;
      v12 = endptr[0];
    }
    return 1;
  }
  return result;
}

