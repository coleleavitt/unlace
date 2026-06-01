__int64 __fastcall sub_4B1910(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp

  result = *(unsigned int *)(a1 + 168);
  v2 = (unsigned int)(result - 1);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v2);
  *(_DWORD *)(a1 + 168) = v2;
  if ( !*(_WORD *)(v3 + 4) )
  {
    result = *(unsigned int *)(v3 + 24);
    if ( (_DWORD)result )
    {
      v4 = v3;
      v5 = v3 + 8 * result;
      v6 = a1 + 80;
      while ( 1 )
      {
        result = sub_15D37A0(v6, *(_QWORD *)(v4 + 32));
        if ( (_BYTE)result )
          break;
        v4 += 8;
        if ( v4 == v5 )
          return result;
      }
      return sub_15D0A90(v6, v3, 1);
    }
  }
  return result;
}

