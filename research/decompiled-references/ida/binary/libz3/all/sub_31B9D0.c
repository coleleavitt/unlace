__int64 __fastcall sub_31B9D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp

  result = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    v3 = *(unsigned int *)(v2 - 4);
    result = 7 * v3;
    v4 = v2 + 56 * v3;
    if ( v4 != v2 )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v2 + 48);
        if ( !(_DWORD)result )
          return result;
        if ( (_DWORD)result != -1 )
        {
          if ( (_DWORD)result == 1 )
          {
            v5 = sub_2FF8B0(a1);
            result = sub_E5EBF0(v5, *(_QWORD *)v2);
          }
          goto LABEL_6;
        }
        v6 = sub_2FF8B0(a1);
        v7 = *(_QWORD *)(a1 + 160);
        v8 = v6;
        v9 = sub_15E1A70(v7);
        v10 = v9;
        if ( !v9 )
          break;
        ++*(_DWORD *)(v9 + 8);
        result = sub_E5EBF0(v8, v9);
        if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        {
          v2 += 56;
          result = sub_15D7BC0(v7, v10);
          if ( v4 == v2 )
            return result;
        }
        else
        {
LABEL_6:
          v2 += 56;
          if ( v4 == v2 )
            return result;
        }
      }
      result = sub_E5EBF0(v8, 0);
      goto LABEL_6;
    }
  }
  return result;
}

