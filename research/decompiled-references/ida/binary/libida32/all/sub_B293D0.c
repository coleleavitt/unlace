__int64 __fastcall sub_B293D0(const void *a1, size_t a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = a4 + 16;
  v4 = *(_DWORD *)(a3 + 20) & 0x1FFFFFFF;
  if ( !v4 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a3 + 8 * v7 + 24);
    v12 = *(_QWORD *)(v9 + 40);
    if ( (v12 & 7) == 0 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 )
      {
        v14 = *(_DWORD **)(v13 + 16);
        if ( *v14 == a2 )
        {
          v17 = *(_QWORD *)(a3 + 8 * v7 + 24);
          if ( !a2 )
            break;
          v8 = memcmp(v14 + 4, a1, a2);
          v9 = v17;
          if ( !v8 )
            break;
        }
      }
    }
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x44 )
    {
      v10 = *(unsigned int *)(a4 + 8);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        v18 = v9;
        sub_22134E0(a4, v19, v10 + 1, 4);
        v10 = *(unsigned int *)(a4 + 8);
        v9 = v18;
      }
      *(_DWORD *)(*(_QWORD *)a4 + 4 * v10) = v7;
      ++*(_DWORD *)(a4 + 8);
      result = sub_B293D0(a1, a2, *(_QWORD *)(v9 + 56), a4);
      if ( (_BYTE)result )
        return result;
      --*(_DWORD *)(a4 + 8);
    }
    if ( v4 == (_DWORD)++v7 )
      return 0;
  }
  v15 = *(unsigned int *)(a4 + 8);
  if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    sub_22134E0(a4, a4 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a4 + 4 * v15) = v7;
  result = 1;
  ++*(_DWORD *)(a4 + 8);
  return result;
}

