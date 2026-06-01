__int64 __fastcall sub_4B19A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbp

  v1 = *(_QWORD *)(a1 + 168);
  result = *(unsigned int *)(v1 - 4);
  v3 = (unsigned int)(result - 1);
  v4 = *(_QWORD *)(v1 + 8 * v3);
  *(_DWORD *)(v1 - 4) = v3;
  if ( !*(_WORD *)(v4 + 4) )
  {
    result = *(unsigned int *)(v4 + 24);
    if ( (_DWORD)result )
    {
      v5 = v4;
      v6 = v4 + 8 * result;
      v7 = a1 + 80;
      while ( 1 )
      {
        result = sub_15D37A0(v7, *(_QWORD *)(v5 + 32));
        if ( (_BYTE)result )
          break;
        v5 += 8;
        if ( v5 == v6 )
          return result;
      }
      return sub_15D0A90(v7, v4, 1);
    }
  }
  return result;
}

