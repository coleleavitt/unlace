__int64 __fastcall sub_E8D220(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  _BYTE *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned int *v11; // rsi
  size_t v12; // r13
  const void *v13; // rsi
  __int64 i; // rbp
  __int64 v15; // r13
  __int64 v16; // rdx
  _BYTE *v17; // rax
  _BYTE *v18; // rdi
  unsigned int *v19; // rsi
  size_t v20; // r15
  const void *v21; // rsi
  _WORD *v22; // rdx

  sub_E8CED0(*a1, *(_BYTE *)(a2 + 8));
  v4 = *a1;
  v5 = *(_BYTE **)(*a1 + 32);
  if ( *(_BYTE **)(*a1 + 24) == v5 )
  {
    sub_22581D0(v4, "(", 1);
  }
  else
  {
    *v5 = 40;
    ++*(_QWORD *)(v4 + 32);
  }
  v6 = *a1;
  result = *(_QWORD *)(*a1 + 24);
  v8 = *(_BYTE **)(*a1 + 32);
  v9 = a2 + 32 + 16LL * *(unsigned int *)(a2 + 24);
  if ( a2 + 32 != v9 )
  {
    v10 = *(_QWORD *)(a2 + 40);
    if ( v10 )
    {
      v11 = *(unsigned int **)(v10 + 16);
      v12 = *v11;
      v13 = v11 + 4;
      if ( v12 > result - (__int64)v8 )
      {
        sub_22581D0(*a1, v13, v12);
      }
      else if ( v12 )
      {
        memcpy(v8, v13, v12);
        *(_QWORD *)(v6 + 32) += v12;
      }
    }
    else if ( (_BYTE *)result == v8 )
    {
      sub_22581D0(*a1, "*", 1);
    }
    else
    {
      *v8 = 42;
      ++*(_QWORD *)(v6 + 32);
    }
    for ( i = a2 + 48; v9 != i; i += 16 )
    {
      v22 = *(_WORD **)(v6 + 32);
      if ( *(_QWORD *)(v6 + 24) - (_QWORD)v22 > 1u )
      {
        *v22 = 8236;
        *(_QWORD *)(v6 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(v6, ", ", 2);
      }
      v15 = *a1;
      v16 = *(_QWORD *)(i + 8);
      v17 = *(_BYTE **)(*a1 + 24);
      v18 = *(_BYTE **)(*a1 + 32);
      if ( v16 )
      {
        v19 = *(unsigned int **)(v16 + 16);
        v20 = *v19;
        v21 = v19 + 4;
        if ( v20 > v17 - v18 )
        {
          sub_22581D0(*a1, v21, v20);
        }
        else if ( v20 )
        {
          memcpy(v18, v21, v20);
          *(_QWORD *)(v15 + 32) += v20;
        }
      }
      else if ( v17 == v18 )
      {
        sub_22581D0(*a1, "*", 1);
      }
      else
      {
        *v18 = 42;
        ++*(_QWORD *)(v15 + 32);
      }
    }
    v6 = *a1;
    result = *(_QWORD *)(*a1 + 24);
    v8 = *(_BYTE **)(*a1 + 32);
  }
  if ( v8 == (_BYTE *)result )
    return sub_22581D0(v6, ")", 1);
  *v8 = 41;
  ++*(_QWORD *)(v6 + 32);
  return result;
}

