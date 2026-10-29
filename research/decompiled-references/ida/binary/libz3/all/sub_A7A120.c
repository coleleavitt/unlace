__int64 __fastcall sub_A7A120(__int64 a1, __int64 a2, char a3)
{
  unsigned int **v4; // rbx
  __int64 result; // rax
  unsigned int **v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx

  if ( a3
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 112LL) + 284LL)
    || (result = sub_1668690(a1 + 16, a2), (_BYTE)result) )
  {
    v4 = (unsigned int **)(a2 + 32);
    result = 8LL * *(unsigned int *)(a2 + 24);
    v6 = (unsigned int **)(a2 + 32 + result);
    if ( result )
    {
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
          result = *(_QWORD *)(v7 + 8656);
          if ( !result )
            break;
          v8 = **v4;
          if ( (unsigned int)v8 >= *(_DWORD *)(result - 4) || !*(_QWORD *)(result + 8 * v8) )
            break;
          if ( v6 == ++v4 )
            return result;
        }
        ++v4;
        result = sub_B6F780(v7);
      }
      while ( v6 != v4 );
    }
  }
  return result;
}

