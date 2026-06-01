_BYTE *__fastcall sub_E8A250(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  _BYTE *result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rdi
  _WORD *v16; // rdx

  v3 = *a1;
  v4 = *(_DWORD **)(v3 + 32);
  result = (_BYTE *)(*(_QWORD *)(v3 + 24) - (_QWORD)v4);
  if ( (unsigned __int64)result > 3 )
  {
    *v4 = 1718379891;
    *(_QWORD *)(v3 + 32) += 4LL;
  }
  else
  {
    result = (_BYTE *)sub_22581D0(v3, "self", 4);
  }
  if ( *(_BYTE *)(a2 + 25) )
  {
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
    {
      v7 = *a1;
      v8 = *(_BYTE **)(*a1 + 32LL);
      if ( *(_BYTE **)(*a1 + 24LL) == v8 )
      {
        sub_22581D0(v7, "(", 1);
      }
      else
      {
        *v8 = 40;
        ++*(_QWORD *)(v7 + 32);
      }
      sub_EE3EC0(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      v9 = *a1;
      result = *(_BYTE **)(*a1 + 32LL);
      if ( result == *(_BYTE **)(*a1 + 24LL) )
      {
        return (_BYTE *)sub_22581D0(v9, ")", 1);
      }
      else
      {
        *result = 41;
        ++*(_QWORD *)(v9 + 32);
      }
    }
  }
  else
  {
    v10 = *a1;
    v11 = *(_BYTE **)(*a1 + 32LL);
    if ( *(_BYTE **)(*a1 + 24LL) == v11 )
    {
      sub_22581D0(v10, "(", 1);
    }
    else
    {
      *v11 = 40;
      ++*(_QWORD *)(v10 + 32);
    }
    v12 = *a1;
    v13 = a2 + 32 + 8LL * *(unsigned int *)(a2 + 28);
    if ( a2 + 32 != v13 )
    {
      v14 = (__int64 *)(a2 + 40);
      sub_EE3EC0(*(_QWORD *)(a2 + 32), *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      if ( v13 != a2 + 40 )
      {
        do
        {
          v16 = *(_WORD **)(v12 + 32);
          if ( *(_QWORD *)(v12 + 24) - (_QWORD)v16 > 1u )
          {
            *v16 = 8236;
            *(_QWORD *)(v12 + 32) += 2LL;
          }
          else
          {
            sub_22581D0(v12, ", ", 2);
          }
          v15 = *v14++;
          sub_EE3EC0(v15, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
        }
        while ( (__int64 *)v13 != v14 );
      }
      v12 = *a1;
    }
    result = *(_BYTE **)(v12 + 32);
    if ( *(_BYTE **)(v12 + 24) == result )
    {
      return (_BYTE *)sub_22581D0(v12, ")", 1);
    }
    else
    {
      *result = 41;
      ++*(_QWORD *)(v12 + 32);
    }
  }
  return result;
}

